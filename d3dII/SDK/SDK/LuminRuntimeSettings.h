
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/LuminRuntimeSettings.ELuminPrivilege
/// Size: 0x01 (1 bytes)
enum class ELuminPrivilege : uint8_t
{
	ELuminPrivilege__Invalid                                                         = 0,
	ELuminPrivilege__BatteryInfo                                                     = 1,
	ELuminPrivilege__CameraCapture                                                   = 2,
	ELuminPrivilege__ComputerVision                                                  = 3,
	ELuminPrivilege__WorldReconstruction                                             = 4,
	ELuminPrivilege__InAppPurchase                                                   = 5,
	ELuminPrivilege__AudioCaptureMic                                                 = 6,
	ELuminPrivilege__DrmCertificates                                                 = 7,
	ELuminPrivilege__Occlusion                                                       = 8,
	ELuminPrivilege__LowLatencyLightwear                                             = 9,
	ELuminPrivilege__Internet                                                        = 10,
	ELuminPrivilege__IdentityRead                                                    = 11,
	ELuminPrivilege__BackgroundDownload                                              = 12,
	ELuminPrivilege__BackgroundUpload                                                = 13,
	ELuminPrivilege__MediaDrm                                                        = 14,
	ELuminPrivilege__Media                                                           = 15,
	ELuminPrivilege__MediaMetadata                                                   = 16,
	ELuminPrivilege__PowerInfo                                                       = 17,
	ELuminPrivilege__LocalAreaNetwork                                                = 18,
	ELuminPrivilege__VoiceInput                                                      = 19,
	ELuminPrivilege__Documents                                                       = 20,
	ELuminPrivilege__ConnectBackgroundMusicService                                   = 21,
	ELuminPrivilege__RegisterBackgroundMusicService                                  = 22,
	ELuminPrivilege__PcfRead                                                         = 23,
	ELuminPrivilege__PwFoundObjRead                                                  = 23,
	ELuminPrivilege__NormalNotificationsUsage                                        = 24,
	ELuminPrivilege__MusicService                                                    = 25,
	ELuminPrivilege__ControllerPose                                                  = 26,
	ELuminPrivilege__GesturesSubscribe                                               = 27,
	ELuminPrivilege__GesturesConfig                                                  = 28,
	ELuminPrivilege__AddressBookRead                                                 = 29,
	ELuminPrivilege__AddressBookWrite                                                = 30,
	ELuminPrivilege__AddressBookBasicAccess                                          = 31,
	ELuminPrivilege__CoarseLocation                                                  = 32,
	ELuminPrivilege__FineLocation                                                    = 33,
	ELuminPrivilege__HandMesh                                                        = 34,
	ELuminPrivilege__WifiStatusRead                                                  = 35,
	ELuminPrivilege__SocialConnectionsInvitesAccess                                  = 36,
	ELuminPrivilege__SocialConnectionsSelectAccess                                   = 37,
	ELuminPrivilege__SecureBrowserWindow                                             = 38,
	ELuminPrivilege__BluetoothAdapterExternalApp                                     = 39,
	ELuminPrivilege__BluetoothAdapterUser                                            = 40,
	ELuminPrivilege__BluetoothGattWrite                                              = 41
};

/// Enum /Script/LuminRuntimeSettings.ELuminFrameTimingHint
/// Size: 0x01 (1 bytes)
enum class ELuminFrameTimingHint : uint8_t
{
	ELuminFrameTimingHint__Unspecified                                               = 0,
	ELuminFrameTimingHint__Maximum                                                   = 1,
	ELuminFrameTimingHint__FPS                                                       = 2,
	ELuminFrameTimingHint__FPS4                                                      = 3
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentType
/// Size: 0x01 (1 bytes)
enum class ELuminComponentType : uint8_t
{
	ELuminComponentType__Universe                                                    = 0,
	ELuminComponentType__Fullscreen                                                  = 1,
	ELuminComponentType__SearchProvider                                              = 2,
	ELuminComponentType__MusicService                                                = 3,
	ELuminComponentType__Console                                                     = 4,
	ELuminComponentType__SystemUI                                                    = 5
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentSubElementType
/// Size: 0x01 (1 bytes)
enum class ELuminComponentSubElementType : uint8_t
{
	ELuminComponentSubElementType__FileExtension                                     = 0,
	ELuminComponentSubElementType__MimeType                                          = 1,
	ELuminComponentSubElementType__Mode                                              = 2,
	ELuminComponentSubElementType__MusicAttribute                                    = 3,
	ELuminComponentSubElementType__Schema                                            = 4
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FLocalizedIconInfo
{ 
	FString                                            LanguageCode;                                               // 0x0000   (0x0010)  
	FDirectoryPath                                     IconModelPath;                                              // 0x0010   (0x0010)  
	FDirectoryPath                                     IconPortalPath;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfos
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLocalizedIconInfos
{ 
	TArray<FLocalizedIconInfo>                         IconData;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentSubElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FLuminComponentSubElement
{ 
	ELuminComponentSubElementType                      ElementType;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentElement
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FLuminComponentElement
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            VisibleName;                                                // 0x0010   (0x0010)  
	FString                                            ExecutableName;                                             // 0x0020   (0x0010)  
	ELuminComponentType                                ComponentType;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FLuminComponentSubElement>                  ExtraComponentSubElements;                                  // 0x0038   (0x0010)  
};

/// Struct /Script/LuminRuntimeSettings.LocalizedAppName
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FLocalizedAppName
{ 
	FString                                            LanguageCode;                                               // 0x0000   (0x0010)  
	FString                                            AppName;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/LuminRuntimeSettings.LuminRuntimeSettings
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000148) align 8 pad: 0x0000
class ULuminRuntimeSettings : public UObject
{ 
public:
	FString                                            PackageName;                                                // 0x0028   (0x0010)  
	FString                                            ApplicationDisplayName;                                     // 0x0038   (0x0010)  
	ELuminFrameTimingHint                              FrameTimingHint;                                            // 0x0048   (0x0001)  
	bool                                               bProtectedContent;                                          // 0x0049   (0x0001)  
	bool                                               bManualCallToAppReady;                                      // 0x004A   (0x0001)  
	bool                                               bUseMobileRendering;                                        // 0x004B   (0x0001)  
	bool                                               bUseVulkan;                                                 // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFilePath                                          Certificate;                                                // 0x0050   (0x0010)  
	FDirectoryPath                                     IconModelPath;                                              // 0x0060   (0x0010)  
	FDirectoryPath                                     IconPortalPath;                                             // 0x0070   (0x0010)  
	FLocalizedIconInfos                                LocalizedIconInfos;                                         // 0x0080   (0x0010)  
	int32_t                                            VersionCode;                                                // 0x0090   (0x0004)  
	int32_t                                            MinimumAPILevel;                                            // 0x0094   (0x0004)  
	TArray<ELuminPrivilege>                            AppPrivileges;                                              // 0x0098   (0x0010)  
	TArray<FLuminComponentSubElement>                  ExtraComponentSubElements;                                  // 0x00A8   (0x0010)  
	TArray<FLuminComponentElement>                     ExtraComponentElements;                                     // 0x00B8   (0x0010)  
	FString                                            SpatializationPlugin;                                       // 0x00C8   (0x0010)  
	FString                                            ReverbPlugin;                                               // 0x00D8   (0x0010)  
	FString                                            OcclusionPlugin;                                            // 0x00E8   (0x0010)  
	int32_t                                            SoundCueCookQualityIndex;                                   // 0x00F8   (0x0004)  
	bool                                               bRemoveDebugInfo;                                           // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FDirectoryPath                                     VulkanValidationLayerLibs;                                  // 0x0100   (0x0010)  
	bool                                               bFrameVignette;                                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	TArray<FLocalizedAppName>                          LocalizedAppNames;                                          // 0x0118   (0x0010)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0128   (0x0020)  MISSED
};

static_assert(sizeof(FLocalizedIconInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLocalizedIconInfos) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLuminComponentSubElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLuminComponentElement) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FLocalizedAppName) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ULuminRuntimeSettings) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(offsetof(FLocalizedIconInfo, LanguageCode) == 0x0000);
static_assert(offsetof(FLocalizedIconInfo, IconModelPath) == 0x0010);
static_assert(offsetof(FLocalizedIconInfo, IconPortalPath) == 0x0020);
static_assert(offsetof(FLocalizedIconInfos, IconData) == 0x0000);
static_assert(offsetof(FLuminComponentSubElement, ElementType) == 0x0000);
static_assert(offsetof(FLuminComponentSubElement, Value) == 0x0008);
static_assert(offsetof(FLuminComponentElement, Name) == 0x0000);
static_assert(offsetof(FLuminComponentElement, VisibleName) == 0x0010);
static_assert(offsetof(FLuminComponentElement, ExecutableName) == 0x0020);
static_assert(offsetof(FLuminComponentElement, ComponentType) == 0x0030);
static_assert(offsetof(FLuminComponentElement, ExtraComponentSubElements) == 0x0038);
static_assert(offsetof(FLocalizedAppName, LanguageCode) == 0x0000);
static_assert(offsetof(FLocalizedAppName, AppName) == 0x0010);
static_assert(offsetof(ULuminRuntimeSettings, PackageName) == 0x0028);
static_assert(offsetof(ULuminRuntimeSettings, ApplicationDisplayName) == 0x0038);
static_assert(offsetof(ULuminRuntimeSettings, FrameTimingHint) == 0x0048);
static_assert(offsetof(ULuminRuntimeSettings, Certificate) == 0x0050);
static_assert(offsetof(ULuminRuntimeSettings, IconModelPath) == 0x0060);
static_assert(offsetof(ULuminRuntimeSettings, IconPortalPath) == 0x0070);
static_assert(offsetof(ULuminRuntimeSettings, LocalizedIconInfos) == 0x0080);
static_assert(offsetof(ULuminRuntimeSettings, AppPrivileges) == 0x0098);
static_assert(offsetof(ULuminRuntimeSettings, ExtraComponentSubElements) == 0x00A8);
static_assert(offsetof(ULuminRuntimeSettings, ExtraComponentElements) == 0x00B8);
static_assert(offsetof(ULuminRuntimeSettings, SpatializationPlugin) == 0x00C8);
static_assert(offsetof(ULuminRuntimeSettings, ReverbPlugin) == 0x00D8);
static_assert(offsetof(ULuminRuntimeSettings, OcclusionPlugin) == 0x00E8);
static_assert(offsetof(ULuminRuntimeSettings, VulkanValidationLayerLibs) == 0x0100);
static_assert(offsetof(ULuminRuntimeSettings, LocalizedAppNames) == 0x0118);
