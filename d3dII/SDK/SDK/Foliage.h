
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x01 (1 bytes)
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x01 (1 bytes)
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x01 (1 bytes)
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x01 (1 bytes)
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x01 (1 bytes)
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0038 (56 bytes) (0x000678 - 0x0006B0) align 16 pad: 0x0000
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,1727) /* FMulticastInlineDelegate */ __um(OnInstanceTakePointDamage);                         // 0x0678   (0x0010)  
	SDK_UNDEFINED(16,1728) /* FMulticastInlineDelegate */ __um(OnInstanceTakeRadialDamage);                        // 0x0688   (0x0010)  
	FGuid                                              GenerationGuid;                                             // 0x0698   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x06A8   (0x0008)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x3438580] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);          // [0x3438440] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0388 (904 bytes) (0x000028 - 0x0003B0) align 8 pad: 0x0000
class UFoliageType : public UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)  
	float                                              Density;                                                    // 0x0038   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)  
	float                                              Radius;                                                     // 0x0040   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)  
	EFoliageScaling                                    Scaling;                                                    // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel[4];                                // 0x0068   (0x0030)  
	TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)  
	bool                                               VertexColorMaskInvert : 1;                                  // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)  
	bool                                               AlignToNormal : 1;                                          // 0x00AC:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)  
	bool                                               RandomYaw : 1;                                              // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)  
	bool                                               CollisionWithWorld : 1;                                     // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0108   (0x000C)  
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0114   (0x001C)  
	FVector                                            LowBoundOriginRadius;                                       // 0x0130   (0x000C)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x013C   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x013D   (0x0003)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x0140   (0x0008)  
	bool                                               bEnableStaticLighting : 1;                                  // 0x0148:0 (0x0001)  
	bool                                               CastShadow : 1;                                             // 0x0148:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0148:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0148:3 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0148:4 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0148:5 (0x0001)  
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0148:6 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0148:7 (0x0001)  
	bool                                               bOverrideLightMapRes : 1;                                   // 0x0149:0 (0x0001)  
	unsigned char                                      UnknownData10_5[0x2];                                       // 0x014A   (0x0002)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x014C   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x0150   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	bool                                               bUseAsOccluder : 1;                                         // 0x0154:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0155   (0x0003)  MISSED
	bool                                               bVisibleInRayTracing : 1;                                   // 0x0158:0 (0x0001)  
	bool                                               bEvaluateWorldPositionOffset : 1;                           // 0x0158:1 (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0160   (0x0158)  
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x02B8   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData14_6[0x2];                                       // 0x02BA   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x02BC:0 (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x02BD   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData16_6[0x3];                                       // 0x02C1   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x02C4   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x02C8   (0x0004)  
	float                                              CollisionRadius;                                            // 0x02CC   (0x0004)  
	float                                              ShadeRadius;                                                // 0x02D0   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x02D4   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x02D8   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x02DC   (0x0004)  
	float                                              SpreadVariance;                                             // 0x02E0   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x02E4   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x02E8   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x02EC   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x02F0   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData17_6[0x2];                                       // 0x02F2   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x02F4   (0x0004)  
	float                                              MaxAge;                                                     // 0x02F8   (0x0004)  
	float                                              OverlapPriority;                                            // 0x02FC   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x0300   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0308   (0x0088)  
	int32_t                                            ChangeCount;                                                // 0x0390   (0x0004)  
	bool                                               ReapplyDensity : 1;                                         // 0x0394:0 (0x0001)  
	bool                                               ReapplyRadius : 1;                                          // 0x0394:1 (0x0001)  
	bool                                               ReapplyAlignToNormal : 1;                                   // 0x0394:2 (0x0001)  
	bool                                               ReapplyRandomYaw : 1;                                       // 0x0394:3 (0x0001)  
	bool                                               ReapplyScaling : 1;                                         // 0x0394:4 (0x0001)  
	bool                                               ReapplyScaleX : 1;                                          // 0x0394:5 (0x0001)  
	bool                                               ReapplyScaleY : 1;                                          // 0x0394:6 (0x0001)  
	bool                                               ReapplyScaleZ : 1;                                          // 0x0394:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle : 1;                                // 0x0395:0 (0x0001)  
	bool                                               ReapplyGroundSlope : 1;                                     // 0x0395:1 (0x0001)  
	bool                                               ReapplyHeight : 1;                                          // 0x0395:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers : 1;                                 // 0x0395:3 (0x0001)  
	bool                                               ReapplyZOffset : 1;                                         // 0x0395:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld : 1;                              // 0x0395:5 (0x0001)  
	bool                                               ReapplyVertexColorMask : 1;                                 // 0x0395:6 (0x0001)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0395:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad : 1;                                   // 0x0396:0 (0x0001)  
	unsigned char                                      UnknownData18_5[0x1];                                       // 0x0397   (0x0001)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0398   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x03A8   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData19_7[0x3];                                       // 0x03AD   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0010 (16 bytes) (0x0003B0 - 0x0003C0) align 8 pad: 0x0000
class UFoliageType_Actor : public UFoliageType
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x03B0   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x03B9   (0x0007)  MISSED
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (32 bytes) (0x0003B0 - 0x0003D0) align 8 pad: 0x0000
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x03B0   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x03B8   (0x0010)  
	class UClass*                                      ComponentClass;                                             // 0x03C8   (0x0008)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (80 bytes) (0x000220 - 0x000270) align 8 pad: 0x0000
class AInstancedFoliageActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0220   (0x0050)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (96 bytes) (0x000230 - 0x000290) align 8 pad: 0x0000
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0230   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x0238   (0x000C)  
	FVector                                            FoliageVelocity;                                            // 0x0244   (0x000C)  
	FVector                                            FoliageForce;                                               // 0x0250   (0x000C)  
	FVector                                            FoliagePosition;                                            // 0x025C   (0x000C)  
	float                                              FoliageDamageImpulseScale;                                  // 0x0268   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x026C   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x0270   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x0274   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0278   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x027C   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0280   (0x0004)  
	float                                              MaxForce;                                                   // 0x0284   (0x0004)  
	float                                              Mass;                                                       // 0x0288   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x028C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x3438220] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0010 (16 bytes) (0x0004E0 - 0x0004F0) align 16 pad: 0x0000
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x04E0   (0x0010)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0008 (8 bytes) (0x000258 - 0x000260) align 8 pad: 0x0000
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x0258   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (40 bytes) (0x0000B0 - 0x0000D8) align 8 pad: 0x0000
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00B0   (0x0008)  
	float                                              TileOverlap;                                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class AVolume*                                     SpawningVolume;                                             // 0x00C0   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x00C8   (0x0010)  
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FFoliageTypeObject
{ 
	class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)  
	class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UClass*                                      Type;                                                       // 0x0018   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000068) align 8 pad: 0x0000
class UProceduralFoliageSpawner : public UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)  
	float                                              TileSize;                                                   // 0x002C   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x34386e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 pad: 0x0000
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	float                                              Age;                                                        // 0x001C   (0x0004)  
	FVector                                            Normal;                                                     // 0x0020   (0x000C)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	class UFoliageType*                                Type;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (304 bytes) (0x000028 - 0x000158) align 8 pad: 0x0000
class UProceduralFoliageTile : public UObject
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x78];                                      // 0x00E0   (0x0078)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (8 bytes) (0x000258 - 0x000260) align 8 pad: 0x0000
class AProceduralFoliageVolume : public AVolume
{ 
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x0258   (0x0008)  
};

static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0x06B0); // 1712 bytes (0x000678 - 0x0006B0)
static_assert(sizeof(UFoliageStatistics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UFoliageType) == 0x03B0); // 944 bytes (0x000028 - 0x0003B0)
static_assert(sizeof(UFoliageType_Actor) == 0x03C0); // 960 bytes (0x0003B0 - 0x0003C0)
static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x03D0); // 976 bytes (0x0003B0 - 0x0003D0)
static_assert(sizeof(AInstancedFoliageActor) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(AInteractiveFoliageActor) == 0x0290); // 656 bytes (0x000230 - 0x000290)
static_assert(sizeof(UInteractiveFoliageComponent) == 0x04F0); // 1264 bytes (0x0004E0 - 0x0004F0)
static_assert(sizeof(AProceduralFoliageBlockingVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(sizeof(UProceduralFoliageComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(FFoliageTypeObject) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UProceduralFoliageSpawner) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FProceduralFoliageInstance) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UProceduralFoliageTile) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(AProceduralFoliageVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 0x0698);
static_assert(offsetof(UFoliageType, UpdateGuid) == 0x0028);
static_assert(offsetof(UFoliageType, Scaling) == 0x004C);
static_assert(offsetof(UFoliageType, ScaleX) == 0x0050);
static_assert(offsetof(UFoliageType, ScaleY) == 0x0058);
static_assert(offsetof(UFoliageType, ScaleZ) == 0x0060);
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 0x0068);
static_assert(offsetof(UFoliageType, VertexColorMask) == 0x0098);
static_assert(offsetof(UFoliageType, ZOffset) == 0x00A4);
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 0x00BC);
static_assert(offsetof(UFoliageType, Height) == 0x00C4);
static_assert(offsetof(UFoliageType, LandscapeLayers) == 0x00D0);
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 0x00E8);
static_assert(offsetof(UFoliageType, LandscapeLayer) == 0x00FC);
static_assert(offsetof(UFoliageType, CollisionScale) == 0x0108);
static_assert(offsetof(UFoliageType, MeshBounds) == 0x0114);
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 0x0130);
static_assert(offsetof(UFoliageType, Mobility) == 0x013C);
static_assert(offsetof(UFoliageType, CullDistance) == 0x0140);
static_assert(offsetof(UFoliageType, LightmapType) == 0x0150);
static_assert(offsetof(UFoliageType, BodyInstance) == 0x0160);
static_assert(offsetof(UFoliageType, CustomNavigableGeometry) == 0x02B8);
static_assert(offsetof(UFoliageType, LightingChannels) == 0x02B9);
static_assert(offsetof(UFoliageType, CustomDepthStencilWriteMask) == 0x02C0);
static_assert(offsetof(UFoliageType, ProceduralScale) == 0x0300);
static_assert(offsetof(UFoliageType, ScaleCurve) == 0x0308);
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 0x0398);
static_assert(offsetof(UFoliageType, VirtualTextureRenderPassType) == 0x03AC);
static_assert(offsetof(UFoliageType_Actor, ActorClass) == 0x03B0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 0x03B0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 0x03B8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 0x03C8);
static_assert(offsetof(AInteractiveFoliageActor, CapsuleComponent) == 0x0230);
static_assert(offsetof(AInteractiveFoliageActor, TouchingActorEntryPosition) == 0x0238);
static_assert(offsetof(AInteractiveFoliageActor, FoliageVelocity) == 0x0244);
static_assert(offsetof(AInteractiveFoliageActor, FoliageForce) == 0x0250);
static_assert(offsetof(AInteractiveFoliageActor, FoliagePosition) == 0x025C);
static_assert(offsetof(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 0x0258);
static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 0x00B0);
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 0x00C0);
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 0x00C8);
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x0000);
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x0008);
static_assert(offsetof(FFoliageTypeObject, Type) == 0x0018);
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 0x0040);
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x0000);
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x0010);
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x0020);
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x0030);
static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 0x0028);
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 0x00D0);
static_assert(offsetof(AProceduralFoliageVolume, ProceduralComponent) == 0x0258);
