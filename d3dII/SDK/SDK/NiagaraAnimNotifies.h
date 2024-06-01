
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000090) align 16 pad: 0x0000
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x004C   (0x000C)  
	FVector                                            Scale;                                                      // 0x0058   (0x000C)  
	bool                                               bAbsoluteScale;                                             // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1B];                                      // 0x0065   (0x001B)  MISSED
	bool                                               Attached : 1;                                               // 0x0080:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x0084   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x008C   (0x0004)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0x1156090] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0030   (0x0008)  
	FName                                              SocketName;                                                 // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x004C   (0x000C)  
	bool                                               bDestroyAtEnd;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);                                              // [0x1155ff0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0050 (80 bytes) (0x000060 - 0x0000B0) align 8 pad: 0x0000
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0060   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* MeshComp);                                                                 // [0x1155f50] Final|Native|Public|BlueprintCallable|Const 
};

static_assert(sizeof(UAnimNotify_PlayNiagaraEffect) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffect) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffectAdvanced) == 0x00B0); // 176 bytes (0x000060 - 0x0000B0)
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Template) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, RotationOffset) == 0x004C);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Scale) == 0x0058);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, SocketName) == 0x0084);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Template) == 0x0030);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, SocketName) == 0x0038);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, RotationOffset) == 0x004C);
