
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: LiveLinkInterface

/// Enum /Script/MagicLeapHandTracking.EMagicLeapGestureTransformSpace
/// Size: 0x01 (1 bytes)
enum class EMagicLeapGestureTransformSpace : uint8_t
{
	EMagicLeapGestureTransformSpace__World                                           = 0,
	EMagicLeapGestureTransformSpace__Hand                                            = 1,
	EMagicLeapGestureTransformSpace__Tracking                                        = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
{
	EMagicLeapHandTrackingGestureFilterLevel__NoFilter                               = 0,
	EMagicLeapHandTrackingGestureFilterLevel__SlightRobustnessToFlicker              = 1,
	EMagicLeapHandTrackingGestureFilterLevel__MoreRobustnessToFlicker                = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
{
	EMagicLeapHandTrackingKeypointFilterLevel__NoFilter                              = 0,
	EMagicLeapHandTrackingKeypointFilterLevel__SimpleSmoothing                       = 1,
	EMagicLeapHandTrackingKeypointFilterLevel__PredictiveSmoothing                   = 2
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingGesture
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingGesture : uint8_t
{
	EMagicLeapHandTrackingGesture__Finger                                            = 0,
	EMagicLeapHandTrackingGesture__Fist                                              = 1,
	EMagicLeapHandTrackingGesture__Pinch                                             = 2,
	EMagicLeapHandTrackingGesture__Thumb                                             = 3,
	EMagicLeapHandTrackingGesture__L                                                 = 4,
	EMagicLeapHandTrackingGesture__OpenHand                                          = 5,
	EMagicLeapHandTrackingGesture__OpenHandBack                                      = 5,
	EMagicLeapHandTrackingGesture__Ok                                                = 6,
	EMagicLeapHandTrackingGesture__C                                                 = 7,
	EMagicLeapHandTrackingGesture__NoPose                                            = 8,
	EMagicLeapHandTrackingGesture__NoHand                                            = 9
};

/// Enum /Script/MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHandTrackingKeypoint : uint8_t
{
	EMagicLeapHandTrackingKeypoint__Thumb_Tip                                        = 0,
	EMagicLeapHandTrackingKeypoint__Thumb_IP                                         = 1,
	EMagicLeapHandTrackingKeypoint__Thumb_MCP                                        = 2,
	EMagicLeapHandTrackingKeypoint__Thumb_CMC                                        = 3,
	EMagicLeapHandTrackingKeypoint__Index_Tip                                        = 4,
	EMagicLeapHandTrackingKeypoint__Index_DIP                                        = 5,
	EMagicLeapHandTrackingKeypoint__Index_PIP                                        = 6,
	EMagicLeapHandTrackingKeypoint__Index_MCP                                        = 7,
	EMagicLeapHandTrackingKeypoint__Middle_Tip                                       = 8,
	EMagicLeapHandTrackingKeypoint__Middle_DIP                                       = 9,
	EMagicLeapHandTrackingKeypoint__Middle_PIP                                       = 10,
	EMagicLeapHandTrackingKeypoint__Middle_MCP                                       = 11,
	EMagicLeapHandTrackingKeypoint__Ring_Tip                                         = 12,
	EMagicLeapHandTrackingKeypoint__Ring_DIP                                         = 13,
	EMagicLeapHandTrackingKeypoint__Ring_PIP                                         = 14,
	EMagicLeapHandTrackingKeypoint__Ring_MCP                                         = 15,
	EMagicLeapHandTrackingKeypoint__Pinky_Tip                                        = 16,
	EMagicLeapHandTrackingKeypoint__Pinky_DIP                                        = 17,
	EMagicLeapHandTrackingKeypoint__Pinky_PIP                                        = 18,
	EMagicLeapHandTrackingKeypoint__Pinky_MCP                                        = 19,
	EMagicLeapHandTrackingKeypoint__Wrist_Center                                     = 20,
	EMagicLeapHandTrackingKeypoint__Wrist_Ulnar                                      = 21,
	EMagicLeapHandTrackingKeypoint__Wrist_Radial                                     = 22,
	EMagicLeapHandTrackingKeypoint__Hand_Center                                      = 23
};

/// Class /Script/MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{ 
public:
};

/// Class /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
	// void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);                       // [0x1a31fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
	// bool SetConfiguration(TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled); // [0x1a31e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
	// bool IsHoldingControl(EControllerHand hand);                                                                             // [0x1a31da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
	// float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);                                        // [0x1a31d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
	// bool GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource); // [0x1a31c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
	// bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle);                                        // [0x1a31b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
	// bool GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary);       // [0x1a319e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
	// bool GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint);                    // [0x1a31900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
	// bool GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer);   // [0x1a317a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
	// bool GetHandCenterNormalized(EControllerHand hand, FVector& HandCenterNormalized);                                       // [0x1a316d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
	// bool GetHandCenter(EControllerHand hand, FTransform& HandCenter);                                                        // [0x1a315b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
	// bool GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform); // [0x1a31310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
	// bool GetGestureKeypoints(EControllerHand hand, TArray<FTransform>& Keypoints);                                           // [0x1a314c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
	// bool GetCurrentGestureConfidence(EControllerHand hand, float& Confidence);                                               // [0x1a31230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
	// bool GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture& Gesture);                                    // [0x1a31150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
	// bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled); // [0x1a30fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

static_assert(sizeof(ULiveLinkMagicLeapHandTrackingSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapHandTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
