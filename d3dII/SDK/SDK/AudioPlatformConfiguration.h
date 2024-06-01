
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/AudioPlatformConfiguration.ESoundwaveSampleRateSettings
/// Size: 0x01 (1 bytes)
enum class ESoundwaveSampleRateSettings : uint8_t
{
	ESoundwaveSampleRateSettings__Max                                                = 0,
	ESoundwaveSampleRateSettings__High                                               = 1,
	ESoundwaveSampleRateSettings__Medium                                             = 2,
	ESoundwaveSampleRateSettings__Low                                                = 3,
	ESoundwaveSampleRateSettings__Min                                                = 4,
	ESoundwaveSampleRateSettings__MatchDevice                                        = 5
};

/// Struct /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FPlatformRuntimeAudioCompressionOverrides
{ 
	bool                                               bOverrideCompressionTimes;                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DurationThreshold;                                          // 0x0004   (0x0004)  
	int32_t                                            MaxNumRandomBranches;                                       // 0x0008   (0x0004)  
	int32_t                                            SoundCueQualityIndex;                                       // 0x000C   (0x0004)  
};

static_assert(sizeof(FPlatformRuntimeAudioCompressionOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
