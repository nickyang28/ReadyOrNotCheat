
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/DLSS.EDLSSPreset
/// Size: 0x01 (1 bytes)
enum class EDLSSPreset : uint8_t
{
	EDLSSPreset__Default                                                             = 0,
	EDLSSPreset__A                                                                   = 1,
	EDLSSPreset__B                                                                   = 2,
	EDLSSPreset__C                                                                   = 3,
	EDLSSPreset__D                                                                   = 4,
	EDLSSPreset__E                                                                   = 5,
	EDLSSPreset__F                                                                   = 6,
	EDLSSPreset__G                                                                   = 7
};

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x01 (1 bytes)
enum class EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled                                                    = 0,
	EDLSSSettingOverride__Disabled                                                   = 1,
	EDLSSSettingOverride__UseProjectSettings                                         = 2
};

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UDLSSOverrideSettings : public UObject
{ 
public:
	EDLSSSettingOverride                               EnableDLSSInEditorViewportsOverride;                        // 0x0028   (0x0001)  
	EDLSSSettingOverride                               EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x0029   (0x0001)  
	EDLSSSettingOverride                               EnableDLSSInPlayInEditorViewportsOverride;                  // 0x002A   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x002B   (0x0001)  
	EDLSSSettingOverride                               ShowDLSSSDebugOnScreenMessages;                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UDLSSSettings : public UObject
{ 
public:
	bool                                               bEnableDLSSD3D12;                                           // 0x0028   (0x0001)  
	bool                                               bEnableDLSSD3D11;                                           // 0x0029   (0x0001)  
	bool                                               bEnableDLSSVulkan;                                          // 0x002A   (0x0001)  
	bool                                               bEnableDLSSInEditorViewports;                               // 0x002B   (0x0001)  
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports;   // 0x002C   (0x0001)  
	bool                                               bEnableDLSSInPlayInEditorViewports;                         // 0x002D   (0x0001)  
	bool                                               bShowDLSSSDebugOnScreenMessages;                            // 0x002E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002F   (0x0001)  MISSED
	FString                                            GenericDLSSBinaryPath;                                      // 0x0030   (0x0010)  
	bool                                               bGenericDLSSBinaryExists;                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           NVIDIANGXApplicationId;                                     // 0x0044   (0x0004)  
	FString                                            CustomDLSSBinaryPath;                                       // 0x0048   (0x0010)  
	bool                                               bCustomDLSSBinaryExists;                                    // 0x0058   (0x0001)  
	bool                                               bAllowOTAUpdate;                                            // 0x0059   (0x0001)  
	EDLSSPreset                                        DLAAPreset;                                                 // 0x005A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x005B   (0x0001)  MISSED
	EDLSSPreset                                        DLSSQualityPreset;                                          // 0x005C   (0x0001)  
	EDLSSPreset                                        DLSSBalancedPreset;                                         // 0x005D   (0x0001)  
	EDLSSPreset                                        DLSSPerformancePreset;                                      // 0x005E   (0x0001)  
	EDLSSPreset                                        DLSSUltraPerformancePreset;                                 // 0x005F   (0x0001)  
};

static_assert(sizeof(UDLSSOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDLSSSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UDLSSOverrideSettings, EnableScreenpercentageManipulationInDLSSEditorViewportsOverride) == 0x0029);
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x002A);
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x002C);
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x0030);
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x0048);
static_assert(offsetof(UDLSSSettings, DLAAPreset) == 0x005A);
static_assert(offsetof(UDLSSSettings, DLSSQualityPreset) == 0x005C);
static_assert(offsetof(UDLSSSettings, DLSSBalancedPreset) == 0x005D);
static_assert(offsetof(UDLSSSettings, DLSSPerformancePreset) == 0x005E);
static_assert(offsetof(UDLSSSettings, DLSSUltraPerformancePreset) == 0x005F);
