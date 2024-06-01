
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

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x01 (1 bytes)
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x000160) align 8 pad: 0x0000
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1730) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate); // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1731) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializedDelegate);                    // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,1732) /* FMulticastInlineDelegate */ __um(HMDRecenteredDelegate);                             // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1733) /* FMulticastInlineDelegate */ __um(HMDLostDelegate);                                   // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,1734) /* FMulticastInlineDelegate */ __um(HMDReconnectedDelegate);                            // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,1735) /* FMulticastInlineDelegate */ __um(HMDConnectCanceledDelegate);                        // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1736) /* FMulticastInlineDelegate */ __um(HMDPutOnHeadDelegate);                              // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1737) /* FMulticastInlineDelegate */ __um(HMDRemovedFromHeadDelegate);                        // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,1738) /* FMulticastInlineDelegate */ __um(VRControllerRecenteredDelegate);                    // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1739) /* FMulticastInlineDelegate */ __um(XRTrackingOriginChangedDelegate);                   // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,1740) /* FMulticastInlineDelegate */ __um(XRPlayAreaChangedDelegate);                         // 0x0150   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform);                                           // [0x321b3b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	// void SetXRTimedInputActionDelegate(FName& ActionName, FDelegateProperty& InDelegate);                                    // [0x321b290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	// void SetXRDisconnectDelegate(FDelegateProperty& InDisconnectedDelegate);                                                 // [0x321b1f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);                                                 // [0x321b130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                          // [0x321b040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// void SetSpectatorScreenTexture(class UTexture* InTexture);                                                               // [0x321af30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // [0x321ad20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// void SetSpectatorScreenMode(ESpectatorScreenMode Mode);                                                                  // [0x321acb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// void SetClippingPlanes(float Near, float Far);                                                                           // [0x321a800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);                               // [0x321a6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// bool IsSpectatorScreenModeControllable();                                                                                // [0x321a680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// bool IsInLowPersistenceMode();                                                                                           // [0x1139b70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// bool IsHeadMountedDisplayEnabled();                                                                                      // [0x321a320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// bool IsHeadMountedDisplayConnected();                                                                                    // [0x321a2f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// bool IsDeviceTracking(FXRDeviceId& XRDeviceId);                                                                          // [0x321a250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// bool HasValidTrackingPosition();                                                                                         // [0x321a200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	// int32_t GetXRSystemFlags();                                                                                              // [0x321a1d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// float GetWorldToMetersScale(class UObject* WorldContext);                                                                // [0x321a140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);                                                                  // [0x3219fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	// FString GetVersionString();                                                                                              // [0x321a0c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// FTransform GetTrackingToWorldTransform(class UObject* WorldContext);                                                     // [0x3219f20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // [0x3219b40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
	// bool GetTrackingOriginTransform(TEnumAsByte<EHMDTrackingOrigin> Origin, FTransform& OutTransform);                       // [0x3219a20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();                                                                     // [0x32199e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// float GetScreenPercentage();                                                                                             // [0x32199b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // [0x3219740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
	// bool GetPlayAreaRect(FTransform& OutTransform, FVector2D& OutRect);                                                      // [0x3219620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
	// FVector2D GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                     // [0x3219590] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// float GetPixelDensity();                                                                                                 // [0x3219560] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);                                       // [0x32193b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// int32_t GetNumOfTrackingSensors();                                                                                       // [0x3219380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	// void GetMotionControllerData(class UObject* WorldContext, EControllerHand hand, FXRMotionControllerData& MotionControllerData); // [0x32191d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// TEnumAsByte<EHMDWornState> GetHMDWornState();                                                                            // [0x3219080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// FName GetHMDDeviceName();                                                                                                // [0x3219040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	// void GetHMDData(class UObject* WorldContext, FXRHMDData& HMDData);                                                       // [0x3218f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// void GetDeviceWorldPose(class UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& position); // [0x3218d20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& position); // [0x3218b30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	// bool GetControllerTransformForTime(class UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, FVector& LinearAcceleration); // [0x3218700] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);                            // [0x32185b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// void EnableLowPersistenceMode(bool bEnable);                                                                             // [0x3218290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// bool EnableHMD(bool bEnable);                                                                                            // [0x3218200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	// void DisconnectRemoteXRDevice();                                                                                         // [0x32181e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	// TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(FString IpAddress, int32_t BitRate);                        // [0x3217de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	// bool ConfigureGestures(FXRGestureConfig& GestureConfig);                                                                 // [0x3217d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	// void ClearXRTimedInputActionDelegate(FName& ActionPath);                                                                 // [0x3217cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform);                                              // [0x3217bd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
	// void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& hand, FName& MotionSource, FString& Indentifier, FString& Component); // [0x3217920] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	// int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);                                                                   // [0x3217ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00C0 (192 bytes) (0x000450 - 0x000510) align 16 pad: 0x0000
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0450   (0x0004)  
	EControllerHand                                    hand;                                                       // 0x0454   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0455   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0458   (0x0008)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0460:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0461   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x0464   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x0465   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0466   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0468   (0x0008)  
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x0470   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x0478   (0x0010)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x0488   (0x0068)  MISSED
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x04F0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x04F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x321b0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x321afb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x321ac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x321a950] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);                                                            // [0x321a8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x321a770] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                        // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                        // [0x31d10c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                     // [0x3219ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x3219480] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x32190b0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);                                                         // [0x321a9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);                                            // [0x321a5b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand hand);                                        // [0x321a4e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);                   // [0x321a450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// bool IsMotionTrackedDeviceCountManagementNecessary();                                                                    // [0x321a420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);                                                      // [0x321a350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// int32_t GetMotionTrackingEnabledControllerCount();                                                                       // [0x3219350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// int32_t GetMaximumMotionTrackedControllerCount();                                                                        // [0x32191a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// FName GetActiveTrackingSystemName();                                                                                     // [0x32186c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// TArray<FName> EnumerateMotionSources();                                                                                  // [0x3218530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                                // [0x3218460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand hand);                                            // [0x3218390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                      // [0x3218300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                               // [0x3218120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand hand);                                           // [0x3218060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);                                                   // [0x3217fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// void DisableMotionTrackingOfAllControllers();                                                                            // [0x3217fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                     // [0x3217f40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId); // [0x32176e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform); // [0x3217070] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1741) /* FMulticastInlineDelegate */ __um(OnModelLoaded);                                     // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1742) /* FMulticastInlineDelegate */ __um(OnLoadFailure);                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
	class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent); // [0x3217440] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent); // [0x3216e40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// void ShowLoadingScreen();                                                                                                // [0x321b390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // [0x321aa60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// void HideLoadingScreen();                                                                                                // [0x321a230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// void ClearLoadingScreenSplashes();                                                                                       // [0x3217ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x3217240] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 pad: 0x0000
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              GripRotation;                                               // 0x0030   (0x0010)  
	FVector                                            AimPosition;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FQuat                                              AimRotation;                                                // 0x0050   (0x0010)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_7[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector                                            position;                                                   // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 pad: 0x0000
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

static_assert(sizeof(UVRNotificationsComponent) == 0x0160); // 352 bytes (0x0000B0 - 0x000160)
static_assert(sizeof(UHeadMountedDisplayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHandKeypointConversion) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMotionControllerComponent) == 0x0510); // 1296 bytes (0x000450 - 0x000510)
static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXRAssetFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAsyncTask_LoadXRDeviceVisComponent) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UXRLoadingScreenFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FXRMotionControllerData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FXRHMDData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FXRDeviceId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FXRGestureConfig) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(offsetof(UMotionControllerComponent, hand) == 0x0454);
static_assert(offsetof(UMotionControllerComponent, MotionSource) == 0x0458);
static_assert(offsetof(UMotionControllerComponent, CurrentTrackingStatus) == 0x0464);
static_assert(offsetof(UMotionControllerComponent, DisplayModelSource) == 0x0468);
static_assert(offsetof(UMotionControllerComponent, CustomDisplayMesh) == 0x0470);
static_assert(offsetof(UMotionControllerComponent, DisplayMeshMaterialOverrides) == 0x0478);
static_assert(offsetof(UMotionControllerComponent, DisplayComponent) == 0x04F0);
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 0x0058);
static_assert(offsetof(FXRMotionControllerData, DeviceName) == 0x0004);
static_assert(offsetof(FXRMotionControllerData, ApplicationInstanceID) == 0x000C);
static_assert(offsetof(FXRMotionControllerData, DeviceVisualType) == 0x001C);
static_assert(offsetof(FXRMotionControllerData, HandIndex) == 0x001D);
static_assert(offsetof(FXRMotionControllerData, TrackingStatus) == 0x001E);
static_assert(offsetof(FXRMotionControllerData, GripPosition) == 0x0020);
static_assert(offsetof(FXRMotionControllerData, GripRotation) == 0x0030);
static_assert(offsetof(FXRMotionControllerData, AimPosition) == 0x0040);
static_assert(offsetof(FXRMotionControllerData, AimRotation) == 0x0050);
static_assert(offsetof(FXRMotionControllerData, HandKeyPositions) == 0x0060);
static_assert(offsetof(FXRMotionControllerData, HandKeyRotations) == 0x0070);
static_assert(offsetof(FXRMotionControllerData, HandKeyRadii) == 0x0080);
static_assert(offsetof(FXRHMDData, DeviceName) == 0x0004);
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 0x000C);
static_assert(offsetof(FXRHMDData, TrackingStatus) == 0x001C);
static_assert(offsetof(FXRHMDData, position) == 0x0020);
static_assert(offsetof(FXRHMDData, Rotation) == 0x0030);
static_assert(offsetof(FXRDeviceId, SystemName) == 0x0000);
static_assert(offsetof(FXRGestureConfig, AxisGesture) == 0x0002);
