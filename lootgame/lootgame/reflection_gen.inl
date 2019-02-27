// This code was generated by robots, do not modify
// this file implements the generated file reflection_gen.h

#include "reflection_gen.h"

TypeMetadata* meta_Time = new TypeMetadata;
TypeMetadata* meta_ColorRGB = new TypeMetadata;
TypeMetadata* meta_ColorRGBA = new TypeMetadata;
TypeMetadata* meta_ColorRGBf = new TypeMetadata;
TypeMetadata* meta_ColorHSV = new TypeMetadata;
TypeMetadata* meta_ColorRGBAf = new TypeMetadata;
TypeMetadata* meta_SwingPhase = new TypeMetadata;
TypeMetadata* meta_EngineConstants = new TypeMetadata;
TypeMetadata* meta_EngineState = new TypeMetadata;
TypeMetadata* meta_IO = new TypeMetadata;
TypeMetadata* meta_GameCamera = new TypeMetadata;
TypeMetadata* meta_Map = new TypeMetadata;
TypeMetadata* meta_AttackSwing = new TypeMetadata;
TypeMetadata* meta_MoveSet = new TypeMetadata;
TypeMetadata* meta_Movement = new TypeMetadata;
TypeMetadata* meta_Int2 = new TypeMetadata;
TypeMetadata* meta_Int3 = new TypeMetadata;
TypeMetadata* meta_Float2 = new TypeMetadata;
TypeMetadata* meta_Float3 = new TypeMetadata;
TypeMetadata* meta_Recti = new TypeMetadata;
TypeMetadata* meta_Rectf = new TypeMetadata;
TypeMetadata* meta_TextureFlag_ = new TypeMetadata;
TypeMetadata* meta_Texture = new TypeMetadata;
TypeMetadata* meta_FBO = new TypeMetadata;


void reflectionStartup_generated() {
   
   {
      auto& enumName = meta_SwingPhase;
      enumName->name = intern("SwingPhase");
      enumName->size = sizeof(SwingPhase);
      enumName->variety = TypeVariety_Enum;
      

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("SwingPhase_Windup");
         entry.value = SwingPhase_Windup;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("SwingPhase_Lunge");
         entry.value = SwingPhase_Lunge;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("SwingPhase_Swing");
         entry.value = SwingPhase_Swing;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("SwingPhase_Cooldown");
         entry.value = SwingPhase_Cooldown;
         enumName->enumEntries.push_back(entry);
      }

      
   }

   
   {
      auto& enumName = meta_TextureFlag_;
      enumName->name = intern("TextureFlag_");
      enumName->size = sizeof(TextureFlag_);
      enumName->variety = TypeVariety_Enum;
      enumName->enumFlags |= EnumFlags_Bitfield;
      

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_WrapRepeat");
         entry.value = TextureFlag_WrapRepeat;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_WrapClamp");
         entry.value = TextureFlag_WrapClamp;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_FilterLinear");
         entry.value = TextureFlag_FilterLinear;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_FilterNearest");
         entry.value = TextureFlag_FilterNearest;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_Color_SRGBA");
         entry.value = TextureFlag_Color_SRGBA;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_Color_RGBA8");
         entry.value = TextureFlag_Color_RGBA8;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_Color_RGBA16F");
         entry.value = TextureFlag_Color_RGBA16F;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_DisablePremultiply");
         entry.value = TextureFlag_DisablePremultiply;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_ClampedLinear");
         entry.value = TextureFlag_ClampedLinear;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_ClampedNearest");
         entry.value = TextureFlag_ClampedNearest;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_RepeatedLinear");
         entry.value = TextureFlag_RepeatedLinear;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_RepeatedNearest");
         entry.value = TextureFlag_RepeatedNearest;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_Defaults");
         entry.value = TextureFlag_Defaults;
         enumName->enumEntries.push_back(entry);
      }

      
      {
         EnumEntryMetadata entry;
         entry.name = intern("TextureFlag_FBODefaults");
         entry.value = TextureFlag_FBODefaults;
         enumName->enumEntries.push_back(entry);
      }

      
   }

   
   
   {
      auto& structName = meta_Time;
      structName->name = intern("Time");
      structName->size = sizeof(Time);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Time;};
      structName->funcs.destroy = [](void* data) {((Time*)data)->~Time(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("t");
         member.offset = offsetof(Time, t);
         member.type = reflect<Microseconds>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_ColorRGB;
      structName->name = intern("ColorRGB");
      structName->size = sizeof(ColorRGB);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) ColorRGB;};
      structName->funcs.destroy = [](void* data) {((ColorRGB*)data)->~ColorRGB(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("r");
         member.offset = offsetof(ColorRGB, r);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("g");
         member.offset = offsetof(ColorRGB, g);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("b");
         member.offset = offsetof(ColorRGB, b);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_ColorRGBA;
      structName->name = intern("ColorRGBA");
      structName->size = sizeof(ColorRGBA);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) ColorRGBA;};
      structName->funcs.destroy = [](void* data) {((ColorRGBA*)data)->~ColorRGBA(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("r");
         member.offset = offsetof(ColorRGBA, r);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("g");
         member.offset = offsetof(ColorRGBA, g);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("b");
         member.offset = offsetof(ColorRGBA, b);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("a");
         member.offset = offsetof(ColorRGBA, a);
         member.type = reflect<byte>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_ColorRGBf;
      structName->name = intern("ColorRGBf");
      structName->size = sizeof(ColorRGBf);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) ColorRGBf;};
      structName->funcs.destroy = [](void* data) {((ColorRGBf*)data)->~ColorRGBf(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("r");
         member.offset = offsetof(ColorRGBf, r);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("g");
         member.offset = offsetof(ColorRGBf, g);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("b");
         member.offset = offsetof(ColorRGBf, b);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_ColorHSV;
      structName->name = intern("ColorHSV");
      structName->size = sizeof(ColorHSV);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) ColorHSV;};
      structName->funcs.destroy = [](void* data) {((ColorHSV*)data)->~ColorHSV(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("h");
         member.offset = offsetof(ColorHSV, h);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("s");
         member.offset = offsetof(ColorHSV, s);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("v");
         member.offset = offsetof(ColorHSV, v);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_ColorRGBAf;
      structName->name = intern("ColorRGBAf");
      structName->size = sizeof(ColorRGBAf);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) ColorRGBAf;};
      structName->funcs.destroy = [](void* data) {((ColorRGBAf*)data)->~ColorRGBAf(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("r");
         member.offset = offsetof(ColorRGBAf, r);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("g");
         member.offset = offsetof(ColorRGBAf, g);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("b");
         member.offset = offsetof(ColorRGBAf, b);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("a");
         member.offset = offsetof(ColorRGBAf, a);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_EngineConstants;
      structName->name = intern("EngineConstants");
      structName->size = sizeof(EngineConstants);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) EngineConstants;};
      structName->funcs.destroy = [](void* data) {((EngineConstants*)data)->~EngineConstants(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("resolution");
         member.offset = offsetof(EngineConstants, resolution);
         member.type = reflect<Int2>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("floorHeight");
         member.offset = offsetof(EngineConstants, floorHeight);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeHeight");
         member.offset = offsetof(EngineConstants, dudeHeight);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("lightHeight");
         member.offset = offsetof(EngineConstants, lightHeight);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("lightLinearPortion");
         member.offset = offsetof(EngineConstants, lightLinearPortion);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("lightSmoothingFactor");
         member.offset = offsetof(EngineConstants, lightSmoothingFactor);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("lightIntensity");
         member.offset = offsetof(EngineConstants, lightIntensity);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeAcceleration");
         member.offset = offsetof(EngineConstants, dudeAcceleration);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeRotationSpeed");
         member.offset = offsetof(EngineConstants, dudeRotationSpeed);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeMoveSpeed");
         member.offset = offsetof(EngineConstants, dudeMoveSpeed);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeDashSpeed");
         member.offset = offsetof(EngineConstants, dudeDashSpeed);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeSpeedCapEasing");
         member.offset = offsetof(EngineConstants, dudeSpeedCapEasing);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeBackwardsPenalty");
         member.offset = offsetof(EngineConstants, dudeBackwardsPenalty);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeDashDistance");
         member.offset = offsetof(EngineConstants, dudeDashDistance);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeKnockbackDistance");
         member.offset = offsetof(EngineConstants, dudeKnockbackDistance);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudePostDashCooldown");
         member.offset = offsetof(EngineConstants, dudePostDashCooldown);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("dudeBaseStaminaTickRecoveryTime");
         member.offset = offsetof(EngineConstants, dudeBaseStaminaTickRecoveryTime);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("cooldownOnDamagedStaminaEmpty");
         member.offset = offsetof(EngineConstants, cooldownOnDamagedStaminaEmpty);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("cooldownOnDamagedStamina");
         member.offset = offsetof(EngineConstants, cooldownOnDamagedStamina);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("cooldownOnDamagedHealth");
         member.offset = offsetof(EngineConstants, cooldownOnDamagedHealth);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_EngineState;
      structName->name = intern("EngineState");
      structName->size = sizeof(EngineState);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) EngineState;};
      structName->funcs.destroy = [](void* data) {((EngineState*)data)->~EngineState(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("bgClearColor");
         member.offset = offsetof(EngineState, bgClearColor);
         member.type = reflect<ColorRGBAf>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("fullScreen");
         member.offset = offsetof(EngineState, fullScreen);
         member.type = reflect<bool>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("reloadShaders");
         member.offset = offsetof(EngineState, reloadShaders);
         member.type = reflect<bool>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_IO;
      structName->name = intern("IO");
      structName->size = sizeof(IO);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) IO;};
      structName->funcs.destroy = [](void* data) {((IO*)data)->~IO(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("mousePos");
         member.offset = offsetof(IO, mousePos);
         member.type = reflect<Coords>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("leftStick");
         member.offset = offsetof(IO, leftStick);
         member.type = reflect<Float2>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("rightStick");
         member.offset = offsetof(IO, rightStick);
         member.type = reflect<Float2>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("leftTrigger");
         member.offset = offsetof(IO, leftTrigger);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("rightTrigger");
         member.offset = offsetof(IO, rightTrigger);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("buttonDown");
         member.offset = offsetof(IO, buttonDown);
         member.type = reflect<bool>();
         member.flags |= StructMemberFlags_StaticArray;
         member.staticArraySize = GameButton_COUNT;
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("buttonPressed");
         member.offset = offsetof(IO, buttonPressed);
         member.type = reflect<bool>();
         member.flags |= StructMemberFlags_StaticArray;
         member.staticArraySize = GameButton_COUNT;
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("buttonReleased");
         member.offset = offsetof(IO, buttonReleased);
         member.type = reflect<bool>();
         member.flags |= StructMemberFlags_StaticArray;
         member.staticArraySize = GameButton_COUNT;
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_GameCamera;
      structName->name = intern("GameCamera");
      structName->size = sizeof(GameCamera);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) GameCamera;};
      structName->funcs.destroy = [](void* data) {((GameCamera*)data)->~GameCamera(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("viewport");
         member.offset = offsetof(GameCamera, viewport);
         member.type = reflect<Rectf>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Map;
      structName->name = intern("Map");
      structName->size = sizeof(Map);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Map;};
      structName->funcs.destroy = [](void* data) {((Map*)data)->~Map(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("size");
         member.offset = offsetof(Map, size);
         member.type = reflect<Float2>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_AttackSwing;
      structName->name = intern("AttackSwing");
      structName->size = sizeof(AttackSwing);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) AttackSwing;};
      structName->funcs.destroy = [](void* data) {((AttackSwing*)data)->~AttackSwing(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("lungeDist");
         member.offset = offsetof(AttackSwing, lungeDist);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("lungeSpeed");
         member.offset = offsetof(AttackSwing, lungeSpeed);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("swipeAngle");
         member.offset = offsetof(AttackSwing, swipeAngle);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("swingDur");
         member.offset = offsetof(AttackSwing, swingDur);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("windupDur");
         member.offset = offsetof(AttackSwing, windupDur);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("cooldownDur");
         member.offset = offsetof(AttackSwing, cooldownDur);
         member.type = reflect<Milliseconds>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("hitbox");
         member.offset = offsetof(AttackSwing, hitbox);
         member.type = reflect<Rectf>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_MoveSet;
      structName->name = intern("MoveSet");
      structName->size = sizeof(MoveSet);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) MoveSet;};
      structName->funcs.destroy = [](void* data) {((MoveSet*)data)->~MoveSet(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("swings");
         member.offset = offsetof(MoveSet, swings);
         member.type = reflect<std::vector<AttackSwing>>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Movement;
      structName->name = intern("Movement");
      structName->size = sizeof(Movement);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Movement;};
      structName->funcs.destroy = [](void* data) {((Movement*)data)->~Movement(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("moveSpeedCap");
         member.offset = offsetof(Movement, moveSpeedCap);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("moveSpeedCapTarget");
         member.offset = offsetof(Movement, moveSpeedCapTarget);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("moveVector");
         member.offset = offsetof(Movement, moveVector);
         member.type = reflect<Float2>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("faceVector");
         member.offset = offsetof(Movement, faceVector);
         member.type = reflect<Float2>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("facing");
         member.offset = offsetof(Movement, facing);
         member.type = reflect<Float2>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Int2;
      structName->name = intern("Int2");
      structName->size = sizeof(Int2);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Int2;};
      structName->funcs.destroy = [](void* data) {((Int2*)data)->~Int2(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("x");
         member.offset = offsetof(Int2, x);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("y");
         member.offset = offsetof(Int2, y);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Int3;
      structName->name = intern("Int3");
      structName->size = sizeof(Int3);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Int3;};
      structName->funcs.destroy = [](void* data) {((Int3*)data)->~Int3(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("x");
         member.offset = offsetof(Int3, x);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("y");
         member.offset = offsetof(Int3, y);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("z");
         member.offset = offsetof(Int3, z);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Float2;
      structName->name = intern("Float2");
      structName->size = sizeof(Float2);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Float2;};
      structName->funcs.destroy = [](void* data) {((Float2*)data)->~Float2(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("x");
         member.offset = offsetof(Float2, x);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("y");
         member.offset = offsetof(Float2, y);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Float3;
      structName->name = intern("Float3");
      structName->size = sizeof(Float3);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Float3;};
      structName->funcs.destroy = [](void* data) {((Float3*)data)->~Float3(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("x");
         member.offset = offsetof(Float3, x);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("y");
         member.offset = offsetof(Float3, y);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("z");
         member.offset = offsetof(Float3, z);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Recti;
      structName->name = intern("Recti");
      structName->size = sizeof(Recti);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Recti;};
      structName->funcs.destroy = [](void* data) {((Recti*)data)->~Recti(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("x");
         member.offset = offsetof(Recti, x);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("y");
         member.offset = offsetof(Recti, y);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("w");
         member.offset = offsetof(Recti, w);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("h");
         member.offset = offsetof(Recti, h);
         member.type = reflect<int32_t>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Rectf;
      structName->name = intern("Rectf");
      structName->size = sizeof(Rectf);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Rectf;};
      structName->funcs.destroy = [](void* data) {((Rectf*)data)->~Rectf(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("x");
         member.offset = offsetof(Rectf, x);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("y");
         member.offset = offsetof(Rectf, y);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("w");
         member.offset = offsetof(Rectf, w);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("h");
         member.offset = offsetof(Rectf, h);
         member.type = reflect<float>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_Texture;
      structName->name = intern("Texture");
      structName->size = sizeof(Texture);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) Texture;};
      structName->funcs.destroy = [](void* data) {((Texture*)data)->~Texture(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("sz");
         member.offset = offsetof(Texture, sz);
         member.type = reflect<Int2>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("flags");
         member.offset = offsetof(Texture, flags);
         member.type = reflect<TextureFlag_>();
         
         structName->structMembers.push_back(member);
      }

      
      {
         StructMemberMetadata member;
         member.name = intern("filepath");
         member.offset = offsetof(Texture, filepath);
         member.type = reflect<std::string>();
         member.flags |= StructMemberFlags_File;
         member.flags |= StructMemberFlags_Image;
         
         structName->structMembers.push_back(member);
      }

      
   }

   
   {
      auto& structName = meta_FBO;
      structName->name = intern("FBO");
      structName->size = sizeof(FBO);
      structName->variety = TypeVariety_Struct;

      structName->funcs.create = [](void* data) {new (data) FBO;};
      structName->funcs.destroy = [](void* data) {((FBO*)data)->~FBO(); };

      
      {
         StructMemberMetadata member;
         member.name = intern("sz");
         member.offset = offsetof(FBO, sz);
         member.type = reflect<Int2>();
         
         structName->structMembers.push_back(member);
      }

      
   }

   

   
   //main --------------------------------------
   void main_reflectionStartup_generated();
   main_reflectionStartup_generated();

   
}