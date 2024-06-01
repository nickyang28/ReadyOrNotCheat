
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ClothingSystemRuntimeCommon.EClothMassMode
/// Size: 0x01 (1 bytes)
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass                                                      = 0,
	EClothMassMode__TotalMass                                                        = 1,
	EClothMassMode__Density                                                          = 2,
	EClothMassMode__MaxClothMassMode                                                 = 3
};

/// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy                                               = 0,
	EClothingWindMethod_Legacy__Accurate                                             = 1
};

/// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
/// Size: 0x01 (1 bytes)
enum class EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None                                                     = 0,
	EWeightMapTargetCommon__MaxDistance                                              = 1,
	EWeightMapTargetCommon__BackstopDistance                                         = 2,
	EWeightMapTargetCommon__BackstopRadius                                           = 3,
	EWeightMapTargetCommon__AnimDriveStiffness                                       = 4,
	EWeightMapTargetCommon__AnimDriveDamping                                         = 5
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UClothConfigCommon : public UClothConfigBase
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UClothSharedConfigCommon : public UClothConfigCommon
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UClothingAssetCustomData : public UObject
{ 
public:
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 pad: 0x0000
struct FClothPhysicalMeshData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1671) /* TMap<uint32_t, FPointWeightMap> */ __um(WeightMaps);                                 // 0x0030   (0x0050)  
	TArray<float>                                      InverseMasses;                                              // 0x0080   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0090   (0x0010)  
	int32_t                                            MaxBoneWeights;                                             // 0x00A0   (0x0004)  
	int32_t                                            NumFixedVerts;                                              // 0x00A4   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x00A8   (0x0010)  
	TArray<float>                                      MaxDistances;                                               // 0x00B8   (0x0010)  
	TArray<float>                                      BackstopDistances;                                          // 0x00C8   (0x0010)  
	TArray<float>                                      BackstopRadiuses;                                           // 0x00D8   (0x0010)  
	TArray<float>                                      AnimDriveMultipliers;                                       // 0x00E8   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 pad: 0x0000
struct FClothLODDataCommon
{ 
	FClothPhysicalMeshData                             PhysicalMeshData;                                           // 0x0000   (0x00F8)  
	FClothCollisionData                                CollisionData;                                              // 0x00F8   (0x0040)  
	bool                                               bUseMultipleInfluences;                                     // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              SkinningKernelRadius;                                       // 0x013C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0140   (0x0020)  MISSED
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000F0) align 8 pad: 0x0000
class UClothingAssetCommon : public UClothingAssetBase
{ 
public:
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,1672) /* TMap<FName, UClothConfigBase*> */ __um(ClothConfigs);                                // 0x0050   (0x0050)  
	TArray<FClothLODDataCommon>                        LODData;                                                    // 0x00A0   (0x0010)  
	TArray<int32_t>                                    LodMap;                                                     // 0x00B0   (0x0010)  
	TArray<FName>                                      UsedBoneNames;                                              // 0x00C0   (0x0010)  
	TArray<int32_t>                                    UsedBoneIndices;                                            // 0x00D0   (0x0010)  
	int32_t                                            ReferenceBoneIndex;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UClothingAssetCustomData*                    CustomData;                                                 // 0x00E8   (0x0008)  
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
/// Size: 0x0160 (352 bytes) (0x000028 - 0x000188) align 8 pad: 0x0000
class UClothLODDataCommon_Legacy : public UObject
{ 
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                           // 0x0028   (0x0008)  
	FClothPhysicalMeshData                             ClothPhysicalMeshData;                                      // 0x0030   (0x00F8)  
	FClothCollisionData                                CollisionData;                                              // 0x0128   (0x0040)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0168   (0x0020)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FClothConstraintSetup_Legacy
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
/// Size: 0x00D4 (212 bytes) (0x000000 - 0x0000D4) align 4 pad: 0x0000
struct FClothConfig_Legacy
{ 
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0004   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0014   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0024   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0034   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x0044   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0048   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x004C   (0x0004)  
	FVector                                            Damping;                                                    // 0x0050   (0x000C)  
	float                                              Friction;                                                   // 0x005C   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x0060   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x0064   (0x0004)  
	FVector                                            LinearDrag;                                                 // 0x0068   (0x000C)  
	FVector                                            AngularDrag;                                                // 0x0074   (0x000C)  
	FVector                                            LinearInertiaScale;                                         // 0x0080   (0x000C)  
	FVector                                            AngularInertiaScale;                                        // 0x008C   (0x000C)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x0098   (0x000C)  
	float                                              SolverFrequency;                                            // 0x00A4   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x00A8   (0x0004)  
	float                                              GravityScale;                                               // 0x00AC   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x00B0   (0x000C)  
	bool                                               bUseGravityOverride;                                        // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x00C0   (0x0004)  
	float                                              TetherLimit;                                                // 0x00C4   (0x0004)  
	float                                              CollisionThickness;                                         // 0x00C8   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x00CC   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x00D0   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.PointWeightMap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FPointWeightMap
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FClothParameterMask_Legacy
{ 
	FName                                              MaskName;                                                   // 0x0000   (0x0008)  
	EWeightMapTargetCommon                             CurrentTarget;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MaxValue;                                                   // 0x000C   (0x0004)  
	float                                              MinValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Values;                                                     // 0x0018   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

static_assert(sizeof(UClothConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothSharedConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingAssetCustomData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FClothPhysicalMeshData) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FClothLODDataCommon) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(UClothingAssetCommon) == 0x00F0); // 240 bytes (0x000048 - 0x0000F0)
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x0188); // 392 bytes (0x000028 - 0x000188)
static_assert(sizeof(FClothConstraintSetup_Legacy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothConfig_Legacy) == 0x00D4); // 212 bytes (0x000000 - 0x0000D4)
static_assert(sizeof(FPointWeightMap) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothParameterMask_Legacy) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x0010);
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x0020);
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x0080);
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x0090);
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x00A8);
static_assert(offsetof(FClothPhysicalMeshData, MaxDistances) == 0x00B8);
static_assert(offsetof(FClothPhysicalMeshData, BackstopDistances) == 0x00C8);
static_assert(offsetof(FClothPhysicalMeshData, BackstopRadiuses) == 0x00D8);
static_assert(offsetof(FClothPhysicalMeshData, AnimDriveMultipliers) == 0x00E8);
static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0x0000);
static_assert(offsetof(FClothLODDataCommon, CollisionData) == 0x00F8);
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x0048);
static_assert(offsetof(UClothingAssetCommon, LODData) == 0x00A0);
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x00B0);
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x00C0);
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x00D0);
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x00E8);
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x0028);
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x0030);
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x0128);
static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0x0000);
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 0x0004);
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 0x0014);
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 0x0024);
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 0x0034);
static_assert(offsetof(FClothConfig_Legacy, Damping) == 0x0050);
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 0x0068);
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 0x0074);
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 0x0080);
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 0x008C);
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 0x0098);
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 0x00B0);
static_assert(offsetof(FPointWeightMap, Values) == 0x0000);
static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0x0000);
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 0x0008);
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 0x0018);
