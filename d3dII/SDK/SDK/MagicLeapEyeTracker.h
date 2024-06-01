
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None                                     = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad                                      = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good                                     = 2
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected                                        = 0,
	EMagicLeapEyeTrackingStatus__Disabled                                            = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent                                      = 2,
	EMagicLeapEyeTrackingStatus__UserPresent                                         = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow                        = 4
};

/// Class /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
	// bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);                                                              // [0x1a26710] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
	// EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();                                                           // [0x1a266e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeapEyeTracker.MagicLeapEyeBlinkState
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 pad: 0x0000
struct FMagicLeapEyeBlinkState
{ 
	bool                                               LeftEyeBlinked;                                             // 0x0000   (0x0001)  
	bool                                               RightEyeBlinked;                                            // 0x0001   (0x0001)  
};

static_assert(sizeof(UMagicLeapEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapEyeBlinkState) == 0x0002); // 2 bytes (0x000000 - 0x000002)
