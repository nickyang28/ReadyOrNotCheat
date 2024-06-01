
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x01 (1 bytes)
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x01 (1 bytes)
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x01 (1 bytes)
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x01 (1 bytes)
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x01 (1 bytes)
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x01 (1 bytes)
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x01 (1 bytes)
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x01 (1 bytes)
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x01 (1 bytes)
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x01 (1 bytes)
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x01 (1 bytes)
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x01 (1 bytes)
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x01 (1 bytes)
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x01 (1 bytes)
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x01 (1 bytes)
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x01 (1 bytes)
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x01 (1 bytes)
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x01 (1 bytes)
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x01 (1 bytes)
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x01 (1 bytes)
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x01 (1 bytes)
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x01 (1 bytes)
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x01 (1 bytes)
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear                                                          = 0,
	EEasingFuncType__Sinusoidal                                                      = 1,
	EEasingFuncType__Cubic                                                           = 2,
	EEasingFuncType__QuadraticInOut                                                  = 3,
	EEasingFuncType__CubicInOut                                                      = 4,
	EEasingFuncType__HermiteCubic                                                    = 5,
	EEasingFuncType__QuarticInOut                                                    = 6,
	EEasingFuncType__QuinticInOut                                                    = 7,
	EEasingFuncType__CircularIn                                                      = 8,
	EEasingFuncType__CircularOut                                                     = 9,
	EEasingFuncType__CircularInOut                                                   = 10,
	EEasingFuncType__ExpIn                                                           = 11,
	EEasingFuncType__ExpOut                                                          = 12,
	EEasingFuncType__ExpInOut                                                        = 13,
	EEasingFuncType__CustomCurve                                                     = 14
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x01 (1 bytes)
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x01 (1 bytes)
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x01 (1 bytes)
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x01 (1 bytes)
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
public:
	FName                                              NotifyName;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
public:
	FName                                              NotifyName;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0008 (8 bytes) (0x0002B8 - 0x0002C0) align 16 pad: 0x0000
class UAnimSequencerInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x35791b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// void K2_StartProfilingTimer();                                                                                           // [0x3579190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // [0x3578eb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);                                     // [0x3578d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x3578af0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// float K2_EndProfilingTimer(bool bLog, FString LogPrefix);                                                                // [0x3578a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // [0x3578710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // [0x3578600] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // [0x35781a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // [0x3577f80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000028 - 0x0000A8) align 8 pad: 0x0000
class UPlayMontageCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnNotifyBegin);                                      // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnNotifyEnd);                                        // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0078   (0x0030)  MISSED


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x357a520] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x357a430] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x357a360] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x357a290] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x357a100] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USequencerAnimationSupport : public UInterface
{ 
public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00B8 (184 bytes) (0x000010 - 0x0000C8) align 8 pad: 0x0000
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	float                                              ActualAlpha;                                                // 0x0024   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x002C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0080   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0088   (0x0030)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000E8) align 8 pad: 0x0000
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{ 
	float                                              X;                                                          // 0x0038   (0x0004)  
	float                                              Y;                                                          // 0x003C   (0x0004)  
	float                                              Z;                                                          // 0x0040   (0x0004)  
	float                                              PlayRate;                                                   // 0x0044   (0x0004)  
	bool                                               bLoop;                                                      // 0x0048   (0x0001)  
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                        // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              StartPosition;                                              // 0x004C   (0x0004)  
	class UBlendSpaceBase*                             BlendSpace;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0058   (0x0088)  MISSED
	class UBlendSpaceBase*                             PreviousBlendSpace;                                         // 0x00E0   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x00D8 (216 bytes) (0x0000E8 - 0x0001C0) align 16 pad: 0x0000
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{ 
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x00E8   (0x0068)  MISSED
	FPoseLink                                          BasePose;                                                   // 0x0150   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0160   (0x0004)  
	FName                                              SourceSocketName;                                           // 0x0164   (0x0008)  
	FName                                              PivotSocketName;                                            // 0x016C   (0x0008)  
	FVector                                            LookAtLocation;                                             // 0x0174   (0x000C)  
	FVector                                            SocketAxis;                                                 // 0x0180   (0x000C)  
	float                                              Alpha;                                                      // 0x018C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0190   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 pad: 0x0000
struct FAnimPhysConstraintSetup
{ 
	AnimPhysLinearConstraintType                       LinearXLimitType;                                           // 0x0000   (0x0001)  
	AnimPhysLinearConstraintType                       LinearYLimitType;                                           // 0x0001   (0x0001)  
	AnimPhysLinearConstraintType                       LinearZLimitType;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            LinearAxesMin;                                              // 0x0004   (0x000C)  
	FVector                                            LinearAxesMax;                                              // 0x0010   (0x000C)  
	AnimPhysAngularConstraintType                      AngularConstraintType;                                      // 0x001C   (0x0001)  
	AnimPhysTwistAxis                                  TwistAxis;                                                  // 0x001D   (0x0001)  
	AnimPhysTwistAxis                                  AngularTargetAxis;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	float                                              ConeAngle;                                                  // 0x0020   (0x0004)  
	FVector                                            AngularLimitsMin;                                           // 0x0024   (0x000C)  
	FVector                                            AngularLimitsMax;                                           // 0x0030   (0x000C)  
	FVector                                            AngularTarget;                                              // 0x003C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FAnimPhysSphericalLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FVector                                            SphereLocalOffset;                                          // 0x0010   (0x000C)  
	float                                              LimitRadius;                                                // 0x001C   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FAnimPhysPlanarLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FTransform                                         PlaneTransform;                                             // 0x0010   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 16 pad: 0x0000
struct FRotationRetargetingInfo
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	FTransform                                         Target;                                                     // 0x0040   (0x0030)  
	ERotationComponent                                 RotationComponent;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0074   (0x000C)  
	bool                                               bUseAbsoluteAngle;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0084   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0088   (0x0004)  
	float                                              TargetMinimum;                                              // 0x008C   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0090   (0x0004)  
	EEasingFuncType                                    EasingType;                                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FRuntimeFloatCurve                                 CustomCurve;                                                // 0x0098   (0x0088)  
	bool                                               bFlipEasing;                                                // 0x0120   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              EasingWeight;                                               // 0x0124   (0x0004)  
	bool                                               bClamp;                                                     // 0x0128   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0378 (888 bytes) (0x0000C8 - 0x000440) align 16 pad: 0x0000
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{ 
	float                                              LinearDampingOverride;                                      // 0x00C8   (0x0004)  
	float                                              AngularDampingOverride;                                     // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x00D0   (0x0060)  MISSED
	FBoneReference                                     RelativeSpaceBone;                                          // 0x0130   (0x0010)  
	FBoneReference                                     BoundBone;                                                  // 0x0140   (0x0010)  
	FBoneReference                                     ChainEnd;                                                   // 0x0150   (0x0010)  
	FVector                                            BoxExtents;                                                 // 0x0160   (0x000C)  
	FVector                                            LocalJointOffset;                                           // 0x016C   (0x000C)  
	float                                              GravityScale;                                               // 0x0178   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x017C   (0x000C)  
	float                                              LinearSpringConstant;                                       // 0x0188   (0x0004)  
	float                                              AngularSpringConstant;                                      // 0x018C   (0x0004)  
	float                                              WindScale;                                                  // 0x0190   (0x0004)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0194   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x01A0   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01AC   (0x000C)  
	float                                              AngularBiasOverride;                                        // 0x01B8   (0x0004)  
	int32_t                                            NumSolverIterationsPreUpdate;                               // 0x01BC   (0x0004)  
	int32_t                                            NumSolverIterationsPostUpdate;                              // 0x01C0   (0x0004)  
	FAnimPhysConstraintSetup                           ConstraintSetup;                                            // 0x01C4   (0x0048)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x020C   (0x0004)  MISSED
	TArray<FAnimPhysSphericalLimit>                    SphericalLimits;                                            // 0x0210   (0x0010)  
	float                                              SphereCollisionRadius;                                      // 0x0220   (0x0004)  
	FVector                                            ExternalForce;                                              // 0x0224   (0x000C)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0230   (0x0010)  
	AnimPhysCollisionType                              CollisionType;                                              // 0x0240   (0x0001)  
	AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0242   (0x0002)  MISSED
	bool                                               bUseSphericalLimits : 1;                                    // 0x0244:0 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0244:1 (0x0001)  
	bool                                               bDoUpdate : 1;                                              // 0x0244:2 (0x0001)  
	bool                                               bDoEval : 1;                                                // 0x0244:3 (0x0001)  
	bool                                               bOverrideLinearDamping : 1;                                 // 0x0244:4 (0x0001)  
	bool                                               bOverrideAngularBias : 1;                                   // 0x0244:5 (0x0001)  
	bool                                               bOverrideAngularDamping : 1;                                // 0x0244:6 (0x0001)  
	bool                                               bEnableWind : 1;                                            // 0x0244:7 (0x0001)  
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0245:0 (0x0001)  MISSED
	bool                                               bUseGravityOverride : 1;                                    // 0x0245:1 (0x0001)  
	bool                                               bLinearSpring : 1;                                          // 0x0245:2 (0x0001)  
	bool                                               bAngularSpring : 1;                                         // 0x0245:3 (0x0001)  
	bool                                               bChain : 1;                                                 // 0x0245:4 (0x0001)  
	unsigned char                                      UnknownData04_5[0xA];                                       // 0x0246   (0x000A)  MISSED
	FRotationRetargetingInfo                           RetargetingSettings;                                        // 0x0250   (0x0130)  
	unsigned char                                      UnknownData05_7[0xC0];                                      // 0x0380   (0x00C0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00B8 (184 bytes) (0x000010 - 0x0000C8) align 8 pad: 0x0000
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	float                                              Alpha;                                                      // 0x0030   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0034   (0x0008)  
	int32_t                                            LODThreshold;                                               // 0x003C   (0x0004)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C0   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x00C4   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00C6   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FAngularRangeLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
	FBoneReference                                     Bone;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (32 bytes) (0x0000C8 - 0x0000E8) align 8 pad: 0x0000
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{ 
	TArray<FAngularRangeLimit>                         AngularRangeLimits;                                         // 0x00C8   (0x0010)  
	TArray<FVector>                                    AngularOffsets;                                             // 0x00D8   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FBlendBoneByChannelEntry
{ 
	FBoneReference                                     SourceBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x0010   (0x0010)  
	bool                                               bBlendTranslation;                                          // 0x0020   (0x0001)  
	bool                                               bBlendRotation;                                             // 0x0021   (0x0001)  
	bool                                               bBlendScale;                                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0023   (0x0001)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (88 bytes) (0x000010 - 0x000068) align 8 pad: 0x0000
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	TArray<FBlendBoneByChannelEntry>                   BoneDefinitions;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Alpha;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0088 (136 bytes) (0x000010 - 0x000098) align 8 pad: 0x0000
struct FAnimNode_BlendListBase : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  BlendPose;                                                  // 0x0010   (0x0010)  
	TArray<float>                                      BlendTime;                                                  // 0x0020   (0x0010)  
	EBlendListTransitionType                           TransitionType;                                             // 0x0030   (0x0001)  
	EAlphaBlendOption                                  BlendType;                                                  // 0x0031   (0x0001)  
	bool                                               bResetChildOnActivation;                                    // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED
	class UCurveFloat*                                 CustomBlendCurve;                                           // 0x0038   (0x0008)  
	class UBlendProfile*                               BlendProfile;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{ 
	bool                                               bActiveValue;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0018 (24 bytes) (0x000098 - 0x0000B0) align 8 pad: 0x0000
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{ 
	TArray<int32_t>                                    EnumToPoseIndex;                                            // 0x0098   (0x0010)  
	char                                               ActiveEnumValue;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{ 
	int32_t                                            ActiveChildIndex;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (8 bytes) (0x0000E8 - 0x0000F0) align 8 pad: 0x0000
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{ 
	float                                              NormalizedTime;                                             // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0050 (80 bytes) (0x0000C8 - 0x000118) align 8 pad: 0x0000
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	class UCurveFloat*                                 DrivingCurve;                                               // 0x00D8   (0x0008)  
	float                                              Multiplier;                                                 // 0x00E0   (0x0004)  
	float                                              RangeMin;                                                   // 0x00E4   (0x0004)  
	float                                              RangeMax;                                                   // 0x00E8   (0x0004)  
	float                                              RemappedMin;                                                // 0x00EC   (0x0004)  
	float                                              RemappedMax;                                                // 0x00F0   (0x0004)  
	FName                                              ParameterName;                                              // 0x00F4   (0x0008)  
	FBoneReference                                     TargetBone;                                                 // 0x00FC   (0x0010)  
	EDrivenDestinationMode                             DestinationMode;                                            // 0x010C   (0x0001)  
	EDrivenBoneModificationMode                        ModificationMode;                                           // 0x010D   (0x0001)  
	TEnumAsByte<EComponentType>                        SourceComponent;                                            // 0x010E   (0x0001)  
	bool                                               bUseRange : 1;                                              // 0x010F:0 (0x0001)  
	bool                                               bAffectTargetTranslationX : 1;                              // 0x010F:1 (0x0001)  
	bool                                               bAffectTargetTranslationY : 1;                              // 0x010F:2 (0x0001)  
	bool                                               bAffectTargetTranslationZ : 1;                              // 0x010F:3 (0x0001)  
	bool                                               bAffectTargetRotationX : 1;                                 // 0x010F:4 (0x0001)  
	bool                                               bAffectTargetRotationY : 1;                                 // 0x010F:5 (0x0001)  
	bool                                               bAffectTargetRotationZ : 1;                                 // 0x010F:6 (0x0001)  
	bool                                               bAffectTargetScaleX : 1;                                    // 0x010F:7 (0x0001)  
	bool                                               bAffectTargetScaleY : 1;                                    // 0x0110:0 (0x0001)  
	bool                                               bAffectTargetScaleZ : 1;                                    // 0x0110:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FSocketReference
{ 
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0000   (0x0030)  MISSED
	FName                                              SocketName;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 pad: 0x0000
struct FBoneSocketTarget
{ 
	bool                                               bUseSocket;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBoneReference                                     BoneReference;                                              // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FSocketReference                                   SocketReference;                                            // 0x0020   (0x0040)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00B8 (184 bytes) (0x0000C8 - 0x000180) align 16 pad: 0x0000
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{ 
	FVector                                            EffectorLocation;                                           // 0x00C8   (0x000C)  
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x00D5   (0x000B)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00E0   (0x0060)  
	FBoneReference                                     TipBone;                                                    // 0x0140   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x0150   (0x0010)  
	float                                              Precision;                                                  // 0x0160   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0164   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x0168   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x016A   (0x0006)  MISSED
	TArray<float>                                      RotationLimitPerJoints;                                     // 0x0170   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FConstraint
{ 
	FBoneReference                                     TargetBone;                                                 // 0x0000   (0x0010)  
	EConstraintOffsetOption                            OffsetOption;                                               // 0x0010   (0x0001)  
	ETransformConstraintType                           TransformType;                                              // 0x0011   (0x0001)  
	FFilterOptionPerAxis                               PerAxis;                                                    // 0x0012   (0x0003)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0015   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0040 (64 bytes) (0x0000C8 - 0x000108) align 8 pad: 0x0000
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	TArray<FConstraint>                                ConstraintSetup;                                            // 0x00D8   (0x0010)  
	TArray<float>                                      ConstraintWeights;                                          // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0028 (40 bytes) (0x0000C8 - 0x0000F0) align 8 pad: 0x0000
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)  
	bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                               // 0x00EB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0030 (48 bytes) (0x0000C8 - 0x0000F8) align 8 pad: 0x0000
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)  
	bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)  
	CopyBoneDeltaMode                                  CopyMode;                                                   // 0x00EB   (0x0001)  
	float                                              TranslationMultiplier;                                      // 0x00EC   (0x0004)  
	float                                              RotationMultiplier;                                         // 0x00F0   (0x0004)  
	float                                              ScaleMultiplier;                                            // 0x00F4   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x01C8 (456 bytes) (0x000010 - 0x0001D8) align 8 pad: 0x0000
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{ 
	SDK_UNDEFINED(8,463) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SourceMeshComponent);                  // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent : 1;                                     // 0x0018:0 (0x0001)  
	bool                                               bCopyCurves : 1;                                            // 0x0018:1 (0x0001)  
	bool                                               bCopyCustomAttributes;                                      // 0x0019   (0x0001)  
	bool                                               bUseMeshPose : 1;                                           // 0x001A:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001B   (0x0001)  MISSED
	FName                                              RootBoneToCopy;                                             // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x1B4];                                     // 0x0024   (0x01B4)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000040) align 8 pad: 0x0000
struct FAnimNode_CurveSource : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	FName                                              SourceBinding;                                              // 0x0020   (0x0008)  
	float                                              Alpha;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,464) /* TScriptInterface<Class> */ __um(CurveSource);                                         // 0x0030   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x00C8 (200 bytes) (0x0000C8 - 0x000190) align 16 pad: 0x0000
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x00D0   (0x0030)  
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0060)  
	FBoneReference                                     TipBone;                                                    // 0x0160   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x0170   (0x0010)  
	float                                              Precision;                                                  // 0x0180   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0184   (0x0004)  
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                     // 0x0188   (0x0001)  
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                     // 0x0189   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x018A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0058 (88 bytes) (0x0000C8 - 0x000120) align 8 pad: 0x0000
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RightHandFK;                                                // 0x00C8   (0x0010)  
	FBoneReference                                     LeftHandFK;                                                 // 0x00D8   (0x0010)  
	FBoneReference                                     RightHandIK;                                                // 0x00E8   (0x0010)  
	FBoneReference                                     LeftHandIK;                                                 // 0x00F8   (0x0010)  
	TArray<FBoneReference>                             IKBonesToMove;                                              // 0x0108   (0x0010)  
	float                                              HandFKWeight;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00B0 (176 bytes) (0x000010 - 0x0000C0) align 8 pad: 0x0000
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0020   (0x0010)  
	TArray<FInputBlendPose>                            LayerSetup;                                                 // 0x0030   (0x0010)  
	TArray<float>                                      BlendWeights;                                               // 0x0040   (0x0010)  
	bool                                               bMeshSpaceRotationBlend;                                    // 0x0050   (0x0001)  
	bool                                               bMeshSpaceScaleBlend;                                       // 0x0051   (0x0001)  
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                           // 0x0052   (0x0001)  
	bool                                               bBlendRootMotionBasedOnRootBone;                            // 0x0053   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FPerBoneBlendWeight>                        PerBoneBlendWeights;                                        // 0x0060   (0x0010)  
	FGuid                                              SkeletonGuid;                                               // 0x0070   (0x0010)  
	FGuid                                              VirtualBoneGuid;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0090   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FAnimLegIKDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
	float                                              MinRotationAngle;                                           // 0x0024   (0x0004)  
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                        // 0x0028   (0x0001)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0029   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x002A   (0x0001)  
	bool                                               bEnableKneeTwistCorrection;                                 // 0x002B   (0x0001)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (48 bytes) (0x0000C8 - 0x0000F8) align 8 pad: 0x0000
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{ 
	float                                              ReachPrecision;                                             // 0x00C8   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00CC   (0x0004)  
	TArray<FAnimLegIKDefinition>                       LegsDefinition;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00E0   (0x0018)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 pad: 0x0000
struct FAnimLegIKData
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FIKChain
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 pad: 0x0000
struct FIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0x3C];                                      // 0x0000   (0x003C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x00E8 (232 bytes) (0x0000C8 - 0x0001B0) align 16 pad: 0x0000
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FBoneSocketTarget                                  LookAtTarget;                                               // 0x00E0   (0x0060)  
	FVector                                            LookAtLocation;                                             // 0x0140   (0x000C)  
	FAxis                                              LookAt_Axis;                                                // 0x014C   (0x0010)  
	bool                                               bUseLookUpAxis;                                             // 0x015C   (0x0001)  
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                          // 0x015D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x015E   (0x0002)  MISSED
	FAxis                                              LookUp_Axis;                                                // 0x0160   (0x0010)  
	float                                              LookAtClamp;                                                // 0x0170   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0174   (0x0004)  
	float                                              InterpolationTriggerThreashold;                             // 0x0178   (0x0004)  
	unsigned char                                      UnknownData02_7[0x34];                                      // 0x017C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000038) align 8 pad: 0x0000
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	bool                                               bMeshSpaceAdditive;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0040 (64 bytes) (0x0000C8 - 0x000108) align 8 pad: 0x0000
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	FVector                                            Translation;                                                // 0x00D8   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00E4   (0x000C)  
	FVector                                            Scale;                                                      // 0x00F0   (0x000C)  
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                            // 0x00FC   (0x0001)  
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                               // 0x00FD   (0x0001)  
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                  // 0x00FE   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                           // 0x00FF   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                              // 0x0100   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                                 // 0x0101   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0102   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0048 (72 bytes) (0x000010 - 0x000058) align 8 pad: 0x0000
struct FAnimNode_ModifyCurve : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	TArray<float>                                      CurveValues;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      CurveNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Alpha;                                                      // 0x0050   (0x0004)  
	EModifyCurveApplyMode                              ApplyMode;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (64 bytes) (0x000010 - 0x000050) align 8 pad: 0x0000
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  Poses;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      DesiredAlphas;                                              // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0040   (0x0008)  
	bool                                               bAdditiveNode;                                              // 0x0048   (0x0001)  
	bool                                               bNormalizeAlpha;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0038 (56 bytes) (0x0000C8 - 0x000100) align 8 pad: 0x0000
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToObserve;                                              // 0x00C8   (0x0010)  
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                               // 0x00D8   (0x0001)  
	bool                                               bRelativeToRefPose;                                         // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00DA   (0x0002)  MISSED
	FVector                                            Translation;                                                // 0x00DC   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00E8   (0x000C)  
	FVector                                            Scale;                                                      // 0x00F4   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000080) align 8 pad: 0x0000
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{ 
	class UPoseAsset*                                  PoseAsset;                                                  // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0040   (0x0040)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0020 (32 bytes) (0x000080 - 0x0000A0) align 8 pad: 0x0000
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0080   (0x0010)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	class UCurveFloat*                                 CustomCurve;                                                // 0x0098   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0018 (24 bytes) (0x000080 - 0x000098) align 8 pad: 0x0000
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{ 
	FName                                              PoseName;                                                   // 0x0080   (0x0008)  
	float                                              PoseWeight;                                                 // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x008C   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FPoseDriverTransform
{ 
	FVector                                            TargetTranslation;                                          // 0x0000   (0x000C)  
	FRotator                                           TargetRotation;                                             // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FPoseDriverTarget
{ 
	TArray<FPoseDriverTransform>                       BoneTransforms;                                             // 0x0000   (0x0010)  
	FRotator                                           TargetRotation;                                             // 0x0010   (0x000C)  
	float                                              TargetScale;                                                // 0x001C   (0x0004)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0020   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0021   (0x0001)  
	bool                                               bApplyCustomCurve;                                          // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0023   (0x0005)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0028   (0x0080)  
	FName                                              DrivenName;                                                 // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
	bool                                               bIsHidden;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FRBFParams
{ 
	int32_t                                            TargetDimensions;                                           // 0x0000   (0x0004)  
	ERBFSolverType                                     SolverType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	bool                                               bAutomaticRadius;                                           // 0x000C   (0x0001)  
	ERBFFunctionType                                   Function;                                                   // 0x000D   (0x0001)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x000E   (0x0001)  
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                  // 0x000F   (0x0001)  
	float                                              WeightThreshold;                                            // 0x0010   (0x0004)  
	ERBFNormalizeMethod                                NormalizeMethod;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector                                            MedianReference;                                            // 0x0018   (0x000C)  
	float                                              MedianMin;                                                  // 0x0024   (0x0004)  
	float                                              MedianMax;                                                  // 0x0028   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00E8 (232 bytes) (0x000080 - 0x000168) align 8 pad: 0x0000
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0080   (0x0010)  
	TArray<FBoneReference>                             SourceBones;                                                // 0x0090   (0x0010)  
	TArray<FBoneReference>                             OnlyDriveBones;                                             // 0x00A0   (0x0010)  
	TArray<FPoseDriverTarget>                          PoseTargets;                                                // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x00C0   (0x0030)  MISSED
	FBoneReference                                     EvalSpaceBone;                                              // 0x00F0   (0x0010)  
	FRBFParams                                         RBFParams;                                                  // 0x0100   (0x002C)  
	EPoseDriverSource                                  DriveSource;                                                // 0x012C   (0x0001)  
	EPoseDriverOutput                                  DriveOutput;                                                // 0x012D   (0x0001)  
	bool                                               bOnlyDriveSelectedBones : 1;                                // 0x012E:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x012F   (0x0001)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0130   (0x0004)  
	unsigned char                                      UnknownData02_7[0x34];                                      // 0x0134   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0080 (128 bytes) (0x000010 - 0x000090) align 8 pad: 0x0000
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{ 
	FName                                              SnapshotName;                                               // 0x0010   (0x0008)  
	FPoseSnapshot                                      Snapshot;                                                   // 0x0018   (0x0038)  
	ESnapshotSourceMode                                Mode;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x0051   (0x003F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FRandomPlayerSequenceEntry
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)  
	float                                              ChanceToPlay;                                               // 0x0008   (0x0004)  
	int32_t                                            MinLoopCount;                                               // 0x000C   (0x0004)  
	int32_t                                            MaxLoopCount;                                               // 0x0010   (0x0004)  
	float                                              MinPlayRate;                                                // 0x0014   (0x0004)  
	float                                              MaxPlayRate;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FAlphaBlend                                        BlendIn;                                                    // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (104 bytes) (0x000010 - 0x000078) align 8 pad: 0x0000
struct FAnimNode_RandomPlayer : FAnimNode_Base
{ 
	TArray<FRandomPlayerSequenceEntry>                 Entries;                                                    // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0020   (0x0050)  MISSED
	bool                                               bShuffleMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 8 pad: 0x0000
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0008 (8 bytes) (0x000010 - 0x000018) align 8 pad: 0x0000
struct FAnimNode_RefPose : FAnimNode_Base
{ 
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (16 bytes) (0x0000C8 - 0x0000D8) align 8 pad: 0x0000
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FSimSpaceSettings
{ 
	float                                              MasterAlpha;                                                // 0x0000   (0x0004)  
	float                                              VelocityScaleZ;                                             // 0x0004   (0x0004)  
	float                                              MaxLinearVelocity;                                          // 0x0008   (0x0004)  
	float                                              MaxAngularVelocity;                                         // 0x000C   (0x0004)  
	float                                              MaxLinearAcceleration;                                      // 0x0010   (0x0004)  
	float                                              MaxAngularAcceleration;                                     // 0x0014   (0x0004)  
	float                                              ExternalLinearDrag;                                         // 0x0018   (0x0004)  
	FVector                                            ExternalLinearDragV;                                        // 0x001C   (0x000C)  
	FVector                                            ExternalLinearVelocity;                                     // 0x0028   (0x000C)  
	FVector                                            ExternalAngularVelocity;                                    // 0x0034   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x0768 (1896 bytes) (0x0000C8 - 0x000830) align 16 pad: 0x0000
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x98];                                      // 0x00D0   (0x0098)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x0168   (0x000C)  
	FVector                                            ExternalForce;                                              // 0x0174   (0x000C)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0180   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x018C   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0198   (0x000C)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x01A4   (0x0040)  
	float                                              CachedBoundsScale;                                          // 0x01E4   (0x0004)  
	FBoneReference                                     BaseBoneRef;                                                // 0x01E8   (0x0010)  
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x01F8   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x01F9   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x01FB   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x01FC:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x01FC:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x01FC:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x01FC:3 (0x0001)  
	bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x01FC:4 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01FD   (0x0003)  MISSED
	float                                              WorldSpaceMinimumScale;                                     // 0x0200   (0x0004)  
	float                                              EvaluationResetTime;                                        // 0x0204   (0x0004)  
	unsigned char                                      UnknownData03_7[0x628];                                     // 0x0208   (0x0628)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x0090 (144 bytes) (0x000010 - 0x0000A0) align 8 pad: 0x0000
struct FAnimNode_RotateRootBone : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	float                                              Pitch;                                                      // 0x0020   (0x0004)  
	float                                              Yaw;                                                        // 0x0024   (0x0004)  
	FInputScaleBiasClamp                               PitchScaleBiasClamp;                                        // 0x0028   (0x0030)  
	FInputScaleBiasClamp                               YawScaleBiasClamp;                                          // 0x0058   (0x0030)  
	FRotator                                           MeshToComponent;                                            // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0028 (40 bytes) (0x0000C8 - 0x0000F0) align 8 pad: 0x0000
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     SourceBone;                                                 // 0x00D8   (0x0010)  
	float                                              Multiplier;                                                 // 0x00E8   (0x0004)  
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                        // 0x00EC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00EE   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00A8 (168 bytes) (0x0000E8 - 0x000190) align 8 pad: 0x0000
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{ 
	FPoseLink                                          BasePose;                                                   // 0x00E8   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x00F8   (0x0004)  
	float                                              Alpha;                                                      // 0x00FC   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0100   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0108   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0150   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0158   (0x0030)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0188   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x018C   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x018D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x018E   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0068 (104 bytes) (0x000010 - 0x000078) align 8 pad: 0x0000
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              DefaultChainLength;                                         // 0x0020   (0x0004)  
	FBoneReference                                     ChainStartBone;                                             // 0x0024   (0x0010)  
	FBoneReference                                     ChainEndBone;                                               // 0x0034   (0x0010)  
	FVector                                            TargetLocation;                                             // 0x0044   (0x000C)  
	float                                              Alpha;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	EScaleChainInitialLength                           ChainInitialLength;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x0061   (0x0017)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{ 
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0038   (0x0008)  
	float                                              ExplicitTime;                                               // 0x0040   (0x0004)  
	bool                                               bShouldLoop;                                                // 0x0044   (0x0001)  
	bool                                               bTeleportToExplicitTime;                                    // 0x0045   (0x0001)  
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                   // 0x0046   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0047   (0x0001)  MISSED
	float                                              StartPosition;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0038 (56 bytes) (0x000010 - 0x000048) align 8 pad: 0x0000
struct FAnimNode_Slot : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	FName                                              SlotName;                                                   // 0x0020   (0x0008)  
	bool                                               bAlwaysUpdateSourcePose;                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1F];                                      // 0x0029   (0x001F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01A8 (424 bytes) (0x0000C8 - 0x000270) align 8 pad: 0x0000
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00C8   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00D8   (0x0010)  
	ESplineBoneAxis                                    BoneAxis;                                                   // 0x00E8   (0x0001)  
	bool                                               bAutoCalculateSpline;                                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EA   (0x0002)  MISSED
	int32_t                                            PointCount;                                                 // 0x00EC   (0x0004)  
	TArray<FTransform>                                 ControlPoints;                                              // 0x00F0   (0x0010)  
	float                                              Roll;                                                       // 0x0100   (0x0004)  
	float                                              TwistStart;                                                 // 0x0104   (0x0004)  
	float                                              TwistEnd;                                                   // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FAlphaBlend                                        TwistBlend;                                                 // 0x0110   (0x0030)  
	float                                              Stretch;                                                    // 0x0140   (0x0004)  
	float                                              Offset;                                                     // 0x0144   (0x0004)  
	unsigned char                                      UnknownData02_7[0x128];                                     // 0x0148   (0x0128)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FSplineIKCachedBoneData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	int32_t                                            RefSkeletonIndex;                                           // 0x0010   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0060 (96 bytes) (0x0000C8 - 0x000128) align 8 pad: 0x0000
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SpringBone;                                                 // 0x00C8   (0x0010)  
	float                                              MaxDisplacement;                                            // 0x00D8   (0x0004)  
	float                                              SpringStiffness;                                            // 0x00DC   (0x0004)  
	float                                              SpringDamping;                                              // 0x00E0   (0x0004)  
	float                                              ErrorResetThresh;                                           // 0x00E4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x00E8   (0x003C)  MISSED
	bool                                               bLimitDisplacement : 1;                                     // 0x0124:0 (0x0001)  
	bool                                               bTranslateX : 1;                                            // 0x0124:1 (0x0001)  
	bool                                               bTranslateY : 1;                                            // 0x0124:2 (0x0001)  
	bool                                               bTranslateZ : 1;                                            // 0x0124:3 (0x0001)  
	bool                                               bRotateX : 1;                                               // 0x0124:4 (0x0001)  
	bool                                               bRotateY : 1;                                               // 0x0124:5 (0x0001)  
	bool                                               bRotateZ : 1;                                               // 0x0124:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0125   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FAnimNode_StateResult : FAnimNode_Root
{ 
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FRotationLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x0198 (408 bytes) (0x0000C8 - 0x000260) align 16 pad: 0x0000
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00C8   (0x0038)  MISSED
	FBoneReference                                     TrailBone;                                                  // 0x0100   (0x0010)  
	int32_t                                            ChainLength;                                                // 0x0110   (0x0004)  
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                              // 0x0114   (0x0001)  
	bool                                               bInvertChainBoneAxis : 1;                                   // 0x0115:0 (0x0001)  
	bool                                               bLimitStretch : 1;                                          // 0x0115:1 (0x0001)  
	bool                                               bLimitRotation : 1;                                         // 0x0115:2 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0115:3 (0x0001)  
	bool                                               bActorSpaceFakeVel : 1;                                     // 0x0115:4 (0x0001)  
	bool                                               bReorientParentToChild : 1;                                 // 0x0115:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0116   (0x0002)  MISSED
	float                                              MaxDeltaTime;                                               // 0x0118   (0x0004)  
	float                                              RelaxationSpeedScale;                                       // 0x011C   (0x0004)  
	FRuntimeFloatCurve                                 TrailRelaxationSpeed;                                       // 0x0120   (0x0088)  
	FInputScaleBiasClamp                               RelaxationSpeedScaleInputProcessor;                         // 0x01A8   (0x0030)  
	TArray<FRotationLimit>                             RotationLimits;                                             // 0x01D8   (0x0010)  
	TArray<FVector>                                    RotationOffsets;                                            // 0x01E8   (0x0010)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x01F8   (0x0010)  
	float                                              StretchLimit;                                               // 0x0208   (0x0004)  
	FVector                                            FakeVelocity;                                               // 0x020C   (0x000C)  
	FBoneReference                                     BaseJoint;                                                  // 0x0218   (0x0010)  
	float                                              LastBoneRotationAnimAlphaBlend;                             // 0x0228   (0x0004)  
	unsigned char                                      UnknownData02_7[0x34];                                      // 0x022C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FReferenceBoneFrame
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	FAxis                                              Axis;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0070 (112 bytes) (0x0000C8 - 0x000138) align 8 pad: 0x0000
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{ 
	FReferenceBoneFrame                                BaseFrame;                                                  // 0x00C8   (0x0020)  
	FReferenceBoneFrame                                TwistFrame;                                                 // 0x00E8   (0x0020)  
	FAxis                                              TwistPlaneNormalAxis;                                       // 0x0108   (0x0010)  
	float                                              RangeMax;                                                   // 0x0118   (0x0004)  
	float                                              RemappedMin;                                                // 0x011C   (0x0004)  
	float                                              RemappedMax;                                                // 0x0120   (0x0004)  
	FAnimCurveParam                                    Curve;                                                      // 0x0124   (0x000C)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0130   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0118 (280 bytes) (0x0000C8 - 0x0001E0) align 16 pad: 0x0000
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00C8   (0x0010)  
	float                                              StartStretchRatio;                                          // 0x00D8   (0x0004)  
	float                                              MaxStretchScale;                                            // 0x00DC   (0x0004)  
	FVector                                            EffectorLocation;                                           // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00F0   (0x0060)  
	FVector                                            JointTargetLocation;                                        // 0x0150   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	FBoneSocketTarget                                  JointTarget;                                                // 0x0160   (0x0060)  
	FAxis                                              TwistAxis;                                                  // 0x01C0   (0x0010)  
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                      // 0x01D0   (0x0001)  
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                   // 0x01D1   (0x0001)  
	bool                                               bAllowStretching : 1;                                       // 0x01D2:0 (0x0001)  
	bool                                               bTakeRotationFromEffectorSpace : 1;                         // 0x01D2:1 (0x0001)  
	bool                                               bMaintainEffectorRelRot : 1;                                // 0x01D2:2 (0x0001)  
	bool                                               bAllowTwist : 1;                                            // 0x01D2:3 (0x0001)  
	unsigned char                                      UnknownData02_7[0xD];                                       // 0x01D3   (0x000D)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B8 (184 bytes) (0x000010 - 0x0000C8) align 8 pad: 0x0000
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0030   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0031:0 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0031:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0031:2 (0x0001)  MISSED
	bool                                               bResetChildOnActivation : 1;                                // 0x0031:3 (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x0034   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0038   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x02A0 (672 bytes) (0x000770 - 0x000A10) align 16 pad: 0x0000
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x0770   (0x02A0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FPositionHistory
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	float                                              Range;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x1C];                                      // 0x0014   (0x001C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FRBFEntry
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (144 bytes) (0x000010 - 0x0000A0) align 8 pad: 0x0000
struct FRBFTarget : FRBFEntry
{ 
	float                                              ScaleFactor;                                                // 0x0010   (0x0004)  
	bool                                               bApplyCustomCurve;                                          // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0018   (0x0080)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0098   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x009A   (0x0006)  MISSED
};

static_assert(sizeof(UAnimNotify_PlayMontageNotify) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimNotify_PlayMontageNotifyWindow) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAnimSequencerInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UKismetAnimationLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPlayMontageCallbackProxy) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(USequencerAnimationSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAnimNode_SkeletalControlBase) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FAnimNode_BlendSpacePlayer) == 0x00E8); // 232 bytes (0x000038 - 0x0000E8)
static_assert(sizeof(FAnimNode_AimOffsetLookAt) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FAnimPhysConstraintSetup) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAnimPhysSphericalLimit) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAnimPhysPlanarLimit) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRotationRetargetingInfo) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FAnimNode_AnimDynamics) == 0x0440); // 1088 bytes (0x0000C8 - 0x000440)
static_assert(sizeof(FAnimNode_ApplyAdditive) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FAngularRangeLimit) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAnimNode_ApplyLimits) == 0x00E8); // 232 bytes (0x0000C8 - 0x0000E8)
static_assert(sizeof(FBlendBoneByChannelEntry) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAnimNode_BlendBoneByChannel) == 0x0068); // 104 bytes (0x000010 - 0x000068)
static_assert(sizeof(FAnimNode_BlendListBase) == 0x0098); // 152 bytes (0x000010 - 0x000098)
static_assert(sizeof(FAnimNode_BlendListByBool) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAnimNode_BlendListByEnum) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(FAnimNode_BlendListByInt) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAnimNode_BlendSpaceEvaluator) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FAnimNode_BoneDrivenController) == 0x0118); // 280 bytes (0x0000C8 - 0x000118)
static_assert(sizeof(FSocketReference) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBoneSocketTarget) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FAnimNode_CCDIK) == 0x0180); // 384 bytes (0x0000C8 - 0x000180)
static_assert(sizeof(FConstraint) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAnimNode_Constraint) == 0x0108); // 264 bytes (0x0000C8 - 0x000108)
static_assert(sizeof(FAnimNode_CopyBone) == 0x00F0); // 240 bytes (0x0000C8 - 0x0000F0)
static_assert(sizeof(FAnimNode_CopyBoneDelta) == 0x00F8); // 248 bytes (0x0000C8 - 0x0000F8)
static_assert(sizeof(FAnimNode_CopyPoseFromMesh) == 0x01D8); // 472 bytes (0x000010 - 0x0001D8)
static_assert(sizeof(FAnimNode_CurveSource) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FAnimNode_Fabrik) == 0x0190); // 400 bytes (0x0000C8 - 0x000190)
static_assert(sizeof(FAnimNode_HandIKRetargeting) == 0x0120); // 288 bytes (0x0000C8 - 0x000120)
static_assert(sizeof(FAnimNode_LayeredBoneBlend) == 0x00C0); // 192 bytes (0x000010 - 0x0000C0)
static_assert(sizeof(FAnimLegIKDefinition) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAnimNode_LegIK) == 0x00F8); // 248 bytes (0x0000C8 - 0x0000F8)
static_assert(sizeof(FAnimLegIKData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FIKChain) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FIKChainLink) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FAnimNode_LookAt) == 0x01B0); // 432 bytes (0x0000C8 - 0x0001B0)
static_assert(sizeof(FAnimNode_MakeDynamicAdditive) == 0x0038); // 56 bytes (0x000010 - 0x000038)
static_assert(sizeof(FAnimNode_ModifyBone) == 0x0108); // 264 bytes (0x0000C8 - 0x000108)
static_assert(sizeof(FAnimNode_ModifyCurve) == 0x0058); // 88 bytes (0x000010 - 0x000058)
static_assert(sizeof(FAnimNode_MultiWayBlend) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FAnimNode_ObserveBone) == 0x0100); // 256 bytes (0x0000C8 - 0x000100)
static_assert(sizeof(FAnimNode_PoseHandler) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(FAnimNode_PoseBlendNode) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(FAnimNode_PoseByName) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(FPoseDriverTransform) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPoseDriverTarget) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FRBFParams) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAnimNode_PoseDriver) == 0x0168); // 360 bytes (0x000080 - 0x000168)
static_assert(sizeof(FAnimNode_PoseSnapshot) == 0x0090); // 144 bytes (0x000010 - 0x000090)
static_assert(sizeof(FRandomPlayerSequenceEntry) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAnimNode_RandomPlayer) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FAnimNode_MeshSpaceRefPose) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FAnimNode_RefPose) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FAnimNode_ResetRoot) == 0x00D8); // 216 bytes (0x0000C8 - 0x0000D8)
static_assert(sizeof(FSimSpaceSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimNode_RigidBody) == 0x0830); // 2096 bytes (0x0000C8 - 0x000830)
static_assert(sizeof(FAnimNode_RotateRootBone) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(sizeof(FAnimNode_RotationMultiplier) == 0x00F0); // 240 bytes (0x0000C8 - 0x0000F0)
static_assert(sizeof(FAnimNode_RotationOffsetBlendSpace) == 0x0190); // 400 bytes (0x0000E8 - 0x000190)
static_assert(sizeof(FAnimNode_ScaleChainLength) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FAnimNode_SequenceEvaluator) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FAnimNode_Slot) == 0x0048); // 72 bytes (0x000010 - 0x000048)
static_assert(sizeof(FAnimNode_SplineIK) == 0x0270); // 624 bytes (0x0000C8 - 0x000270)
static_assert(sizeof(FSplineIKCachedBoneData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAnimNode_SpringBone) == 0x0128); // 296 bytes (0x0000C8 - 0x000128)
static_assert(sizeof(FAnimNode_StateResult) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRotationLimit) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimNode_Trail) == 0x0260); // 608 bytes (0x0000C8 - 0x000260)
static_assert(sizeof(FReferenceBoneFrame) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimNode_TwistCorrectiveNode) == 0x0138); // 312 bytes (0x0000C8 - 0x000138)
static_assert(sizeof(FAnimNode_TwoBoneIK) == 0x01E0); // 480 bytes (0x0000C8 - 0x0001E0)
static_assert(sizeof(FAnimNode_TwoWayBlend) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FAnimSequencerInstanceProxy) == 0x0A10); // 2576 bytes (0x000770 - 0x000A10)
static_assert(sizeof(FPositionHistory) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRBFEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRBFTarget) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(offsetof(UAnimNotify_PlayMontageNotify, NotifyName) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayMontageNotifyWindow, NotifyName) == 0x0030);
static_assert(offsetof(FAnimNode_SkeletalControlBase, ComponentPose) == 0x0010);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaInputType) == 0x0028);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBias) == 0x0030);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaBoolBlend) == 0x0038);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaCurveName) == 0x0080);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBiasClamp) == 0x0088);
static_assert(offsetof(FAnimNode_BlendSpacePlayer, BlendSpace) == 0x0050);
static_assert(offsetof(FAnimNode_BlendSpacePlayer, PreviousBlendSpace) == 0x00E0);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, BasePose) == 0x0150);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SourceSocketName) == 0x0164);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, PivotSocketName) == 0x016C);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LookAtLocation) == 0x0174);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SocketAxis) == 0x0180);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearXLimitType) == 0x0000);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearYLimitType) == 0x0001);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearZLimitType) == 0x0002);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMin) == 0x0004);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMax) == 0x0010);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularConstraintType) == 0x001C);
static_assert(offsetof(FAnimPhysConstraintSetup, TwistAxis) == 0x001D);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTargetAxis) == 0x001E);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMin) == 0x0024);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMax) == 0x0030);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTarget) == 0x003C);
static_assert(offsetof(FAnimPhysSphericalLimit, DrivingBone) == 0x0000);
static_assert(offsetof(FAnimPhysSphericalLimit, SphereLocalOffset) == 0x0010);
static_assert(offsetof(FAnimPhysSphericalLimit, LimitType) == 0x0020);
static_assert(offsetof(FAnimPhysPlanarLimit, DrivingBone) == 0x0000);
static_assert(offsetof(FAnimPhysPlanarLimit, PlaneTransform) == 0x0010);
static_assert(offsetof(FRotationRetargetingInfo, Source) == 0x0010);
static_assert(offsetof(FRotationRetargetingInfo, Target) == 0x0040);
static_assert(offsetof(FRotationRetargetingInfo, RotationComponent) == 0x0070);
static_assert(offsetof(FRotationRetargetingInfo, TwistAxis) == 0x0074);
static_assert(offsetof(FRotationRetargetingInfo, EasingType) == 0x0094);
static_assert(offsetof(FRotationRetargetingInfo, CustomCurve) == 0x0098);
static_assert(offsetof(FAnimNode_AnimDynamics, RelativeSpaceBone) == 0x0130);
static_assert(offsetof(FAnimNode_AnimDynamics, BoundBone) == 0x0140);
static_assert(offsetof(FAnimNode_AnimDynamics, ChainEnd) == 0x0150);
static_assert(offsetof(FAnimNode_AnimDynamics, BoxExtents) == 0x0160);
static_assert(offsetof(FAnimNode_AnimDynamics, LocalJointOffset) == 0x016C);
static_assert(offsetof(FAnimNode_AnimDynamics, GravityOverride) == 0x017C);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearAccScale) == 0x0194);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearVelScale) == 0x01A0);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp) == 0x01AC);
static_assert(offsetof(FAnimNode_AnimDynamics, ConstraintSetup) == 0x01C4);
static_assert(offsetof(FAnimNode_AnimDynamics, SphericalLimits) == 0x0210);
static_assert(offsetof(FAnimNode_AnimDynamics, ExternalForce) == 0x0224);
static_assert(offsetof(FAnimNode_AnimDynamics, PlanarLimits) == 0x0230);
static_assert(offsetof(FAnimNode_AnimDynamics, CollisionType) == 0x0240);
static_assert(offsetof(FAnimNode_AnimDynamics, SimulationSpace) == 0x0241);
static_assert(offsetof(FAnimNode_AnimDynamics, RetargetingSettings) == 0x0250);
static_assert(offsetof(FAnimNode_ApplyAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_ApplyAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBias) == 0x0034);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBiasClamp) == 0x0090);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaInputType) == 0x00C4);
static_assert(offsetof(FAngularRangeLimit, LimitMin) == 0x0000);
static_assert(offsetof(FAngularRangeLimit, LimitMax) == 0x000C);
static_assert(offsetof(FAngularRangeLimit, Bone) == 0x0018);
static_assert(offsetof(FAnimNode_ApplyLimits, AngularRangeLimits) == 0x00C8);
static_assert(offsetof(FAnimNode_ApplyLimits, AngularOffsets) == 0x00D8);
static_assert(offsetof(FBlendBoneByChannelEntry, SourceBone) == 0x0000);
static_assert(offsetof(FBlendBoneByChannelEntry, TargetBone) == 0x0010);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, A) == 0x0010);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, B) == 0x0020);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, BoneDefinitions) == 0x0030);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, AlphaScaleBias) == 0x0058);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, TransformsSpace) == 0x0060);
static_assert(offsetof(FAnimNode_BlendListBase, BlendPose) == 0x0010);
static_assert(offsetof(FAnimNode_BlendListBase, BlendTime) == 0x0020);
static_assert(offsetof(FAnimNode_BlendListBase, TransitionType) == 0x0030);
static_assert(offsetof(FAnimNode_BlendListBase, BlendType) == 0x0031);
static_assert(offsetof(FAnimNode_BlendListBase, CustomBlendCurve) == 0x0038);
static_assert(offsetof(FAnimNode_BlendListBase, BlendProfile) == 0x0040);
static_assert(offsetof(FAnimNode_BlendListByEnum, EnumToPoseIndex) == 0x0098);
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_BoneDrivenController, DrivingCurve) == 0x00D8);
static_assert(offsetof(FAnimNode_BoneDrivenController, ParameterName) == 0x00F4);
static_assert(offsetof(FAnimNode_BoneDrivenController, TargetBone) == 0x00FC);
static_assert(offsetof(FAnimNode_BoneDrivenController, DestinationMode) == 0x010C);
static_assert(offsetof(FAnimNode_BoneDrivenController, ModificationMode) == 0x010D);
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceComponent) == 0x010E);
static_assert(offsetof(FSocketReference, SocketName) == 0x0030);
static_assert(offsetof(FBoneSocketTarget, BoneReference) == 0x0004);
static_assert(offsetof(FBoneSocketTarget, SocketReference) == 0x0020);
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocation) == 0x00C8);
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocationSpace) == 0x00D4);
static_assert(offsetof(FAnimNode_CCDIK, EffectorTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_CCDIK, TipBone) == 0x0140);
static_assert(offsetof(FAnimNode_CCDIK, RootBone) == 0x0150);
static_assert(offsetof(FAnimNode_CCDIK, RotationLimitPerJoints) == 0x0170);
static_assert(offsetof(FConstraint, TargetBone) == 0x0000);
static_assert(offsetof(FConstraint, OffsetOption) == 0x0010);
static_assert(offsetof(FConstraint, TransformType) == 0x0011);
static_assert(offsetof(FConstraint, PerAxis) == 0x0012);
static_assert(offsetof(FAnimNode_Constraint, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_Constraint, ConstraintSetup) == 0x00D8);
static_assert(offsetof(FAnimNode_Constraint, ConstraintWeights) == 0x00E8);
static_assert(offsetof(FAnimNode_CopyBone, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_CopyBone, TargetBone) == 0x00D8);
static_assert(offsetof(FAnimNode_CopyBone, ControlSpace) == 0x00EB);
static_assert(offsetof(FAnimNode_CopyBoneDelta, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_CopyBoneDelta, TargetBone) == 0x00D8);
static_assert(offsetof(FAnimNode_CopyBoneDelta, CopyMode) == 0x00EB);
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, RootBoneToCopy) == 0x001C);
static_assert(offsetof(FAnimNode_CurveSource, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_CurveSource, SourceBinding) == 0x0020);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransform) == 0x00D0);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTarget) == 0x0100);
static_assert(offsetof(FAnimNode_Fabrik, TipBone) == 0x0160);
static_assert(offsetof(FAnimNode_Fabrik, RootBone) == 0x0170);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransformSpace) == 0x0188);
static_assert(offsetof(FAnimNode_Fabrik, EffectorRotationSource) == 0x0189);
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandFK) == 0x00C8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandFK) == 0x00D8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandIK) == 0x00E8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandIK) == 0x00F8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, IKBonesToMove) == 0x0108);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BasePose) == 0x0010);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendPoses) == 0x0020);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LayerSetup) == 0x0030);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendWeights) == 0x0040);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, CurveBlendOption) == 0x0052);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights) == 0x0060);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, SkeletonGuid) == 0x0070);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, VirtualBoneGuid) == 0x0080);
static_assert(offsetof(FAnimLegIKDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FAnimLegIKDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimLegIKDefinition, FootBoneForwardAxis) == 0x0028);
static_assert(offsetof(FAnimLegIKDefinition, HingeRotationAxis) == 0x0029);
static_assert(offsetof(FAnimNode_LegIK, LegsDefinition) == 0x00D0);
static_assert(offsetof(FAnimNode_LookAt, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_LookAt, LookAtTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_LookAt, LookAtLocation) == 0x0140);
static_assert(offsetof(FAnimNode_LookAt, LookAt_Axis) == 0x014C);
static_assert(offsetof(FAnimNode_LookAt, InterpolationType) == 0x015D);
static_assert(offsetof(FAnimNode_LookAt, LookUp_Axis) == 0x0160);
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ModifyBone, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_ModifyBone, Translation) == 0x00D8);
static_assert(offsetof(FAnimNode_ModifyBone, Rotation) == 0x00E4);
static_assert(offsetof(FAnimNode_ModifyBone, Scale) == 0x00F0);
static_assert(offsetof(FAnimNode_ModifyBone, TranslationMode) == 0x00FC);
static_assert(offsetof(FAnimNode_ModifyBone, RotationMode) == 0x00FD);
static_assert(offsetof(FAnimNode_ModifyBone, ScaleMode) == 0x00FE);
static_assert(offsetof(FAnimNode_ModifyBone, TranslationSpace) == 0x00FF);
static_assert(offsetof(FAnimNode_ModifyBone, RotationSpace) == 0x0100);
static_assert(offsetof(FAnimNode_ModifyBone, ScaleSpace) == 0x0101);
static_assert(offsetof(FAnimNode_ModifyCurve, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_ModifyCurve, CurveValues) == 0x0020);
static_assert(offsetof(FAnimNode_ModifyCurve, CurveNames) == 0x0030);
static_assert(offsetof(FAnimNode_ModifyCurve, ApplyMode) == 0x0054);
static_assert(offsetof(FAnimNode_MultiWayBlend, Poses) == 0x0010);
static_assert(offsetof(FAnimNode_MultiWayBlend, DesiredAlphas) == 0x0020);
static_assert(offsetof(FAnimNode_MultiWayBlend, AlphaScaleBias) == 0x0040);
static_assert(offsetof(FAnimNode_ObserveBone, BoneToObserve) == 0x00C8);
static_assert(offsetof(FAnimNode_ObserveBone, DisplaySpace) == 0x00D8);
static_assert(offsetof(FAnimNode_ObserveBone, Translation) == 0x00DC);
static_assert(offsetof(FAnimNode_ObserveBone, Rotation) == 0x00E8);
static_assert(offsetof(FAnimNode_ObserveBone, Scale) == 0x00F4);
static_assert(offsetof(FAnimNode_PoseHandler, PoseAsset) == 0x0038);
static_assert(offsetof(FAnimNode_PoseBlendNode, SourcePose) == 0x0080);
static_assert(offsetof(FAnimNode_PoseBlendNode, BlendOption) == 0x0090);
static_assert(offsetof(FAnimNode_PoseBlendNode, CustomCurve) == 0x0098);
static_assert(offsetof(FAnimNode_PoseByName, PoseName) == 0x0080);
static_assert(offsetof(FPoseDriverTransform, TargetTranslation) == 0x0000);
static_assert(offsetof(FPoseDriverTransform, TargetRotation) == 0x000C);
static_assert(offsetof(FPoseDriverTarget, BoneTransforms) == 0x0000);
static_assert(offsetof(FPoseDriverTarget, TargetRotation) == 0x0010);
static_assert(offsetof(FPoseDriverTarget, DistanceMethod) == 0x0020);
static_assert(offsetof(FPoseDriverTarget, FunctionType) == 0x0021);
static_assert(offsetof(FPoseDriverTarget, CustomCurve) == 0x0028);
static_assert(offsetof(FPoseDriverTarget, DrivenName) == 0x00A8);
static_assert(offsetof(FRBFParams, SolverType) == 0x0004);
static_assert(offsetof(FRBFParams, Function) == 0x000D);
static_assert(offsetof(FRBFParams, DistanceMethod) == 0x000E);
static_assert(offsetof(FRBFParams, TwistAxis) == 0x000F);
static_assert(offsetof(FRBFParams, NormalizeMethod) == 0x0014);
static_assert(offsetof(FRBFParams, MedianReference) == 0x0018);
static_assert(offsetof(FAnimNode_PoseDriver, SourcePose) == 0x0080);
static_assert(offsetof(FAnimNode_PoseDriver, SourceBones) == 0x0090);
static_assert(offsetof(FAnimNode_PoseDriver, OnlyDriveBones) == 0x00A0);
static_assert(offsetof(FAnimNode_PoseDriver, PoseTargets) == 0x00B0);
static_assert(offsetof(FAnimNode_PoseDriver, EvalSpaceBone) == 0x00F0);
static_assert(offsetof(FAnimNode_PoseDriver, RBFParams) == 0x0100);
static_assert(offsetof(FAnimNode_PoseDriver, DriveSource) == 0x012C);
static_assert(offsetof(FAnimNode_PoseDriver, DriveOutput) == 0x012D);
static_assert(offsetof(FAnimNode_PoseSnapshot, SnapshotName) == 0x0010);
static_assert(offsetof(FAnimNode_PoseSnapshot, Snapshot) == 0x0018);
static_assert(offsetof(FAnimNode_PoseSnapshot, Mode) == 0x0050);
static_assert(offsetof(FRandomPlayerSequenceEntry, Sequence) == 0x0000);
static_assert(offsetof(FRandomPlayerSequenceEntry, BlendIn) == 0x0020);
static_assert(offsetof(FAnimNode_RandomPlayer, Entries) == 0x0010);
static_assert(offsetof(FAnimNode_RefPose, RefPoseType) == 0x0010);
static_assert(offsetof(FSimSpaceSettings, ExternalLinearDragV) == 0x001C);
static_assert(offsetof(FSimSpaceSettings, ExternalLinearVelocity) == 0x0028);
static_assert(offsetof(FSimSpaceSettings, ExternalAngularVelocity) == 0x0034);
static_assert(offsetof(FAnimNode_RigidBody, OverridePhysicsAsset) == 0x00C8);
static_assert(offsetof(FAnimNode_RigidBody, OverrideWorldGravity) == 0x0168);
static_assert(offsetof(FAnimNode_RigidBody, ExternalForce) == 0x0174);
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearAccScale) == 0x0180);
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearVelScale) == 0x018C);
static_assert(offsetof(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp) == 0x0198);
static_assert(offsetof(FAnimNode_RigidBody, SimSpaceSettings) == 0x01A4);
static_assert(offsetof(FAnimNode_RigidBody, BaseBoneRef) == 0x01E8);
static_assert(offsetof(FAnimNode_RigidBody, OverlapChannel) == 0x01F8);
static_assert(offsetof(FAnimNode_RigidBody, SimulationSpace) == 0x01F9);
static_assert(offsetof(FAnimNode_RotateRootBone, BasePose) == 0x0010);
static_assert(offsetof(FAnimNode_RotateRootBone, PitchScaleBiasClamp) == 0x0028);
static_assert(offsetof(FAnimNode_RotateRootBone, YawScaleBiasClamp) == 0x0058);
static_assert(offsetof(FAnimNode_RotateRootBone, MeshToComponent) == 0x0088);
static_assert(offsetof(FAnimNode_RotationMultiplier, TargetBone) == 0x00C8);
static_assert(offsetof(FAnimNode_RotationMultiplier, SourceBone) == 0x00D8);
static_assert(offsetof(FAnimNode_RotationMultiplier, RotationAxisToRefer) == 0x00EC);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, BasePose) == 0x00E8);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias) == 0x0100);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaBoolBlend) == 0x0108);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaCurveName) == 0x0150);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBiasClamp) == 0x0158);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaInputType) == 0x018C);
static_assert(offsetof(FAnimNode_ScaleChainLength, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainStartBone) == 0x0024);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainEndBone) == 0x0034);
static_assert(offsetof(FAnimNode_ScaleChainLength, TargetLocation) == 0x0044);
static_assert(offsetof(FAnimNode_ScaleChainLength, AlphaScaleBias) == 0x0058);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainInitialLength) == 0x0060);
static_assert(offsetof(FAnimNode_SequenceEvaluator, Sequence) == 0x0038);
static_assert(offsetof(FAnimNode_SequenceEvaluator, ReinitializationBehavior) == 0x0046);
static_assert(offsetof(FAnimNode_Slot, Source) == 0x0010);
static_assert(offsetof(FAnimNode_Slot, SlotName) == 0x0020);
static_assert(offsetof(FAnimNode_SplineIK, StartBone) == 0x00C8);
static_assert(offsetof(FAnimNode_SplineIK, EndBone) == 0x00D8);
static_assert(offsetof(FAnimNode_SplineIK, BoneAxis) == 0x00E8);
static_assert(offsetof(FAnimNode_SplineIK, ControlPoints) == 0x00F0);
static_assert(offsetof(FAnimNode_SplineIK, TwistBlend) == 0x0110);
static_assert(offsetof(FSplineIKCachedBoneData, Bone) == 0x0000);
static_assert(offsetof(FAnimNode_SpringBone, SpringBone) == 0x00C8);
static_assert(offsetof(FRotationLimit, LimitMin) == 0x0000);
static_assert(offsetof(FRotationLimit, LimitMax) == 0x000C);
static_assert(offsetof(FAnimNode_Trail, TrailBone) == 0x0100);
static_assert(offsetof(FAnimNode_Trail, ChainBoneAxis) == 0x0114);
static_assert(offsetof(FAnimNode_Trail, TrailRelaxationSpeed) == 0x0120);
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor) == 0x01A8);
static_assert(offsetof(FAnimNode_Trail, RotationLimits) == 0x01D8);
static_assert(offsetof(FAnimNode_Trail, RotationOffsets) == 0x01E8);
static_assert(offsetof(FAnimNode_Trail, PlanarLimits) == 0x01F8);
static_assert(offsetof(FAnimNode_Trail, FakeVelocity) == 0x020C);
static_assert(offsetof(FAnimNode_Trail, BaseJoint) == 0x0218);
static_assert(offsetof(FReferenceBoneFrame, Bone) == 0x0000);
static_assert(offsetof(FReferenceBoneFrame, Axis) == 0x0010);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, BaseFrame) == 0x00C8);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistFrame) == 0x00E8);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis) == 0x0108);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, Curve) == 0x0124);
static_assert(offsetof(FAnimNode_TwoBoneIK, IKBone) == 0x00C8);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocation) == 0x00E0);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorTarget) == 0x00F0);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocation) == 0x0150);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTarget) == 0x0160);
static_assert(offsetof(FAnimNode_TwoBoneIK, TwistAxis) == 0x01C0);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocationSpace) == 0x01D0);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocationSpace) == 0x01D1);
static_assert(offsetof(FAnimNode_TwoWayBlend, A) == 0x0010);
static_assert(offsetof(FAnimNode_TwoWayBlend, B) == 0x0020);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaInputType) == 0x0030);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBias) == 0x0038);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBiasClamp) == 0x0090);
static_assert(offsetof(FPositionHistory, Positions) == 0x0000);
static_assert(offsetof(FRBFEntry, Values) == 0x0000);
static_assert(offsetof(FRBFTarget, CustomCurve) == 0x0018);
static_assert(offsetof(FRBFTarget, DistanceMethod) == 0x0098);
static_assert(offsetof(FRBFTarget, FunctionType) == 0x0099);
