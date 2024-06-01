
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x01 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_None                                           = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 5
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x01B8 (440 bytes) (0x0000B8 - 0x000270) align 8 pad: 0x0000
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x110];                                     // 0x00B8   (0x0110)  MISSED
	SDK_UNDEFINED(80,1698) /* TMap<UPrimitiveComponent*, FChaosHandlerSet> */ __um(CollisionEventRegistrations);   // 0x01C8   (0x0050)  
	SDK_UNDEFINED(80,1699) /* TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> */ __um(BreakEventRegistrations); // 0x0218   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x432dee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UChaosSolver : public UObject
{ 
public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 pad: 0x0000
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (248 bytes) (0x000220 - 0x000318) align 8 pad: 0x0000
class AChaosSolverActor : public AActor
{ 
public:
	FChaosSolverConfiguration                          Properties;                                                 // 0x0220   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x0288   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x028C   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0290   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x0294   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0298   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x029C   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x029D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x029E   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x02A0   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x02B4   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02C5   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x02C8   (0x0010)  
	float                                              MassScale;                                                  // 0x02D8   (0x0004)  
	bool                                               bGenerateContactGraph;                                      // 0x02DC   (0x0001)  
	bool                                               bHasFloor;                                                  // 0x02DD   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x02DE   (0x0002)  MISSED
	float                                              FloorHeight;                                                // 0x02E0   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x02E4   (0x0003)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x02E7   (0x0001)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x02F0   (0x0018)  MISSED
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                           // 0x0308   (0x0008)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0310   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// void SetSolverActive(bool bActive);                                                                                      // [0x1fd3cd0] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// void SetAsCurrentWorldSolver();                                                                                          // [0x432dfd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0040   (0x0018)  
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FChaosPhysicsCollisionInfo
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FVector                                            Normal;                                                     // 0x001C   (0x000C)  
	FVector                                            AccumulatedImpulse;                                         // 0x0028   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0034   (0x000C)  
	FVector                                            OtherVelocity;                                              // 0x0040   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x004C   (0x000C)  
	FVector                                            OtherAngularVelocity;                                       // 0x0058   (0x000C)  
	float                                              Mass;                                                       // 0x0064   (0x0004)  
	float                                              OtherMass;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FChaosBreakEvent
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Velocity;                                                   // 0x0014   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0020   (0x000C)  
	float                                              Mass;                                                       // 0x002C   (0x0004)  
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(80,1700) /* TSet<UObject*> */        __um(ChaosHandlers);                                        // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

static_assert(sizeof(UChaosDebugDrawComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UChaosEventListenerComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x0270); // 624 bytes (0x0000B8 - 0x000270)
static_assert(sizeof(UChaosNotifyHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FChaosDebugSubstepControl) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(AChaosSolverActor) == 0x0318); // 792 bytes (0x000220 - 0x000318)
static_assert(sizeof(UChaosSolverSettings) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FChaosBreakEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FChaosHandlerSet) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(AChaosSolverActor, Properties) == 0x0220);
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x029C);
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x02A0);
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x02B4);
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x02C8);
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x02E4);
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x02E8);
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x0308);
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x0000);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x0008);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x0010);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x001C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x0028);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x0034);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x004C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x0058);
static_assert(offsetof(FChaosBreakEvent, Component) == 0x0000);
static_assert(offsetof(FChaosBreakEvent, Location) == 0x0008);
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x0014);
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x0020);
