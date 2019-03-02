#include "stdafx.h"

#include "assets.h"

#include "app.h"
#include "win.h"
#include "game.h"
#include <stb/stb_image.h>

#include "reflection_gen.h"


namespace Paths {
   static const std::filesystem::path assets = "assets.bin";
}



void assets_textureMapSave() {   
   auto fpath = AppConfig.assetPath / Paths::assets;

   auto writer = scfWriterCreate();
   uint64_t sz = 0;

   // kill off deleted textures
   auto tmapCopy = TextureMap;
   std::vector<Symbol*> toDelete;
   for (auto&& kvp : tmapCopy.map) {
      if (kvp.second.markForDelete) {
         toDelete.push_back(kvp.first);
      }
   }
   for (auto&& td : toDelete) {
      tmapCopy.map.erase(td);
   }

   serialize(writer, &tmapCopy);
   auto output = scfWriteToBuffer(writer, &sz);

   writeBinaryFile(fpath.string().c_str(), (byte*)output, sz);
   scfWriterDestroy(writer);
   delete[] output;
}


void assets_textureMapReload() {
   auto fpath = Paths::assets;
   if (!std::filesystem::exists(fpath)) {
      fpath = AppConfig.assetPath / fpath;
   }

   //assert(std::filesystem::exists(fpath) && "Assets file not found");

   if (auto content = fileReadBinary(fpath.string().c_str(), nullptr)) {
      auto reader = scfView(content);
      _TextureMap reloaded;
      deserialize(reader, &reloaded);
      delete[] content;

      for (auto&&kvp : reloaded.map) {
         auto result = TextureMap.map.insert({ kvp.first, kvp.second });
         if (!result.second) {
            auto& existing = TextureMap.map[kvp.first];
            existing.markForDelete = false;
            existing.filepath = kvp.second.filepath;
            existing.flags = kvp.second.flags;
            render::textureRefresh(existing);
         }
      }
   }
}

void assets_textureMapRefreshAll() {
   for (auto&& kvp : TextureMap.map) {
      auto& t = kvp.second;
      render::textureRefresh(t);
   }
}

void assets_textureMapLoad() {
   auto fpath = Paths::assets;
   if (!std::filesystem::exists(fpath)) {
      fpath = AppConfig.assetPath / fpath;
   }

   //assert(std::filesystem::exists(fpath) && "Assets file not found");

   if (auto content = fileReadBinary(fpath.string().c_str(), nullptr)) {
      auto reader = scfView(content);
      deserialize<_TextureMap>(reader, &TextureMap);
      delete[] content;

      for (auto&& kvp : TextureMap.map) {
         auto& t = kvp.second;
         t.id = intern(kvp.first);
         if (t.storedImageData) {
            t.handle = render::buildTextureHandle(t.sz, t.flags, (ColorRGBA const*)t.storedImageData.data);
         }
         else {
            render::textureRefresh(t);
         }
      }
   }

}



static int _reloadShader(GraphicObjects &gfx) {

   auto vertex = fileReadString("assets/vertex.glsl");
   auto fragment = fileReadString("assets/fragment.glsl");

   auto s = render::shaderBuild(vertex.c_str(), fragment.c_str());

   if (s == 0) {
      return 0;
   }

   if (gfx.shader != 0) {
      render::shaderDestroy(gfx.shader);
   }

   gfx.shader = s;
   return 1;
}


static Texture _textureBuildFromFile(const char* path, TextureFlag flags = TextureFlag_Defaults) {
   uint64_t sz = 0;
   int32_t x, y, comp;
   x = y = comp = 0;
   auto mem = fileReadBinary(path, &sz);
   auto png = stbi_load_from_memory(mem, (int32_t)sz, &x, &y, &comp, 4);
   auto out = render::textureBuild({ x, y }, flags, (ColorRGBA*)png);

   free(mem);
   free(png);
   return out;
}

void GraphicObjects::build() {
   assets_textureMapLoad();

   textures[GameTextures_Dude] = _textureBuildFromFile("assets/dude2.png");
   textures[GameTextures_DudeNormals] = _textureBuildFromFile("assets/dudenormal2.png", TextureFlag_ClampedNearest | TextureFlag_Color_RGBA8);
   textures[GameTextures_Target] = _textureBuildFromFile("assets/target.png");
   textures[GameTextures_Light] = _textureBuildFromFile("assets/light3.png");
   textures[GameTextures_Circle] = _textureBuildFromFile("assets/circle.png", TextureFlag_ClampedLinear | TextureFlag_Color_SRGBA);
   textures[GameTextures_ShittySword] = _textureBuildFromFile("assets/sword.png");
   textures[GameTextures_SwordNormals] = _textureBuildFromFile("assets/swordnormal.png", TextureFlag_ClampedNearest | TextureFlag_Color_RGBA8);
   textures[GameTextures_GemEmpty] = _textureBuildFromFile("assets/gemempty.png");
   textures[GameTextures_GemFilled] = _textureBuildFromFile("assets/gemfilled.png");
   textures[GameTextures_HeartEmpty] = _textureBuildFromFile("assets/heartempty.png");
   textures[GameTextures_HeartFilled] = _textureBuildFromFile("assets/heartfilled.png");
   textures[GameTextures_Tile] = _textureBuildFromFile("assets/toldold.png", TextureFlag_RepeatedNearest | TextureFlag_Color_SRGBA);
   textures[GameTextures_TileNormals] = _textureBuildFromFile("assets/tilenormal.png", TextureFlag_RepeatedNearest | TextureFlag_Color_RGBA8 | TextureFlag_DisablePremultiply);

   assert(_reloadShader(*this));

   Vertex vbo[] = {
      { { -0.5f, -0.5f },{ 0.0f, 0.0f } },
      { {  0.5f, -0.5f },{ 1.0f, 0.0f } },
      { { -0.5f,  0.5f },{ 0.0f, 1.0f } },

      { {  0.5f, -0.5f },{ 1.0f, 0.0f } },
      { {  0.5f,  0.5f },{ 1.0f, 1.0f } },
      { { -0.5f,  0.5f },{ 0.0f, 1.0f } },
   };

   Vertex vboUncentered[] = {
      { { 0.0f, 0.0f },{ 0.0f, 0.0f } },
      { { 1.0f, 0.0f },{ 1.0f, 0.0f } },
      { { 0.0f, 1.0f },{ 0.0f, 1.0f } },

      { { 1.0f, 0.0f },{ 1.0f, 0.0f } },
      { { 1.0f, 1.0f },{ 1.0f, 1.0f } },
      { { 0.0f, 1.0f },{ 0.0f, 1.0f } },
   };

   mesh = render::meshBuild(vbo, 6);
   meshUncentered = render::meshBuild(vboUncentered, 6);

   auto& res = Const.resolution;
   unlitScene = render::fboBuild(res, {
      render::textureBuild(res, TextureFlag_FBODefaults),   // diffuse
      render::textureBuild(res, TextureFlag_FBODefaults)    // normals
      });
   lightLayer = render::fboBuild(res);
   litScene = render::fboBuild(res);
   UI = render::fboBuild(res);
}

bool GraphicObjects::reloadShaders() {
   return _reloadShader(*this);
}