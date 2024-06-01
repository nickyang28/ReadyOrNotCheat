
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/PropertyAccess.EPropertyAccessCopyBatch
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessCopyBatch : uint8_t
{
	EPropertyAccessCopyBatch__InternalUnbatched                                      = 0,
	EPropertyAccessCopyBatch__ExternalUnbatched                                      = 1,
	EPropertyAccessCopyBatch__InternalBatched                                        = 2,
	EPropertyAccessCopyBatch__ExternalBatched                                        = 3,
	EPropertyAccessCopyBatch__Count                                                  = 4
};

/// Enum /Script/PropertyAccess.EPropertyAccessCopyType
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessCopyType : uint8_t
{
	EPropertyAccessCopyType__None                                                    = 0,
	EPropertyAccessCopyType__Plain                                                   = 1,
	EPropertyAccessCopyType__Complex                                                 = 2,
	EPropertyAccessCopyType__Bool                                                    = 3,
	EPropertyAccessCopyType__Struct                                                  = 4,
	EPropertyAccessCopyType__Object                                                  = 5,
	EPropertyAccessCopyType__Name                                                    = 6,
	EPropertyAccessCopyType__Array                                                   = 7,
	EPropertyAccessCopyType__PromoteBoolToByte                                       = 8,
	EPropertyAccessCopyType__PromoteBoolToInt32                                      = 9,
	EPropertyAccessCopyType__PromoteBoolToInt64                                      = 10,
	EPropertyAccessCopyType__PromoteBoolToFloat                                      = 11,
	EPropertyAccessCopyType__PromoteByteToInt32                                      = 12,
	EPropertyAccessCopyType__PromoteByteToInt64                                      = 13,
	EPropertyAccessCopyType__PromoteByteToFloat                                      = 14,
	EPropertyAccessCopyType__PromoteInt32ToInt64                                     = 15,
	EPropertyAccessCopyType__PromoteInt32ToFloat                                     = 16
};

/// Enum /Script/PropertyAccess.EPropertyAccessObjectType
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessObjectType : uint8_t
{
	EPropertyAccessObjectType__None                                                  = 0,
	EPropertyAccessObjectType__Object                                                = 1,
	EPropertyAccessObjectType__WeakObject                                            = 2,
	EPropertyAccessObjectType__SoftObject                                            = 3
};

/// Enum /Script/PropertyAccess.EPropertyAccessIndirectionType
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessIndirectionType : uint8_t
{
	EPropertyAccessIndirectionType__Offset                                           = 0,
	EPropertyAccessIndirectionType__Object                                           = 1,
	EPropertyAccessIndirectionType__Array                                            = 2,
	EPropertyAccessIndirectionType__ScriptFunction                                   = 3,
	EPropertyAccessIndirectionType__NativeFunction                                   = 4
};

/// Class /Script/PropertyAccess.PropertyAccess
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UPropertyAccess : public UInterface
{ 
public:
};

/// Class /Script/PropertyAccess.PropertyEventBroadcaster
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UPropertyEventBroadcaster : public UInterface
{ 
public:
};

/// Class /Script/PropertyAccess.PropertyEventSubscriber
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UPropertyEventSubscriber : public UInterface
{ 
public:
};

/// Struct /Script/PropertyAccess.PropertyAccessSegment
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FPropertyAccessSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class UStruct*                                     Struct;                                                     // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UFunction*                                   Function;                                                   // 0x0030   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0038   (0x0004)  
	uint16_t                                           Flags;                                                      // 0x003C   (0x0002)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/PropertyAccess.PropertyAccessPath
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FPropertyAccessPath
{ 
	int32_t                                            PathSegmentStartIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            PathSegmentCount;                                           // 0x0004   (0x0004)  
	bool                                               bHasEvents : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/PropertyAccess.PropertyAccessCopy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FPropertyAccessCopy
{ 
	int32_t                                            AccessIndex;                                                // 0x0000   (0x0004)  
	int32_t                                            DestAccessStartIndex;                                       // 0x0004   (0x0004)  
	int32_t                                            DestAccessEndIndex;                                         // 0x0008   (0x0004)  
	EPropertyAccessCopyType                            Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PropertyAccess.PropertyAccessCopyBatch
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FPropertyAccessCopyBatch
{ 
	TArray<FPropertyAccessCopy>                        Copies;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/PropertyAccess.PropertyAccessIndirectionChain
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FPropertyAccessIndirectionChain
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	int32_t                                            IndirectionStartIndex;                                      // 0x0020   (0x0004)  
	int32_t                                            IndirectionEndIndex;                                        // 0x0024   (0x0004)  
	int32_t                                            EventId;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PropertyAccess.PropertyAccessIndirection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FPropertyAccessIndirection
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	class UFunction*                                   Function;                                                   // 0x0020   (0x0008)  
	int32_t                                            ReturnBufferSize;                                           // 0x0028   (0x0004)  
	int32_t                                            ReturnBufferAlignment;                                      // 0x002C   (0x0004)  
	int32_t                                            ArrayIndex;                                                 // 0x0030   (0x0004)  
	uint32_t                                           Offset;                                                     // 0x0034   (0x0004)  
	EPropertyAccessObjectType                          ObjectType;                                                 // 0x0038   (0x0001)  
	EPropertyAccessIndirectionType                     Type;                                                       // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/PropertyAccess.PropertyAccessLibrary
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FPropertyAccessLibrary
{ 
	TArray<FPropertyAccessSegment>                     PathSegments;                                               // 0x0000   (0x0010)  
	TArray<FPropertyAccessPath>                        SrcPaths;                                                   // 0x0010   (0x0010)  
	TArray<FPropertyAccessPath>                        DestPaths;                                                  // 0x0020   (0x0010)  
	FPropertyAccessCopyBatch                           CopyBatches[4];                                             // 0x0030   (0x0040)  
	TArray<FPropertyAccessIndirectionChain>            SrcAccesses;                                                // 0x0070   (0x0010)  
	TArray<FPropertyAccessIndirectionChain>            DestAccesses;                                               // 0x0080   (0x0010)  
	TArray<FPropertyAccessIndirection>                 Indirections;                                               // 0x0090   (0x0010)  
	TArray<int32_t>                                    EventAccessIndices;                                         // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00B0   (0x0018)  MISSED
};

static_assert(sizeof(UPropertyAccess) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPropertyEventBroadcaster) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPropertyEventSubscriber) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPropertyAccessSegment) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPropertyAccessPath) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPropertyAccessCopy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPropertyAccessCopyBatch) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPropertyAccessIndirectionChain) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPropertyAccessIndirection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPropertyAccessLibrary) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(offsetof(FPropertyAccessSegment, Name) == 0x0000);
static_assert(offsetof(FPropertyAccessSegment, Struct) == 0x0008);
static_assert(offsetof(FPropertyAccessSegment, Function) == 0x0030);
static_assert(offsetof(FPropertyAccessCopy, Type) == 0x000C);
static_assert(offsetof(FPropertyAccessCopyBatch, Copies) == 0x0000);
static_assert(offsetof(FPropertyAccessIndirection, Function) == 0x0020);
static_assert(offsetof(FPropertyAccessIndirection, ObjectType) == 0x0038);
static_assert(offsetof(FPropertyAccessIndirection, Type) == 0x0039);
static_assert(offsetof(FPropertyAccessLibrary, PathSegments) == 0x0000);
static_assert(offsetof(FPropertyAccessLibrary, SrcPaths) == 0x0010);
static_assert(offsetof(FPropertyAccessLibrary, DestPaths) == 0x0020);
static_assert(offsetof(FPropertyAccessLibrary, CopyBatches) == 0x0030);
static_assert(offsetof(FPropertyAccessLibrary, SrcAccesses) == 0x0070);
static_assert(offsetof(FPropertyAccessLibrary, DestAccesses) == 0x0080);
static_assert(offsetof(FPropertyAccessLibrary, Indirections) == 0x0090);
static_assert(offsetof(FPropertyAccessLibrary, EventAccessIndices) == 0x00A0);
