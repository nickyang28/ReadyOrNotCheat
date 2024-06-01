
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioExtensions
/// dependency: CoreUObject

/// Class /Script/SoundFields.AmbisonicsEncodingSettings
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{ 
public:
	int32_t                                            AmbisonicsOrder;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

static_assert(sizeof(UAmbisonicsEncodingSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
