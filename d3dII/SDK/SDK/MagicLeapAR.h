
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapImageTracker
/// dependency: MagicLeapPlanes
/// dependency: MRMesh

/// Enum /Script/MagicLeapAR.ELuminARLineTraceChannel
/// Size: 0x01 (1 bytes)
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None                                                   = 0,
	ELuminARLineTraceChannel__FeaturePoint                                           = 1,
	ELuminARLineTraceChannel__InfinitePlane                                          = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent                                       = 4,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon                              = 8,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal                          = 16
};

/// Enum /Script/MagicLeapAR.ELuminARTrackingState
/// Size: 0x01 (1 bytes)
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking                                                  = 0,
	ELuminARTrackingState__NotTracking                                               = 1,
	ELuminARTrackingState__StoppedTracking                                           = 2
};

/// Class /Script/MagicLeapAR.LuminARSessionFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
	// void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration); // [0x1a1c790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapAR.LuminARFrameFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
	// bool LuminARLineTrace(class UObject* WorldContextObject, FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults); // [0x1a1c4d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
	// ELuminARTrackingState GetTrackingState();                                                                                // [0x1a1c480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
	// class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation); // [0x1a1c100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
	// class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // [0x1a1bed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapAR.LuminAROrigin
/// Size: 0x00C0 (192 bytes) (0x000220 - 0x0002E0) align 8 pad: 0x0000
class ALuminAROrigin : public AAROriginActor
{ 
public:
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x0220   (0x0008)  
	class UMaterialInterface*                          PlaneSurfaceMaterial;                                       // 0x0228   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0238   (0x00A8)  MISSED
};

/// Class /Script/MagicLeapAR.LuminARSessionConfig
/// Size: 0x0090 (144 bytes) (0x000110 - 0x0001A0) align 16 pad: 0x0000
class ULuminARSessionConfig : public UARSessionConfig
{ 
public:
	FMagicLeapPlanesQuery                              PlanesQuery;                                                // 0x0110   (0x0060)  
	int32_t                                            MaxPlaneQueryResults;                                       // 0x0170   (0x0004)  
	int32_t                                            MinPlaneArea;                                               // 0x0174   (0x0004)  
	bool                                               bArbitraryOrientationPlaneDetection;                        // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0179   (0x0003)  MISSED
	FVector                                            PlaneSearchExtents;                                         // 0x017C   (0x000C)  
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                            // 0x0188   (0x0010)  
	bool                                               bDiscardZeroExtentPlanes;                                   // 0x0198   (0x0001)  
	bool                                               bDefaultUseUnreliablePose;                                  // 0x0199   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x019A   (0x0006)  MISSED
};

/// Class /Script/MagicLeapAR.LuminARLightEstimate
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class ULuminARLightEstimate : public UARBasicLightEstimate
{ 
public:
	TArray<float>                                      AmbientIntensityNits;                                       // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
	// TArray<float> GetAmbientIntensityNits();                                                                                 // [0x1a1c380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MagicLeapAR.LuminARCandidateImage
/// Size: 0x0008 (8 bytes) (0x000058 - 0x000060) align 8 pad: 0x0000
class ULuminARCandidateImage : public UARCandidateImage
{ 
public:
	bool                                               bUseUnreliablePose;                                         // 0x0058   (0x0001)  
	bool                                               bImageIsStationary;                                         // 0x0059   (0x0001)  
	EMagicLeapImageTargetOrientation                   AxisOrientation;                                            // 0x005A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x005B   (0x0005)  MISSED


	/// Functions
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
	// bool GetUseUnreliablePose();                                                                                             // [0x1a1c4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
	// bool GetImageIsStationary();                                                                                             // [0x1a1c460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
	// EMagicLeapImageTargetOrientation GetAxisOrientation();                                                                   // [0x1a1c440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

static_assert(sizeof(ULuminARSessionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuminARFrameFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuminARImageTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ALuminAROrigin) == 0x02E0); // 736 bytes (0x000220 - 0x0002E0)
static_assert(sizeof(ULuminARSessionConfig) == 0x01A0); // 416 bytes (0x000110 - 0x0001A0)
static_assert(sizeof(ULuminARLightEstimate) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ULuminARCandidateImage) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(offsetof(ALuminAROrigin, MRMeshComponent) == 0x0220);
static_assert(offsetof(ALuminAROrigin, PlaneSurfaceMaterial) == 0x0228);
static_assert(offsetof(ALuminAROrigin, WireframeMaterial) == 0x0230);
static_assert(offsetof(ULuminARSessionConfig, PlanesQuery) == 0x0110);
static_assert(offsetof(ULuminARSessionConfig, PlaneSearchExtents) == 0x017C);
static_assert(offsetof(ULuminARSessionConfig, PlaneQueryFlags) == 0x0188);
static_assert(offsetof(ULuminARLightEstimate, AmbientIntensityNits) == 0x0040);
static_assert(offsetof(ULuminARCandidateImage, AxisOrientation) == 0x005A);
