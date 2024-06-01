
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ObjectPooler.EObjectPoolRetrieveActorResult
/// Size: 0x01 (1 bytes)
enum class EObjectPoolRetrieveActorResult : uint8_t
{
	EObjectPoolRetrieveActorResult__Succeeded                                        = 0,
	EObjectPoolRetrieveActorResult__Failed                                           = 1
};

/// Enum /Script/ObjectPooler.EObjectPoolReuseSetting
/// Size: 0x01 (1 bytes)
enum class EObjectPoolReuseSetting : uint8_t
{
	EObjectPoolReuseSetting__Reuse                                                   = 0,
	EObjectPoolReuseSetting__DoNotReuse                                              = 1,
	EObjectPoolReuseSetting__CreateNewActor                                          = 2
};

/// Class /Script/ObjectPooler.AsyncRetrieveActorFromPool
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UAsyncRetrieveActorFromPool : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,587) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	class UObjectPoolBase*                             ObjectPool;                                                 // 0x0040   (0x0008)  
	class APooledActor*                                RetrievedActor;                                             // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/ObjectPooler.AsyncRetrieveActorFromPool.OnAsyncHandleRetrieveActor__DelegateSignature
	// void OnAsyncHandleRetrieveActor__DelegateSignature(class UObjectPoolBase* ObjectPool, class APooledActor* RetrievedActor, bool bSuccess); // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.AsyncRetrieveActorFromPool.AsyncRetrieveActorFromPool
	// class UAsyncRetrieveActorFromPool* AsyncRetrieveActorFromPool(class UObject* WorldContextObject, class UObjectPoolBase* InObjectPool); // [0x1780790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ObjectPooler.AsyncRetrieveActorFromPool_Comp
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UAsyncRetrieveActorFromPool_Comp : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,588) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	class UObjectPoolComponent*                        ObjectPoolComponent;                                        // 0x0040   (0x0008)  
	class APooledActor*                                RetrievedActor;                                             // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/ObjectPooler.AsyncRetrieveActorFromPool_Comp.OnAsyncHandleRetrieveActor__DelegateSignature
	// void OnAsyncHandleRetrieveActor__DelegateSignature(class UObjectPoolComponent* ObjectPool, class APooledActor* RetrievedActor, bool bSuccess); // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.AsyncRetrieveActorFromPool_Comp.AsyncRetrieveActorFromPool_Component
	// class UAsyncRetrieveActorFromPool_Comp* AsyncRetrieveActorFromPool_Component(class UObject* WorldContextObject, class UObjectPoolComponent* InObjectPoolComponent); // [0x1780860] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/ObjectPooler.ObjectPoolWarmUpSetting
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 pad: 0x0000
struct FObjectPoolWarmUpSetting
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           WarmUpAcross;                                               // 0x0002   (0x0002)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Struct /Script/ObjectPooler.PlatformPoolSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FPlatformPoolSettings
{ 
	int32_t                                            PoolSize;                                                   // 0x0000   (0x0004)  
	float                                              ActorMaxLifetime;                                           // 0x0004   (0x0004)  
	EObjectPoolReuseSetting                            ReuseSetting;                                               // 0x0008   (0x0001)  
	bool                                               bReturnToPoolAfterPhysicsHit;                               // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/ObjectPooler.ObjectPoolBase
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000D0) align 8 pad: 0x0000
class UObjectPoolBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,589) /* FMulticastInlineDelegate */ __um(OnActorRetrievedFromPool);                           // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,590) /* FMulticastInlineDelegate */ __um(OnActorReturnedToPool);                              // 0x0038   (0x0010)  
	FName                                              OwningManagerName;                                          // 0x0048   (0x0008)  
	FName                                              PoolName;                                                   // 0x0050   (0x0008)  
	int32_t                                            PoolSize;                                                   // 0x0058   (0x0004)  
	EObjectPoolReuseSetting                            ReuseSetting;                                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	class UClass*                                      ObjectClassToPool;                                          // 0x0060   (0x0008)  
	bool                                               bFillPoolOnBeginPlay : 1;                                   // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0069   (0x0001)  MISSED
	FObjectPoolWarmUpSetting                           WarmUp;                                                     // 0x006A   (0x0008)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	FPlatformPoolSettings                              PS4;                                                        // 0x0074   (0x000C)  
	FPlatformPoolSettings                              PS5;                                                        // 0x0080   (0x000C)  
	FPlatformPoolSettings                              XboxOne;                                                    // 0x008C   (0x000C)  
	FPlatformPoolSettings                              XboxSeries;                                                 // 0x0098   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<class APooledActor*>                        PooledActors;                                               // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x00B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/ObjectPooler.ObjectPoolBase.OnActorReturnedFromPool__DelegateSignature
	// void OnActorReturnedFromPool__DelegateSignature(class UObjectPoolBase* PoolOwner, class APooledActor* Actor);            // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.ObjectPoolBase.OnActorRetrievedFromPool__DelegateSignature
	// void OnActorRetrievedFromPool__DelegateSignature(class UObjectPoolBase* PoolOwner, class APooledActor* Actor);           // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.ObjectPoolBase.IsWarmUpComplete
	// bool IsWarmUpComplete();                                                                                                 // [0x17813e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.IsPoolEmpty
	// bool IsPoolEmpty();                                                                                                      // [0x1781380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.GetReuseSetting
	// EObjectPoolReuseSetting GetReuseSetting();                                                                               // [0x17811c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.GetPoolSize
	// int32_t GetPoolSize();                                                                                                   // [0x1781010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.GetPoolName
	// FName GetPoolName();                                                                                                     // [0x1780f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.GetPooledActors
	// TArray<APooledActor*> GetPooledActors();                                                                                 // [0x1781100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.GetActorFromPool
	// class APooledActor* GetActorFromPool(EObjectPoolRetrieveActorResult& Results);                                           // [0x1780b30] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolBase.FillPool
	// void FillPool();                                                                                                         // [0x1780a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolBase.EmptyPool
	// void EmptyPool();                                                                                                        // [0x1780a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolBase.AreAllActorsInUse
	// bool AreAllActorsInUse();                                                                                                // [0x1780730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolBase.AddActorToPool
	// void AddActorToPool(class APooledActor* NewPooledActor);                                                                 // [0x1780610] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ObjectPooler.ObjectPoolComponent
/// Size: 0x0070 (112 bytes) (0x0000B0 - 0x000120) align 8 pad: 0x0000
class UObjectPoolComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,591) /* FMulticastInlineDelegate */ __um(OnActorRetrievedFromPool);                           // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,592) /* FMulticastInlineDelegate */ __um(OnActorReturnedToPool);                              // 0x00C0   (0x0010)  
	FName                                              PoolName;                                                   // 0x00D0   (0x0008)  
	int32_t                                            PoolSize;                                                   // 0x00D8   (0x0004)  
	EObjectPoolReuseSetting                            ReuseSetting;                                               // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UClass*                                      ObjectClassToPool;                                          // 0x00E0   (0x0008)  
	bool                                               bFillPoolOnBeginPlay : 1;                                   // 0x00E8:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00E9   (0x0001)  MISSED
	FObjectPoolWarmUpSetting                           WarmUp;                                                     // 0x00EA   (0x0008)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00F2   (0x0006)  MISSED
	TArray<class APooledActor*>                        PooledActors;                                               // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0108   (0x0018)  MISSED


	/// Functions
	// Function /Script/ObjectPooler.ObjectPoolComponent.OnActorReturnedFromPool__DelegateSignature
	// void OnActorReturnedFromPool__DelegateSignature(class UObjectPoolComponent* PoolOwner, class APooledActor* Actor);       // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.ObjectPoolComponent.OnActorRetrievedFromPool__DelegateSignature
	// void OnActorRetrievedFromPool__DelegateSignature(class UObjectPoolComponent* PoolOwner, class APooledActor* Actor);      // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.ObjectPoolComponent.IsWarmUpComplete
	// bool IsWarmUpComplete();                                                                                                 // [0x1781410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolComponent.IsPoolEmpty
	// bool IsPoolEmpty();                                                                                                      // [0x17813b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolComponent.GetPoolSize
	// int32_t GetPoolSize();                                                                                                   // [0x1781040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolComponent.GetPoolName
	// FName GetPoolName();                                                                                                     // [0x1780fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolComponent.GetActorFromPool
	// class APooledActor* GetActorFromPool(EObjectPoolRetrieveActorResult& Results);                                           // [0x1780be0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolComponent.FillPool
	// void FillPool();                                                                                                         // [0x1780a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolComponent.EmptyPool
	// void EmptyPool();                                                                                                        // [0x1780a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolComponent.AreAllActorsInUse
	// bool AreAllActorsInUse();                                                                                                // [0x1780760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.ObjectPoolComponent.AddActorToPool
	// void AddActorToPool(class APooledActor* NewPooledActor);                                                                 // [0x17806a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ObjectPooler.ObjectPoolManager
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FObjectPoolManager
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              ManagerName;                                                // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<class UClass*>                              ObjectPools;                                                // 0x0010   (0x0010)  
	FText                                              Note;                                                       // 0x0020   (0x0018)  
};

/// Class /Script/ObjectPooler.ObjectPoolerSettings
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UObjectPoolerSettings : public UObject
{ 
public:
	TArray<FObjectPoolManager>                         ObjectPoolManagers;                                         // 0x0028   (0x0010)  
};

/// Class /Script/ObjectPooler.ObjectPoolerWorldSubsystem
/// Size: 0x0028 (40 bytes) (0x000030 - 0x000058) align 8 pad: 0x0000
class UObjectPoolerWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,593) /* FMulticastInlineDelegate */ __um(OnObjectPoolsInitialized);                           // 0x0038   (0x0010)  
	TArray<class UObjectPoolBase*>                     ObjectPools;                                                // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/ObjectPooler.ObjectPoolerWorldSubsystem.OnObjectPoolsInitialized__DelegateSignature
	// void OnObjectPoolsInitialized__DelegateSignature();                                                                      // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.ObjectPoolerWorldSubsystem.InitializeObjectPools
	// void InitializeObjectPools();                                                                                            // [0x1781270] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolerWorldSubsystem.DestroyObjectPools
	// void DestroyObjectPools();                                                                                               // [0x1780970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ObjectPooler.ObjectPoolFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UObjectPoolFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.MarkActorNotInUse
	// void MarkActorNotInUse(class APooledActor* InPooledActor);                                                               // [0x17814c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.MarkActorInUse
	// void MarkActorInUse(class APooledActor* InPooledActor);                                                                  // [0x1781440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.IsActorInUse
	// bool IsActorInUse(class APooledActor* InPooledActor);                                                                    // [0x1781290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetUnactivePooledActorCount
	// int32_t GetUnactivePooledActorCount(class UObject* WorldContext);                                                        // [0x17811e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetPooledActorCount
	// int32_t GetPooledActorCount(class UObject* WorldContext);                                                                // [0x1781070] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetObjectPool
	// class UObjectPoolBase* GetObjectPool(class UObject* WorldContext, FName PoolName);                                       // [0x1780ec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetNumOfObjectPoolsInWorld
	// int32_t GetNumOfObjectPoolsInWorld(class UObject* WorldContext);                                                         // [0x1780e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetAllObjectPools
	// TArray<UObjectPoolBase*> GetAllObjectPools(class UObject* WorldContext);                                                 // [0x1780d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetAllObjectPoolClassesFromManager
	// TArray<UClass*> GetAllObjectPoolClassesFromManager(FName ManagerName);                                                   // [0x1780c90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.GetActivePooledActorCount
	// int32_t GetActivePooledActorCount(class UObject* WorldContext);                                                          // [0x1780aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.DoesObjectPoolExist
	// bool DoesObjectPoolExist(FName PoolName);                                                                                // [0x1780990] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ObjectPooler.ObjectPoolFunctionLibrary.DestroyAllObjectPools
	// void DestroyAllObjectPools();                                                                                            // [0x1780950] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ObjectPooler.PooledActor
/// Size: 0x0048 (72 bytes) (0x000220 - 0x000268) align 8 pad: 0x0000
class APooledActor : public AActor
{ 
public:
	SDK_UNDEFINED(16,594) /* FMulticastInlineDelegate */ __um(InUse);                                              // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,595) /* FMulticastInlineDelegate */ __um(NotInUse);                                           // 0x0230   (0x0010)  
	float                                              MaxLifespan;                                                // 0x0240   (0x0004)  
	bool                                               bEverAllowTick : 1;                                         // 0x0244:0 (0x0001)  
	bool                                               bEverAllowCollisions : 1;                                   // 0x0244:1 (0x0001)  
	bool                                               bReturnToPoolAfterPhysicsHit : 1;                           // 0x0244:2 (0x0001)  
	bool                                               bInUse : 1;                                                 // 0x0244:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x0248   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x024C   (0x0004)  MISSED
	class UObjectPoolBase*                             PoolOwner;                                                  // 0x0250   (0x0008)  
	class UObjectPoolComponent*                        PoolOwner_Component;                                        // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0260   (0x0008)  MISSED


	/// Functions
	// Function /Script/ObjectPooler.PooledActor.SetActive
	// void SetActive(bool bActive);                                                                                            // [0x17816c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ObjectPooler.PooledActor.PooledActor_EndPlay
	// void PooledActor_EndPlay();                                                                                              // [0x17816a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ObjectPooler.PooledActor.PooledActor_BeginPlay
	// void PooledActor_BeginPlay();                                                                                            // [0x1781680] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ObjectPooler.PooledActor.OnLifeSpanExpired
	// void OnLifeSpanExpired();                                                                                                // [0x1781660] Native|Event|Protected|BlueprintEvent 
	// Function /Script/ObjectPooler.PooledActor.NotInUseSignature__DelegateSignature
	// void NotInUseSignature__DelegateSignature(class APooledActor* PooledActor);                                              // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.PooledActor.MarkNotInUse
	// void MarkNotInUse(bool bBroadcast);                                                                                      // [0x17815d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.PooledActor.MarkInUse
	// void MarkInUse(bool bBroadcast);                                                                                         // [0x1781540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ObjectPooler.PooledActor.IsNotInUse
	// bool IsNotInUse();                                                                                                       // [0x1781350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.PooledActor.IsInUse
	// bool IsInUse();                                                                                                          // [0x1781320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ObjectPooler.PooledActor.InUseSignature__DelegateSignature
	// void InUseSignature__DelegateSignature(class APooledActor* PooledActor);                                                 // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ObjectPooler.PooledActor.DeactivateAllComponents
	// void DeactivateAllComponents();                                                                                          // [0x1780930] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ObjectPooler.PooledActor.ActivateAllComponents
	// void ActivateAllComponents();                                                                                            // [0x17805f0] Final|Native|Protected|BlueprintCallable 
};

static_assert(sizeof(UAsyncRetrieveActorFromPool) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UAsyncRetrieveActorFromPool_Comp) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FObjectPoolWarmUpSetting) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPlatformPoolSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UObjectPoolBase) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UObjectPoolComponent) == 0x0120); // 288 bytes (0x0000B0 - 0x000120)
static_assert(sizeof(FObjectPoolManager) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UObjectPoolerSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UObjectPoolerWorldSubsystem) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UObjectPoolFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(APooledActor) == 0x0268); // 616 bytes (0x000220 - 0x000268)
static_assert(offsetof(UAsyncRetrieveActorFromPool, ObjectPool) == 0x0040);
static_assert(offsetof(UAsyncRetrieveActorFromPool, RetrievedActor) == 0x0048);
static_assert(offsetof(UAsyncRetrieveActorFromPool_Comp, ObjectPoolComponent) == 0x0040);
static_assert(offsetof(UAsyncRetrieveActorFromPool_Comp, RetrievedActor) == 0x0048);
static_assert(offsetof(FPlatformPoolSettings, ReuseSetting) == 0x0008);
static_assert(offsetof(UObjectPoolBase, OwningManagerName) == 0x0048);
static_assert(offsetof(UObjectPoolBase, PoolName) == 0x0050);
static_assert(offsetof(UObjectPoolBase, ReuseSetting) == 0x005C);
static_assert(offsetof(UObjectPoolBase, ObjectClassToPool) == 0x0060);
static_assert(offsetof(UObjectPoolBase, WarmUp) == 0x006A);
static_assert(offsetof(UObjectPoolBase, PS4) == 0x0074);
static_assert(offsetof(UObjectPoolBase, PS5) == 0x0080);
static_assert(offsetof(UObjectPoolBase, XboxOne) == 0x008C);
static_assert(offsetof(UObjectPoolBase, XboxSeries) == 0x0098);
static_assert(offsetof(UObjectPoolBase, PooledActors) == 0x00A8);
static_assert(offsetof(UObjectPoolComponent, PoolName) == 0x00D0);
static_assert(offsetof(UObjectPoolComponent, ReuseSetting) == 0x00DC);
static_assert(offsetof(UObjectPoolComponent, ObjectClassToPool) == 0x00E0);
static_assert(offsetof(UObjectPoolComponent, WarmUp) == 0x00EA);
static_assert(offsetof(UObjectPoolComponent, PooledActors) == 0x00F8);
static_assert(offsetof(FObjectPoolManager, ManagerName) == 0x0004);
static_assert(offsetof(FObjectPoolManager, ObjectPools) == 0x0010);
static_assert(offsetof(FObjectPoolManager, Note) == 0x0020);
static_assert(offsetof(UObjectPoolerSettings, ObjectPoolManagers) == 0x0028);
static_assert(offsetof(UObjectPoolerWorldSubsystem, ObjectPools) == 0x0048);
static_assert(offsetof(APooledActor, PoolOwner) == 0x0250);
static_assert(offsetof(APooledActor, PoolOwner_Component) == 0x0258);
