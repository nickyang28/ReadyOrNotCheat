
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
/// Size: 0x01 (1 bytes)
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	EMagicLeapLightEstimationCamera__Left                                            = 0,
	EMagicLeapLightEstimationCamera__Right                                           = 1,
	EMagicLeapLightEstimationCamera__FarLeft                                         = 2,
	EMagicLeapLightEstimationCamera__FarRight                                        = 3
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
/// Size: 0x0010 (16 bytes) (0x0000B0 - 0x0000C0) align 8 pad: 0x0000
class UMagicLeapLightingTrackingComponent : public UActorComponent
{ 
public:
	bool                                               UseGlobalAmbience;                                          // 0x00B0   (0x0001)  
	bool                                               UseColorTemp;                                               // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x00B2   (0x000E)  MISSED
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	// bool IsTrackerValid();                                                                                                   // [0x1a4df70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	// bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);                    // [0x1a4dec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	// bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);                             // [0x1a4de10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	// void DestroyTracker();                                                                                                   // [0x1a4ddf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
	// bool CreateTracker();                                                                                                    // [0x1a4ddc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FMagicLeapLightEstimationColorTemperatureState
{ 
	float                                              ColorTemperatureKelvin;                                     // 0x0000   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0004   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapLightEstimationAmbientGlobalState
{ 
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0000   (0x0010)  
	FTimespan                                          Timestamp;                                                  // 0x0010   (0x0008)  
};

static_assert(sizeof(UMagicLeapLightingTrackingComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UMagicLeapLightEstimationFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapLightEstimationColorTemperatureState) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapLightEstimationAmbientGlobalState) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, AmbientColor) == 0x0004);
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, Timestamp) == 0x0018);
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, AmbientIntensityNits) == 0x0000);
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, Timestamp) == 0x0010);
