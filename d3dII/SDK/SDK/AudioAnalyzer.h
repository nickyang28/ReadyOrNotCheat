
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioAnalyzer.AudioAnalyzerAsset
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAudioAnalyzerAsset : public UObject
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{ 
public:
	class USoundWave*                                  Sound;                                                      // 0x0028   (0x0008)  
	float                                              DurationInSeconds;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x44];                                      // 0x0034   (0x0044)  MISSED
};

static_assert(sizeof(UAudioAnalyzerAsset) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerNRT) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 0x0028);
