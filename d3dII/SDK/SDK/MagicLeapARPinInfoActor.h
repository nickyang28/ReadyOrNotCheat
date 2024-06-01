
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x008C (140 bytes) (0x000238 - 0x0002C4) align 8 pad: 0x0004
#pragma pack(push, 0x1)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        Right;                                                      // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        Forward;                                                    // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        Up;                                                         // 0x0250   (0x0008)  
	class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x0258   (0x0008)  
	class USceneComponent*                             AxisRoot;                                                   // 0x0260   (0x0008)  
	class USceneComponent*                             VisualizerRoot;                                             // 0x0268   (0x0008)  
	class UTextRenderComponent*                        TypeValue;                                                  // 0x0270   (0x0008)  
	class UTextRenderComponent*                        TransErrValue;                                              // 0x0278   (0x0008)  
	class UTextRenderComponent*                        RotErrValue;                                                // 0x0280   (0x0008)  
	class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0288   (0x0008)  
	class UTextRenderComponent*                        TransErrLabel;                                              // 0x0290   (0x0008)  
	class UTextRenderComponent*                        RotErrLabel;                                                // 0x0298   (0x0008)  
	class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x02A0   (0x0008)  
	class UTextRenderComponent*                        PinIDValue;                                                 // 0x02A8   (0x0008)  
	class USceneComponent*                             InfoRoot;                                                   // 0x02B0   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x02B8   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x02C0   (0x0004)  


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	// void UpdatePinState();                                                                                                   // [0x24710f0] Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x24710f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x24710f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	// void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);                                                       // [0x24710f0] Final|HasDefaults    
};
#pragma pack(pop)

static_assert(sizeof(AMagicLeapARPinInfoActor_C) == 0x02C4); // 708 bytes (0x000238 - 0x0002C4)
static_assert(offsetof(AMagicLeapARPinInfoActor_C, UberGraphFrame) == 0x0238);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Right) == 0x0240);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Forward) == 0x0248);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Up) == 0x0250);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ValidRadiusVisualizer) == 0x0258);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, AxisRoot) == 0x0260);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, VisualizerRoot) == 0x0268);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TypeValue) == 0x0270);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrValue) == 0x0278);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrValue) == 0x0280);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceValue) == 0x0288);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrLabel) == 0x0290);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrLabel) == 0x0298);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceLabel) == 0x02A0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, PinIDValue) == 0x02A8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, InfoRoot) == 0x02B0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Root) == 0x02B8);
