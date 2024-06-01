
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FStructSerializerNumericTestStruct
{ 
	int8_t                                             Int8;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0001   (0x0001)  MISSED
	int16_t                                            Int16;                                                      // 0x0002   (0x0002)  
	int32_t                                            Int32;                                                      // 0x0004   (0x0004)  
	int64_t                                            Int64;                                                      // 0x0008   (0x0008)  
	char                                               UInt8;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0011   (0x0001)  MISSED
	uint16_t                                           UInt16;                                                     // 0x0012   (0x0002)  
	uint32_t                                           UInt32;                                                     // 0x0014   (0x0004)  
	uint64_t                                           UInt64;                                                     // 0x0018   (0x0008)  
	float                                              Float;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	double                                             Double;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 pad: 0x0000
struct FStructSerializerBooleanTestStruct
{ 
	bool                                               BoolFalse;                                                  // 0x0000   (0x0001)  
	bool                                               BoolTrue;                                                   // 0x0001   (0x0001)  
	bool                                               Bitfield0 : 1;                                              // 0x0002:0 (0x0001)  
	bool                                               Bitfield1 : 1;                                              // 0x0002:1 (0x0001)  
	bool                                               Bitfield2Set : 1;                                           // 0x0002:2 (0x0001)  
	bool                                               Bitfield3 : 1;                                              // 0x0002:3 (0x0001)  
	bool                                               Bitfield4Set : 1;                                           // 0x0002:4 (0x0001)  
	bool                                               Bitfield5Set : 1;                                           // 0x0002:5 (0x0001)  
	bool                                               Bitfield6 : 1;                                              // 0x0002:6 (0x0001)  
	bool                                               Bitfield7Set : 1;                                           // 0x0002:7 (0x0001)  
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FStructSerializerObjectTestStruct
{ 
	class UClass*                                      Class;                                                      // 0x0000   (0x0008)  
	class UClass*                                      SubClass;                                                   // 0x0008   (0x0008)  
	SDK_UNDEFINED(40,1928) /* TWeakObjectPtr<UClass*> */ __um(SoftClass);                                          // 0x0010   (0x0028)  
	class UObject*                                     Object;                                                     // 0x0038   (0x0008)  
	SDK_UNDEFINED(8,1929) /* TWeakObjectPtr<UMetaData*> */ __um(WeakObject);                                       // 0x0040   (0x0008)  
	SDK_UNDEFINED(40,1930) /* TWeakObjectPtr<UMetaData*> */ __um(SoftObject);                                      // 0x0048   (0x0028)  
	FSoftClassPath                                     ClassPath;                                                  // 0x0070   (0x0018)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x0088   (0x0018)  
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 pad: 0x0000
struct FStructSerializerBuiltinTestStruct
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	FString                                            String;                                                     // 0x0018   (0x0010)  
	FText                                              Text;                                                       // 0x0028   (0x0018)  
	FVector                                            Vector;                                                     // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector4                                           Vector4;                                                    // 0x0050   (0x0010)  
	FRotator                                           Rotator;                                                    // 0x0060   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FQuat                                              Quat;                                                       // 0x0070   (0x0010)  
	FColor                                             Color;                                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FStructSerializerArrayTestStruct
{ 
	TArray<int32_t>                                    Int32Array;                                                 // 0x0000   (0x0010)  
	TArray<char>                                       ByteArray;                                                  // 0x0010   (0x0010)  
	int32_t                                            StaticSingleElement;                                        // 0x0020   (0x0004)  
	int32_t                                            StaticInt32Array[3];                                        // 0x0024   (0x000C)  
	float                                              StaticFloatArray[3];                                        // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FVector>                                    VectorArray;                                                // 0x0040   (0x0010)  
	TArray<FStructSerializerBuiltinTestStruct>         StructArray;                                                // 0x0050   (0x0010)  
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 8 pad: 0x0000
struct FStructSerializerMapTestStruct
{ 
	SDK_UNDEFINED(80,1931) /* TMap<int32_t, FString> */ __um(IntToStr);                                            // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1932) /* TMap<FString, FString> */ __um(StrToStr);                                            // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,1933) /* TMap<FString, FVector> */ __um(StrToVec);                                            // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,1934) /* TMap<FString, FStructSerializerBuiltinTestStruct> */ __um(StrToStruct);              // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 8 pad: 0x0000
struct FStructSerializerSetTestStruct
{ 
	SDK_UNDEFINED(80,1935) /* TSet<FString> */         __um(StrSet);                                               // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1936) /* TSet<int32_t> */         __um(IntSet);                                               // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,1937) /* TSet<FName> */           __um(NameSet);                                              // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,1938) /* TSet<FStructSerializerBuiltinTestStruct> */ __um(StructSet);                         // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x0450 (1104 bytes) (0x000000 - 0x000450) align 16 pad: 0x0000
struct FStructSerializerTestStruct
{ 
	FStructSerializerNumericTestStruct                 Numerics;                                                   // 0x0000   (0x0030)  
	FStructSerializerBooleanTestStruct                 Booleans;                                                   // 0x0030   (0x0003)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED
	FStructSerializerObjectTestStruct                  Objects;                                                    // 0x0038   (0x00A0)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FStructSerializerBuiltinTestStruct                 Builtins;                                                   // 0x00E0   (0x0090)  
	FStructSerializerArrayTestStruct                   Arrays;                                                     // 0x0170   (0x0060)  
	FStructSerializerMapTestStruct                     Maps;                                                       // 0x01D0   (0x0140)  
	FStructSerializerSetTestStruct                     Sets;                                                       // 0x0310   (0x0140)  
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FStructSerializerByteArray
{ 
	int32_t                                            Dummy1;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       ByteArray;                                                  // 0x0008   (0x0010)  
	int32_t                                            Dummy2;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<int8_t>                                     Int8Array;                                                  // 0x0020   (0x0010)  
	int32_t                                            Dummy3;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

static_assert(sizeof(FStructSerializerNumericTestStruct) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FStructSerializerBooleanTestStruct) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FStructSerializerObjectTestStruct) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FStructSerializerBuiltinTestStruct) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FStructSerializerArrayTestStruct) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FStructSerializerMapTestStruct) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FStructSerializerSetTestStruct) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FStructSerializerTestStruct) == 0x0450); // 1104 bytes (0x000000 - 0x000450)
static_assert(sizeof(FStructSerializerByteArray) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FStructSerializerObjectTestStruct, Class) == 0x0000);
static_assert(offsetof(FStructSerializerObjectTestStruct, SubClass) == 0x0008);
static_assert(offsetof(FStructSerializerObjectTestStruct, Object) == 0x0038);
static_assert(offsetof(FStructSerializerObjectTestStruct, ClassPath) == 0x0070);
static_assert(offsetof(FStructSerializerObjectTestStruct, ObjectPath) == 0x0088);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Guid) == 0x0000);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Name) == 0x0010);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, String) == 0x0018);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Text) == 0x0028);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector) == 0x0040);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector4) == 0x0050);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Rotator) == 0x0060);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Quat) == 0x0070);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Color) == 0x0080);
static_assert(offsetof(FStructSerializerArrayTestStruct, Int32Array) == 0x0000);
static_assert(offsetof(FStructSerializerArrayTestStruct, ByteArray) == 0x0010);
static_assert(offsetof(FStructSerializerArrayTestStruct, VectorArray) == 0x0040);
static_assert(offsetof(FStructSerializerArrayTestStruct, StructArray) == 0x0050);
static_assert(offsetof(FStructSerializerTestStruct, Numerics) == 0x0000);
static_assert(offsetof(FStructSerializerTestStruct, Booleans) == 0x0030);
static_assert(offsetof(FStructSerializerTestStruct, Objects) == 0x0038);
static_assert(offsetof(FStructSerializerTestStruct, Builtins) == 0x00E0);
static_assert(offsetof(FStructSerializerTestStruct, Arrays) == 0x0170);
static_assert(offsetof(FStructSerializerTestStruct, Maps) == 0x01D0);
static_assert(offsetof(FStructSerializerTestStruct, Sets) == 0x0310);
static_assert(offsetof(FStructSerializerByteArray, ByteArray) == 0x0008);
static_assert(offsetof(FStructSerializerByteArray, Int8Array) == 0x0020);
