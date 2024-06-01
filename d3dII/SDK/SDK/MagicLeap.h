
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: MRMesh

/// Enum /Script/MagicLeap.PurchaseType
/// Size: 0x01 (1 bytes)
enum class PurchaseType : uint8_t
{
	PurchaseType__Consumable                                                         = 0,
	PurchaseType__Nonconsumable                                                      = 1,
	PurchaseType__Undefined                                                          = 2
};

/// Enum /Script/MagicLeap.EFocusLostReason
/// Size: 0x01 (1 bytes)
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason__EFocusLostReason_Invalid                                       = 0,
	EFocusLostReason__EFocusLostReason_System                                        = 1
};

/// Enum /Script/MagicLeap.EMagicLeapMeshLOD
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum                                                       = 0,
	EMagicLeapMeshLOD__Medium                                                        = 1,
	EMagicLeapMeshLOD__Maximum                                                       = 2
};

/// Enum /Script/MagicLeap.EMagicLeapMeshState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New                                                         = 0,
	EMagicLeapMeshState__Updated                                                     = 1,
	EMagicLeapMeshState__Deleted                                                     = 2,
	EMagicLeapMeshState__Unchanged                                                   = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None                                              = 0,
	EMagicLeapMeshVertexColorMode__Confidence                                        = 1,
	EMagicLeapMeshVertexColorMode__Block                                             = 2,
	EMagicLeapMeshVertexColorMode__LOD                                               = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles                                                    = 0,
	EMagicLeapMeshType__PointCloud                                                   = 1
};

/// Enum /Script/MagicLeap.EMagicLeapRaycastResultState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed                                      = 0,
	EMagicLeapRaycastResultState__NoCollision                                        = 1,
	EMagicLeapRaycastResultState__HitUnobserved                                      = 2,
	EMagicLeapRaycastResultState__HitObserved                                        = 3
};

/// Enum /Script/MagicLeap.CloudStatus
/// Size: 0x01 (1 bytes)
enum class CloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone                                                 = 0,
	CloudStatus__CloudStatus_Done                                                    = 1
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMapEvent
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost                                             = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered                                        = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed                                   = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession                                       = 3
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation                               = 0,
	EMagicLeapHeadTrackingMode__Unavailable                                          = 1,
	EMagicLeapHeadTrackingMode__Unknown                                              = 2
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None                                                = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures                                   = 1,
	EMagicLeapHeadTrackingError__LowLight                                            = 2,
	EMagicLeapHeadTrackingError__Unknown                                             = 3
};

/// Class /Script/MagicLeap.InAppPurchaseComponent
/// Size: 0x0078 (120 bytes) (0x0000B0 - 0x000128) align 8 pad: 0x0000
class UInAppPurchaseComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1790) /* FMulticastInlineDelegate */ __um(InAppPurchaseLogMessage);                           // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1791) /* FMulticastInlineDelegate */ __um(GetItemsDetailsSuccess);                            // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,1792) /* FMulticastInlineDelegate */ __um(GetItemsDetailsFailure);                            // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1793) /* FMulticastInlineDelegate */ __um(PurchaseConfirmationSuccess);                       // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,1794) /* FMulticastInlineDelegate */ __um(PurchaseConfirmationFailure);                       // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,1795) /* FMulticastInlineDelegate */ __um(GetPurchaseHistorySuccess);                         // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1796) /* FMulticastInlineDelegate */ __um(GetPurchaseHistoryFailure);                         // 0x0110   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
	// bool TryPurchaseItemAsync(FPurchaseItemDetails& ItemDetails);                                                            // [0x1a183c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
	// bool TryGetPurchaseHistoryAsync(int32_t InNumPages);                                                                     // [0x1a18320] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
	// bool TryGetItemsDetailsAsync(TArray<FString>& ItemIDs);                                                                  // [0x1a18240] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
	// void PurchaseConfirmationSuccess__DelegateSignature(FPurchaseConfirmation& PurchaseConfirmations);                       // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
	// void PurchaseConfirmationFailure__DelegateSignature();                                                                   // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
	// void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);                                                     // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
	// void GetPurchaseHistorySuccess__DelegateSignature(TArray<FPurchaseConfirmation>& PurchaseHistory);                       // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
	// void GetPurchaseHistoryFailure__DelegateSignature();                                                                     // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
	// void GetItemsDetailsSuccess__DelegateSignature(TArray<FPurchaseItemDetails>& ItemsDetails);                              // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
	// void GetItemsDetailsFailure__DelegateSignature();                                                                        // [0x24710f0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/MagicLeap.LuminApplicationLifecycleComponent
/// Size: 0x0050 (80 bytes) (0x000140 - 0x000190) align 8 pad: 0x0000
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{ 
public:
	SDK_UNDEFINED(16,1797) /* FMulticastInlineDelegate */ __um(DeviceHasReactivatedDelegate);                      // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,1798) /* FMulticastInlineDelegate */ __um(DeviceWillEnterRealityModeDelegate);                // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,1799) /* FMulticastInlineDelegate */ __um(DeviceWillGoInStandbyDelegate);                     // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,1800) /* FMulticastInlineDelegate */ __um(FocusLostDelegate);                                 // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1801) /* FMulticastInlineDelegate */ __um(FocusGainedDelegate);                               // 0x0180   (0x0010)  
};

/// Class /Script/MagicLeap.MagicLeapHeadTrackingNotificationsComponent
/// Size: 0x0090 (144 bytes) (0x000160 - 0x0001F0) align 8 pad: 0x0000
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{ 
public:
	SDK_UNDEFINED(16,1802) /* FMulticastInlineDelegate */ __um(OnHeadTrackingLost);                                // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,1803) /* FMulticastInlineDelegate */ __um(OnHeadTrackingRecovered);                           // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,1804) /* FMulticastInlineDelegate */ __um(OnHeadTrackingRecoveryFailed);                      // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,1805) /* FMulticastInlineDelegate */ __um(OnHeadTrackingNewSessionStarted);                   // 0x0190   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x01A0   (0x0050)  MISSED
};

/// Class /Script/MagicLeap.MagicLeapHMDFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
	// void SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);                           // [0x1a18180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
	// void SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);                                             // [0x1a180c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
	// void SetBaseRotation(FRotator& InBaseRotation);                                                                          // [0x1a18040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
	// void SetBasePosition(FVector& InBasePosition);                                                                           // [0x1a18040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
	// void SetBaseOrientation(FQuat& InBaseOrientation);                                                                       // [0x1a18040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
	// bool SetAppReady();                                                                                                      // [0x1a18010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
	// bool IsRunningOnMagicLeapHMD();                                                                                          // [0x1a179a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
	// int32_t GetPlatformAPILevel();                                                                                           // [0x1a17910] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
	// int32_t GetMLSDKVersionRevision();                                                                                       // [0x1a17910] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
	// int32_t GetMLSDKVersionMinor();                                                                                          // [0x1a17910] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
	// int32_t GetMLSDKVersionMajor();                                                                                          // [0x1a17910] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
	// FString GetMLSDKVersion();                                                                                               // [0x1a17890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
	// int32_t GetMinimumAPILevel();                                                                                            // [0x1a17940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
	// bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);                                                           // [0x1a177f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
	// bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);                                          // [0x1a176b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
	// bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);                         // [0x1a17600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MagicLeap.MagicLeapMeshTrackerComponent
/// Size: 0x0098 (152 bytes) (0x0001F8 - 0x000290) align 16 pad: 0x0000
class UMagicLeapMeshTrackerComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01F8   (0x0008)  MISSED
	SDK_UNDEFINED(16,1806) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0200   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0210   (0x0001)  
	EMagicLeapMeshType                                 MeshType;                                                   // 0x0211   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0212   (0x0006)  MISSED
	class UBoxComponent*                               BoundingVolume;                                             // 0x0218   (0x0008)  
	EMagicLeapMeshLOD                                  LevelOfDetail;                                              // 0x0220   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0221   (0x0003)  MISSED
	float                                              PerimeterOfGapsToFill;                                      // 0x0224   (0x0004)  
	bool                                               Planarize;                                                  // 0x0228   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0229   (0x0003)  MISSED
	float                                              DisconnectedSectionArea;                                    // 0x022C   (0x0004)  
	bool                                               RequestNormals;                                             // 0x0230   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0231   (0x0001)  
	EMagicLeapMeshVertexColorMode                      VertexColorMode;                                            // 0x0232   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x0233   (0x0005)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0238   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0248   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0258   (0x0010)  
	bool                                               RemoveOverlappingTriangles;                                 // 0x0268   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0270   (0x0008)  
	int32_t                                            BricksPerFrame;                                             // 0x0278   (0x0004)  
	unsigned char                                      UnknownData06_7[0x14];                                      // 0x027C   (0x0014)  MISSED


	/// Functions
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
	// void SelectMeshBlocks(FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);       // [0x1a17ef0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
	// void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
	// int32_t GetNumQueuedBlockUpdates();                                                                                      // [0x1a17970] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x1a17570] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
	// void DisconnectBlockSelector();                                                                                          // [0x1a17550] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x1a174c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
	// void ConnectBlockSelector(TScriptInterface<Class> Selector);                                                             // [0x1a17420] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeap.MagicLeapSettings
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UMagicLeapSettings : public UObject
{ 
public:
	bool                                               bEnableZI;                                                  // 0x0028   (0x0001)  
	bool                                               bUseVulkanForZI;                                            // 0x0029   (0x0001)  
	bool                                               bUseMLAudioForZI;                                           // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
	// void SelectMeshBlocks(FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);       // [0x1a17dd0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeap.MagicLeapRaycastComponent
/// Size: 0x0068 (104 bytes) (0x0000B0 - 0x000118) align 8 pad: 0x0000
class UMagicLeapRaycastComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x00B0   (0x0068)  MISSED


	/// Functions
	// Function /Script/MagicLeap.MagicLeapRaycastComponent.RequestRaycast
	// bool RequestRaycast(FMagicLeapRaycastQueryParams& RequestParams, FDelegateProperty& ResultDelegate);                     // [0x1a17c80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
	// void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);                                     // [0x24710f0] Public|Delegate      
};

/// Class /Script/MagicLeap.MagicLeapRaycastFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
	// FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector position, FVector Direction, FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // [0x1a179d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeap.PurchaseItemDetails
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FPurchaseItemDetails
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            Price;                                                      // 0x0010   (0x0010)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	PurchaseType                                       Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/MagicLeap.PurchaseConfirmation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FPurchaseConfirmation
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FString                                            PackageName;                                                // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0020   (0x0028)  MISSED
	PurchaseType                                       Type;                                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockRequest
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FMagicLeapMeshBlockRequest
{ 
	FGuid                                              BlockID;                                                    // 0x0000   (0x0010)  
	EMagicLeapMeshLOD                                  LevelOfDetail;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FMagicLeapMeshBlockInfo
{ 
	FGuid                                              BlockID;                                                    // 0x0000   (0x0010)  
	FVector                                            BlockPosition;                                              // 0x0010   (0x000C)  
	FRotator                                           BlockOrientation;                                           // 0x001C   (0x000C)  
	FVector                                            BlockDimensions;                                            // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FTimespan                                          Timestamp;                                                  // 0x0038   (0x0008)  
	EMagicLeapMeshState                                BlockState;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/MagicLeap.MagicLeapTrackingMeshInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapTrackingMeshInfo
{ 
	FTimespan                                          Timestamp;                                                  // 0x0000   (0x0008)  
	TArray<FMagicLeapMeshBlockInfo>                    BlockData;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/MagicLeap.MagicLeapRaycastHitResult
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FMagicLeapRaycastHitResult
{ 
	EMagicLeapRaycastResultState                       HitState;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            HitPoint;                                                   // 0x0004   (0x000C)  
	FVector                                            Normal;                                                     // 0x0010   (0x000C)  
	float                                              Confidence;                                                 // 0x001C   (0x0004)  
	int32_t                                            UserData;                                                   // 0x0020   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapRaycastQueryParams
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FMagicLeapRaycastQueryParams
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector                                            Direction;                                                  // 0x000C   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0018   (0x000C)  
	int32_t                                            Width;                                                      // 0x0024   (0x0004)  
	int32_t                                            Height;                                                     // 0x0028   (0x0004)  
	float                                              HorizontalFovDegrees;                                       // 0x002C   (0x0004)  
	bool                                               CollideWithUnobserved;                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            UserData;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapGraphicsClientPerformanceInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FMagicLeapGraphicsClientPerformanceInfo
{ 
	float                                              FrameStartCPUCompAcquireCPUTimeMs;                          // 0x0000   (0x0004)  
	float                                              FrameStartCPUFrameEndGPUTimeMs;                             // 0x0004   (0x0004)  
	float                                              FrameStartCPUFrameStartCPUTimeMs;                           // 0x0008   (0x0004)  
	float                                              FrameDurationCPUTimeMs;                                     // 0x000C   (0x0004)  
	float                                              FrameDurationGPUTimeMs;                                     // 0x0010   (0x0004)  
	float                                              FrameInternalDurationCPUTimeMs;                             // 0x0014   (0x0004)  
	float                                              FrameInternalDurationGPUTimeMs;                             // 0x0018   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapHeadTrackingState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FMagicLeapHeadTrackingState
{ 
	EMagicLeapHeadTrackingMode                         Mode;                                                       // 0x0000   (0x0001)  
	EMagicLeapHeadTrackingError                        Error;                                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Confidence;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MagicLeap.MagicLeapResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapResult
{ 
	bool                                               bSuccess;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AdditionalInfo;                                             // 0x0008   (0x0010)  
};

static_assert(sizeof(UInAppPurchaseComponent) == 0x0128); // 296 bytes (0x0000B0 - 0x000128)
static_assert(sizeof(ULuminApplicationLifecycleComponent) == 0x0190); // 400 bytes (0x000140 - 0x000190)
static_assert(sizeof(UMagicLeapHeadTrackingNotificationsComponent) == 0x01F0); // 496 bytes (0x000160 - 0x0001F0)
static_assert(sizeof(UMagicLeapHMDFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapMeshTrackerComponent) == 0x0290); // 656 bytes (0x0001F8 - 0x000290)
static_assert(sizeof(UMagicLeapSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMagicLeapMeshBlockSelectorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapRaycastComponent) == 0x0118); // 280 bytes (0x0000B0 - 0x000118)
static_assert(sizeof(UMagicLeapRaycastFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPurchaseItemDetails) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPurchaseConfirmation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMagicLeapMeshBlockRequest) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMagicLeapMeshBlockInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMagicLeapTrackingMeshInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMagicLeapRaycastHitResult) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapRaycastQueryParams) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMagicLeapGraphicsClientPerformanceInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMagicLeapHeadTrackingState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMagicLeapResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MeshType) == 0x0211);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BoundingVolume) == 0x0218);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, LevelOfDetail) == 0x0220);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorMode) == 0x0232);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BlockVertexColors) == 0x0238);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0248);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0258);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MRMesh) == 0x0270);
static_assert(offsetof(FPurchaseItemDetails, Price) == 0x0010);
static_assert(offsetof(FPurchaseItemDetails, Name) == 0x0020);
static_assert(offsetof(FPurchaseItemDetails, Type) == 0x0030);
static_assert(offsetof(FPurchaseConfirmation, PackageName) == 0x0010);
static_assert(offsetof(FPurchaseConfirmation, Type) == 0x0048);
static_assert(offsetof(FMagicLeapMeshBlockRequest, BlockID) == 0x0000);
static_assert(offsetof(FMagicLeapMeshBlockRequest, LevelOfDetail) == 0x0010);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockID) == 0x0000);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockPosition) == 0x0010);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockOrientation) == 0x001C);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockDimensions) == 0x0028);
static_assert(offsetof(FMagicLeapMeshBlockInfo, Timestamp) == 0x0038);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockState) == 0x0040);
static_assert(offsetof(FMagicLeapTrackingMeshInfo, Timestamp) == 0x0000);
static_assert(offsetof(FMagicLeapTrackingMeshInfo, BlockData) == 0x0008);
static_assert(offsetof(FMagicLeapRaycastHitResult, HitState) == 0x0000);
static_assert(offsetof(FMagicLeapRaycastHitResult, HitPoint) == 0x0004);
static_assert(offsetof(FMagicLeapRaycastHitResult, Normal) == 0x0010);
static_assert(offsetof(FMagicLeapRaycastQueryParams, position) == 0x0000);
static_assert(offsetof(FMagicLeapRaycastQueryParams, Direction) == 0x000C);
static_assert(offsetof(FMagicLeapRaycastQueryParams, UpVector) == 0x0018);
static_assert(offsetof(FMagicLeapHeadTrackingState, Mode) == 0x0000);
static_assert(offsetof(FMagicLeapHeadTrackingState, Error) == 0x0001);
static_assert(offsetof(FMagicLeapResult, AdditionalInfo) == 0x0008);
