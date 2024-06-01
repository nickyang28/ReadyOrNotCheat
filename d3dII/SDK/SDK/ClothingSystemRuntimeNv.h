
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1
};

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FClothConstraintSetupNv
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000140) align 8 pad: 0x0000
class UClothConfigNv : public UClothConfigCommon
{ 
public:
	EClothingWindMethodNv                              ClothingWindMethod;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FClothConstraintSetupNv                            VerticalConstraint;                                         // 0x002C   (0x0010)  
	FClothConstraintSetupNv                            HorizontalConstraint;                                       // 0x003C   (0x0010)  
	FClothConstraintSetupNv                            BendConstraint;                                             // 0x004C   (0x0010)  
	FClothConstraintSetupNv                            ShearConstraint;                                            // 0x005C   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x006C   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0070   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x0074   (0x0004)  
	FVector                                            Damping;                                                    // 0x0078   (0x000C)  
	float                                              Friction;                                                   // 0x0084   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x0088   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x008C   (0x0004)  
	FVector                                            LinearDrag;                                                 // 0x0090   (0x000C)  
	FVector                                            AngularDrag;                                                // 0x009C   (0x000C)  
	FVector                                            LinearInertiaScale;                                         // 0x00A8   (0x000C)  
	FVector                                            AngularInertiaScale;                                        // 0x00B4   (0x000C)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x00C0   (0x000C)  
	float                                              SolverFrequency;                                            // 0x00CC   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x00D0   (0x0004)  
	float                                              GravityScale;                                               // 0x00D4   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x00D8   (0x000C)  
	bool                                               bUseGravityOverride;                                        // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x00E8   (0x0004)  
	float                                              TetherLimit;                                                // 0x00EC   (0x0004)  
	float                                              CollisionThickness;                                         // 0x00F0   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x00F4   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x00F8   (0x0004)  
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0100   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0110   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0120   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0130   (0x0010)  
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0010 (16 bytes) (0x000090 - 0x0000A0) align 8 pad: 0x0000
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// void SetAnimDriveDamperStiffness(float InStiffness);                                                                     // [0x41932f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (64 bytes) (0x0000E0 - 0x000120) align 8 pad: 0x0000
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
public:
	TArray<float>                                      MaxDistances;                                               // 0x00E0   (0x0010)  
	TArray<float>                                      BackstopDistances;                                          // 0x00F0   (0x0010)  
	TArray<float>                                      BackstopRadiuses;                                           // 0x0100   (0x0010)  
	TArray<float>                                      AnimDriveMultipliers;                                       // 0x0110   (0x0010)  
};

static_assert(sizeof(FClothConstraintSetupNv) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UClothConfigNv) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x0120); // 288 bytes (0x0000E0 - 0x000120)
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x0028);
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x002C);
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x003C);
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x004C);
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x005C);
static_assert(offsetof(UClothConfigNv, Damping) == 0x0078);
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x0090);
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x009C);
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x00A8);
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x00B4);
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x00C0);
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x00D8);
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x00FC);
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x0100);
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x0110);
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x0120);
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x0130);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x00E0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x00F0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x0100);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x0110);
