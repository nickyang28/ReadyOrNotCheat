
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CustomAnimNode.ESpeedWarpingAxisMode
/// Size: 0x01 (1 bytes)
enum class ESpeedWarpingAxisMode : uint8_t
{
	ESpeedWarpingAxisMode__IKFootRootLocalX                                          = 0,
	ESpeedWarpingAxisMode__IKFootRootLocalY                                          = 1,
	ESpeedWarpingAxisMode__IKFootRootLocalZ                                          = 2,
	ESpeedWarpingAxisMode__WorldSpaceVectorInput                                     = 3,
	ESpeedWarpingAxisMode__ComponentSpaceVectorInput                                 = 4,
	ESpeedWarpingAxisMode__ActorSpaceVectorInput                                     = 5
};

/// Struct /Script/CustomAnimNode.AnimNode_DistanceMatching
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000090) align 8 pad: 0x0000
struct FAnimNode_DistanceMatching : FAnimNode_AssetPlayerBase
{ 
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0038   (0x0018)  MISSED
	class UAnimSequenceBase*                           PrevSequence;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0060   (0x0008)  
	float                                              Distance;                                                   // 0x0068   (0x0004)  
	FName                                              DistanceCurveName;                                          // 0x006C   (0x0008)  
	bool                                               bEnableDistanceLimit : 1;                                   // 0x0074:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              DistanceLimit;                                              // 0x0078   (0x0004)  
	float                                              PlayRate;                                                   // 0x007C   (0x0004)  
	bool                                               bDistanceMatchFromPoint;                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x0084   (0x0004)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/CustomAnimNode.AnimNode_LazySpringBone
/// Size: 0x00F0 (240 bytes) (0x0000C8 - 0x0001B8) align 8 pad: 0x0000
struct FAnimNode_LazySpringBone : FAnimNode_SkeletalControlBase
{ 
	FVector                                            DrivingForce;                                               // 0x00C8   (0x000C)  
	float                                              DrivingForceStrength;                                       // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00D8   (0x0018)  MISSED
	FVector                                            TargetDistance;                                             // 0x00F0   (0x000C)  
	float                                              Stiffness;                                                  // 0x00FC   (0x0004)  
	float                                              Mass;                                                       // 0x0100   (0x0004)  
	float                                              Damping;                                                    // 0x0104   (0x0004)  
	float                                              Gravity;                                                    // 0x0108   (0x0004)  
	FAxis                                              LookAt_Axis;                                                // 0x010C   (0x0010)  
	bool                                               FlipYawWithRoll;                                            // 0x011C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x27];                                      // 0x011D   (0x0027)  MISSED
	FBoneReference                                     ReferenceBone;                                              // 0x0144   (0x0010)  
	FBoneReference                                     DrivenBone;                                                 // 0x0154   (0x0010)  
	bool                                               bLimitDisplacement;                                         // 0x0164   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              MaxDisplacement;                                            // 0x0168   (0x0004)  
	float                                              SpringStiffness;                                            // 0x016C   (0x0004)  
	float                                              SpringDamping;                                              // 0x0170   (0x0004)  
	float                                              ErrorResetThresh;                                           // 0x0174   (0x0004)  
	bool                                               bNoZSpring;                                                 // 0x0178   (0x0001)  
	bool                                               bTranslateX;                                                // 0x0179   (0x0001)  
	bool                                               bTranslateY;                                                // 0x017A   (0x0001)  
	bool                                               bTranslateZ;                                                // 0x017B   (0x0001)  
	bool                                               bRotateX;                                                   // 0x017C   (0x0001)  
	bool                                               bRotateY;                                                   // 0x017D   (0x0001)  
	bool                                               bRotateZ;                                                   // 0x017E   (0x0001)  
	unsigned char                                      UnknownData03_7[0x39];                                      // 0x017F   (0x0039)  MISSED
};

/// Struct /Script/CustomAnimNode.OrientationWarpingSpineBoneSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FOrientationWarpingSpineBoneSettings
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CustomAnimNode.OrientationWarpingSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FOrientationWarpingSettings
{ 
	TEnumAsByte<EAxis>                                 YawRotationAxis;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BodyOrientationAlpha;                                       // 0x0004   (0x0004)  
	TArray<FOrientationWarpingSpineBoneSettings>       SpineBones;                                                 // 0x0008   (0x0010)  
	FBoneReference                                     IKFootRootBone;                                             // 0x0018   (0x0010)  
	TArray<FBoneReference>                             IKFootBones;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/CustomAnimNode.OrientationWarpingSpineBoneData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FOrientationWarpingSpineBoneData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CustomAnimNode.AnimNode_OrientationWarping
/// Size: 0x0098 (152 bytes) (0x0000C8 - 0x000160) align 8 pad: 0x0000
struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase
{ 
	float                                              LocomotionAngle;                                            // 0x00C8   (0x0004)  
	bool                                               bAutomaticallyCalculateAngleBasedOnCurve;                   // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	FName                                              DirectionCurveName;                                         // 0x00D0   (0x0008)  
	FName                                              DirectionAlphaCurveName;                                    // 0x00D8   (0x0008)  
	float                                              AutoDirectionInterpTime;                                    // 0x00E0   (0x0004)  
	float                                              RootYawOffset;                                              // 0x00E4   (0x0004)  
	FOrientationWarpingSettings                        Settings;                                                   // 0x00E8   (0x0038)  
	TArray<FOrientationWarpingSpineBoneData>           SpineBoneDataArray;                                         // 0x0120   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0130   (0x0014)  MISSED
	float                                              CachedDeltaTime;                                            // 0x0144   (0x0004)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0148   (0x0018)  MISSED
};

/// Struct /Script/CustomAnimNode.AnimNode_PivotBone
/// Size: 0x0038 (56 bytes) (0x0000C8 - 0x000100) align 8 pad: 0x0000
struct FAnimNode_PivotBone : FAnimNode_SkeletalControlBase
{ 
	FVector                                            Translation;                                                // 0x00C8   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00D4   (0x000C)  
	FBoneReference                                     ReferenceBone;                                              // 0x00E0   (0x0010)  
	FBoneReference                                     DrivenBone;                                                 // 0x00F0   (0x0010)  
};

/// Struct /Script/CustomAnimNode.AnimNode_RSequencePlayer
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000090) align 8 pad: 0x0000
struct FAnimNode_RSequencePlayer : FAnimNode_AssetPlayerBase
{ 
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0038   (0x0008)  
	float                                              PlayRateBasis;                                              // 0x0040   (0x0004)  
	float                                              PlayRate;                                                   // 0x0044   (0x0004)  
	FInputScaleBiasClamp                               PlayRateScaleBiasClamp;                                     // 0x0048   (0x0030)  
	float                                              StartPosition;                                              // 0x0078   (0x0004)  
	bool                                               bLoopAnimation;                                             // 0x007C   (0x0001)  
	bool                                               bBlendAnimation;                                            // 0x007D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	float                                              BlendTime;                                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/CustomAnimNode.SlopeWarpingFootDefinition
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 pad: 0x0000
struct FSlopeWarpingFootDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
	FName                                              ToeSocketName;                                              // 0x0024   (0x0008)  
	FName                                              HeelSocketName;                                             // 0x002C   (0x0008)  
	float                                              FootSize;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/CustomAnimNode.SlopeWarpingFootData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 pad: 0x0000
struct FSlopeWarpingFootData
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/CustomAnimNode.AnimNode_SlopeWarping
/// Size: 0x0160 (352 bytes) (0x0000C8 - 0x000228) align 8 pad: 0x0000
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FBoneReference                                     IKFootRootBone;                                             // 0x00E0   (0x0010)  
	FBoneReference                                     PelvisBone;                                                 // 0x00F0   (0x0010)  
	TArray<FSlopeWarpingFootDefinition>                FeetDefinitions;                                            // 0x0100   (0x0010)  
	TArray<FSlopeWarpingFootData>                      FeetData;                                                   // 0x0110   (0x0010)  
	FVectorRK4SpringInterpolator                       PelvisOffsetInterpolator;                                   // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_6[0x34];                                      // 0x0128   (0x0034)  MISSED
	FVector                                            GravityDir;                                                 // 0x015C   (0x000C)  
	FVector                                            CustomFloorOffset;                                          // 0x0168   (0x000C)  
	float                                              CachedDeltaTime;                                            // 0x0174   (0x0004)  
	FVector                                            TargetFloorNormalWorldSpace;                                // 0x0178   (0x000C)  
	FVectorRK4SpringInterpolator                       FloorNormalInterpolator;                                    // 0x0184   (0x0008)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x018C   (0x0034)  MISSED
	FVector                                            TargetFloorOffsetLocalSpace;                                // 0x01C0   (0x000C)  
	FVectorRK4SpringInterpolator                       FloorOffsetInterpolator;                                    // 0x01CC   (0x0008)  
	unsigned char                                      UnknownData03_6[0x34];                                      // 0x01D4   (0x0034)  MISSED
	float                                              MaxStepHeight;                                              // 0x0208   (0x0004)  
	bool                                               bKeepMeshInsideOfCapsule : 1;                               // 0x020C:0 (0x0001)  
	bool                                               bPullPelvisDown : 1;                                        // 0x020C:1 (0x0001)  
	bool                                               bUseCustomFloorOffset : 1;                                  // 0x020C:2 (0x0001)  
	bool                                               bUseCapsuleInfoInsteadOfFootTraces : 1;                     // 0x020C:3 (0x0001)  
	bool                                               bWasOnGround : 1;                                           // 0x020C:4 (0x0001)  
	bool                                               bShowDebug : 1;                                             // 0x020C:5 (0x0001)  
	bool                                               bFloorSmoothingInitialized : 1;                             // 0x020C:6 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x020D   (0x0003)  MISSED
	FVector                                            ActorLocation;                                              // 0x0210   (0x000C)  
	FVector                                            GravityDirCompSpace;                                        // 0x021C   (0x000C)  
};

/// Struct /Script/CustomAnimNode.SpeedWarpingFootDefinition
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FSpeedWarpingFootDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
};

/// Struct /Script/CustomAnimNode.SpeedWarpingFootData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FSpeedWarpingFootData
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/CustomAnimNode.AnimNode_SpeedWarping
/// Size: 0x00F0 (240 bytes) (0x0000C8 - 0x0001B8) align 8 pad: 0x0000
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FBoneReference                                     IKFootRootBone;                                             // 0x00D0   (0x0010)  
	TArray<FSpeedWarpingFootDefinition>                FeetDefinitions;                                            // 0x00E0   (0x0010)  
	TArray<FSpeedWarpingFootData>                      FeetData;                                                   // 0x00F0   (0x0010)  
	FBoneReference                                     PelvisBone;                                                 // 0x0100   (0x0010)  
	ESpeedWarpingAxisMode                              SpeedWarpingAxisMode;                                       // 0x0110   (0x0001)  
	ESpeedWarpingAxisMode                              FloorNormalAxisMode;                                        // 0x0111   (0x0001)  
	ESpeedWarpingAxisMode                              GravityDirAxisMode;                                         // 0x0112   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0113   (0x0001)  MISSED
	float                                              SpeedScaling;                                               // 0x0114   (0x0004)  
	FInputScaleBiasClamp                               SpeedScalingScaleBiasClamp;                                 // 0x0118   (0x0030)  
	FVector                                            ManualSpeedWarpingDir;                                      // 0x0148   (0x000C)  
	FVector                                            ManualFloorNormalInput;                                     // 0x0154   (0x000C)  
	FVector                                            ManualGravityDirInput;                                      // 0x0160   (0x000C)  
	float                                              PelvisPostAdjustmentAlpha;                                  // 0x016C   (0x0004)  
	int32_t                                            PelvisAdjustmentMaxIter;                                    // 0x0170   (0x0004)  
	FVectorRK4SpringInterpolator                       PelvisAdjustmentInterp;                                     // 0x0174   (0x0008)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x017C   (0x0034)  MISSED
	bool                                               bAdjustThighBonesRotation : 1;                              // 0x01B0:0 (0x0001)  
	bool                                               bClampIKUsingFKLeg : 1;                                     // 0x01B0:1 (0x0001)  
	bool                                               bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;              // 0x01B0:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01B1   (0x0003)  MISSED
	float                                              CachedDeltaTime;                                            // 0x01B4   (0x0004)  
};

static_assert(sizeof(FAnimNode_DistanceMatching) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(FAnimNode_LazySpringBone) == 0x01B8); // 440 bytes (0x0000C8 - 0x0001B8)
static_assert(sizeof(FOrientationWarpingSpineBoneSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FOrientationWarpingSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FOrientationWarpingSpineBoneData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimNode_OrientationWarping) == 0x0160); // 352 bytes (0x0000C8 - 0x000160)
static_assert(sizeof(FAnimNode_PivotBone) == 0x0100); // 256 bytes (0x0000C8 - 0x000100)
static_assert(sizeof(FAnimNode_RSequencePlayer) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(FSlopeWarpingFootDefinition) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FSlopeWarpingFootData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FAnimNode_SlopeWarping) == 0x0228); // 552 bytes (0x0000C8 - 0x000228)
static_assert(sizeof(FSpeedWarpingFootDefinition) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FSpeedWarpingFootData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimNode_SpeedWarping) == 0x01B8); // 440 bytes (0x0000C8 - 0x0001B8)
static_assert(offsetof(FAnimNode_DistanceMatching, PrevSequence) == 0x0050);
static_assert(offsetof(FAnimNode_DistanceMatching, Sequence) == 0x0060);
static_assert(offsetof(FAnimNode_DistanceMatching, DistanceCurveName) == 0x006C);
static_assert(offsetof(FAnimNode_LazySpringBone, DrivingForce) == 0x00C8);
static_assert(offsetof(FAnimNode_LazySpringBone, TargetDistance) == 0x00F0);
static_assert(offsetof(FAnimNode_LazySpringBone, LookAt_Axis) == 0x010C);
static_assert(offsetof(FAnimNode_LazySpringBone, ReferenceBone) == 0x0144);
static_assert(offsetof(FAnimNode_LazySpringBone, DrivenBone) == 0x0154);
static_assert(offsetof(FOrientationWarpingSpineBoneSettings, Bone) == 0x0000);
static_assert(offsetof(FOrientationWarpingSettings, YawRotationAxis) == 0x0000);
static_assert(offsetof(FOrientationWarpingSettings, SpineBones) == 0x0008);
static_assert(offsetof(FOrientationWarpingSettings, IKFootRootBone) == 0x0018);
static_assert(offsetof(FOrientationWarpingSettings, IKFootBones) == 0x0028);
static_assert(offsetof(FAnimNode_OrientationWarping, DirectionCurveName) == 0x00D0);
static_assert(offsetof(FAnimNode_OrientationWarping, DirectionAlphaCurveName) == 0x00D8);
static_assert(offsetof(FAnimNode_OrientationWarping, Settings) == 0x00E8);
static_assert(offsetof(FAnimNode_OrientationWarping, SpineBoneDataArray) == 0x0120);
static_assert(offsetof(FAnimNode_PivotBone, Translation) == 0x00C8);
static_assert(offsetof(FAnimNode_PivotBone, Rotation) == 0x00D4);
static_assert(offsetof(FAnimNode_PivotBone, ReferenceBone) == 0x00E0);
static_assert(offsetof(FAnimNode_PivotBone, DrivenBone) == 0x00F0);
static_assert(offsetof(FAnimNode_RSequencePlayer, Sequence) == 0x0038);
static_assert(offsetof(FAnimNode_RSequencePlayer, PlayRateScaleBiasClamp) == 0x0048);
static_assert(offsetof(FSlopeWarpingFootDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FSlopeWarpingFootDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FSlopeWarpingFootDefinition, ToeSocketName) == 0x0024);
static_assert(offsetof(FSlopeWarpingFootDefinition, HeelSocketName) == 0x002C);
static_assert(offsetof(FAnimNode_SlopeWarping, IKFootRootBone) == 0x00E0);
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisBone) == 0x00F0);
static_assert(offsetof(FAnimNode_SlopeWarping, FeetDefinitions) == 0x0100);
static_assert(offsetof(FAnimNode_SlopeWarping, FeetData) == 0x0110);
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisOffsetInterpolator) == 0x0120);
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDir) == 0x015C);
static_assert(offsetof(FAnimNode_SlopeWarping, CustomFloorOffset) == 0x0168);
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorNormalWorldSpace) == 0x0178);
static_assert(offsetof(FAnimNode_SlopeWarping, FloorNormalInterpolator) == 0x0184);
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorOffsetLocalSpace) == 0x01C0);
static_assert(offsetof(FAnimNode_SlopeWarping, FloorOffsetInterpolator) == 0x01CC);
static_assert(offsetof(FAnimNode_SlopeWarping, ActorLocation) == 0x0210);
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDirCompSpace) == 0x021C);
static_assert(offsetof(FSpeedWarpingFootDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FSpeedWarpingFootDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimNode_SpeedWarping, IKFootRootBone) == 0x00D0);
static_assert(offsetof(FAnimNode_SpeedWarping, FeetDefinitions) == 0x00E0);
static_assert(offsetof(FAnimNode_SpeedWarping, FeetData) == 0x00F0);
static_assert(offsetof(FAnimNode_SpeedWarping, PelvisBone) == 0x0100);
static_assert(offsetof(FAnimNode_SpeedWarping, SpeedWarpingAxisMode) == 0x0110);
static_assert(offsetof(FAnimNode_SpeedWarping, FloorNormalAxisMode) == 0x0111);
static_assert(offsetof(FAnimNode_SpeedWarping, GravityDirAxisMode) == 0x0112);
static_assert(offsetof(FAnimNode_SpeedWarping, SpeedScalingScaleBiasClamp) == 0x0118);
static_assert(offsetof(FAnimNode_SpeedWarping, ManualSpeedWarpingDir) == 0x0148);
static_assert(offsetof(FAnimNode_SpeedWarping, ManualFloorNormalInput) == 0x0154);
static_assert(offsetof(FAnimNode_SpeedWarping, ManualGravityDirInput) == 0x0160);
static_assert(offsetof(FAnimNode_SpeedWarping, PelvisAdjustmentInterp) == 0x0174);
