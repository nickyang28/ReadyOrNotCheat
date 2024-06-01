
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Renderer

/// Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class ULightPropagationVolumeBlendable : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FLightPropagationVolumeSettings                    Settings;                                                   // 0x0030   (0x0040)  
	float                                              BlendWeight;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

static_assert(sizeof(ULightPropagationVolumeBlendable) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(ULightPropagationVolumeBlendable, Settings) == 0x0030);
