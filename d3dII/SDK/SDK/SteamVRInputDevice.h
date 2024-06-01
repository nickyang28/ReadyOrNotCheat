
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/SteamVRInputDevice.ESkeletalSummaryDataType
/// Size: 0x01 (1 bytes)
enum class ESkeletalSummaryDataType : uint8_t
{
	ESkeletalSummaryDataType__VR_SummaryType_FromAnimation                           = 0,
	ESkeletalSummaryDataType__VR_SummaryType_FromDevice                              = 1
};

/// Enum /Script/SteamVRInputDevice.ESteamVRInputStringBits
/// Size: 0x01 (1 bytes)
enum class ESteamVRInputStringBits : uint8_t
{
	ESteamVRInputStringBits__VR_InputString_Hand                                     = 0,
	ESteamVRInputStringBits__VR_InputString_ControllerType                           = 1,
	ESteamVRInputStringBits__VR_InputString_InputSource                              = 2,
	ESteamVRInputStringBits__VR_InputString_All                                      = 3
};

/// Enum /Script/SteamVRInputDevice.EControllerFidelity
/// Size: 0x01 (1 bytes)
enum class EControllerFidelity : uint8_t
{
	EControllerFidelity__VR_ControllerFidelity_Estimated                             = 0,
	EControllerFidelity__VR_ControllerFidelity_Full                                  = 1,
	EControllerFidelity__VR_ControllerFidelity_Partial                               = 2
};

/// Enum /Script/SteamVRInputDevice.EHandSkeleton
/// Size: 0x01 (1 bytes)
enum class EHandSkeleton : uint8_t
{
	EHandSkeleton__VR_SteamVRHandSkeleton                                            = 0,
	EHandSkeleton__VR_UE4HandSkeleton                                                = 1
};

/// Enum /Script/SteamVRInputDevice.EHand
/// Size: 0x01 (1 bytes)
enum class EHand : uint8_t
{
	EHand__VR_LeftHand                                                               = 0,
	EHand__VR_RightHand                                                              = 1
};

/// Enum /Script/SteamVRInputDevice.EMotionRange
/// Size: 0x01 (1 bytes)
enum class EMotionRange : uint8_t
{
	EMotionRange__VR_WithoutController                                               = 0,
	EMotionRange__VR_WithController                                                  = 1
};

/// Enum /Script/SteamVRInputDevice.ESteamVRHand
/// Size: 0x01 (1 bytes)
enum class ESteamVRHand : uint8_t
{
	ESteamVRHand__VR_Left                                                            = 0,
	ESteamVRHand__VR_Right                                                           = 1
};

/// Class /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
	// void ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet);                         // [0xa17b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
	// void ShowAllSteamVR_ActionOrigins();                                                                                     // [0xa17b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
	// float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);                                                          // [0xa17ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
	// void SetPoseSource(bool bUseSkeletonPose);                                                                               // [0xa17a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
	// void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);                                              // [0xa17990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
	// bool ResetSeatedPosition();                                                                                              // [0xa17960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
	// void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude); // [0xa177c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
	// float GetUserIPD();                                                                                                      // [0xa17770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
	// bool GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo& InputOriginInfo);         // [0xa175e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
	// void GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, FString& OriginLocalizedName); // [0xa173f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
	// TArray<FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle);                        // [0xa172a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
	// bool GetSteamVR_HandPoseRelativeToNow(FVector& position, FRotator& Orientation, ESteamVRHand hand, float PredictedSecondsFromNow); // [0xa17130] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
	// float GetSteamVR_GlobalPredictedSecondsFromNow();                                                                        // [0xa17100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
	// void GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet>& SteamVRActionSets);                                            // [0xa17040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
	// void GetSteamVR_ActionArray(TArray<FSteamVRAction>& SteamVRActions);                                                     // [0xa16f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
	// void GetSkeletalTransform(FSteamVRSkeletonTransform& LeftHand, FSteamVRSkeletonTransform& RightHand, bool bWithController); // [0xa16e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
	// void GetSkeletalState(bool& LeftHandState, bool& RightHandState);                                                        // [0xa16d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
	// void GetRightHandPoseData(FVector& position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);        // [0xa16bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
	// void GetPoseSource(bool& bUsingSkeletonPose);                                                                            // [0xa16b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
	// void GetLeftHandPoseData(FVector& position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);         // [0xa169b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
	// void GetFingerCurlsAndSplays(EHand hand, FSteamVRFingerCurls& FingerCurls, FSteamVRFingerSplays& FingerSplays, ESkeletalSummaryDataType SummaryDataType); // [0xa16830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
	// void GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState);                                                  // [0xa16750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
	// void GetControllerFidelity(EControllerFidelity& LeftControllerFidelity, EControllerFidelity& RightControllerFidelity);   // [0xa16670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
	// void FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool& bResult, FSteamVRInputOriginInfo& InputOriginInfo, FName ActionSet); // [0xa164e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
	// TArray<FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet);                        // [0xa163d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
	// bool FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet);                                                        // [0xa16300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
	// void FindSteamVR_Action(FName ActionName, bool& bResult, FSteamVRAction& FoundAction, FSteamVRActionSet& FoundActionSet, FName ActionSet); // [0xa16120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamVRInputDevice.SteamVRTrackingReferences
/// Size: 0x0058 (88 bytes) (0x0000B0 - 0x000108) align 8 pad: 0x0000
class USteamVRTrackingReferences : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1941) /* FMulticastInlineDelegate */ __um(OnTrackedDeviceActivated);                          // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1942) /* FMulticastInlineDelegate */ __um(OnTrackedDeviceDeactivated);                        // 0x00C0   (0x0010)  
	float                                              ActiveDevicePollFrequency;                                  // 0x00D0   (0x0004)  
	FVector                                            TrackingReferenceScale;                                     // 0x00D4   (0x000C)  
	TArray<class UStaticMeshComponent*>                TrackingReferences;                                         // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
	// bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);                                                   // [0xa17d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
	// void HideTrackingReferences();                                                                                           // [0xa177a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SteamVRInputDevice.SteamVRSkeletonTransform
/// Size: 0x05D0 (1488 bytes) (0x000000 - 0x0005D0) align 16 pad: 0x0000
struct FSteamVRSkeletonTransform
{ 
	FTransform                                         Root;                                                       // 0x0000   (0x0030)  
	FTransform                                         wrist;                                                      // 0x0030   (0x0030)  
	FTransform                                         Thumb;                                                      // 0x0060   (0x0030)  
	FTransform                                         Thumb0;                                                     // 0x0090   (0x0030)  
	FTransform                                         Thumb1;                                                     // 0x00C0   (0x0030)  
	FTransform                                         Thumb2;                                                     // 0x00F0   (0x0030)  
	FTransform                                         Index;                                                      // 0x0120   (0x0030)  
	FTransform                                         Index3;                                                     // 0x0150   (0x0030)  
	FTransform                                         Index4;                                                     // 0x0180   (0x0030)  
	FTransform                                         Index5;                                                     // 0x01B0   (0x0030)  
	FTransform                                         Index6;                                                     // 0x01E0   (0x0030)  
	FTransform                                         Middle;                                                     // 0x0210   (0x0030)  
	FTransform                                         Middle7;                                                    // 0x0240   (0x0030)  
	FTransform                                         Middle8;                                                    // 0x0270   (0x0030)  
	FTransform                                         Middle9;                                                    // 0x02A0   (0x0030)  
	FTransform                                         Middle10;                                                   // 0x02D0   (0x0030)  
	FTransform                                         Ring;                                                       // 0x0300   (0x0030)  
	FTransform                                         Ring11;                                                     // 0x0330   (0x0030)  
	FTransform                                         Ring12;                                                     // 0x0360   (0x0030)  
	FTransform                                         Ring13;                                                     // 0x0390   (0x0030)  
	FTransform                                         Ring14;                                                     // 0x03C0   (0x0030)  
	FTransform                                         Pinky;                                                      // 0x03F0   (0x0030)  
	FTransform                                         Pinky15;                                                    // 0x0420   (0x0030)  
	FTransform                                         Pinky16;                                                    // 0x0450   (0x0030)  
	FTransform                                         Pinky17;                                                    // 0x0480   (0x0030)  
	FTransform                                         Pinky18;                                                    // 0x04B0   (0x0030)  
	FTransform                                         Aux_Thumb;                                                  // 0x04E0   (0x0030)  
	FTransform                                         Aux_Index;                                                  // 0x0510   (0x0030)  
	FTransform                                         Aux_Middle;                                                 // 0x0540   (0x0030)  
	FTransform                                         Aux_Ring;                                                   // 0x0570   (0x0030)  
	FTransform                                         Aux_Pinky;                                                  // 0x05A0   (0x0030)  
};

/// Struct /Script/SteamVRInputDevice.UE4RetargettingRefs
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FUE4RetargettingRefs
{ 
	bool                                               bIsInitialized;                                             // 0x0000   (0x0001)  
	bool                                               bIsRightHanded;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FVector                                            KnuckleAverageMS_UE4;                                       // 0x0004   (0x000C)  
	FVector                                            WristSideDirectionLS_UE4;                                   // 0x0010   (0x000C)  
	FVector                                            WristForwardLS_UE4;                                         // 0x001C   (0x000C)  
};

/// Struct /Script/SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
/// Size: 0x0610 (1552 bytes) (0x000010 - 0x000620) align 16 pad: 0x0000
struct FAnimNode_SteamVRInputAnimPose : FAnimNode_Base
{ 
	EMotionRange                                       MotionRange;                                                // 0x0010   (0x0001)  
	EHand                                              hand;                                                       // 0x0011   (0x0001)  
	EHandSkeleton                                      HandSkeleton;                                               // 0x0012   (0x0001)  
	bool                                               Mirror;                                                     // 0x0013   (0x0001)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FSteamVRSkeletonTransform                          SteamVRSkeletalTransform;                                   // 0x0020   (0x05D0)  
	FUE4RetargettingRefs                               UE4RetargettingRefs;                                        // 0x05F0   (0x0028)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0618   (0x0008)  MISSED
};

/// Struct /Script/SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000040) align 8 pad: 0x0000
struct FAnimNode_SteamVRSetWristTransform : FAnimNode_Base
{ 
	FPoseLink                                          ReferencePose;                                              // 0x0010   (0x0010)  
	EHandSkeleton                                      HandSkeleton;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FPoseLink                                          TargetPose;                                                 // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/SteamVRInputDevice.SteamVRInputBindingInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FSteamVRInputBindingInfo
{ 
	FName                                              DevicePathName;                                             // 0x0000   (0x0008)  
	FName                                              InputPathName;                                              // 0x0008   (0x0008)  
	FName                                              ModeName;                                                   // 0x0010   (0x0008)  
	FName                                              SlotName;                                                   // 0x0018   (0x0008)  
};

/// Struct /Script/SteamVRInputDevice.SteamVRInputOriginInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSteamVRInputOriginInfo
{ 
	int32_t                                            TrackedDeviceIndex;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            RenderModelComponentName;                                   // 0x0008   (0x0010)  
	FString                                            TrackedDeviceModel;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/SteamVRInputDevice.SteamVRActionSet
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSteamVRActionSet
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/SteamVRInputDevice.SteamVRAction
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSteamVRAction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FString                                            Path;                                                       // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/SteamVRInputDevice.SteamVRFingerSplays
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FSteamVRFingerSplays
{ 
	float                                              Thumb_Index;                                                // 0x0000   (0x0004)  
	float                                              Index_Middle;                                               // 0x0004   (0x0004)  
	float                                              Middle_Ring;                                                // 0x0008   (0x0004)  
	float                                              Ring_Pinky;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/SteamVRInputDevice.SteamVRFingerCurls
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FSteamVRFingerCurls
{ 
	float                                              Thumb;                                                      // 0x0000   (0x0004)  
	float                                              Index;                                                      // 0x0004   (0x0004)  
	float                                              Middle;                                                     // 0x0008   (0x0004)  
	float                                              Ring;                                                       // 0x000C   (0x0004)  
	float                                              Pinky;                                                      // 0x0010   (0x0004)  
};

static_assert(sizeof(USteamVRInputDeviceFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamVRTrackingReferences) == 0x0108); // 264 bytes (0x0000B0 - 0x000108)
static_assert(sizeof(FSteamVRSkeletonTransform) == 0x05D0); // 1488 bytes (0x000000 - 0x0005D0)
static_assert(sizeof(FUE4RetargettingRefs) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAnimNode_SteamVRInputAnimPose) == 0x0620); // 1568 bytes (0x000010 - 0x000620)
static_assert(sizeof(FAnimNode_SteamVRSetWristTransform) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FSteamVRInputBindingInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamVRInputOriginInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamVRActionSet) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSteamVRAction) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSteamVRFingerSplays) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSteamVRFingerCurls) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(USteamVRTrackingReferences, TrackingReferenceScale) == 0x00D4);
static_assert(offsetof(USteamVRTrackingReferences, TrackingReferences) == 0x00E0);
static_assert(offsetof(FSteamVRSkeletonTransform, Root) == 0x0000);
static_assert(offsetof(FSteamVRSkeletonTransform, wrist) == 0x0030);
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb) == 0x0060);
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb0) == 0x0090);
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb1) == 0x00C0);
static_assert(offsetof(FSteamVRSkeletonTransform, Thumb2) == 0x00F0);
static_assert(offsetof(FSteamVRSkeletonTransform, Index) == 0x0120);
static_assert(offsetof(FSteamVRSkeletonTransform, Index3) == 0x0150);
static_assert(offsetof(FSteamVRSkeletonTransform, Index4) == 0x0180);
static_assert(offsetof(FSteamVRSkeletonTransform, Index5) == 0x01B0);
static_assert(offsetof(FSteamVRSkeletonTransform, Index6) == 0x01E0);
static_assert(offsetof(FSteamVRSkeletonTransform, Middle) == 0x0210);
static_assert(offsetof(FSteamVRSkeletonTransform, Middle7) == 0x0240);
static_assert(offsetof(FSteamVRSkeletonTransform, Middle8) == 0x0270);
static_assert(offsetof(FSteamVRSkeletonTransform, Middle9) == 0x02A0);
static_assert(offsetof(FSteamVRSkeletonTransform, Middle10) == 0x02D0);
static_assert(offsetof(FSteamVRSkeletonTransform, Ring) == 0x0300);
static_assert(offsetof(FSteamVRSkeletonTransform, Ring11) == 0x0330);
static_assert(offsetof(FSteamVRSkeletonTransform, Ring12) == 0x0360);
static_assert(offsetof(FSteamVRSkeletonTransform, Ring13) == 0x0390);
static_assert(offsetof(FSteamVRSkeletonTransform, Ring14) == 0x03C0);
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky) == 0x03F0);
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky15) == 0x0420);
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky16) == 0x0450);
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky17) == 0x0480);
static_assert(offsetof(FSteamVRSkeletonTransform, Pinky18) == 0x04B0);
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Thumb) == 0x04E0);
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Index) == 0x0510);
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Middle) == 0x0540);
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Ring) == 0x0570);
static_assert(offsetof(FSteamVRSkeletonTransform, Aux_Pinky) == 0x05A0);
static_assert(offsetof(FUE4RetargettingRefs, KnuckleAverageMS_UE4) == 0x0004);
static_assert(offsetof(FUE4RetargettingRefs, WristSideDirectionLS_UE4) == 0x0010);
static_assert(offsetof(FUE4RetargettingRefs, WristForwardLS_UE4) == 0x001C);
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, MotionRange) == 0x0010);
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, hand) == 0x0011);
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, HandSkeleton) == 0x0012);
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, SteamVRSkeletalTransform) == 0x0020);
static_assert(offsetof(FAnimNode_SteamVRInputAnimPose, UE4RetargettingRefs) == 0x05F0);
static_assert(offsetof(FAnimNode_SteamVRSetWristTransform, ReferencePose) == 0x0010);
static_assert(offsetof(FAnimNode_SteamVRSetWristTransform, HandSkeleton) == 0x0020);
static_assert(offsetof(FAnimNode_SteamVRSetWristTransform, TargetPose) == 0x0028);
static_assert(offsetof(FSteamVRInputBindingInfo, DevicePathName) == 0x0000);
static_assert(offsetof(FSteamVRInputBindingInfo, InputPathName) == 0x0008);
static_assert(offsetof(FSteamVRInputBindingInfo, ModeName) == 0x0010);
static_assert(offsetof(FSteamVRInputBindingInfo, SlotName) == 0x0018);
static_assert(offsetof(FSteamVRInputOriginInfo, RenderModelComponentName) == 0x0008);
static_assert(offsetof(FSteamVRInputOriginInfo, TrackedDeviceModel) == 0x0018);
static_assert(offsetof(FSteamVRActionSet, Path) == 0x0000);
static_assert(offsetof(FSteamVRAction, Name) == 0x0000);
static_assert(offsetof(FSteamVRAction, Path) == 0x0008);
