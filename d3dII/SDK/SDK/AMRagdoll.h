
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AMRagdoll.AnimNotify_EnableRagdoll
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UAnimNotify_EnableRagdoll : public UAnimNotify
{ 
public:
};

/// Class /Script/AMRagdoll.AnimNotify_EnableRagdollChecks
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UAnimNotify_EnableRagdollChecks : public UAnimNotify
{ 
public:
};

/// Class /Script/AMRagdoll.AnimNotify_TogglePhysAnim
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UAnimNotify_TogglePhysAnim : public UAnimNotify
{ 
public:
	bool                                               bEnablePhysicalAnimation;                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              PhysicalAnimProfileName;                                    // 0x003C   (0x0008)  
	bool                                               bStopCurrentMontage;                                        // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/AMRagdoll.RagdollComponent
/// Size: 0x0098 (152 bytes) (0x0000B0 - 0x000148) align 8 pad: 0x0000
class URagdollComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnRagdollStart);                                     // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnRagdollBlendStop);                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnRagdollPhysBodyHit);                               // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E0   (0x0002)  MISSED
	bool                                               bStartRunningRagdollChecks;                                 // 0x00E2   (0x0001)  
	bool                                               bUsePhysBodyCollision;                                      // 0x00E3   (0x0001)  
	bool                                               bUseCapsuleCollision;                                       // 0x00E4   (0x0001)  
	bool                                               bFreezeRagdoll;                                             // 0x00E5   (0x0001)  
	bool                                               bBlendingAnim2Ragdoll;                                      // 0x00E6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x19];                                      // 0x00E7   (0x0019)  MISSED
	bool                                               bCapsuleCollisionRagdolled;                                 // 0x0100   (0x0001)  
	bool                                               bPhysBodyCollisionRagdolled;                                // 0x0101   (0x0001)  
	bool                                               bCapsuleFloorAngleRagdolled;                                // 0x0102   (0x0001)  
	bool                                               bCapsuleInAirRagdolled;                                     // 0x0103   (0x0001)  
	int32_t                                            CapsuleCollisionRagdollTriggerThreshold;                    // 0x0104   (0x0004)  
	float                                              CapsuleFloorAngleRagdollTriggerThreshold;                   // 0x0108   (0x0004)  
	float                                              CapsuleFloorAngleRagdollDelayThreshold;                     // 0x010C   (0x0004)  
	float                                              CapsuleInAirRagdollDelayThreshold;                          // 0x0110   (0x0004)  
	float                                              RagdollVelocityFreezeThreshold;                             // 0x0114   (0x0004)  
	float                                              RagdollBlendTime;                                           // 0x0118   (0x0004)  
	float                                              RagdollFreezeDelay;                                         // 0x011C   (0x0004)  
	bool                                               bRagdollIsFrozen;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FName                                              PelvisBoneName;                                             // 0x0128   (0x0008)  
	FName                                              HeadBoneName;                                               // 0x0130   (0x0008)  
	FName                                              RagdollCollisionProfileName;                                // 0x0138   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimationComponent;                                 // 0x0140   (0x0008)  


	/// Functions
	// Function /Script/AMRagdoll.RagdollComponent.RequestAnim2RagdollBlend
	// void RequestAnim2RagdollBlend(float Duration);                                                                           // [0x184cc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AMRagdoll.RagdollComponent.OnRagdollHitEvent__DelegateSignature
	// void OnRagdollHitEvent__DelegateSignature(class URagdollComponent* Component, FVector Impulse, FHitResult& Hit);         // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AMRagdoll.RagdollComponent.OnRagdollEvent__DelegateSignature
	// void OnRagdollEvent__DelegateSignature(class URagdollComponent* Component);                                              // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AMRagdoll.RagdollComponent.OnPhysBodyHit
	// void OnPhysBodyHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x184ca40] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AMRagdoll.RagdollComponent.OnCapsuleHit
	// void OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x184c860] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AMRagdoll.RagdollComponent.IsInRagdoll
	// bool IsInRagdoll();                                                                                                      // [0x184c830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

static_assert(sizeof(UAnimNotify_EnableRagdoll) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimNotify_EnableRagdollChecks) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimNotify_TogglePhysAnim) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(URagdollComponent) == 0x0148); // 328 bytes (0x0000B0 - 0x000148)
static_assert(offsetof(UAnimNotify_TogglePhysAnim, PhysicalAnimProfileName) == 0x003C);
static_assert(offsetof(URagdollComponent, PelvisBoneName) == 0x0128);
static_assert(offsetof(URagdollComponent, HeadBoneName) == 0x0130);
static_assert(offsetof(URagdollComponent, RagdollCollisionProfileName) == 0x0138);
static_assert(offsetof(URagdollComponent, PhysicalAnimationComponent) == 0x0140);
