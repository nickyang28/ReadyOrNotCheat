
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x01 (1 bytes)
enum class UDLSSMode : uint8_t
{
	UDLSSMode__Off                                                                   = 0,
	UDLSSMode__Auto                                                                  = 1,
	UDLSSMode__DLAA                                                                  = 2,
	UDLSSMode__UltraQuality                                                          = 3,
	UDLSSMode__Quality                                                               = 4,
	UDLSSMode__Balanced                                                              = 5,
	UDLSSMode__Performance                                                           = 6,
	UDLSSMode__UltraPerformance                                                      = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x01 (1 bytes)
enum class UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported                                                          = 0,
	UDLSSSupport__NotSupported                                                       = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware                                   = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate                                        = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate                               = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime                                  = 5,
	UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive                       = 6
};

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	// void SetDLSSSharpness(float Sharpness);                                                                                  // [0xb27690] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
	// void SetDLSSMode(UDLSSMode DLSSMode);                                                                                    // [0xb27620] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	// UDLSSSupport QueryDLSSSupport();                                                                                         // [0xb275f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
	// UDLSSSupport QueryDLSSRRSupport();                                                                                       // [0xb275c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	// bool IsDLSSSupported();                                                                                                  // [0xb27590] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
	// bool IsDLSSRRSupported();                                                                                                // [0xb27560] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
	// bool IsDLSSRREnabled();                                                                                                  // [0xb27530] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	// bool IsDLSSModeSupported(UDLSSMode DLSSMode);                                                                            // [0xb274b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	// bool IsDLSSEnabled();                                                                                                    // [0xb27480] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	// bool IsDLAAEnabled();                                                                                                    // [0xb27450] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	// TArray<UDLSSMode> GetSupportedDLSSModes();                                                                               // [0xb273d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	// float GetDLSSSharpness();                                                                                                // [0xb27370] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	// void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);                               // [0xb27290] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
	// void GetDLSSRRMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                      // [0xb271b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	// void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // [0xb26f10] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
	// UDLSSMode GetDLSSMode();                                                                                                 // [0xb26ee0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	// void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                        // [0xb26e00] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	// UDLSSMode GetDefaultDLSSMode();                                                                                          // [0xb273a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSSRR
	// void EnableDLSSRR(bool bEnabled);                                                                                        // [0xb26d80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
	// void EnableDLSS(bool bEnabled);                                                                                          // [0xb26d00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
	// void EnableDLAA(bool bEnabled);                                                                                          // [0xb26c80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
