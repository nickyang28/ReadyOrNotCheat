
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Struct /Script/Renderer.LightPropagationVolumeSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FLightPropagationVolumeSettings
{ 
	bool                                               bOverride_LPVIntensity : 1;                                 // 0x0000:0 (0x0001)  
	bool                                               bOverride_LPVDirectionalOcclusionIntensity : 1;             // 0x0000:1 (0x0001)  
	bool                                               bOverride_LPVDirectionalOcclusionRadius : 1;                // 0x0000:2 (0x0001)  
	bool                                               bOverride_LPVDiffuseOcclusionExponent : 1;                  // 0x0000:3 (0x0001)  
	bool                                               bOverride_LPVSpecularOcclusionExponent : 1;                 // 0x0000:4 (0x0001)  
	bool                                               bOverride_LPVDiffuseOcclusionIntensity : 1;                 // 0x0000:5 (0x0001)  
	bool                                               bOverride_LPVSpecularOcclusionIntensity : 1;                // 0x0000:6 (0x0001)  
	bool                                               bOverride_LPVSize : 1;                                      // 0x0000:7 (0x0001)  
	bool                                               bOverride_LPVSecondaryOcclusionIntensity : 1;               // 0x0001:0 (0x0001)  
	bool                                               bOverride_LPVSecondaryBounceIntensity : 1;                  // 0x0001:1 (0x0001)  
	bool                                               bOverride_LPVGeometryVolumeBias : 1;                        // 0x0001:2 (0x0001)  
	bool                                               bOverride_LPVVplInjectionBias : 1;                          // 0x0001:3 (0x0001)  
	bool                                               bOverride_LPVEmissiveInjectionIntensity : 1;                // 0x0001:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LPVIntensity;                                               // 0x0004   (0x0004)  
	float                                              LPVVplInjectionBias;                                        // 0x0008   (0x0004)  
	float                                              LPVSize;                                                    // 0x000C   (0x0004)  
	float                                              LPVSecondaryOcclusionIntensity;                             // 0x0010   (0x0004)  
	float                                              LPVSecondaryBounceIntensity;                                // 0x0014   (0x0004)  
	float                                              LPVGeometryVolumeBias;                                      // 0x0018   (0x0004)  
	float                                              LPVEmissiveInjectionIntensity;                              // 0x001C   (0x0004)  
	float                                              LPVDirectionalOcclusionIntensity;                           // 0x0020   (0x0004)  
	float                                              LPVDirectionalOcclusionRadius;                              // 0x0024   (0x0004)  
	float                                              LPVDiffuseOcclusionExponent;                                // 0x0028   (0x0004)  
	float                                              LPVSpecularOcclusionExponent;                               // 0x002C   (0x0004)  
	float                                              LPVDiffuseOcclusionIntensity;                               // 0x0030   (0x0004)  
	float                                              LPVSpecularOcclusionIntensity;                              // 0x0034   (0x0004)  
	float                                              LPVFadeRange;                                               // 0x0038   (0x0004)  
	float                                              LPVDirectionalOcclusionFadeRange;                           // 0x003C   (0x0004)  
};

static_assert(sizeof(FLightPropagationVolumeSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
