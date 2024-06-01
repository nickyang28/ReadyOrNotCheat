
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

/// Enum /Script/SteamVR.ESteamVRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class ESteamVRTrackedDeviceType : uint8_t
{
	ESteamVRTrackedDeviceType__Controller                                            = 0,
	ESteamVRTrackedDeviceType__TrackingReference                                     = 1,
	ESteamVRTrackedDeviceType__Other                                                 = 2,
	ESteamVRTrackedDeviceType__Invalid                                               = 3
};

/// Class /Script/SteamVR.SteamVRChaperoneComponent
/// Size: 0x0028 (40 bytes) (0x0000B0 - 0x0000D8) align 8 pad: 0x0000
class USteamVRChaperoneComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1939) /* FMulticastInlineDelegate */ __um(OnLeaveBounds);                                     // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1940) /* FMulticastInlineDelegate */ __um(OnReturnToBounds);                                  // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
	// void SteamVRChaperoneEvent__DelegateSignature();                                                                         // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/SteamVR.SteamVRChaperoneComponent.GetBounds
	// TArray<FVector> GetBounds();                                                                                             // [0x9f0110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SteamVR.SteamVRFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
	// void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32_t>& OutTrackedDeviceIds);               // [0x9f0420] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
	// bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, FVector& OutPosition, FRotator& OutOrientation);           // [0x9f02f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
	// bool GetHandPositionAndOrientation(int32_t ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation); // [0x9f0190] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SteamVR.SteamVRHQStereoLayerShape
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
{ 
public:
	bool                                               bCurved;                                                    // 0x0028   (0x0001)  
	bool                                               bAntiAlias;                                                 // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              AutoCurveMinDistance;                                       // 0x002C   (0x0004)  
	float                                              AutoCurveMaxDistance;                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED


	/// Functions
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetCurved
	// void SetCurved(bool InCurved);                                                                                           // [0x9f0690] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
	// void SetAutoCurveMinDistance(float InDistance);                                                                          // [0x9f0610] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
	// void SetAutoCurveMaxDistance(float InDistance);                                                                          // [0x9f0590] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
	// void SetAntiAlias(bool InAntiAlias);                                                                                     // [0x9f0500] Final|Native|Public|BlueprintCallable 
};

static_assert(sizeof(USteamVRChaperoneComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(USteamVRFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamVRHQStereoLayerShape) == 0x0038); // 56 bytes (0x000028 - 0x000038)
