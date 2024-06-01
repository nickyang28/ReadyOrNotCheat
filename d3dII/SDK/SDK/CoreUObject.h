
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x01 (1 bytes)
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                                                       = 0,
	CIM_CurveAuto                                                                    = 1,
	CIM_Constant                                                                     = 2,
	CIM_CurveUser                                                                    = 3,
	CIM_CurveBreak                                                                   = 4,
	CIM_CurveAutoClamped                                                             = 5
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x01 (1 bytes)
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive                                                      = 0,
	ERangeBoundTypes__Inclusive                                                      = 1,
	ERangeBoundTypes__Open                                                           = 2
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x01 (1 bytes)
enum class ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game                                               = 0,
	ELocalizedTextSourceCategory__Engine                                             = 1,
	ELocalizedTextSourceCategory__Editor                                             = 2
};

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x01 (1 bytes)
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info                                                       = 0,
	EAutomationEventType__Warning                                                    = 1,
	EAutomationEventType__Error                                                      = 2
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x01 (1 bytes)
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None                                                               = 0,
	EMouseCursor__Default                                                            = 1,
	EMouseCursor__TextEditBeam                                                       = 2,
	EMouseCursor__ResizeLeftRight                                                    = 3,
	EMouseCursor__ResizeUpDown                                                       = 4,
	EMouseCursor__ResizeSouthEast                                                    = 5,
	EMouseCursor__ResizeSouthWest                                                    = 6,
	EMouseCursor__CardinalCross                                                      = 7,
	EMouseCursor__Crosshairs                                                         = 8,
	EMouseCursor__Hand                                                               = 9,
	EMouseCursor__GrabHand                                                           = 10,
	EMouseCursor__GrabHandClosed                                                     = 11,
	EMouseCursor__SlashedCircle                                                      = 12,
	EMouseCursor__EyeDropper                                                         = 13
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x01 (1 bytes)
enum class ELifetimeCondition : uint8_t
{
	COND_None                                                                        = 0,
	COND_InitialOnly                                                                 = 1,
	COND_OwnerOnly                                                                   = 2,
	COND_SkipOwner                                                                   = 3,
	COND_SimulatedOnly                                                               = 4,
	COND_AutonomousOnly                                                              = 5,
	COND_SimulatedOrPhysics                                                          = 6,
	COND_InitialOrOwner                                                              = 7,
	COND_Custom                                                                      = 8,
	COND_ReplayOrOwner                                                               = 9,
	COND_ReplayOnly                                                                  = 10,
	COND_SimulatedOnlyNoReplay                                                       = 11,
	COND_SimulatedOrPhysicsNoReplay                                                  = 12,
	COND_SkipReplay                                                                  = 13,
	COND_Never                                                                       = 15,
	COND_Max                                                                         = 16
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x01 (1 bytes)
enum class EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid                                                   = 0,
	EDataValidationResult__Valid                                                     = 1,
	EDataValidationResult__NotValidated                                              = 2
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x01 (1 bytes)
enum class EAppMsgType : uint8_t
{
	EAppMsgType__Ok                                                                  = 0,
	EAppMsgType__YesNo                                                               = 1,
	EAppMsgType__OkCancel                                                            = 2,
	EAppMsgType__YesNoCancel                                                         = 3,
	EAppMsgType__CancelRetryContinue                                                 = 4,
	EAppMsgType__YesNoYesAllNoAll                                                    = 5,
	EAppMsgType__YesNoYesAllNoAllCancel                                              = 6,
	EAppMsgType__YesNoYesAll                                                         = 7
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x01 (1 bytes)
enum class EAppReturnType : uint8_t
{
	EAppReturnType__No                                                               = 0,
	EAppReturnType__Yes                                                              = 1,
	EAppReturnType__YesAll                                                           = 2,
	EAppReturnType__NoAll                                                            = 3,
	EAppReturnType__Cancel                                                           = 4,
	EAppReturnType__Ok                                                               = 5,
	EAppReturnType__Retry                                                            = 6,
	EAppReturnType__Continue                                                         = 7
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default                                         = 0,
	EPropertyAccessChangeNotifyMode__Never                                           = 1,
	EPropertyAccessChangeNotifyMode__Always                                          = 2
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x01 (1 bytes)
enum class EUnit : uint8_t
{
	EUnit__Micrometers                                                               = 0,
	EUnit__Millimeters                                                               = 1,
	EUnit__Centimeters                                                               = 2,
	EUnit__Meters                                                                    = 3,
	EUnit__Kilometers                                                                = 4,
	EUnit__Inches                                                                    = 5,
	EUnit__Feet                                                                      = 6,
	EUnit__Yards                                                                     = 7,
	EUnit__Miles                                                                     = 8,
	EUnit__Lightyears                                                                = 9,
	EUnit__Degrees                                                                   = 10,
	EUnit__Radians                                                                   = 11,
	EUnit__MetersPerSecond                                                           = 12,
	EUnit__KilometersPerHour                                                         = 13,
	EUnit__MilesPerHour                                                              = 14,
	EUnit__Celsius                                                                   = 15,
	EUnit__Farenheit                                                                 = 16,
	EUnit__Kelvin                                                                    = 17,
	EUnit__Micrograms                                                                = 18,
	EUnit__Milligrams                                                                = 19,
	EUnit__Grams                                                                     = 20,
	EUnit__Kilograms                                                                 = 21,
	EUnit__MetricTons                                                                = 22,
	EUnit__Ounces                                                                    = 23,
	EUnit__Pounds                                                                    = 24,
	EUnit__Stones                                                                    = 25,
	EUnit__Newtons                                                                   = 26,
	EUnit__PoundsForce                                                               = 27,
	EUnit__KilogramsForce                                                            = 28,
	EUnit__Hertz                                                                     = 29,
	EUnit__Kilohertz                                                                 = 30,
	EUnit__Megahertz                                                                 = 31,
	EUnit__Gigahertz                                                                 = 32,
	EUnit__RevolutionsPerMinute                                                      = 33,
	EUnit__Bytes                                                                     = 34,
	EUnit__Kilobytes                                                                 = 35,
	EUnit__Megabytes                                                                 = 36,
	EUnit__Gigabytes                                                                 = 37,
	EUnit__Terabytes                                                                 = 38,
	EUnit__Lumens                                                                    = 39,
	EUnit__Milliseconds                                                              = 43,
	EUnit__Seconds                                                                   = 44,
	EUnit__Minutes                                                                   = 45,
	EUnit__Hours                                                                     = 46,
	EUnit__Days                                                                      = 47,
	EUnit__Months                                                                    = 48,
	EUnit__Years                                                                     = 49,
	EUnit__Multiplier                                                                = 52,
	EUnit__Percentage                                                                = 51,
	EUnit__Unspecified                                                               = 53
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x01 (1 bytes)
enum class EPixelFormat : uint8_t
{
	PF_Unknown                                                                       = 0,
	PF_A32B32G32R32F                                                                 = 1,
	PF_B8G8R8A8                                                                      = 2,
	PF_G8                                                                            = 3,
	PF_G16                                                                           = 4,
	PF_DXT1                                                                          = 5,
	PF_DXT3                                                                          = 6,
	PF_DXT5                                                                          = 7,
	PF_UYVY                                                                          = 8,
	PF_FloatRGB                                                                      = 9,
	PF_FloatRGBA                                                                     = 10,
	PF_DepthStencil                                                                  = 11,
	PF_ShadowDepth                                                                   = 12,
	PF_R32_FLOAT                                                                     = 13,
	PF_G16R16                                                                        = 14,
	PF_G16R16F                                                                       = 15,
	PF_G16R16F_FILTER                                                                = 16,
	PF_G32R32F                                                                       = 17,
	PF_A2B10G10R10                                                                   = 18,
	PF_A16B16G16R16                                                                  = 19,
	PF_D24                                                                           = 20,
	PF_R16F                                                                          = 21,
	PF_R16F_FILTER                                                                   = 22,
	PF_BC5                                                                           = 23,
	PF_V8U8                                                                          = 24,
	PF_A1                                                                            = 25,
	PF_FloatR11G11B10                                                                = 26,
	PF_A8                                                                            = 27,
	PF_R32_UINT                                                                      = 28,
	PF_R32_SINT                                                                      = 29,
	PF_PVRTC2                                                                        = 30,
	PF_PVRTC4                                                                        = 31,
	PF_R16_UINT                                                                      = 32,
	PF_R16_SINT                                                                      = 33,
	PF_R16G16B16A16_UINT                                                             = 34,
	PF_R16G16B16A16_SINT                                                             = 35,
	PF_R5G6B5_UNORM                                                                  = 36,
	PF_R8G8B8A8                                                                      = 37,
	PF_A8R8G8B8                                                                      = 38,
	PF_BC4                                                                           = 39,
	PF_R8G8                                                                          = 40,
	PF_ATC_RGB                                                                       = 41,
	PF_ATC_RGBA_E                                                                    = 42,
	PF_ATC_RGBA_I                                                                    = 43,
	PF_X24_G8                                                                        = 44,
	PF_ETC1                                                                          = 45,
	PF_ETC2_RGB                                                                      = 46,
	PF_ETC2_RGBA                                                                     = 47,
	PF_R32G32B32A32_UINT                                                             = 48,
	PF_R16G16_UINT                                                                   = 49,
	PF_ASTC_4x4                                                                      = 50,
	PF_ASTC_6x6                                                                      = 51,
	PF_ASTC_8x8                                                                      = 52,
	PF_ASTC_10x10                                                                    = 53,
	PF_ASTC_12x12                                                                    = 54,
	PF_BC6H                                                                          = 55,
	PF_BC7                                                                           = 56,
	PF_R8_UINT                                                                       = 57,
	PF_L8                                                                            = 58,
	PF_XGXR8                                                                         = 59,
	PF_R8G8B8A8_UINT                                                                 = 60,
	PF_R8G8B8A8_SNORM                                                                = 61,
	PF_R16G16B16A16_UNORM                                                            = 62,
	PF_R16G16B16A16_SNORM                                                            = 63,
	PF_PLATFORM_HDR                                                                  = 64,
	PF_PLATFORM_HDR66                                                                = 65,
	PF_PLATFORM_HDR67                                                                = 66,
	PF_NV12                                                                          = 67,
	PF_R32G32_UINT                                                                   = 68,
	PF_ETC2_R11_EAC                                                                  = 69,
	PF_ETC2_RG11_EAC                                                                 = 70
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x01 (1 bytes)
enum class EAxis : uint8_t
{
	EAxis__None                                                                      = 0,
	EAxis__X                                                                         = 1,
	EAxis__Y                                                                         = 2,
	EAxis__Z                                                                         = 3
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x01 (1 bytes)
enum class ELogTimes : uint8_t
{
	ELogTimes__None                                                                  = 0,
	ELogTimes__UTC                                                                   = 1,
	ELogTimes__SinceGStartTime                                                       = 2,
	ELogTimes__Local                                                                 = 3
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x01 (1 bytes)
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart                                                            = 0,
	ESearchDir__FromEnd                                                              = 1
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x01 (1 bytes)
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive                                                       = 0,
	ESearchCase__IgnoreCase                                                          = 1
};

/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a pad: 0x0000
class UObject
{ 
public:
	uint64_t                                           vtable;                                                     // 0x0000   (0x0008)  
	EObjectFlags                                       ObjectFlags;                                                // 0x0008   (0x0004)  
	int                                                InternalIndex;                                              // 0x000C   (0x0004)  
	class UClass*                                      ClassPrivate;                                               // 0x0010   (0x0008)  
	FName                                              NamePrivate;                                                // 0x0018   (0x0008)  
	class UObject*                                     OuterPrivate;                                               // 0x0020   (0x0008)  

	std::string GetName();
	/// Functions
	// Function /Script/CoreUObject.Object.ExecuteUbergraph
	// void ExecuteUbergraph(int32_t EntryPoint);                                                                               // [0x24710f0] Event|Public|BlueprintEvent 
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UInterface : public UObject
{ 
public:
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000070) align 8 pad: 0x0000
class UGCObjectReferencer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000050) align 8 pad: 0x0000
class UTextBuffer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align n/a pad: 0x0000
class UField : public UObject
{ 
public:
	class UField*                                      Next;                                                       // 0x0028   (0x0008)  
};

/// Class /Script/CoreUObject.Struct
/// Size: 0x0080 (128 bytes) (0x000030 - 0x0000B0) align n/a pad: 0x0000
class UStruct : public UField
{ 
public:
	class UStruct*                                     SuperStruct;                                                // 0x0030   (0x0008)  
	class UField*                                      Children;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x0010 (16 bytes) (0x0000B0 - 0x0000C0) align 8 pad: 0x0000
class UScriptStruct : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0078 (120 bytes) (0x000028 - 0x0000A0) align 8 pad: 0x0000
class UPackage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0028   (0x0078)  MISSED
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0180 (384 bytes) (0x0000B0 - 0x000230) align 8 pad: 0x0000
class UClass : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x180];                                     // 0x00B0   (0x0180)  MISSED
};

/// Class /Script/CoreUObject.Function
/// Size: 0x0030 (48 bytes) (0x0000B0 - 0x0000E0) align 8 pad: 0x0000
class UFunction : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B0   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x0000 (0 bytes) (0x0000E0 - 0x0000E0) align 8 pad: 0x0000
class UDelegateFunction : public UFunction
{ 
public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x0010 (16 bytes) (0x0000E0 - 0x0000F0) align 8 pad: 0x0000
class USparseDelegateFunction : public UDelegateFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x0080 (128 bytes) (0x000230 - 0x0002B0) align 8 pad: 0x0000
class UDynamicClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0230   (0x0080)  MISSED
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000E0) align 8 pad: 0x0000
class UPackageMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0028   (0x00B8)  MISSED
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UEnum : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x01B8 (440 bytes) (0x000230 - 0x0003E8) align 8 pad: 0x0000
class ULinkerPlaceholderClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B8];                                     // 0x0230   (0x01B8)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000F0) align 8 pad: 0x0000
class ULinkerPlaceholderExportObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x01B8 (440 bytes) (0x0000E0 - 0x000298) align 8 pad: 0x0000
class ULinkerPlaceholderFunction : public UFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B8];                                     // 0x00E0   (0x01B8)  MISSED
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000C8) align 8 pad: 0x0000
class UMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UObjectRedirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UProperty : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0010 (16 bytes) (0x000070 - 0x000080) align 8 pad: 0x0000
class UEnumProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UArrayProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UObjectPropertyBase : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBoolProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UNumericProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UByteProperty : public UNumericProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0008 (8 bytes) (0x000078 - 0x000080) align 8 pad: 0x0000
class UClassProperty : public UObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UDoubleProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UFloatProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UIntProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UInt8Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UInterfaceProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class ULazyObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
class UMapProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UMulticastDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UNameProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0020 (32 bytes) (0x000070 - 0x000090) align 8 pad: 0x0000
class USetProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class USoftObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0008 (8 bytes) (0x000078 - 0x000080) align 8 pad: 0x0000
class USoftClassProperty : public USoftObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UStrProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UStructProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UUInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UUInt32Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UUInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0000 (0 bytes) (0x000078 - 0x000078) align 8 pad: 0x0000
class UWeakObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UTextProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UPropertyWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{ 
public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{ 
public:
};

/// Struct /Script/CoreUObject.JoinabilitySettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FJoinabilitySettings
{ 
	FName                                              SessionName;                                                // 0x0000   (0x0008)  
	bool                                               bPublicSearchable;                                          // 0x0008   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x0009   (0x0001)  
	bool                                               bJoinViaPresence;                                           // 0x000A   (0x0001)  
	bool                                               bJoinViaPresenceFriendsOnly;                                // 0x000B   (0x0001)  
	int32_t                                            MaxPlayers;                                                 // 0x000C   (0x0004)  
	int32_t                                            MaxPartySize;                                               // 0x0010   (0x0004)  
};

/// Struct /Script/CoreUObject.UniqueNetIdWrapper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FUniqueNetIdWrapper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FGuid
{ 
	int32_t                                            A;                                                          // 0x0000   (0x0004)  
	int32_t                                            B;                                                          // 0x0004   (0x0004)  
	int32_t                                            C;                                                          // 0x0008   (0x0004)  
	int32_t                                            D;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FVector
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 16 pad: 0x0000
struct FVector4
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FVector2D
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FTwoVectors
{ 
	FVector                                            v1;                                                         // 0x0000   (0x000C)  
	FVector                                            v2;                                                         // 0x000C   (0x000C)  
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0004 (4 bytes) (0x00000C - 0x000010) align 16 pad: 0x0000
struct FPlane : FVector
{ 
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FRotator
{ 
	float                                              Pitch;                                                      // 0x0000   (0x0004)  
	float                                              Yaw;                                                        // 0x0004   (0x0004)  
	float                                              Roll;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 16 pad: 0x0000
struct FQuat
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 pad: 0x0000
struct FPackedNormal
{ 
	char                                               X;                                                          // 0x0000   (0x0001)  
	char                                               Y;                                                          // 0x0001   (0x0001)  
	char                                               Z;                                                          // 0x0002   (0x0001)  
	char                                               W;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FPackedRGB10A2N
{ 
	int32_t                                            Packed;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FPackedRGBA16N
{ 
	int32_t                                            XY;                                                         // 0x0000   (0x0004)  
	int32_t                                            ZW;                                                         // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FIntPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FIntVector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FColor
{ 
	char                                               B;                                                          // 0x0000   (0x0001)  
	char                                               G;                                                          // 0x0001   (0x0001)  
	char                                               R;                                                          // 0x0002   (0x0001)  
	char                                               A;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FLinearColor
{ 
	float                                              R;                                                          // 0x0000   (0x0004)  
	float                                              G;                                                          // 0x0004   (0x0004)  
	float                                              B;                                                          // 0x0008   (0x0004)  
	float                                              A;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FBox
{ 
	FVector                                            Min;                                                        // 0x0000   (0x000C)  
	FVector                                            Max;                                                        // 0x000C   (0x000C)  
	char                                               IsValid;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FBox2D
{ 
	FVector2D                                          Min;                                                        // 0x0000   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0008   (0x0008)  
	char                                               bIsValid;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FBoxSphereBounds
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x000C)  
	FVector                                            BoxExtent;                                                  // 0x000C   (0x000C)  
	float                                              SphereRadius;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 pad: 0x0000
struct FOrientedBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            AxisX;                                                      // 0x000C   (0x000C)  
	FVector                                            AxisY;                                                      // 0x0018   (0x000C)  
	FVector                                            AxisZ;                                                      // 0x0024   (0x000C)  
	float                                              ExtentX;                                                    // 0x0030   (0x0004)  
	float                                              ExtentY;                                                    // 0x0034   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0038   (0x0004)  
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FMatrix
{ 
	FPlane                                             XPlane;                                                     // 0x0000   (0x0010)  
	FPlane                                             YPlane;                                                     // 0x0010   (0x0010)  
	FPlane                                             ZPlane;                                                     // 0x0020   (0x0010)  
	FPlane                                             WPlane;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FInterpCurvePointFloat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	float                                              OutVal;                                                     // 0x0004   (0x0004)  
	float                                              ArriveTangent;                                              // 0x0008   (0x0004)  
	float                                              LeaveTangent;                                               // 0x000C   (0x0004)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FInterpCurveFloat
{ 
	TArray<FInterpCurvePointFloat>                     Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FInterpCurvePointVector2D
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FVector2D                                          OutVal;                                                     // 0x0004   (0x0008)  
	FVector2D                                          ArriveTangent;                                              // 0x000C   (0x0008)  
	FVector2D                                          LeaveTangent;                                               // 0x0014   (0x0008)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FInterpCurveVector2D
{ 
	TArray<FInterpCurvePointVector2D>                  Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FInterpCurvePointVector
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FVector                                            OutVal;                                                     // 0x0004   (0x000C)  
	FVector                                            ArriveTangent;                                              // 0x0010   (0x000C)  
	FVector                                            LeaveTangent;                                               // 0x001C   (0x000C)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FInterpCurveVector
{ 
	TArray<FInterpCurvePointVector>                    Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FInterpCurvePointQuat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FQuat                                              OutVal;                                                     // 0x0010   (0x0010)  
	FQuat                                              ArriveTangent;                                              // 0x0020   (0x0010)  
	FQuat                                              LeaveTangent;                                               // 0x0030   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0041   (0x000F)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FInterpCurveQuat
{ 
	TArray<FInterpCurvePointQuat>                      Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 4 pad: 0x0000
struct FInterpCurvePointTwoVectors
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FTwoVectors                                        OutVal;                                                     // 0x0004   (0x0018)  
	FTwoVectors                                        ArriveTangent;                                              // 0x001C   (0x0018)  
	FTwoVectors                                        LeaveTangent;                                               // 0x0034   (0x0018)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FInterpCurveTwoVectors
{ 
	TArray<FInterpCurvePointTwoVectors>                Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FInterpCurvePointLinearColor
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FLinearColor                                       OutVal;                                                     // 0x0004   (0x0010)  
	FLinearColor                                       ArriveTangent;                                              // 0x0014   (0x0010)  
	FLinearColor                                       LeaveTangent;                                               // 0x0024   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FInterpCurveLinearColor
{ 
	TArray<FInterpCurvePointLinearColor>               Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 pad: 0x0000
struct FTransform
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Translation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Scale3D;                                                    // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FRandomStream
{ 
	int32_t                                            InitialSeed;                                                // 0x0000   (0x0004)  
	int32_t                                            Seed;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FDateTime
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FFrameNumber
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FFrameRate
{ 
	int32_t                                            Numerator;                                                  // 0x0000   (0x0004)  
	int32_t                                            Denominator;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FFrameTime
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	float                                              SubFrame;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FQualifiedFrameTime
{ 
	FFrameTime                                         Time;                                                       // 0x0000   (0x0008)  
	FFrameRate                                         Rate;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FTimecode
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0008   (0x0004)  
	int32_t                                            Frames;                                                     // 0x000C   (0x0004)  
	bool                                               bDropFrameFormat;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FTimespan
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSoftObjectPath
{ 
	FName                                              AssetPathName;                                              // 0x0000   (0x0008)  
	FString                                            SubPathString;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0000 (0 bytes) (0x000018 - 0x000018) align 8 pad: 0x0000
struct FSoftClassPath : FSoftObjectPath
{ 
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FPrimaryAssetType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FPrimaryAssetId
{ 
	FPrimaryAssetType                                  PrimaryAssetType;                                           // 0x0000   (0x0008)  
	FName                                              PrimaryAssetName;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FFallbackStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FFloatRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FFloatRange
{ 
	FFloatRangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FFloatRangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FInt32RangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FInt32Range
{ 
	FInt32RangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FInt32RangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FFrameNumberRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FFrameNumberRange
{ 
	FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)  
	FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FFloatInterval
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FInt32Interval
{ 
	int32_t                                            Min;                                                        // 0x0000   (0x0004)  
	int32_t                                            Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 pad: 0x0000
struct FPolyglotTextData
{ 
	ELocalizedTextSourceCategory                       Category;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            NativeCulture;                                              // 0x0008   (0x0010)  
	FString                                            Namespace;                                                  // 0x0018   (0x0010)  
	FString                                            Key;                                                        // 0x0028   (0x0010)  
	FString                                            NativeString;                                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,0) /* TMap<FString, FString> */   __um(LocalizedStrings);                                     // 0x0048   (0x0050)  
	bool                                               bIsMinimalPatch;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FText                                              CachedText;                                                 // 0x00A0   (0x0018)  
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAutomationEvent
{ 
	EAutomationEventType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            Context;                                                    // 0x0018   (0x0010)  
	FGuid                                              Artifact;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FAutomationExecutionEntry
{ 
	FAutomationEvent                                   Event;                                                      // 0x0000   (0x0038)  
	FString                                            Filename;                                                   // 0x0038   (0x0010)  
	int32_t                                            LineNumber;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FName>                                      ObjectPaths;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0040   (0x0050)  MISSED
	SDK_UNDEFINED(80,1) /* TSet<FName> */              __um(RecursiveClassesExclusionSet);                         // 0x0090   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x00E0   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x00E1   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_7[0xD];                                       // 0x00E3   (0x000D)  MISSED
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAssetBundleEntry
{ 
	FName                                              BundleName;                                                 // 0x0000   (0x0008)  
	TArray<FSoftObjectPath>                            BundleAssets;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FAssetData
{ 
	FName                                              ObjectPath;                                                 // 0x0000   (0x0008)  
	FName                                              PackageName;                                                // 0x0008   (0x0008)  
	FName                                              PackagePath;                                                // 0x0010   (0x0008)  
	FName                                              AssetName;                                                  // 0x0018   (0x0008)  
	FName                                              AssetClass;                                                 // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Struct /Script/CoreUObject.TestUninitializedScriptStructMembersTest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FTestUninitializedScriptStructMembersTest
{ 
	class UObject*                                     UninitializedObjectReference;                               // 0x0000   (0x0008)  
	class UObject*                                     InitializedObjectReference;                                 // 0x0008   (0x0008)  
	float                                              UnusedValue;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

static_assert(sizeof(UObject) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGCObjectReferencer) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UTextBuffer) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UField) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStruct) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UScriptStruct) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UPackage) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UClass) == 0x0230); // 560 bytes (0x0000B0 - 0x000230)
static_assert(sizeof(UFunction) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UDelegateFunction) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(USparseDelegateFunction) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(UDynamicClass) == 0x02B0); // 688 bytes (0x000230 - 0x0002B0)
static_assert(sizeof(UPackageMap) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UEnum) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(ULinkerPlaceholderClass) == 0x03E8); // 1000 bytes (0x000230 - 0x0003E8)
static_assert(sizeof(ULinkerPlaceholderExportObject) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(ULinkerPlaceholderFunction) == 0x0298); // 664 bytes (0x0000E0 - 0x000298)
static_assert(sizeof(UMetaData) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UObjectRedirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UProperty) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UEnumProperty) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UArrayProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectPropertyBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBoolProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNumericProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UByteProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UDoubleProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UFloatProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UIntProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt8Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterfaceProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(ULazyObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMapProperty) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UMulticastDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UMulticastInlineDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMulticastSparseDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UNameProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(USetProperty) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(USoftObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(USoftClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UStrProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UStructProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UUInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt32Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UWeakObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UTextProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPropertyWrapper) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMulticastDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMulticastInlineDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FJoinabilitySettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FUniqueNetIdWrapper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGuid) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FVector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector2D) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPlane) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FRotator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FQuat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPackedNormal) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGB10A2N) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGBA16N) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntPoint) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FColor) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLinearColor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBox) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FBox2D) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FBoxSphereBounds) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FOrientedBox) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInterpCurvePointFloat) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FInterpCurveFloat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointVector2D) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInterpCurveVector2D) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointVector) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FInterpCurveVector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointQuat) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInterpCurveQuat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointTwoVectors) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInterpCurveTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointLinearColor) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FInterpCurveLinearColor) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTransform) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRandomStream) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDateTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumber) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FFrameRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FQualifiedFrameTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTimecode) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FTimespan) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSoftObjectPath) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSoftClassPath) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FPrimaryAssetType) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPrimaryAssetId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFallbackStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFloatRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFloatRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt32RangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Range) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFrameNumberRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumberRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFloatInterval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Interval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolyglotTextData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FAutomationEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAutomationExecutionEntry) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FARFilter) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FAssetBundleEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssetBundleData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAssetData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FTestUninitializedScriptStructMembersTest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UObject, ObjectFlags) == 0x0008);
static_assert(offsetof(UObject, ClassPrivate) == 0x0010);
static_assert(offsetof(UObject, NamePrivate) == 0x0018);
static_assert(offsetof(UObject, OuterPrivate) == 0x0020);
static_assert(offsetof(UField, Next) == 0x0028);
static_assert(offsetof(UStruct, SuperStruct) == 0x0030);
static_assert(offsetof(UStruct, Children) == 0x0038);
static_assert(offsetof(FJoinabilitySettings, SessionName) == 0x0000);
static_assert(offsetof(FTwoVectors, v1) == 0x0000);
static_assert(offsetof(FTwoVectors, v2) == 0x000C);
static_assert(offsetof(FBox, Min) == 0x0000);
static_assert(offsetof(FBox, Max) == 0x000C);
static_assert(offsetof(FBox2D, Min) == 0x0000);
static_assert(offsetof(FBox2D, Max) == 0x0008);
static_assert(offsetof(FBoxSphereBounds, Origin) == 0x0000);
static_assert(offsetof(FBoxSphereBounds, BoxExtent) == 0x000C);
static_assert(offsetof(FOrientedBox, Center) == 0x0000);
static_assert(offsetof(FOrientedBox, AxisX) == 0x000C);
static_assert(offsetof(FOrientedBox, AxisY) == 0x0018);
static_assert(offsetof(FOrientedBox, AxisZ) == 0x0024);
static_assert(offsetof(FMatrix, XPlane) == 0x0000);
static_assert(offsetof(FMatrix, YPlane) == 0x0010);
static_assert(offsetof(FMatrix, ZPlane) == 0x0020);
static_assert(offsetof(FMatrix, WPlane) == 0x0030);
static_assert(offsetof(FInterpCurvePointFloat, InterpMode) == 0x0010);
static_assert(offsetof(FInterpCurveFloat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointVector2D, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointVector2D, ArriveTangent) == 0x000C);
static_assert(offsetof(FInterpCurvePointVector2D, LeaveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointVector2D, InterpMode) == 0x001C);
static_assert(offsetof(FInterpCurveVector2D, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointVector, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointVector, ArriveTangent) == 0x0010);
static_assert(offsetof(FInterpCurvePointVector, LeaveTangent) == 0x001C);
static_assert(offsetof(FInterpCurvePointVector, InterpMode) == 0x0028);
static_assert(offsetof(FInterpCurveVector, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointQuat, OutVal) == 0x0010);
static_assert(offsetof(FInterpCurvePointQuat, ArriveTangent) == 0x0020);
static_assert(offsetof(FInterpCurvePointQuat, LeaveTangent) == 0x0030);
static_assert(offsetof(FInterpCurvePointQuat, InterpMode) == 0x0040);
static_assert(offsetof(FInterpCurveQuat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointTwoVectors, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointTwoVectors, ArriveTangent) == 0x001C);
static_assert(offsetof(FInterpCurvePointTwoVectors, LeaveTangent) == 0x0034);
static_assert(offsetof(FInterpCurvePointTwoVectors, InterpMode) == 0x004C);
static_assert(offsetof(FInterpCurveTwoVectors, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointLinearColor, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointLinearColor, ArriveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointLinearColor, LeaveTangent) == 0x0024);
static_assert(offsetof(FInterpCurvePointLinearColor, InterpMode) == 0x0034);
static_assert(offsetof(FInterpCurveLinearColor, Points) == 0x0000);
static_assert(offsetof(FTransform, Rotation) == 0x0000);
static_assert(offsetof(FTransform, Translation) == 0x0010);
static_assert(offsetof(FTransform, Scale3D) == 0x0020);
static_assert(offsetof(FFrameTime, FrameNumber) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Time) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Rate) == 0x0008);
static_assert(offsetof(FSoftObjectPath, AssetPathName) == 0x0000);
static_assert(offsetof(FSoftObjectPath, SubPathString) == 0x0008);
static_assert(offsetof(FPrimaryAssetType, Name) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetType) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetName) == 0x0008);
static_assert(offsetof(FFloatRangeBound, Type) == 0x0000);
static_assert(offsetof(FFloatRange, LowerBound) == 0x0000);
static_assert(offsetof(FFloatRange, UpperBound) == 0x0008);
static_assert(offsetof(FInt32RangeBound, Type) == 0x0000);
static_assert(offsetof(FInt32Range, LowerBound) == 0x0000);
static_assert(offsetof(FInt32Range, UpperBound) == 0x0008);
static_assert(offsetof(FFrameNumberRangeBound, Type) == 0x0000);
static_assert(offsetof(FFrameNumberRangeBound, Value) == 0x0004);
static_assert(offsetof(FFrameNumberRange, LowerBound) == 0x0000);
static_assert(offsetof(FFrameNumberRange, UpperBound) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Category) == 0x0000);
static_assert(offsetof(FPolyglotTextData, NativeCulture) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Namespace) == 0x0018);
static_assert(offsetof(FPolyglotTextData, Key) == 0x0028);
static_assert(offsetof(FPolyglotTextData, NativeString) == 0x0038);
static_assert(offsetof(FPolyglotTextData, CachedText) == 0x00A0);
static_assert(offsetof(FAutomationEvent, Type) == 0x0000);
static_assert(offsetof(FAutomationEvent, Message) == 0x0008);
static_assert(offsetof(FAutomationEvent, Context) == 0x0018);
static_assert(offsetof(FAutomationEvent, Artifact) == 0x0028);
static_assert(offsetof(FAutomationExecutionEntry, Event) == 0x0000);
static_assert(offsetof(FAutomationExecutionEntry, Filename) == 0x0038);
static_assert(offsetof(FAutomationExecutionEntry, Timestamp) == 0x0050);
static_assert(offsetof(FARFilter, PackageNames) == 0x0000);
static_assert(offsetof(FARFilter, PackagePaths) == 0x0010);
static_assert(offsetof(FARFilter, ObjectPaths) == 0x0020);
static_assert(offsetof(FARFilter, ClassNames) == 0x0030);
static_assert(offsetof(FAssetBundleEntry, BundleName) == 0x0000);
static_assert(offsetof(FAssetBundleEntry, BundleAssets) == 0x0008);
static_assert(offsetof(FAssetBundleData, Bundles) == 0x0000);
static_assert(offsetof(FAssetData, ObjectPath) == 0x0000);
static_assert(offsetof(FAssetData, PackageName) == 0x0008);
static_assert(offsetof(FAssetData, PackagePath) == 0x0010);
static_assert(offsetof(FAssetData, AssetName) == 0x0018);
static_assert(offsetof(FAssetData, AssetClass) == 0x0020);
static_assert(offsetof(FTestUninitializedScriptStructMembersTest, UninitializedObjectReference) == 0x0000);
static_assert(offsetof(FTestUninitializedScriptStructMembersTest, InitializedObjectReference) == 0x0008);
