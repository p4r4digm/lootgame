#include "win.h"
#include <nowide/convert.hpp>
#include <Windows.h>

std::string openFile(OpenFileConfig const& config) {

   OPENFILENAME ofn = { 0 };

   char out[MAX_PATH] = { 0 };

   char* filter = nullptr;
   if (!config.filterNames.empty()) {

      auto nSize = config.filterNames.size();
      auto eSize = config.filterExtensions.size();
      auto fullSize = nSize + eSize + 3;

      filter = new char[fullSize];
      memset(filter, 0, fullSize);

      memcpy(filter, config.filterNames.c_str(), nSize);
      memcpy(filter + nSize + 1, config.filterExtensions.c_str(), eSize);
   }

   ofn.lStructSize = sizeof(OPENFILENAME);
   ofn.lpstrFilter = filter;
   ofn.nFilterIndex = config.filterIndex;
   ofn.lpstrFile = out;
   ofn.nMaxFile = MAX_PATH;


   if (!config.initialDir.empty()) {
      ofn.lpstrInitialDir = config.initialDir.c_str();
   }

   if (!config.title.empty()) {
      ofn.lpstrTitle = config.title.c_str();
   }

   ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

   GetOpenFileName(&ofn);

   return out;
}

std::string cwd() {
   char out[MAX_PATH] = { 0 };
   GetCurrentDirectory(MAX_PATH, out);
   return out;
}

std::string pathGetFilename(StringView path) {
   std::string pathStr = path;
   auto len = pathStr.size();

   size_t begin = 0;
   
   auto slash = pathStr.find_last_of("\\/");
   if (slash != std::string::npos) {
      begin = slash + 1;
   }

   auto dot = pathStr.find_last_of('.');
   if (dot != std::string::npos) {
      len = dot - begin;
   }

   return pathStr.substr(begin, len);
}

byte *fileReadBinary(StringView path, u64 *fsize) {
   byte *mem;
   u64 fsizeBuffer = 0;
   FILE *f = fopen(path, "rb");

   if (!fsize) {
      fsize = &fsizeBuffer;
   }

   if (!f) {
      return nullptr;
   }

   fseek(f, 0, SEEK_END);
   *fsize = ftell(f);
   fseek(f, 0, SEEK_SET);

   mem = new byte[*fsize];
   fread(mem, *fsize, 1, f);
   fclose(f);

   return mem;
}

char *fileReadString(StringView path) {

   FILE *f = fopen(path, "rt");
   static char buff[100];

   if (!f) {
      return nullptr;
   }

   std::string out;

   while (fgets(buff, 100, f)) {
      out += buff;
   }

   return _strdup(out.c_str());
}




int writeBinaryFile(StringView path, byte* buffer, u64 size) {
   auto fOut = fopen(path, "wb");
   if (!fOut) {
      return 0;
   }

   fwrite(buffer, sizeof(byte), size, fOut);
   fclose(fOut);
   return 1;
}