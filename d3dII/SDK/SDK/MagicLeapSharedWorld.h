
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapSharedWorldSharedData
{ 
	TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x00D0 (208 bytes) (0x000308 - 0x0003D8) align 8 pad: 0x0000
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,1825) /* FMulticastInlineDelegate */ __um(OnNewLocalDataFromClients);                         // 0x0318   (0x0010)  
	float                                              PinSelectionConfidenceThreshold;                            // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x032C   (0x00A4)  MISSED
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                  // 0x03D0   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	// bool SendSharedWorldDataToClients();                                                                                     // [0x1a4cc00] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	// void SelectChosenOne();                                                                                                  // [0x12295f0] BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	// void MagicLeapOnNewLocalDataFromClients__DelegateSignature();                                                            // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	// void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);                                      // [0x1a4cae0] BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
	TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0040 (64 bytes) (0x000290 - 0x0002D0) align 8 pad: 0x0000
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0290   (0x0010)  
	FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,1826) /* FMulticastInlineDelegate */ __um(OnSharedWorldDataUpdated);                          // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,1827) /* FMulticastInlineDelegate */ __um(OnAlignmentTransformsUpdated);                      // 0x02C0   (0x0010)  


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	// void OnReplicate_SharedWorldData();                                                                                      // [0x1a4cbe0] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	// void OnReplicate_AlignmentTransforms();                                                                                  // [0x1a4cbc0] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	// void MagicLeapSharedWorldEvent__DelegateSignature();                                                                     // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	// FTransform CalculateXRCameraRootTransform();                                                                             // [0x1a4c990] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0018 (24 bytes) (0x000580 - 0x000598) align 8 pad: 0x0000
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0580   (0x0018)  MISSED


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	// void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);                                  // [0x1a4ccd0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	// void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);                       // [0x1a4cc30] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	// bool IsChosenOne();                                                                                                      // [0x1a4cb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	// void ClientSetChosenOne(bool bChosenOne);                                                                                // [0x1a4ca50] Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	// void ClientMarkReadyForSendingLocalData();                                                                               // [0x1a4ca30] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	// bool CanSendLocalDataToServer();                                                                                         // [0x1a4ca00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FMagicLeapSharedWorldPinData
{ 
	FGuid                                              PinId;                                                      // 0x0000   (0x0010)  
	FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FMagicLeapSharedWorldLocalData
{ 
	TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)  
};

static_assert(sizeof(FMagicLeapSharedWorldSharedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameMode) == 0x03D8); // 984 bytes (0x000308 - 0x0003D8)
static_assert(sizeof(FMagicLeapSharedWorldAlignmentTransforms) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameState) == 0x02D0); // 720 bytes (0x000290 - 0x0002D0)
static_assert(sizeof(AMagicLeapSharedWorldPlayerController) == 0x0598); // 1432 bytes (0x000580 - 0x000598)
static_assert(sizeof(FMagicLeapSharedWorldPinData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapSharedWorldLocalData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FMagicLeapSharedWorldSharedData, PinIDs) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, SharedWorldData) == 0x0308);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, ChosenOne) == 0x03D0);
static_assert(offsetof(FMagicLeapSharedWorldAlignmentTransforms, AlignmentTransforms) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameState, SharedWorldData) == 0x0290);
static_assert(offsetof(AMagicLeapSharedWorldGameState, AlignmentTransforms) == 0x02A0);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinId) == 0x0000);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinState) == 0x0010);
static_assert(offsetof(FMagicLeapSharedWorldLocalData, LocalPins) == 0x0000);
