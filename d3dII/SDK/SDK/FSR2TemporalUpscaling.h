
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
/// Size: 0x04 (4 bytes)
enum class EFSR2LandscapeHISMMode : uint32_t
{
	EFSR2LandscapeHISMMode__Off                                                      = 0,
	EFSR2LandscapeHISMMode__AllStatic                                                = 1,
	EFSR2LandscapeHISMMode__StaticWPO                                                = 2
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2DeDitherMode
/// Size: 0x04 (4 bytes)
enum class EFSR2DeDitherMode : uint32_t
{
	EFSR2DeDitherMode__Off                                                           = 0,
	EFSR2DeDitherMode__Full                                                          = 1,
	EFSR2DeDitherMode__HairOnly                                                      = 2
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2HistoryFormat
/// Size: 0x04 (4 bytes)
enum class EFSR2HistoryFormat : uint32_t
{
	EFSR2HistoryFormat__FloatRGBA                                                    = 0,
	EFSR2HistoryFormat__FloatR11G11B10                                               = 1
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2QualityMode
/// Size: 0x04 (4 bytes)
enum class EFSR2QualityMode : uint32_t
{
	EFSR2QualityMode__Unused                                                         = 0,
	EFSR2QualityMode__Quality                                                        = 1,
	EFSR2QualityMode__Balanced                                                       = 2,
	EFSR2QualityMode__Performance                                                    = 3,
	EFSR2QualityMode__UltraPerformance                                               = 4
};

/// Class /Script/FSR2TemporalUpscaling.FSR2Settings
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000090) align 8 pad: 0x0000
class UFSR2Settings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               AutoExposure;                                               // 0x0039   (0x0001)  
	bool                                               EnabledInEditorViewport;                                    // 0x003A   (0x0001)  
	bool                                               UseSSRExperimentalDenoiser;                                 // 0x003B   (0x0001)  
	bool                                               UseNativeDX12;                                              // 0x003C   (0x0001)  
	bool                                               UseNativeVulkan;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	EFSR2QualityMode                                   QualityMode;                                                // 0x0040   (0x0004)  
	EFSR2HistoryFormat                                 HistoryFormat;                                              // 0x0044   (0x0004)  
	EFSR2DeDitherMode                                  DeDither;                                                   // 0x0048   (0x0004)  
	float                                              Sharpness;                                                  // 0x004C   (0x0004)  
	bool                                               AdjustMipBias;                                              // 0x0050   (0x0001)  
	bool                                               ReactiveMask;                                               // 0x0051   (0x0001)  
	bool                                               ForceVertexDeformationOutputsVelocity;                      // 0x0052   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0053   (0x0001)  MISSED
	EFSR2LandscapeHISMMode                             ForceLandscapeHISMMobility;                                 // 0x0054   (0x0004)  
	float                                              ReflectionScale;                                            // 0x0058   (0x0004)  
	float                                              ReflectionLuminanceBias;                                    // 0x005C   (0x0004)  
	float                                              RoughnessScale;                                             // 0x0060   (0x0004)  
	float                                              RoughnessBias;                                              // 0x0064   (0x0004)  
	float                                              RoughnessMaxDistance;                                       // 0x0068   (0x0004)  
	bool                                               ReactiveMaskRoughnessForceMaxDistance;                      // 0x006C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              TranslucencyBias;                                           // 0x0070   (0x0004)  
	float                                              TranslucencyLuminanceBias;                                  // 0x0074   (0x0004)  
	float                                              TranslucencyMaxDistance;                                    // 0x0078   (0x0004)  
	float                                              PreDOFTranslucencyScale;                                    // 0x007C   (0x0004)  
	bool                                               PreDOFTranslucencyMax;                                      // 0x0080   (0x0001)  
	TEnumAsByte<EMaterialShadingModel>                 ReactiveShadingModelID;                                     // 0x0081   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0082   (0x0002)  MISSED
	float                                              ForceReactiveMaterialValue;                                 // 0x0084   (0x0004)  
	float                                              ReactiveHistoryTranslucencyBias;                            // 0x0088   (0x0004)  
	float                                              ReactiveHistoryTranslucencyLumaBias;                        // 0x008C   (0x0004)  
};

static_assert(sizeof(UFSR2Settings) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(offsetof(UFSR2Settings, QualityMode) == 0x0040);
static_assert(offsetof(UFSR2Settings, HistoryFormat) == 0x0044);
static_assert(offsetof(UFSR2Settings, DeDither) == 0x0048);
static_assert(offsetof(UFSR2Settings, ForceLandscapeHISMMobility) == 0x0054);
static_assert(offsetof(UFSR2Settings, ReactiveShadingModelID) == 0x0081);
