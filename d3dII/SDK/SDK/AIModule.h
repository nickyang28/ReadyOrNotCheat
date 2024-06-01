
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: NavigationSystem

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x01 (1 bytes)
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success                                                    = 0,
	EPathFollowingResult__Blocked                                                    = 1,
	EPathFollowingResult__OffPath                                                    = 2,
	EPathFollowingResult__Aborted                                                    = 3,
	EPathFollowingResult__Skipped_DEPRECATED                                         = 4,
	EPathFollowingResult__Invalid                                                    = 5
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x01 (1 bytes)
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing                                                      = 0,
	EEnvQueryStatus__Success                                                         = 1,
	EEnvQueryStatus__Failed                                                          = 2,
	EEnvQueryStatus__Aborted                                                         = 3,
	EEnvQueryStatus__OwnerLost                                                       = 4,
	EEnvQueryStatus__MissingParam                                                    = 5
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x01 (1 bytes)
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle                                                       = 0,
	EPathFollowingStatus__Waiting                                                    = 1,
	EPathFollowingStatus__Paused                                                     = 2,
	EPathFollowingStatus__Moving                                                     = 3
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x01 (1 bytes)
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed                                              = 0,
	EPathFollowingRequestResult__AlreadyAtGoal                                       = 1,
	EPathFollowingRequestResult__RequestSuccessful                                   = 2
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x01 (1 bytes)
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception                                            = 0,
	EAISenseNotifyType__OnPerceptionChange                                           = 1
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x01 (1 bytes)
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest                                                          = 0,
	EAITaskPriority__Low                                                             = 64,
	EAITaskPriority__AutonomousAI                                                    = 127,
	EAITaskPriority__High                                                            = 192,
	EAITaskPriority__Ultimate                                                        = 254
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x01 (1 bytes)
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less                                                            = 0,
	EGenericAICheck__LessOrEqual                                                     = 1,
	EGenericAICheck__Equal                                                           = 2,
	EGenericAICheck__NotEqual                                                        = 3,
	EGenericAICheck__GreaterOrEqual                                                  = 4,
	EGenericAICheck__Greater                                                         = 5,
	EGenericAICheck__IsTrue                                                          = 6
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x01 (1 bytes)
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation                                                         = 0,
	EAILockSource__Logic                                                             = 1,
	EAILockSource__Script                                                            = 2,
	EAILockSource__Gameplay                                                          = 3
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x01 (1 bytes)
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript                                                   = 0,
	EAIRequestPriority__Logic                                                        = 1,
	EAIRequestPriority__HardScript                                                   = 2,
	EAIRequestPriority__Reaction                                                     = 3,
	EAIRequestPriority__Ultimate                                                     = 4
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x01 (1 bytes)
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid                                                    = 0,
	EPawnActionEventType__FailedToStart                                              = 1,
	EPawnActionEventType__InstantAbort                                               = 2,
	EPawnActionEventType__FinishedAborting                                           = 3,
	EPawnActionEventType__FinishedExecution                                          = 4,
	EPawnActionEventType__Push                                                       = 5
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x01 (1 bytes)
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted                                                    = 0,
	EPawnActionResult__InProgress                                                    = 1,
	EPawnActionResult__Success                                                       = 2,
	EPawnActionResult__Failed                                                        = 3,
	EPawnActionResult__Aborted                                                       = 4
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x01 (1 bytes)
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted                                              = 0,
	EPawnActionAbortState__NotBeingAborted                                           = 1,
	EPawnActionAbortState__MarkPendingAbort                                          = 2,
	EPawnActionAbortState__LatentAbortInProgress                                     = 3,
	EPawnActionAbortState__AbortDone                                                 = 4
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x01 (1 bytes)
enum class FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D                                                      = 0,
	FAIDistanceType__Distance2D                                                      = 1,
	FAIDistanceType__DistanceZ                                                       = 2
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x01 (1 bytes)
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default                                                           = 0,
	EAIOptionFlag__Enable                                                            = 1,
	EAIOptionFlag__Disable                                                           = 2
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x01 (1 bytes)
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None                                                           = 0,
	EBTFlowAbortMode__LowerPriority                                                  = 1,
	EBTFlowAbortMode__Self                                                           = 2,
	EBTFlowAbortMode__Both                                                           = 3
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x01 (1 bytes)
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded                                                         = 0,
	EBTNodeResult__Failed                                                            = 1,
	EBTNodeResult__Aborted                                                           = 2,
	EBTNodeResult__InProgress                                                        = 3
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x01 (1 bytes)
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal                                                         = 0,
	ETextKeyOperation__NotEqual                                                      = 1,
	ETextKeyOperation__Contain                                                       = 2,
	ETextKeyOperation__NotContain                                                    = 3
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x01 (1 bytes)
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal                                                   = 0,
	EArithmeticKeyOperation__NotEqual                                                = 1,
	EArithmeticKeyOperation__Less                                                    = 2,
	EArithmeticKeyOperation__LessOrEqual                                             = 3,
	EArithmeticKeyOperation__Greater                                                 = 4,
	EArithmeticKeyOperation__GreaterOrEqual                                          = 5
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x01 (1 bytes)
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set                                                          = 0,
	EBasicKeyOperation__NotSet                                                       = 1
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x01 (1 bytes)
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground                                                 = 0,
	EBTParallelMode__WaitForBackground                                               = 1
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x01 (1 bytes)
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid                                                       = 0,
	EBTDecoratorLogic__Test                                                          = 1,
	EBTDecoratorLogic__And                                                           = 2,
	EBTDecoratorLogic__Or                                                            = 3,
	EBTDecoratorLogic__Not                                                           = 4
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x01 (1 bytes)
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode                                                         = 0,
	EBTChildIndex__TaskNode                                                          = 1
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x01 (1 bytes)
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange                                                = 0,
	EBTBlackboardRestart__ResultChange                                               = 1
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x01 (1 bytes)
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal                                                = 0,
	EBlackBoardEntryComparison__NotEqual                                             = 1
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x01 (1 bytes)
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D                                        = 0,
	EPathExistanceQueryType__HierarchicalQuery                                       = 1,
	EPathExistanceQueryType__RegularPathFinding                                      = 2
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x01 (1 bytes)
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween                                      = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints                                    = 1
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x01 (1 bytes)
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute                                                  = 0,
	EEQSNormalizationType__RelativeToScores                                          = 1
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x01 (1 bytes)
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D                                                     = 0,
	EEnvTestDistance__Distance2D                                                     = 1,
	EEnvTestDistance__DistanceZ                                                      = 2,
	EEnvTestDistance__DistanceAbsoluteZ                                              = 3
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x01 (1 bytes)
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D                                                               = 0,
	EEnvTestDot__Dot2D                                                               = 1
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x01 (1 bytes)
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist                                                   = 0,
	EEnvTestPathfinding__PathCost                                                    = 1,
	EEnvTestPathfinding__PathLength                                                  = 2
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x01 (1 bytes)
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None                                                      = 0,
	EEnvQueryTestClamping__SpecifiedValue                                            = 1,
	EEnvQueryTestClamping__FilterThreshold                                           = 2
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x01 (1 bytes)
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints                                                         = 0,
	EEnvDirection__Rotation                                                          = 1
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x01 (1 bytes)
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box                                                            = 0,
	EEnvOverlapShape__Sphere                                                         = 1,
	EEnvOverlapShape__Capsule                                                        = 2
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x01 (1 bytes)
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line                                                             = 0,
	EEnvTraceShape__Box                                                              = 1,
	EEnvTraceShape__Sphere                                                           = 2,
	EEnvTraceShape__Capsule                                                          = 3
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x01 (1 bytes)
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None                                                             = 0,
	EEnvQueryTrace__Navigation                                                       = 1,
	EEnvQueryTrace__Geometry                                                         = 2,
	EEnvQueryTrace__NavigationOverLedges                                             = 3
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x01 (1 bytes)
enum class EAIParamType : uint8_t
{
	EAIParamType__Float                                                              = 0,
	EAIParamType__Int                                                                = 1,
	EAIParamType__Bool                                                               = 2
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x01 (1 bytes)
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float                                                            = 0,
	EEnvQueryParam__Int                                                              = 1,
	EEnvQueryParam__Bool                                                             = 2
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x01 (1 bytes)
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult                                                   = 0,
	EEnvQueryRunMode__RandomBest5Pct                                                 = 1,
	EEnvQueryRunMode__RandomBest25Pct                                                = 2,
	EEnvQueryRunMode__AllMatching                                                    = 3
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x01 (1 bytes)
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore                                              = 0,
	EEnvTestScoreOperator__MinScore                                                  = 1,
	EEnvTestScoreOperator__MaxScore                                                  = 2,
	EEnvTestScoreOperator__Multiply                                                  = 3
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x01 (1 bytes)
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass                                                  = 0,
	EEnvTestFilterOperator__AnyPass                                                  = 1
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x01 (1 bytes)
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low                                                                = 0,
	EEnvTestCost__Medium                                                             = 1,
	EEnvTestCost__High                                                               = 2
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x01 (1 bytes)
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None                                                             = 0,
	EEnvTestWeight__Square                                                           = 1,
	EEnvTestWeight__Inverse                                                          = 2,
	EEnvTestWeight__Unused                                                           = 3,
	EEnvTestWeight__Constant                                                         = 4,
	EEnvTestWeight__Skip                                                             = 5
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x01 (1 bytes)
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear                                                    = 0,
	EEnvTestScoreEquation__Square                                                    = 1,
	EEnvTestScoreEquation__InverseLinear                                             = 2,
	EEnvTestScoreEquation__SquareRoot                                                = 3,
	EEnvTestScoreEquation__Constant                                                  = 4
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x01 (1 bytes)
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum                                                      = 0,
	EEnvTestFilterType__Maximum                                                      = 1,
	EEnvTestFilterType__Range                                                        = 2,
	EEnvTestFilterType__Match                                                        = 3
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x01 (1 bytes)
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter                                                          = 0,
	EEnvTestPurpose__Score                                                           = 1,
	EEnvTestPurpose__FilterAndScore                                                  = 2
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x01 (1 bytes)
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All                                                     = 0,
	EEnvQueryHightlightMode__Best5Pct                                                = 1,
	EEnvQueryHightlightMode__Best25Pct                                               = 2
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x01 (1 bytes)
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly                                                          = 0,
	ETeamAttitude__Neutral                                                           = 1,
	ETeamAttitude__Hostile                                                           = 2
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x01 (1 bytes)
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error                                                      = 0,
	EPathFollowingAction__NoMove                                                     = 1,
	EPathFollowingAction__DirectMove                                                 = 2,
	EPathFollowingAction__PartialPath                                                = 3,
	EPathFollowingAction__PathToGoal                                                 = 4
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x01 (1 bytes)
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess                                          = 0,
	EPawnActionFailHandling__IgnoreFailure                                           = 1
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x01 (1 bytes)
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering                             = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances                                   = 1
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x01 (1 bytes)
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding                                              = 0,
	EPawnActionMoveMode__StraightLine                                                = 1
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (144 bytes) (0x000298 - 0x000328) align 8 pad: 0x0000
class AAIController : public AController
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0298   (0x0038)  MISSED
	bool                                               bStartAILogicOnPossess : 1;                                 // 0x02D0:0 (0x0001)  
	bool                                               bStopAILogicOnUnposses : 1;                                 // 0x02D0:1 (0x0001)  
	bool                                               bLOSflag : 1;                                               // 0x02D0:2 (0x0001)  
	bool                                               bSkipExtraLOSChecks : 1;                                    // 0x02D0:3 (0x0001)  
	bool                                               bAllowStrafe : 1;                                           // 0x02D0:4 (0x0001)  
	bool                                               bWantsPlayerState : 1;                                      // 0x02D0:5 (0x0001)  
	bool                                               bSetControlRotationFromPawnOrientation : 1;                 // 0x02D0:6 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	class UPathFollowingComponent*                     PathFollowingComponent;                                     // 0x02D8   (0x0008)  
	class UBrainComponent*                             BrainComponent;                                             // 0x02E0   (0x0008)  
	class UAIPerceptionComponent*                      PerceptionComponent;                                        // 0x02E8   (0x0008)  
	class UPawnActionsComponent*                       ActionsComp;                                                // 0x02F0   (0x0008)  
	class UBlackboardComponent*                        Blackboard;                                                 // 0x02F8   (0x0008)  
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                               // 0x0300   (0x0008)  
	class UClass*                                      DefaultNavigationFilterClass;                               // 0x0308   (0x0008)  
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(ReceiveMoveCompleted);                               // 0x0310   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0320   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	// bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent*& BlackboardComponent);            // [0x42e3490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	// void UnclaimTaskResource(class UClass* ResourceClass);                                                                   // [0x42e3240] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetPathFollowingComponent
	// void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);                                           // [0x42e2d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	// void SetMoveBlockDetection(bool bEnable);                                                                                // [0x42e2ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	// bool RunBehaviorTree(class UBehaviorTree* BTAsset);                                                                      // [0x42e2ab0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	// void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);              // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	// void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);            // [0x42e2770] Native|Public        
	// Function /Script/AIModule.AIController.MoveToLocation
	// TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x42e24e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	// TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x42e22a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	// void K2_SetFocus(class AActor* NewFocus);                                                                                // [0x42e2100] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	// void K2_SetFocalPoint(FVector FP);                                                                                       // [0x42e2070] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	// void K2_ClearFocus();                                                                                                    // [0x42e2050] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	// bool HasPartialPath();                                                                                                   // [0x42e1e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	// class UPathFollowingComponent* GetPathFollowingComponent();                                                              // [0x42e1bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	// TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                       // [0x42e1b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	// FVector GetImmediateMoveDestination();                                                                                   // [0x42e19d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	// class AActor* GetFocusActor();                                                                                           // [0x42e19a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	// FVector GetFocalPointOnActor(class AActor* Actor);                                                                       // [0x42e18f0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	// FVector GetFocalPoint();                                                                                                 // [0x42e18b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	// class UAIPerceptionComponent* GetAIPerceptionComponent();                                                                // [0x42e1410] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	// void ClaimTaskResource(class UClass* ResourceClass);                                                                     // [0x42e10f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UEnvQueryContext : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UEnvQueryNode : public UObject
{ 
public:
	int32_t                                            VerNum;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UEnvQueryGenerator : public UEnvQueryNode
{ 
public:
	FString                                            OptionName;                                                 // 0x0030   (0x0010)  
	class UClass*                                      ItemType;                                                   // 0x0040   (0x0008)  
	bool                                               bAutoSortTests : 1;                                         // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FEnvTraceData
{ 
	int32_t                                            VersionNum;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      NavigationFilter;                                           // 0x0008   (0x0008)  
	float                                              ProjectDown;                                                // 0x0010   (0x0004)  
	float                                              ProjectUp;                                                  // 0x0014   (0x0004)  
	float                                              ExtentX;                                                    // 0x0018   (0x0004)  
	float                                              ExtentY;                                                    // 0x001C   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0020   (0x0004)  
	float                                              PostProjectionVerticalOffset;                               // 0x0024   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0028   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                          // 0x0029   (0x0001)  
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                                 // 0x002A   (0x0001)  
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                  // 0x002B   (0x0001)  
	bool                                               bTraceComplex : 1;                                          // 0x002C:0 (0x0001)  
	bool                                               bOnlyBlockingHits : 1;                                      // 0x002C:1 (0x0001)  
	bool                                               bCanTraceOnNavMesh : 1;                                     // 0x002C:2 (0x0001)  
	bool                                               bCanTraceOnGeometry : 1;                                    // 0x002C:3 (0x0001)  
	bool                                               bCanDisableTrace : 1;                                       // 0x002C:4 (0x0001)  
	bool                                               bCanProjectDown : 1;                                        // 0x002C:5 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0030 (48 bytes) (0x000050 - 0x000080) align 8 pad: 0x0000
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x0050   (0x0030)  
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UAIDataProvider*                             DataBinding;                                                // 0x0010   (0x0008)  
	FName                                              DataField;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0010 (16 bytes) (0x000020 - 0x000030) align 8 pad: 0x0000
struct FAIDataProviderTypedValue : FAIDataProviderValue
{ 
	class UClass*                                      PropertyType;                                               // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{ 
	bool                                               DefaultValue;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{ 
	float                                              DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01C8 (456 bytes) (0x000030 - 0x0001F8) align 8 pad: 0x0000
class UEnvQueryTest : public UEnvQueryNode
{ 
public:
	int32_t                                            TestOrder;                                                  // 0x0030   (0x0004)  
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            TestComment;                                                // 0x0038   (0x0010)  
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                    // 0x0048   (0x0001)  
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                     // 0x0049   (0x0001)  
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                                 // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x004B   (0x0005)  MISSED
	FAIDataProviderBoolValue                           BoolValue;                                                  // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          FloatValueMin;                                              // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          FloatValueMax;                                              // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00F8   (0x0001)  MISSED
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                            // 0x00F9   (0x0001)  
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                               // 0x00FA   (0x0001)  
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                               // 0x00FB   (0x0001)  
	EEQSNormalizationType                              NormalizationType;                                          // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FAIDataProviderFloatValue                          ScoreClampMin;                                              // 0x0100   (0x0038)  
	FAIDataProviderFloatValue                          ScoreClampMax;                                              // 0x0138   (0x0038)  
	FAIDataProviderFloatValue                          ScoringFactor;                                              // 0x0170   (0x0038)  
	FAIDataProviderFloatValue                          ReferenceValue;                                             // 0x01A8   (0x0038)  
	bool                                               bDefineReferenceValue;                                      // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
	bool                                               bWorkOnFloatValues : 1;                                     // 0x01F0:0 (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x01F1   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0088 (136 bytes) (0x0001F8 - 0x000280) align 8 pad: 0x0000
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      Context;                                                    // 0x0200   (0x0008)  
	FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0208   (0x0038)  
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0240   (0x0038)  
	class UClass*                                      FilterClass;                                                // 0x0278   (0x0008)  
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x01A0 (416 bytes) (0x0000B0 - 0x000250) align 8 pad: 0x0000
class UPathFollowingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00B0   (0x0038)  MISSED
	class UNavMovementComponent*                       MovementComp;                                               // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x150];                                     // 0x0100   (0x0150)  MISSED


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	// void OnNavDataRegistered(class ANavigationData* NavData);                                                                // [0x42fbc10] Final|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	// void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);             // [0x42fba70] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	// FVector GetPathDestination();                                                                                            // [0x42fb680] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	// TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                   // [0x42fb650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0048 (72 bytes) (0x000250 - 0x000298) align 8 pad: 0x0000
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0250   (0x0018)  MISSED
	FVector                                            CrowdAgentMoveDirection;                                    // 0x0268   (0x000C)  
	unsigned char                                      UnknownData01_7[0x24];                                      // 0x0274   (0x0024)  MISSED


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// void SuspendCrowdSteering(bool bSuspend);                                                                                // [0x42f4a10] Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000080) align 8 pad: 0x0000
class UAISense : public UObject
{ 
public:
	float                                              DefaultExpirationAge;                                       // 0x0028   (0x0004)  
	EAISenseNotifyType                                 NotifyType;                                                 // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bWantsNewPawnNotification : 1;                              // 0x0030:0 (0x0001)  
	bool                                               bAutoRegisterAllPawnsAsSources : 1;                         // 0x0030:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0040   (0x0040)  MISSED
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UAISenseConfig : public UObject
{ 
public:
	FColor                                             DebugColor;                                                 // 0x0028   (0x0004)  
	float                                              MaxAge;                                                     // 0x002C   (0x0004)  
	bool                                               bStartsEnabled : 1;                                         // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0031   (0x0017)  MISSED
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FAISenseAffiliationFilter
{ 
	bool                                               bDetectEnemies : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               bDetectNeutrals : 1;                                        // 0x0000:1 (0x0001)  
	bool                                               bDetectFriendlies : 1;                                      // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0028 (40 bytes) (0x000048 - 0x000070) align 8 pad: 0x0000
class UAISenseConfig_Sight : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
	float                                              SightRadius;                                                // 0x0050   (0x0004)  
	float                                              LoseSightRadius;                                            // 0x0054   (0x0004)  
	float                                              PeripheralVisionAngleDegrees;                               // 0x0058   (0x0004)  
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)  
	float                                              AutoSuccessRangeFromLastSeenLocation;                       // 0x0060   (0x0004)  
	float                                              PointOfViewBackwardOffset;                                  // 0x0064   (0x0004)  
	float                                              NearClippingRadius;                                         // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.AISystem
/// Size: 0x00D8 (216 bytes) (0x000058 - 0x000130) align 8 pad: 0x0000
class UAISystem : public UAISystemBase
{ 
public:
	FSoftClassPath                                     PerceptionSystemClassName;                                  // 0x0058   (0x0018)  
	FSoftClassPath                                     HotSpotManagerClassName;                                    // 0x0070   (0x0018)  
	float                                              AcceptanceRadius;                                           // 0x0088   (0x0004)  
	float                                              PathfollowingRegularPathPointAcceptanceRadius;              // 0x008C   (0x0004)  
	float                                              PathfollowingNavLinkAcceptanceRadius;                       // 0x0090   (0x0004)  
	bool                                               bFinishMoveOnGoalOverlap;                                   // 0x0094   (0x0001)  
	bool                                               bAcceptPartialPaths;                                        // 0x0095   (0x0001)  
	bool                                               bAllowStrafing;                                             // 0x0096   (0x0001)  
	bool                                               bEnableBTAITasks;                                           // 0x0097   (0x0001)  
	bool                                               bAllowControllersAsEQSQuerier;                              // 0x0098   (0x0001)  
	bool                                               bEnableDebuggerPlugin;                                      // 0x0099   (0x0001)  
	bool                                               bForgetStaleActors;                                         // 0x009A   (0x0001)  
	bool                                               bAddBlackboardSelfKey;                                      // 0x009B   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                               // 0x009C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                        // 0x00A0   (0x0008)  
	class UEnvQueryManager*                            EnvironmentQueryManager;                                    // 0x00A8   (0x0008)  
	class UAIPerceptionSystem*                         PerceptionSystem;                                           // 0x00B0   (0x0008)  
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                            // 0x00B8   (0x0010)  
	class UAIHotSpotManager*                           HotSpotManager;                                             // 0x00C8   (0x0008)  
	class UNavLocalGridManager*                        NavLocalGrids;                                              // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x00D8   (0x0058)  MISSED


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	// void AILoggingVerbose();                                                                                                 // [0x1822d50] Exec|Native|Public   
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	// void AIIgnorePlayers();                                                                                                  // [0x20cbd90] Exec|Native|Public   
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FCrowdAvoidanceConfig
{ 
	float                                              VelocityBias;                                               // 0x0000   (0x0004)  
	float                                              DesiredVelocityWeight;                                      // 0x0004   (0x0004)  
	float                                              CurrentVelocityWeight;                                      // 0x0008   (0x0004)  
	float                                              SideBiasWeight;                                             // 0x000C   (0x0004)  
	float                                              ImpactTimeWeight;                                           // 0x0010   (0x0004)  
	float                                              ImpactTimeRange;                                            // 0x0014   (0x0004)  
	char                                               CustomPatternIdx;                                           // 0x0018   (0x0001)  
	char                                               AdaptiveDivisions;                                          // 0x0019   (0x0001)  
	char                                               AdaptiveRings;                                              // 0x001A   (0x0001)  
	char                                               AdaptiveDepth;                                              // 0x001B   (0x0001)  
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FCrowdAvoidanceSamplingPattern
{ 
	TArray<float>                                      Angles;                                                     // 0x0000   (0x0010)  
	TArray<float>                                      Radii;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000F0) align 8 pad: 0x0000
class UCrowdManager : public UCrowdManagerBase
{ 
public:
	class ANavigationData*                             MyNavData;                                                  // 0x0028   (0x0008)  
	TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig;                                            // 0x0030   (0x0010)  
	TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns;                                           // 0x0040   (0x0010)  
	int32_t                                            MaxAgents;                                                  // 0x0050   (0x0004)  
	float                                              MaxAgentRadius;                                             // 0x0054   (0x0004)  
	int32_t                                            MaxAvoidedAgents;                                           // 0x0058   (0x0004)  
	int32_t                                            MaxAvoidedWalls;                                            // 0x005C   (0x0004)  
	float                                              NavmeshCheckInterval;                                       // 0x0060   (0x0004)  
	float                                              PathOptimizationInterval;                                   // 0x0064   (0x0004)  
	float                                              SeparationDirClamp;                                         // 0x0068   (0x0004)  
	float                                              PathOffsetRadiusMultiplier;                                 // 0x006C   (0x0004)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0070:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0070:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0070:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0070:3 (0x0001)  MISSED
	bool                                               bResolveCollisions : 1;                                     // 0x0070:4 (0x0001)  
	unsigned char                                      UnknownData04_7[0x7F];                                      // 0x0071   (0x007F)  MISSED
};

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000068) align 8 pad: 0x0000
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x42e2840] Final|Native|Public  
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);        // [0x42e32d0] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, class AActor* Owner); // [0x42e3010] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x42e2f50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x42e2e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// void SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess);                     // [0x42e2b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);              // [0x42e2190] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// bool IsValidAIRotation(FRotator Rotation);                                                                               // [0x42e1fc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// bool IsValidAILocation(FVector Location);                                                                                // [0x42e1f30] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// bool IsValidAIDirection(FVector DirectionVector);                                                                        // [0x42e1ea0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	// int32_t GetNextNavLinkIndex(class AController* Controller);                                                              // [0x42e1b30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	// TArray<FVector> GetCurrentPathPoints(class AController* Controller);                                                     // [0x42e16e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	// int32_t GetCurrentPathIndex(class AController* Controller);                                                              // [0x42e1650] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// class UNavigationPath* GetCurrentPath(class AController* Controller);                                                    // [0x42e15c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// class UBlackboardComponent* GetBlackboard(class AActor* Target);                                                         // [0x42e1530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController
	// class AAIController* GetAIController(class AActor* ControlledActor);                                                     // [0x42e1380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // [0x42e1180] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAIDataProvider : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
public:
	FName                                              paramName;                                                  // 0x0028   (0x0008)  
	float                                              FloatValue;                                                 // 0x0030   (0x0004)  
	int32_t                                            IntValue;                                                   // 0x0034   (0x0004)  
	bool                                               BoolValue;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
public:
	float                                              Min;                                                        // 0x0040   (0x0004)  
	float                                              Max;                                                        // 0x0044   (0x0004)  
	bool                                               bInteger : 1;                                               // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAIHotSpotManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x000190) align 8 pad: 0x0000
class UAIPerceptionComponent : public UActorComponent
{ 
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                               // 0x00B0   (0x0010)  
	class UClass*                                      DominantSense;                                              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
	class AAIController*                               AIOwner;                                                    // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x00E0   (0x0080)  MISSED
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(OnPerceptionUpdated);                                // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,439) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionUpdated);                          // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionInfoUpdated);                      // 0x0180   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	// void SetSenseEnabled(class UClass* SenseClass, bool bEnable);                                                            // [0x42e2dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// void RequestStimuliListenerUpdate();                                                                                     // [0x42e2a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                     // [0x42e2910] Final|Native|Public  
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	// void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<AActor*>& OutActors);                             // [0x42e1d80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                              // [0x42e1cd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors
	// void GetPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                           // [0x42e1be0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                      // [0x42e1a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                  // [0x42e17c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	// bool GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                      // [0x42e1430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll
	// void ForgetAll();                                                                                                        // [0x42e1360] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAIPerceptionListenerInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x0018 (24 bytes) (0x0000B0 - 0x0000C8) align 8 pad: 0x0000
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
public:
	bool                                               bAutoRegisterAsSource : 1;                                  // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                  // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// void UnregisterFromSense(class UClass* SenseClass);                                                                      // [0x42e3400] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// void UnregisterFromPerceptionSystem();                                                                                   // [0x42e33e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// void RegisterWithPerceptionSystem();                                                                                     // [0x42e2a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// void RegisterForSense(class UClass* SenseClass);                                                                         // [0x42e29e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UAISubsystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UAISystem*                                   AISystem;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x000130) align 8 pad: 0x0000
class UAIPerceptionSystem : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0038   (0x0050)  MISSED
	TArray<class UAISense*>                            Senses;                                                     // 0x0088   (0x0010)  
	float                                              PerceptionAgingRate;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_7[0x94];                                      // 0x009C   (0x0094)  MISSED


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);                     // [0x42e7ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	// void ReportEvent(class UAISenseEvent* PerceptionEvent);                                                                  // [0x42e7a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);      // [0x42e7730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                   // [0x42e7660] Final|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, FAIStimulus& Stimulus);                        // [0x42e7520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAIResourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UAIResource_Movement : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UAIResource_Logic : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0028 (40 bytes) (0x000080 - 0x0000A8) align 8 pad: 0x0000
class UAISense_Blueprint : public UAISense
{ 
public:
	class UClass*                                      ListenerDataType;                                           // 0x0080   (0x0008)  
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                          // 0x0088   (0x0010)  
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	// float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                                 // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	// void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);                  // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	// void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);             // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	// void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);               // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	// void K2_OnNewPawn(class APawn* NewPawn);                                                                                 // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	// void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                      // [0x42e7470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	// void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                              // [0x42e73c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAIDamageEvent
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FVector                                            HitLocation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class AActor*                                      DamagedActor;                                               // 0x0020   (0x0008)  
	class AActor*                                      Instigator;                                                 // 0x0028   (0x0008)  
	FName                                              Tag;                                                        // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (16 bytes) (0x000080 - 0x000090) align 8 pad: 0x0000
class UAISense_Damage : public UAISense
{ 
public:
	TArray<FAIDamageEvent>                             RegisteredEvents;                                           // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag); // [0x42e7830] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FAINoiseEvent
{ 
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0000   (0x0004)  MISSED
	FVector                                            NoiseLocation;                                              // 0x0004   (0x000C)  
	float                                              Loudness;                                                   // 0x0010   (0x0004)  
	float                                              MaxRange;                                                   // 0x0014   (0x0004)  
	class AActor*                                      Instigator;                                                 // 0x0018   (0x0008)  
	FName                                              Tag;                                                        // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0068 (104 bytes) (0x000080 - 0x0000E8) align 8 pad: 0x0000
class UAISense_Hearing : public UAISense
{ 
public:
	TArray<FAINoiseEvent>                              NoiseEvents;                                                // 0x0080   (0x0010)  
	float                                              SpeedOfSoundSq;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x0094   (0x0054)  MISSED


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	// void ReportNoiseEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag); // [0x42e7b00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAIPredictionEvent
{ 
	class AActor*                                      Requestor;                                                  // 0x0000   (0x0008)  
	class AActor*                                      PredictedActor;                                             // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (16 bytes) (0x000080 - 0x000090) align 8 pad: 0x0000
class UAISense_Prediction : public UAISense
{ 
public:
	TArray<FAIPredictionEvent>                         RegisteredEvents;                                           // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);             // [0x42e7eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime); // [0x42e7da0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x00F0 (240 bytes) (0x000080 - 0x000170) align 8 pad: 0x0000
class UAISense_Sight : public UAISense
{ 
public:
	unsigned char                                      UnknownData00_3[0xC8];                                      // 0x0080   (0x00C8)  MISSED
	int32_t                                            MaxTracesPerTick;                                           // 0x0148   (0x0004)  
	int32_t                                            MinQueriesPerTimeSliceCheck;                                // 0x014C   (0x0004)  
	double                                             MaxTimeSlicePerTick;                                        // 0x0150   (0x0008)  
	float                                              HighImportanceQueryDistanceThreshold;                       // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	float                                              MaxQueryImportance;                                         // 0x0160   (0x0004)  
	float                                              SightLimitQueryImportance;                                  // 0x0164   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAITeamStimulusEvent
{ 
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0000   (0x0028)  MISSED
	class AActor*                                      Broadcaster;                                                // 0x0028   (0x0008)  
	class AActor*                                      Enemy;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (16 bytes) (0x000080 - 0x000090) align 8 pad: 0x0000
class UAISense_Team : public UAISense
{ 
public:
	TArray<FAITeamStimulusEvent>                       RegisteredEvents;                                           // 0x0080   (0x0010)  
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FAITouchEvent
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class AActor*                                      TouchReceiver;                                              // 0x0010   (0x0008)  
	class AActor*                                      OtherActor;                                                 // 0x0018   (0x0008)  
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0010 (16 bytes) (0x000080 - 0x000090) align 8 pad: 0x0000
class UAISense_Touch : public UAISense
{ 
public:
	TArray<FAITouchEvent>                              RegisteredEvents;                                           // 0x0080   (0x0010)  
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0000 (0 bytes) (0x000108 - 0x000108) align 8 pad: 0x0000
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0008 (8 bytes) (0x000048 - 0x000050) align 8 pad: 0x0000
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0008 (8 bytes) (0x000048 - 0x000050) align 8 pad: 0x0000
class UAISenseConfig_Damage : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0018 (24 bytes) (0x000048 - 0x000060) align 8 pad: 0x0000
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
	float                                              HearingRange;                                               // 0x0050   (0x0004)  
	float                                              LoSHearingRange;                                            // 0x0054   (0x0004)  
	bool                                               bUseLoSHearing : 1;                                         // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x005C   (0x0004)  
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UAISenseConfig_Team : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UAISenseConfig_Touch : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAISenseEvent : public UObject
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UAISenseEvent_Damage : public UAISenseEvent
{ 
public:
	FAIDamageEvent                                     Event;                                                      // 0x0028   (0x0038)  
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
public:
	FAINoiseEvent                                      Event;                                                      // 0x0028   (0x0030)  
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAISightTargetInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
class UAITask : public UGameplayTask
{ 
public:
	class AAIController*                               OwnerController;                                            // 0x0068   (0x0008)  
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UAITask_LockLogic : public UAITask
{ 
public:
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FAIMoveRequest
{ 
	class AActor*                                      GoalActor;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0008   (0x0038)  MISSED
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x00A0 (160 bytes) (0x000070 - 0x000110) align 8 pad: 0x0000
class UAITask_MoveTo : public UAITask
{ 
public:
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(OnRequestFailed);                                    // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(OnMoveFinished);                                     // 0x0080   (0x0010)  
	FAIMoveRequest                                     MoveRequest;                                                // 0x0090   (0x0040)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x00D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	// class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation); // [0x42e70c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x0078 (120 bytes) (0x000070 - 0x0000E8) align 8 pad: 0x0000
class UAITask_RunEQS : public UAITask
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0070   (0x0078)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_RunEQS.RunEQS
	// class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);                           // [0x42e7fc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 pad: 0x0000
struct FBTDecoratorLogic
{ 
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           Number;                                                     // 0x0002   (0x0002)  
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000068) align 8 pad: 0x0000
class UBehaviorTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UBTCompositeNode*                            RootNode;                                                   // 0x0030   (0x0008)  
	class UBlackboardData*                             BlackboardAsset;                                            // 0x0038   (0x0008)  
	TArray<class UBTDecorator*>                        RootDecorators;                                             // 0x0040   (0x0010)  
	TArray<FBTDecoratorLogic>                          RootDecoratorOps;                                           // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0058 (88 bytes) (0x0000B0 - 0x000108) align 8 pad: 0x0000
class UBrainComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B0   (0x0008)  MISSED
	class UBlackboardComponent*                        BlackboardComp;                                             // 0x00B8   (0x0008)  
	class AAIController*                               AIOwner;                                                    // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x00C8   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	// void StopLogic(FString Reason);                                                                                          // [0x42ece90] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.StartLogic
	// void StartLogic();                                                                                                       // [0x2030270] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	// void RestartLogic();                                                                                                     // [0x20302f0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	// bool IsRunning();                                                                                                        // [0x202f480] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x42ec3f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x0190 (400 bytes) (0x000108 - 0x000298) align 8 pad: 0x0000
class UBehaviorTreeComponent : public UBrainComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0108   (0x0020)  MISSED
	TArray<class UBTNode*>                             NodeInstances;                                              // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_6[0x140];                                     // 0x0138   (0x0140)  MISSED
	class UBehaviorTree*                               DefaultBehaviorTreeAsset;                                   // 0x0278   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0280   (0x0018)  MISSED


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// void SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);                                      // [0x42ec4c0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// float GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                   // [0x42ebc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);              // [0x42eb8c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FBehaviorTreeTemplateInfo
{ 
	class UBehaviorTree*                               Asset;                                                      // 0x0000   (0x0008)  
	class UBTCompositeNode*                            Template;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000050) align 8 pad: 0x0000
class UBehaviorTreeManager : public UObject
{ 
public:
	int32_t                                            MaxDebuggerSteps;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates;                                            // 0x0030   (0x0010)  
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                           // 0x0040   (0x0010)  
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UBehaviorTreeTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UBlackboardAssetProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AIModule.BlackboardAssetProvider.GetBlackboardAsset
	// class UBlackboardData* GetBlackboardAsset();                                                                             // [0x16d8dc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x0108 (264 bytes) (0x0000B0 - 0x0001B8) align 8 pad: 0x0000
class UBlackboardComponent : public UActorComponent
{ 
public:
	class UBrainComponent*                             BrainComp;                                                  // 0x00B0   (0x0008)  
	class UBlackboardData*                             DefaultBlackboardAsset;                                     // 0x00B8   (0x0008)  
	class UBlackboardData*                             BlackboardAsset;                                            // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00C8   (0x0020)  MISSED
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                               // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC0];                                      // 0x00F8   (0x00C0)  MISSED


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	// void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                              // [0x42ecda0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	// void SetValueAsString(FName& KeyName, FString StringValue);                                                              // [0x42ecc60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	// void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                            // [0x42ecb70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	// void SetValueAsObject(FName& KeyName, class UObject* ObjectValue);                                                       // [0x42ecaa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	// void SetValueAsName(FName& KeyName, FName NameValue);                                                                    // [0x42ec9d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	// void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                    // [0x42ec900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	// void SetValueAsFloat(FName& KeyName, float FloatValue);                                                                  // [0x42ec820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	// void SetValueAsEnum(FName& KeyName, char EnumValue);                                                                     // [0x42ec740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	// void SetValueAsClass(FName& KeyName, class UClass* ClassValue);                                                          // [0x42ec670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	// void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                     // [0x42ec590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	// bool IsVectorValueSet(FName& KeyName);                                                                                   // [0x42ec420] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	// FVector GetValueAsVector(FName& KeyName);                                                                                // [0x42ec2e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	// FString GetValueAsString(FName& KeyName);                                                                                // [0x42ec200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	// FRotator GetValueAsRotator(FName& KeyName);                                                                              // [0x42ec150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	// class UObject* GetValueAsObject(FName& KeyName);                                                                         // [0x42ec0b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	// FName GetValueAsName(FName& KeyName);                                                                                    // [0x42ec010] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	// int32_t GetValueAsInt(FName& KeyName);                                                                                   // [0x42ebf70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	// float GetValueAsFloat(FName& KeyName);                                                                                   // [0x42ebed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	// char GetValueAsEnum(FName& KeyName);                                                                                     // [0x42ebe30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	// class UClass* GetValueAsClass(FName& KeyName);                                                                           // [0x42ebd90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	// bool GetValueAsBool(FName& KeyName);                                                                                     // [0x42ebcf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	// bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                     // [0x42ebb60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	// bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                      // [0x42eba70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	// void ClearValue(FName& KeyName);                                                                                         // [0x42eb9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FBlackboardEntry
{ 
	FName                                              EntryName;                                                  // 0x0000   (0x0008)  
	class UBlackboardKeyType*                          KeyType;                                                    // 0x0008   (0x0008)  
	bool                                               bInstanceSynced : 1;                                        // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UBlackboardData : public UDataAsset
{ 
public:
	class UBlackboardData*                             Parent;                                                     // 0x0030   (0x0008)  
	TArray<FBlackboardEntry>                           Keys;                                                       // 0x0038   (0x0010)  
	bool                                               bHasSynchronizedKeys : 1;                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0020 (32 bytes) (0x000030 - 0x000050) align 8 pad: 0x0000
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
public:
	class UEnum*                                       EnumType;                                                   // 0x0030   (0x0008)  
	FString                                            EnumName;                                                   // 0x0038   (0x0010)  
	bool                                               bIsEnumNameValid : 1;                                       // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
public:
	FString                                            EnumName;                                                   // 0x0030   (0x0010)  
	class UEnum*                                       EnumType;                                                   // 0x0040   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
public:
	FString                                            StringValue;                                                // 0x0030   (0x0010)  
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BTNode
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
class UBTNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	class UBehaviorTree*                               TreeAsset;                                                  // 0x0040   (0x0008)  
	class UBTCompositeNode*                            ParentNode;                                                 // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0008 (8 bytes) (0x000058 - 0x000060) align 8 pad: 0x0000
class UBTAuxiliaryNode : public UBTNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FBTCompositeChild
{ 
	class UBTCompositeNode*                            ChildComposite;                                             // 0x0000   (0x0008)  
	class UBTTaskNode*                                 ChildTask;                                                  // 0x0008   (0x0008)  
	TArray<class UBTDecorator*>                        Decorators;                                                 // 0x0010   (0x0010)  
	TArray<FBTDecoratorLogic>                          DecoratorOps;                                               // 0x0020   (0x0010)  
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0038 (56 bytes) (0x000058 - 0x000090) align 8 pad: 0x0000
class UBTCompositeNode : public UBTNode
{ 
public:
	TArray<FBTCompositeChild>                          Children;                                                   // 0x0058   (0x0010)  
	TArray<class UBTService*>                          Services;                                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
	bool                                               bApplyDecoratorScope : 1;                                   // 0x0088:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0000 (0 bytes) (0x000090 - 0x000090) align 8 pad: 0x0000
class UBTComposite_Selector : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0000 (0 bytes) (0x000090 - 0x000090) align 8 pad: 0x0000
class UBTComposite_Sequence : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0008 (8 bytes) (0x000090 - 0x000098) align 8 pad: 0x0000
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
public:
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0008 (8 bytes) (0x000060 - 0x000068) align 8 pad: 0x0000
class UBTDecorator : public UBTAuxiliaryNode
{ 
public:
	bool                                               bInverseCondition : 1;                                      // 0x0060:7 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FBlackboardKeySelector
{ 
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                               // 0x0000   (0x0010)  
	FName                                              SelectedKeyName;                                            // 0x0010   (0x0008)  
	class UClass*                                      SelectedKeyType;                                            // 0x0018   (0x0008)  
	char                                               SelectedKeyID;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	bool                                               bNoneIsAllowedValue : 1;                                    // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0028 (40 bytes) (0x000068 - 0x000090) align 8 pad: 0x0000
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0068   (0x0028)  
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x0030 (48 bytes) (0x000090 - 0x0000C0) align 8 pad: 0x0000
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0090   (0x0004)  
	float                                              FloatValue;                                                 // 0x0094   (0x0004)  
	FString                                            StringValue;                                                // 0x0098   (0x0010)  
	FString                                            CachedDescription;                                          // 0x00A8   (0x0010)  
	char                                               OperationType;                                              // 0x00B8   (0x0001)  
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                             // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x0038 (56 bytes) (0x000068 - 0x0000A0) align 8 pad: 0x0000
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0068   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0070   (0x0008)  
	TArray<FName>                                      ObservedKeyNames;                                           // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0088   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0098:0 (0x0001)  
	bool                                               bCheckConditionOnlyBlackBoardChanges : 1;                   // 0x0098:1 (0x0001)  
	bool                                               bIsObservingBB : 1;                                         // 0x0098:2 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                    // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(class AActor* OwnerActor);                                                               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(class AActor* OwnerActor);                                                                 // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(class AActor* OwnerActor);                                                                    // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                            // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(class AActor* OwnerActor);                                                                    // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x42ec3c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x42ec390] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x0060 (96 bytes) (0x000068 - 0x0000C8) align 8 pad: 0x0000
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             ActorToCheck;                                               // 0x0068   (0x0028)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0098   (0x0020)  
	FString                                            CachedDescription;                                          // 0x00B8   (0x0010)  
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x0058 (88 bytes) (0x000068 - 0x0000C0) align 8 pad: 0x0000
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0098   (0x0028)  
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x0000 (0 bytes) (0x0000C0 - 0x0000C0) align 8 pad: 0x0000
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x0088 (136 bytes) (0x000068 - 0x0000F0) align 8 pad: 0x0000
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)  
	FBlackboardKeySelector                             ConeDirection;                                              // 0x0098   (0x0028)  
	FBlackboardKeySelector                             Observed;                                                   // 0x00C0   (0x0028)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
class UBTDecorator_Cooldown : public UBTDecorator
{ 
public:
	float                                              CoolDownTime;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x0060 (96 bytes) (0x000068 - 0x0000C8) align 8 pad: 0x0000
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0068   (0x0028)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x0090   (0x0028)  
	bool                                               bUseSelf : 1;                                               // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                              // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00C0   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0000 (0 bytes) (0x000068 - 0x000068) align 8 pad: 0x0000
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x0048 (72 bytes) (0x000090 - 0x0000D8) align 8 pad: 0x0000
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FAIDataProviderFloatValue                          ParametrizedAcceptableRadius;                               // 0x0098   (0x0038)  
	FAIDistanceType                                    GeometricDistanceType;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	bool                                               bUseParametrizedRadius : 1;                                 // 0x00D4:0 (0x0001)  
	bool                                               bUseNavAgentGoalLocation : 1;                               // 0x00D4:1 (0x0001)  
	bool                                               bPathFindingBasedTest : 1;                                  // 0x00D4:2 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0008 (8 bytes) (0x000090 - 0x000098) align 8 pad: 0x0000
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
public:
	class UClass*                                      TestClass;                                                  // 0x0090   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x0060 (96 bytes) (0x000068 - 0x0000C8) align 8 pad: 0x0000
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0070   (0x0028)  
	FBlackboardKeySelector                             Observed;                                                   // 0x0098   (0x0028)  
	bool                                               bUseSelfAsOrigin : 1;                                       // 0x00C0:0 (0x0001)  
	bool                                               bUseSelfAsObserved : 1;                                     // 0x00C0:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0010 (16 bytes) (0x000068 - 0x000078) align 8 pad: 0x0000
class UBTDecorator_Loop : public UBTDecorator
{ 
public:
	int32_t                                            NumLoops;                                                   // 0x0068   (0x0004)  
	bool                                               bInfiniteLoop;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              InfiniteLoopTimeoutTime;                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0000 (0 bytes) (0x000068 - 0x000068) align 8 pad: 0x0000
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0010 (16 bytes) (0x000068 - 0x000078) align 8 pad: 0x0000
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)  
	float                                              CooldownDuration;                                           // 0x0070   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0075   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0010 (16 bytes) (0x000068 - 0x000078) align 8 pad: 0x0000
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0068   (0x0008)  
	float                                              CooldownDuration;                                           // 0x0070   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0074   (0x0001)  
	bool                                               bActivatesCooldown;                                         // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0076   (0x0002)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
public:
	float                                              Timelimit;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// void StopUsingExternalEvent(class UBTNode* NodeOwner);                                                                   // [0x40beb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);                                       // [0x41691c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// void SetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value);                   // [0x42f1340] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// void SetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value);                   // [0x42f11b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value);                 // [0x42f1060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// void SetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UObject* Value);            // [0x42f0f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// void SetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value);                       // [0x42f0de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// void SetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value);                      // [0x42f0ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value);                      // [0x42f0b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, char Value);                        // [0x42f0a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// void SetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UClass* Value);              // [0x42f08d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// void SetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value);                        // [0x42f0790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);                                               // [0x42f0670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent
	// class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);                                               // [0x42f05e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x42f04d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// FString GetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x42f0390] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                             // [0x42f0280] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                        // [0x42f0180] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// FName GetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                   // [0x42f0070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// int32_t GetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                  // [0x42eff70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                  // [0x42efe70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x42efd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x42efc70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x42efb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x42efa70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                // [0x42ef8d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue
	// void ClearBlackboardValue(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                        // [0x42ef8d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BTService
/// Size: 0x0010 (16 bytes) (0x000060 - 0x000070) align 8 pad: 0x0000
class UBTService : public UBTAuxiliaryNode
{ 
public:
	float                                              Interval;                                                   // 0x0060   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0064   (0x0004)  
	bool                                               bCallTickOnSearchStart : 1;                                 // 0x0068:0 (0x0001)  
	bool                                               bRestartTimerOnEachActivation : 1;                          // 0x0068:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
class UBTService_BlackboardBase : public UBTService
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
class UBTService_BlueprintBase : public UBTService
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0080   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0090:0 (0x0001)  
	bool                                               bShowEventDetails : 1;                                      // 0x0090:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                            // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(class AActor* OwnerActor);                                                                       // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                           // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(class AActor* OwnerActor);                                                                      // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                             // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(class AActor* OwnerActor);                                                                        // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                                  // [0x42f0700] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
public:
	char                                               FocusPriority;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FAIDynamicParam
{ 
	FName                                              paramName;                                                  // 0x0000   (0x0008)  
	EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Value;                                                      // 0x000C   (0x0004)  
	FBlackboardKeySelector                             BBKey;                                                      // 0x0010   (0x0028)  
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FEQSParametrizedQueryExecutionRequest
{ 
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0008   (0x0010)  
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x0018   (0x0028)  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	bool                                               bUseBBKeyForQueryTemplate : 1;                              // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0058 (88 bytes) (0x000098 - 0x0000F0) align 8 pad: 0x0000
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0098   (0x0048)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0018 (24 bytes) (0x000058 - 0x000070) align 8 pad: 0x0000
class UBTTaskNode : public UBTNode
{ 
public:
	TArray<class UBTService*>                          Services;                                                   // 0x0058   (0x0010)  
	bool                                               bIgnoreRestartSelf : 1;                                     // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0028 (40 bytes) (0x000070 - 0x000098) align 8 pad: 0x0000
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0028)  
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FIntervalCountdown
{ 
	float                                              Interval;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0038 (56 bytes) (0x000070 - 0x0000A8) align 8 pad: 0x0000
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)  
	FIntervalCountdown                                 TickInterval;                                               // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                     // [0x42f1520] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                              // [0x42f1490] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(class AActor* OwnerActor);                                                                           // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                  // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(class AActor* OwnerActor);                                                                             // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                                  // [0x42f0760] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                   // [0x42f0730] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                       // [0x42ef9e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                      // [0x42ef9c0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
public:
	TEnumAsByte<EBTNodeResult>                         Result;                                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
public:
	bool                                               bWaitForGameplayTask : 1;                                   // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_MakeNoise : public UBTTaskNode
{ 
public:
	float                                              Loudnes;                                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x0018 (24 bytes) (0x000098 - 0x0000B0) align 8 pad: 0x0000
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00A0   (0x0008)  
	float                                              ObservedBlackboardValueTolerance;                           // 0x00A8   (0x0004)  
	bool                                               bObserveBlackboardValue : 1;                                // 0x00AC:0 (0x0001)  
	bool                                               bAllowStrafe : 1;                                           // 0x00AC:1 (0x0001)  
	bool                                               bAllowPartialPath : 1;                                      // 0x00AC:2 (0x0001)  
	bool                                               bTrackMovingGoal : 1;                                       // 0x00AC:3 (0x0001)  
	bool                                               bProjectGoalLocation : 1;                                   // 0x00AC:4 (0x0001)  
	bool                                               bReachTestIncludesAgentRadius : 1;                          // 0x00AC:5 (0x0001)  
	bool                                               bReachTestIncludesGoalRadius : 1;                           // 0x00AC:6 (0x0001)  
	bool                                               bStopOnOverlap : 1;                                         // 0x00AC:7 (0x0001)  
	bool                                               bStopOnOverlapNeedsUpdate : 1;                              // 0x00AD:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00AE   (0x0002)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
public:
	bool                                               bDisablePathUpdateOnGoalLocationChange : 1;                 // 0x00B0:0 (0x0001)  
	bool                                               bProjectVectorGoalToNavigation : 1;                         // 0x00B0:1 (0x0001)  
	bool                                               bUpdatedDeprecatedProperties : 1;                           // 0x00B0:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0000 (0 bytes) (0x000070 - 0x000070) align 8 pad: 0x0000
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x0040 (64 bytes) (0x000070 - 0x0000B0) align 8 pad: 0x0000
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
public:
	class UAnimationAsset*                             AnimationToPlay;                                            // 0x0070   (0x0008)  
	bool                                               bLooping : 1;                                               // 0x0078:0 (0x0001)  
	bool                                               bNonBlocking : 1;                                           // 0x0078:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	class UBehaviorTreeComponent*                      MyOwnerComp;                                                // 0x0080   (0x0008)  
	class USkeletalMeshComponent*                      CachedSkelMesh;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0090   (0x0020)  MISSED
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_PlaySound : public UBTTaskNode
{ 
public:
	class USoundCue*                                   SoundToPlay;                                                // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
public:
	class UPawnAction*                                 Action;                                                     // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x0008 (8 bytes) (0x000098 - 0x0000A0) align 8 pad: 0x0000
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
public:
	float                                              Precision;                                                  // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_RunBehavior : public UBTTaskNode
{ 
public:
	class UBehaviorTree*                               BehaviorAsset;                                              // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0018 (24 bytes) (0x000070 - 0x000088) align 8 pad: 0x0000
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
public:
	FGameplayTag                                       InjectionTag;                                               // 0x0070   (0x0008)  
	class UBehaviorTree*                               DefaultBehaviorAsset;                                       // 0x0078   (0x0008)  
	class UBehaviorTree*                               BehaviorAsset;                                              // 0x0080   (0x0008)  
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FEnvNamedValue
{ 
	FName                                              paramName;                                                  // 0x0000   (0x0008)  
	EAIParamType                                       ParamType;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x000150) align 8 pad: 0x0000
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
public:
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0098   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x00A0   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x00B0   (0x0010)  
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                    // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x00C8   (0x0028)  
	bool                                               bUseBBKey;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00F8   (0x0048)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0010 (16 bytes) (0x000070 - 0x000080) align 8 pad: 0x0000
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0070   (0x0008)  
	bool                                               bAddToExistingDuration;                                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              CooldownDuration;                                           // 0x007C   (0x0004)  
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0008 (8 bytes) (0x000070 - 0x000078) align 8 pad: 0x0000
class UBTTask_Wait : public UBTTaskNode
{ 
public:
	float                                              WaitTime;                                                   // 0x0070   (0x0004)  
	float                                              RandomDeviation;                                            // 0x0074   (0x0004)  
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x0028 (40 bytes) (0x000078 - 0x0000A0) align 8 pad: 0x0000
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0078   (0x0028)  
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UCrowdAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x0000 (0 bytes) (0x000328 - 0x000328) align 8 pad: 0x0000
class ADetourCrowdAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UEnvQuery : public UDataAsset
{ 
public:
	FName                                              QueryName;                                                  // 0x0030   (0x0008)  
	TArray<class UEnvQueryOption*>                     Options;                                                    // 0x0038   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);        // [0x24710f0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);        // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector>& ResultingLocationSet); // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);    // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UEnvQueryDebugHelpers : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0080 (128 bytes) (0x000050 - 0x0000D0) align 8 pad: 0x0000
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      SearchedActorClass;                                         // 0x0050   (0x0008)  
	FAIDataProviderBoolValue                           GenerateOnlyActorsInRadius;                                 // 0x0058   (0x0038)  
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x0090   (0x0038)  
	class UClass*                                      SearchCenter;                                               // 0x00C8   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0030 (48 bytes) (0x000050 - 0x000080) align 8 pad: 0x0000
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
public:
	FText                                              GeneratorsActionDescription;                                // 0x0050   (0x0018)  
	class UClass*                                      Context;                                                    // 0x0068   (0x0008)  
	class UClass*                                      GeneratedItemType;                                          // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// class UObject* GetQuerier();                                                                                             // [0x42f49e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// void DoItemGeneration(TArray<FVector>& ContextLocations);                                                                // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// void AddGeneratedVector(FVector GeneratedVector);                                                                        // [0x42f4950] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// void AddGeneratedActor(class AActor* GeneratedActor);                                                                    // [0x42f48c0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0020 (32 bytes) (0x000050 - 0x000070) align 8 pad: 0x0000
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                                 // 0x0050   (0x0010)  
	bool                                               bAllowDifferentItemTypes : 1;                               // 0x0060:0 (0x0001)  
	bool                                               bHasMatchingItemType : 1;                                   // 0x0060:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	class UClass*                                      ForcedItemType;                                             // 0x0068   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x00F0 (240 bytes) (0x000080 - 0x000170) align 8 pad: 0x0000
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          AlignedPointsDistance;                                      // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          ConeDegrees;                                                // 0x00B8   (0x0038)  
	FAIDataProviderFloatValue                          AngleStep;                                                  // 0x00F0   (0x0038)  
	FAIDataProviderFloatValue                          Range;                                                      // 0x0128   (0x0038)  
	class UClass*                                      CenterActor;                                                // 0x0160   (0x0008)  
	bool                                               bIncludeContextLocation : 1;                                // 0x0168:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0169   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0008 (8 bytes) (0x000050 - 0x000058) align 8 pad: 0x0000
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      QueryContext;                                               // 0x0050   (0x0008)  
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{ 
	int32_t                                            DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FEnvDirection
{ 
	class UClass*                                      LineFrom;                                                   // 0x0000   (0x0008)  
	class UClass*                                      LineTo;                                                     // 0x0008   (0x0008)  
	class UClass*                                      Rotation;                                                   // 0x0010   (0x0008)  
	TEnumAsByte<EEnvDirection>                         DirMode;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x0150 (336 bytes) (0x000080 - 0x0001D0) align 8 pad: 0x0000
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          InnerRadius;                                                // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          OuterRadius;                                                // 0x00B8   (0x0038)  
	FAIDataProviderIntValue                            NumberOfRings;                                              // 0x00F0   (0x0038)  
	FAIDataProviderIntValue                            PointsPerRing;                                              // 0x0128   (0x0038)  
	FEnvDirection                                      ArcDirection;                                               // 0x0160   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0180   (0x0038)  
	bool                                               bUseSpiralPattern;                                          // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01B9   (0x0007)  MISSED
	class UClass*                                      Center;                                                     // 0x01C0   (0x0008)  
	bool                                               bDefineArc : 1;                                             // 0x01C8:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x01C9   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0190 (400 bytes) (0x000080 - 0x000210) align 8 pad: 0x0000
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          CircleRadius;                                               // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00B8   (0x0038)  
	FAIDataProviderIntValue                            NumberOfPoints;                                             // 0x00F0   (0x0038)  
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                                 // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	FEnvDirection                                      ArcDirection;                                               // 0x0130   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0150   (0x0038)  
	float                                              AngleRadians;                                               // 0x0188   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	class UClass*                                      CircleCenter;                                               // 0x0190   (0x0008)  
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;                // 0x0198   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	FAIDataProviderFloatValue                          CircleCenterZOffset;                                        // 0x01A0   (0x0038)  
	FEnvTraceData                                      TraceData;                                                  // 0x01D8   (0x0030)  
	bool                                               bDefineArc : 1;                                             // 0x0208:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0209   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0078 (120 bytes) (0x000080 - 0x0000F8) align 8 pad: 0x0000
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          GridSize;                                                   // 0x0080   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00B8   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x00F0   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0078 (120 bytes) (0x0000F8 - 0x000170) align 8 pad: 0x0000
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
public:
	FAIDataProviderBoolValue                           PathToItem;                                                 // 0x00F8   (0x0038)  
	class UClass*                                      NavigationFilter;                                           // 0x0130   (0x0008)  
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0138   (0x0038)  
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x0034   (0x0024)  MISSED
	class UClass*                                      ItemType;                                                   // 0x0058   (0x0008)  
	int32_t                                            OptionIndex;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(OnQueryFinishedEvent);                               // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// void SetNamedParam(FName paramName, float Value);                                                                        // [0x42f85d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// TArray<FVector> GetResultsAsLocations();                                                                                 // [0x42f83c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// TArray<AActor*> GetResultsAsActors();                                                                                    // [0x42f8340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);                                                       // [0x42f8280] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);                                                             // [0x42f81c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// float GetItemScore(int32_t ItemIndex);                                                                                   // [0x42f8120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x24710f0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UEnvQueryItemType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0178 (376 bytes) (0x000000 - 0x000178) align 8 pad: 0x0000
struct FEnvQueryInstanceCache
{ 
	class UEnvQuery*                                   Template;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x170];                                     // 0x0008   (0x0170)  MISSED
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0108 (264 bytes) (0x000038 - 0x000140) align 8 pad: 0x0000
class UEnvQueryManager : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0038   (0x0070)  MISSED
	TArray<FEnvQueryInstanceCache>                     InstanceCache;                                              // 0x00A8   (0x0010)  
	TArray<class UEnvQueryContext*>                    LocalContexts;                                              // 0x00B8   (0x0010)  
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x00D8   (0x0054)  MISSED
	float                                              MaxAllowedTestingTime;                                      // 0x012C   (0x0004)  
	bool                                               bTestQueriesUsingBreadth;                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	int32_t                                            QueryCountWarningThreshold;                                 // 0x0134   (0x0004)  
	double                                             QueryCountWarningInterval;                                  // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	// class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass); // [0x42f8440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UEnvQueryOption : public UObject
{ 
public:
	class UEnvQueryGenerator*                          Generator;                                                  // 0x0028   (0x0008)  
	TArray<class UEnvQueryTest*>                       Tests;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0010 (16 bytes) (0x0001F8 - 0x000208) align 8 pad: 0x0000
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      DistanceTo;                                                 // 0x0200   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (72 bytes) (0x0001F8 - 0x000240) align 8 pad: 0x0000
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
public:
	FEnvDirection                                      LineA;                                                      // 0x01F8   (0x0020)  
	FEnvDirection                                      LineB;                                                      // 0x0218   (0x0020)  
	EEnvTestDot                                        TestMode;                                                   // 0x0238   (0x0001)  
	bool                                               bAbsoluteValue;                                             // 0x0239   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x023A   (0x0006)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (112 bytes) (0x0001F8 - 0x000268) align 8 pad: 0x0000
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x01F8   (0x0048)  
	bool                                               bUpdatedToUseQuery;                                         // 0x0240   (0x0001)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0241   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0242   (0x0006)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0248   (0x0020)  
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FEnvOverlapData
{ 
	float                                              ExtentX;                                                    // 0x0000   (0x0004)  
	float                                              ExtentY;                                                    // 0x0004   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0008   (0x0004)  
	FVector                                            ShapeOffset;                                                // 0x000C   (0x000C)  
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                             // 0x0018   (0x0001)  
	TEnumAsByte<EEnvOverlapShape>                      OverlapShape;                                               // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	bool                                               bOnlyBlockingHits : 1;                                      // 0x001C:0 (0x0001)  
	bool                                               bOverlapComplex : 1;                                        // 0x001C:1 (0x0001)  
	bool                                               bSkipOverlapQuerier : 1;                                    // 0x001C:2 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0020 (32 bytes) (0x0001F8 - 0x000218) align 8 pad: 0x0000
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    OverlapData;                                                // 0x01F8   (0x0020)  
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0038 (56 bytes) (0x000280 - 0x0002B8) align 8 pad: 0x0000
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
public:
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0280   (0x0038)  
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0030 (48 bytes) (0x0001F8 - 0x000228) align 8 pad: 0x0000
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x01F8   (0x0030)  
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x0000 (0 bytes) (0x0001F8 - 0x0001F8) align 8 pad: 0x0000
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x00E0 (224 bytes) (0x0001F8 - 0x0002D8) align 8 pad: 0x0000
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      TraceData;                                                  // 0x01F8   (0x0030)  
	FAIDataProviderBoolValue                           TraceFromContext;                                           // 0x0228   (0x0038)  
	FAIDataProviderFloatValue                          ItemHeightOffset;                                           // 0x0260   (0x0038)  
	FAIDataProviderFloatValue                          ContextHeightOffset;                                        // 0x0298   (0x0038)  
	class UClass*                                      Context;                                                    // 0x02D0   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0018 (24 bytes) (0x0001F8 - 0x000210) align 8 pad: 0x0000
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
public:
	class UClass*                                      VolumeContext;                                              // 0x01F8   (0x0008)  
	class UClass*                                      VolumeClass;                                                // 0x0200   (0x0008)  
	bool                                               bDoComplexVolumeTest : 1;                                   // 0x0208:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0209   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UEnvQueryTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UEQSQueryResultSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0040 (64 bytes) (0x000450 - 0x000490) align 16 pad: 0x0000
class UEQSRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0450   (0x0040)  MISSED
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x0098 (152 bytes) (0x0004B8 - 0x000550) align 16 pad: 0x0000
class AEQSTestingPawn : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x04B8   (0x0008)  MISSED
	class UEnvQuery*                                   QueryTemplate;                                              // 0x04C0   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x04C8   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x04D8   (0x0010)  
	float                                              TimeLimitPerStep;                                           // 0x04E8   (0x0004)  
	int32_t                                            StepToDebugDraw;                                            // 0x04EC   (0x0004)  
	EEnvQueryHightlightMode                            HighlightMode;                                              // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x04F1   (0x0003)  MISSED
	bool                                               bDrawLabels : 1;                                            // 0x04F4:0 (0x0001)  
	bool                                               bDrawFailedItems : 1;                                       // 0x04F4:1 (0x0001)  
	bool                                               bReRunQueryOnlyOnFinishedMove : 1;                          // 0x04F4:2 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x04F4:3 (0x0001)  
	bool                                               bTickDuringGame : 1;                                        // 0x04F4:4 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x04F5   (0x0003)  MISSED
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                               // 0x04F8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x04F9   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProperties;                                         // 0x0500   (0x0030)  
	unsigned char                                      UnknownData04_7[0x20];                                      // 0x0530   (0x0020)  MISSED
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGenericTeamAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x0000 (0 bytes) (0x000328 - 0x000328) align 8 pad: 0x0000
class AGridPathAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (48 bytes) (0x000250 - 0x000280) align 8 pad: 0x0000
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	class UNavLocalGridManager*                        GridManager;                                                // 0x0250   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0258   (0x0028)  MISSED
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x0050 (80 bytes) (0x000220 - 0x000270) align 8 pad: 0x0000
class ANavLinkProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0220   (0x0010)  MISSED
	TArray<FNavigationLink>                            PointLinks;                                                 // 0x0230   (0x0010)  
	TArray<FNavigationSegmentLink>                     SegmentLinks;                                               // 0x0240   (0x0010)  
	class UNavLinkCustomComponent*                     SmartLinkComp;                                              // 0x0250   (0x0008)  
	bool                                               bSmartLinkIsRelevant;                                       // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0259   (0x0007)  MISSED
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(OnSmartLinkReached);                                 // 0x0260   (0x0010)  


	/// Functions
	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
	// void SetSmartLinkEnabled(bool bEnabled);                                                                                 // [0x42fc020] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
	// void ResumePathFollowing(class AActor* Agent);                                                                           // [0x42fbda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// void ReceiveSmartLinkReached(class AActor* Agent, FVector& Destination);                                                 // [0x24710f0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
	// bool IsSmartLinkEnabled();                                                                                               // [0x42fb6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents
	// bool HasMovingAgents();                                                                                                  // [0x42fb6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
class UNavLocalGridManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED


	/// Functions
	// Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);                                   // [0x42fbe30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);                   // [0x42fbca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// bool FindLocalNavigationGridPath(class UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints); // [0x42fb420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// int32_t AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x42fb170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// int32_t AddLocalNavigationGridForPoint(class UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x42fafb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// int32_t AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x42fad90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// int32_t AddLocalNavigationGridForBox(class UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x42fab50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UPathFollowingManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000090) align 8 pad: 0x0000
class UPawnAction : public UObject
{ 
public:
	class UPawnAction*                                 ChildAction;                                                // 0x0028   (0x0008)  
	class UPawnAction*                                 ParentAction;                                               // 0x0030   (0x0008)  
	class UPawnActionsComponent*                       OwnerComponent;                                             // 0x0038   (0x0008)  
	class UObject*                                     Instigator;                                                 // 0x0040   (0x0008)  
	class UBrainComponent*                             BrainComp;                                                  // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED
	bool                                               bAllowNewSameClassInstance : 1;                             // 0x0080:0 (0x0001)  
	bool                                               bReplaceActiveSameClassInstance : 1;                        // 0x0080:1 (0x0001)  
	bool                                               bShouldPauseMovement : 1;                                   // 0x0080:2 (0x0001)  
	bool                                               bAlwaysNotifyOnFinished : 1;                                // 0x0080:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0081   (0x000F)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	// TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                     // [0x42fb630] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	// void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                                  // [0x42fb5b0] Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	// class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);                   // [0x42fb350] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0000 (0 bytes) (0x000090 - 0x000090) align 8 pad: 0x0000
class UPawnAction_BlueprintBase : public UPawnAction
{ 
public:


	/// Functions
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick
	// void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);                                                        // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart
	// void ActionStart(class APawn* ControlledPawn);                                                                           // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume
	// void ActionResume(class APawn* ControlledPawn);                                                                          // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause
	// void ActionPause(class APawn* ControlledPawn);                                                                           // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished
	// void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);                             // [0x24710f0] Event|Public|BlueprintEvent 
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x0050 (80 bytes) (0x000090 - 0x0000E0) align 8 pad: 0x0000
class UPawnAction_Move : public UPawnAction
{ 
public:
	class AActor*                                      GoalActor;                                                  // 0x0090   (0x0008)  
	FVector                                            GoalLocation;                                               // 0x0098   (0x000C)  
	float                                              AcceptableRadius;                                           // 0x00A4   (0x0004)  
	class UClass*                                      FilterClass;                                                // 0x00A8   (0x0008)  
	bool                                               bAllowStrafe : 1;                                           // 0x00B0:0 (0x0001)  
	bool                                               bFinishOnOverlap : 1;                                       // 0x00B0:1 (0x0001)  
	bool                                               bUsePathfinding : 1;                                        // 0x00B0:2 (0x0001)  
	bool                                               bAllowPartialPath : 1;                                      // 0x00B0:3 (0x0001)  
	bool                                               bProjectGoalToNavigation : 1;                               // 0x00B0:4 (0x0001)  
	bool                                               bUpdatePathToGoal : 1;                                      // 0x00B0:5 (0x0001)  
	bool                                               bAbortChildActionOnPathChange : 1;                          // 0x00B0:6 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2F];                                      // 0x00B1   (0x002F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (32 bytes) (0x000090 - 0x0000B0) align 8 pad: 0x0000
class UPawnAction_Repeat : public UPawnAction
{ 
public:
	class UPawnAction*                                 ActionToRepeat;                                             // 0x0090   (0x0008)  
	class UPawnAction*                                 RecentActionCopy;                                           // 0x0098   (0x0008)  
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0028 (40 bytes) (0x000090 - 0x0000B8) align 8 pad: 0x0000
class UPawnAction_Sequence : public UPawnAction
{ 
public:
	TArray<class UPawnAction*>                         ActionSequence;                                             // 0x0090   (0x0010)  
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class UPawnAction*                                 RecentActionCopy;                                           // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (16 bytes) (0x000090 - 0x0000A0) align 8 pad: 0x0000
class UPawnAction_Wait : public UPawnAction
{ 
public:
	float                                              TimeToWait;                                                 // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FPawnActionStack
{ 
	class UPawnAction*                                 TopAction;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FPawnActionEvent
{ 
	class UPawnAction*                                 Action;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (56 bytes) (0x0000B0 - 0x0000E8) align 8 pad: 0x0000
class UPawnActionsComponent : public UActorComponent
{ 
public:
	class APawn*                                       ControlledPawn;                                             // 0x00B0   (0x0008)  
	TArray<FPawnActionStack>                           ActionStacks;                                               // 0x00B8   (0x0010)  
	TArray<FPawnActionEvent>                           ActionEvents;                                               // 0x00C8   (0x0010)  
	class UPawnAction*                                 CurrentAction;                                              // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	// bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);   // [0x42fb960] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	// bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);           // [0x42fb860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);                                // [0x42fb7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);                                     // [0x42fb720] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0048 (72 bytes) (0x0000B0 - 0x0000F8) align 8 pad: 0x0000
class UPawnSensingComponent : public UActorComponent
{ 
public:
	float                                              HearingThreshold;                                           // 0x00B0   (0x0004)  
	float                                              LOSHearingThreshold;                                        // 0x00B4   (0x0004)  
	float                                              SightRadius;                                                // 0x00B8   (0x0004)  
	float                                              SensingInterval;                                            // 0x00BC   (0x0004)  
	float                                              HearingMaxSoundAge;                                         // 0x00C0   (0x0004)  
	bool                                               bEnableSensingUpdates : 1;                                  // 0x00C4:0 (0x0001)  
	bool                                               bOnlySensePlayers : 1;                                      // 0x00C4:1 (0x0001)  
	bool                                               bSeePawns : 1;                                              // 0x00C4:2 (0x0001)  
	bool                                               bHearNoises : 1;                                            // 0x00C4:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x00C5   (0x000B)  MISSED
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(OnSeePawn);                                          // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnHearNoise);                                        // 0x00E0   (0x0010)  
	float                                              PeripheralVisionAngle;                                      // 0x00F0   (0x0004)  
	float                                              PeripheralVisionCosine;                                     // 0x00F4   (0x0004)  


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// void SetSensingUpdatesEnabled(bool bEnabled);                                                                            // [0x42fbf90] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	// void SetSensingInterval(float NewSensingInterval);                                                                       // [0x42fbf00] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                           // [0x20f37d0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// void SeePawnDelegate__DelegateSignature(class APawn* Pawn);                                                              // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector& Location, float Volume);                     // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// float GetPeripheralVisionCosine();                                                                                       // [0x20ed910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// float GetPeripheralVisionAngle();                                                                                        // [0x3645d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UVisualLoggerExtension : public UObject
{ 
public:
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FAIRequestID
{ 
	uint32_t                                           RequestID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 pad: 0x0000
struct FAIStimulus
{ 
	float                                              Age;                                                        // 0x0000   (0x0004)  
	float                                              ExpirationAge;                                              // 0x0004   (0x0004)  
	float                                              Strength;                                                   // 0x0008   (0x0004)  
	FVector                                            StimulusLocation;                                           // 0x000C   (0x000C)  
	FVector                                            ReceiverLocation;                                           // 0x0018   (0x000C)  
	FName                                              Tag;                                                        // 0x0024   (0x0008)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x002C   (0x000C)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0038:0 (0x0001)  MISSED
	bool                                               bSuccessfullySensed : 1;                                    // 0x0038:1 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0039   (0x0003)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 pad: 0x0000
struct FActorPerceptionUpdateInfo
{ 
	int32_t                                            TargetID;                                                   // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,447) /* TWeakObjectPtr<AActor*> */ __um(Target);                                               // 0x0004   (0x0008)  
	FAIStimulus                                        Stimulus;                                                   // 0x000C   (0x003C)  
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0010 (16 bytes) (0x000020 - 0x000030) align 8 pad: 0x0000
struct FAIDataProviderStructValue : FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FActorPerceptionBlueprintInfo
{ 
	class AActor*                                      Target;                                                     // 0x0000   (0x0008)  
	TArray<FAIStimulus>                                LastSensedStimuli;                                          // 0x0008   (0x0010)  
	bool                                               bIsHostile : 1;                                             // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FAISightEvent
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SeenActor;                                                  // 0x0008   (0x0008)  
	class AActor*                                      Observer;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FEnvQueryRequest
{ 
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)  
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	class UWorld*                                      World;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0018   (0x0050)  MISSED
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FEnvQueryResult
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UClass*                                      ItemType;                                                   // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0018   (0x0014)  MISSED
	int32_t                                            OptionIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FGenericTeamId
{ 
	char                                               TeamID;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/AIModule.RecastGraphWrapper
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FRecastGraphWrapper
{ 
	class ARecastNavMesh*                              RecastNavMeshActor;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0008   (0x0090)  MISSED
};

static_assert(sizeof(AAIController) == 0x0328); // 808 bytes (0x000298 - 0x000328)
static_assert(sizeof(UEnvQueryContext) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryNode) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FEnvTraceData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator_ProjectedPoints) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(FAIDataProviderValue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAIDataProviderTypedValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FAIDataProviderBoolValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FAIDataProviderFloatValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UEnvQueryTest) == 0x01F8); // 504 bytes (0x000030 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_Pathfinding) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UPathFollowingComponent) == 0x0250); // 592 bytes (0x0000B0 - 0x000250)
static_assert(sizeof(UCrowdFollowingComponent) == 0x0298); // 664 bytes (0x000250 - 0x000298)
static_assert(sizeof(UAISense) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UAISenseConfig) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FAISenseAffiliationFilter) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UAISenseConfig_Sight) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(UAISystem) == 0x0130); // 304 bytes (0x000058 - 0x000130)
static_assert(sizeof(FCrowdAvoidanceConfig) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCrowdAvoidanceSamplingPattern) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UCrowdManager) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UAIAsyncTaskBlueprintProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UAIBlueprintHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIDataProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIDataProvider_QueryParams) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UAIDataProvider_Random) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAIHotSpotManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPerceptionComponent) == 0x0190); // 400 bytes (0x0000B0 - 0x000190)
static_assert(sizeof(UAIPerceptionListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPerceptionStimuliSourceComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UAISubsystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAIPerceptionSystem) == 0x0130); // 304 bytes (0x000038 - 0x000130)
static_assert(sizeof(UAIResourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIResource_Movement) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIResource_Logic) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAISense_Blueprint) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(FAIDamageEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UAISense_Damage) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAINoiseEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAISense_Hearing) == 0x00E8); // 232 bytes (0x000080 - 0x0000E8)
static_assert(sizeof(FAIPredictionEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAISense_Prediction) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAISense_Sight) == 0x0170); // 368 bytes (0x000080 - 0x000170)
static_assert(sizeof(FAITeamStimulusEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UAISense_Team) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAITouchEvent) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAISense_Touch) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAISenseBlueprintListener) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAISenseConfig_Blueprint) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UAISenseConfig_Damage) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UAISenseConfig_Hearing) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UAISenseConfig_Prediction) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseConfig_Team) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseConfig_Touch) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseEvent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAISenseEvent_Damage) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UAISenseEvent_Hearing) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAISightTargetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAITask) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UAITask_LockLogic) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FAIMoveRequest) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAITask_MoveTo) == 0x0110); // 272 bytes (0x000070 - 0x000110)
static_assert(sizeof(UAITask_RunEQS) == 0x00E8); // 232 bytes (0x000070 - 0x0000E8)
static_assert(sizeof(FBTDecoratorLogic) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UBehaviorTree) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UBrainComponent) == 0x0108); // 264 bytes (0x0000B0 - 0x000108)
static_assert(sizeof(UBehaviorTreeComponent) == 0x0298); // 664 bytes (0x000108 - 0x000298)
static_assert(sizeof(FBehaviorTreeTemplateInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBehaviorTreeManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UBehaviorTreeTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlackboardAssetProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlackboardComponent) == 0x01B8); // 440 bytes (0x0000B0 - 0x0001B8)
static_assert(sizeof(FBlackboardEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBlackboardData) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBlackboardKeyType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Bool) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Class) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBlackboardKeyType_Enum) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBlackboardKeyType_Float) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Int) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Name) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_NativeEnum) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UBlackboardKeyType_Object) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBlackboardKeyType_Rotator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_String) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UBlackboardKeyType_Vector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBTNode) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UBTAuxiliaryNode) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FBTCompositeChild) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UBTCompositeNode) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UBTComposite_Selector) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBTComposite_Sequence) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBTComposite_SimpleParallel) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UBTDecorator) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(FBlackboardKeySelector) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UBTDecorator_BlackboardBase) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(UBTDecorator_Blackboard) == 0x00C0); // 192 bytes (0x000090 - 0x0000C0)
static_assert(sizeof(UBTDecorator_BlueprintBase) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UBTDecorator_CheckGameplayTagsOnActor) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_CompareBBEntries) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(UBTDecorator_ConditionalLoop) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBTDecorator_ConeCheck) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(UBTDecorator_Cooldown) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBTDecorator_DoesPathExist) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_ForceSuccess) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UBTDecorator_IsAtLocation) == 0x00D8); // 216 bytes (0x000090 - 0x0000D8)
static_assert(sizeof(UBTDecorator_IsBBEntryOfClass) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UBTDecorator_KeepInCone) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_Loop) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_ReachedMoveGoal) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UBTDecorator_SetTagCooldown) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_TagCooldown) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_TimeLimit) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBTFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBTService) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UBTService_BlackboardBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UBTService_BlueprintBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UBTService_DefaultFocus) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAIDynamicParam) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FEQSParametrizedQueryExecutionRequest) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UBTService_RunEQS) == 0x00F0); // 240 bytes (0x000098 - 0x0000F0)
static_assert(sizeof(UBTTaskNode) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(UBTTask_BlackboardBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(FIntervalCountdown) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UBTTask_BlueprintBase) == 0x00A8); // 168 bytes (0x000070 - 0x0000A8)
static_assert(sizeof(UBTTask_FinishWithResult) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_GameplayTaskBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_MakeNoise) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_MoveTo) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UBTTask_MoveDirectlyToward) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UBTTask_PawnActionBase) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UBTTask_PlayAnimation) == 0x00B0); // 176 bytes (0x000070 - 0x0000B0)
static_assert(sizeof(UBTTask_PlaySound) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_PushPawnAction) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_RotateToFaceBBEntry) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UBTTask_RunBehavior) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_RunBehaviorDynamic) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FEnvNamedValue) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBTTask_RunEQSQuery) == 0x0150); // 336 bytes (0x000098 - 0x000150)
static_assert(sizeof(UBTTask_SetTagCooldown) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UBTTask_Wait) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_WaitBlackboardTime) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(UCrowdAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ADetourCrowdAIController) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UEnvQuery) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UEnvQueryContext_BlueprintBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryContext_Item) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryContext_Querier) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryDebugHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryGenerator_ActorsOfClass) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UEnvQueryGenerator_BlueprintBase) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UEnvQueryGenerator_Composite) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(UEnvQueryGenerator_Cone) == 0x0170); // 368 bytes (0x000080 - 0x000170)
static_assert(sizeof(UEnvQueryGenerator_CurrentLocation) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(FAIDataProviderIntValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FEnvDirection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEnvQueryGenerator_Donut) == 0x01D0); // 464 bytes (0x000080 - 0x0001D0)
static_assert(sizeof(UEnvQueryGenerator_OnCircle) == 0x0210); // 528 bytes (0x000080 - 0x000210)
static_assert(sizeof(UEnvQueryGenerator_SimpleGrid) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UEnvQueryGenerator_PathingGrid) == 0x0170); // 368 bytes (0x0000F8 - 0x000170)
static_assert(sizeof(UEnvQueryInstanceBlueprintWrapper) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UEnvQueryItemType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_VectorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_ActorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Actor) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Direction) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Point) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FEnvQueryInstanceCache) == 0x0178); // 376 bytes (0x000000 - 0x000178)
static_assert(sizeof(UEnvQueryManager) == 0x0140); // 320 bytes (0x000038 - 0x000140)
static_assert(sizeof(UEnvQueryOption) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UEnvQueryTest_Distance) == 0x0208); // 520 bytes (0x0001F8 - 0x000208)
static_assert(sizeof(UEnvQueryTest_Dot) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(UEnvQueryTest_GameplayTags) == 0x0268); // 616 bytes (0x0001F8 - 0x000268)
static_assert(sizeof(FEnvOverlapData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEnvQueryTest_Overlap) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UEnvQueryTest_PathfindingBatch) == 0x02B8); // 696 bytes (0x000280 - 0x0002B8)
static_assert(sizeof(UEnvQueryTest_Project) == 0x0228); // 552 bytes (0x0001F8 - 0x000228)
static_assert(sizeof(UEnvQueryTest_Random) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_Trace) == 0x02D8); // 728 bytes (0x0001F8 - 0x0002D8)
static_assert(sizeof(UEnvQueryTest_Volume) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UEnvQueryTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEQSQueryResultSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEQSRenderingComponent) == 0x0490); // 1168 bytes (0x000450 - 0x000490)
static_assert(sizeof(AEQSTestingPawn) == 0x0550); // 1360 bytes (0x0004B8 - 0x000550)
static_assert(sizeof(UGenericTeamAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AGridPathAIController) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UGridPathFollowingComponent) == 0x0280); // 640 bytes (0x000250 - 0x000280)
static_assert(sizeof(UNavFilter_AIControllerDefault) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(ANavLinkProxy) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(UNavLocalGridManager) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UPathFollowingManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPawnAction) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UPawnAction_BlueprintBase) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UPawnAction_Move) == 0x00E0); // 224 bytes (0x000090 - 0x0000E0)
static_assert(sizeof(UPawnAction_Repeat) == 0x00B0); // 176 bytes (0x000090 - 0x0000B0)
static_assert(sizeof(UPawnAction_Sequence) == 0x00B8); // 184 bytes (0x000090 - 0x0000B8)
static_assert(sizeof(UPawnAction_Wait) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(FPawnActionStack) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPawnActionEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPawnActionsComponent) == 0x00E8); // 232 bytes (0x0000B0 - 0x0000E8)
static_assert(sizeof(UPawnSensingComponent) == 0x00F8); // 248 bytes (0x0000B0 - 0x0000F8)
static_assert(sizeof(UVisualLoggerExtension) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAIRequestID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAIStimulus) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FActorPerceptionUpdateInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAIDataProviderStructValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FActorPerceptionBlueprintInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAISightEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEnvQueryRequest) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FEnvQueryResult) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGenericTeamId) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRecastGraphWrapper) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(offsetof(AAIController, PathFollowingComponent) == 0x02D8);
static_assert(offsetof(AAIController, BrainComponent) == 0x02E0);
static_assert(offsetof(AAIController, PerceptionComponent) == 0x02E8);
static_assert(offsetof(AAIController, ActionsComp) == 0x02F0);
static_assert(offsetof(AAIController, Blackboard) == 0x02F8);
static_assert(offsetof(AAIController, CachedGameplayTasksComponent) == 0x0300);
static_assert(offsetof(AAIController, DefaultNavigationFilterClass) == 0x0308);
static_assert(offsetof(UEnvQueryGenerator, OptionName) == 0x0030);
static_assert(offsetof(UEnvQueryGenerator, ItemType) == 0x0040);
static_assert(offsetof(FEnvTraceData, NavigationFilter) == 0x0008);
static_assert(offsetof(FEnvTraceData, TraceChannel) == 0x0028);
static_assert(offsetof(FEnvTraceData, SerializedChannel) == 0x0029);
static_assert(offsetof(FEnvTraceData, TraceShape) == 0x002A);
static_assert(offsetof(FEnvTraceData, TraceMode) == 0x002B);
static_assert(offsetof(UEnvQueryGenerator_ProjectedPoints, ProjectionData) == 0x0050);
static_assert(offsetof(FAIDataProviderValue, DataBinding) == 0x0010);
static_assert(offsetof(FAIDataProviderValue, DataField) == 0x0018);
static_assert(offsetof(FAIDataProviderTypedValue, PropertyType) == 0x0020);
static_assert(offsetof(UEnvQueryTest, TestPurpose) == 0x0034);
static_assert(offsetof(UEnvQueryTest, TestComment) == 0x0038);
static_assert(offsetof(UEnvQueryTest, MultipleContextFilterOp) == 0x0048);
static_assert(offsetof(UEnvQueryTest, MultipleContextScoreOp) == 0x0049);
static_assert(offsetof(UEnvQueryTest, FilterType) == 0x004A);
static_assert(offsetof(UEnvQueryTest, BoolValue) == 0x0050);
static_assert(offsetof(UEnvQueryTest, FloatValueMin) == 0x0088);
static_assert(offsetof(UEnvQueryTest, FloatValueMax) == 0x00C0);
static_assert(offsetof(UEnvQueryTest, ScoringEquation) == 0x00F9);
static_assert(offsetof(UEnvQueryTest, ClampMinType) == 0x00FA);
static_assert(offsetof(UEnvQueryTest, ClampMaxType) == 0x00FB);
static_assert(offsetof(UEnvQueryTest, NormalizationType) == 0x00FC);
static_assert(offsetof(UEnvQueryTest, ScoreClampMin) == 0x0100);
static_assert(offsetof(UEnvQueryTest, ScoreClampMax) == 0x0138);
static_assert(offsetof(UEnvQueryTest, ScoringFactor) == 0x0170);
static_assert(offsetof(UEnvQueryTest, ReferenceValue) == 0x01A8);
static_assert(offsetof(UEnvQueryTest_Pathfinding, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Pathfinding, Context) == 0x0200);
static_assert(offsetof(UEnvQueryTest_Pathfinding, PathFromContext) == 0x0208);
static_assert(offsetof(UEnvQueryTest_Pathfinding, SkipUnreachable) == 0x0240);
static_assert(offsetof(UEnvQueryTest_Pathfinding, FilterClass) == 0x0278);
static_assert(offsetof(UPathFollowingComponent, MovementComp) == 0x00E8);
static_assert(offsetof(UPathFollowingComponent, MyNavData) == 0x00F8);
static_assert(offsetof(UCrowdFollowingComponent, CrowdAgentMoveDirection) == 0x0268);
static_assert(offsetof(UAISense, NotifyType) == 0x002C);
static_assert(offsetof(UAISense, PerceptionSystemInstance) == 0x0038);
static_assert(offsetof(UAISenseConfig, DebugColor) == 0x0028);
static_assert(offsetof(UAISenseConfig_Sight, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Sight, DetectionByAffiliation) == 0x005C);
static_assert(offsetof(UAISystem, PerceptionSystemClassName) == 0x0058);
static_assert(offsetof(UAISystem, HotSpotManagerClassName) == 0x0070);
static_assert(offsetof(UAISystem, DefaultSightCollisionChannel) == 0x009C);
static_assert(offsetof(UAISystem, BehaviorTreeManager) == 0x00A0);
static_assert(offsetof(UAISystem, EnvironmentQueryManager) == 0x00A8);
static_assert(offsetof(UAISystem, PerceptionSystem) == 0x00B0);
static_assert(offsetof(UAISystem, AllProxyObjects) == 0x00B8);
static_assert(offsetof(UAISystem, HotSpotManager) == 0x00C8);
static_assert(offsetof(UAISystem, NavLocalGrids) == 0x00D0);
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Angles) == 0x0000);
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Radii) == 0x0010);
static_assert(offsetof(UCrowdManager, MyNavData) == 0x0028);
static_assert(offsetof(UCrowdManager, AvoidanceConfig) == 0x0030);
static_assert(offsetof(UCrowdManager, SamplingPatterns) == 0x0040);
static_assert(offsetof(UAIDataProvider_QueryParams, paramName) == 0x0028);
static_assert(offsetof(UAIPerceptionComponent, SensesConfig) == 0x00B0);
static_assert(offsetof(UAIPerceptionComponent, DominantSense) == 0x00C0);
static_assert(offsetof(UAIPerceptionComponent, AIOwner) == 0x00D8);
static_assert(offsetof(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses) == 0x00B8);
static_assert(offsetof(UAISubsystem, AISystem) == 0x0030);
static_assert(offsetof(UAIPerceptionSystem, Senses) == 0x0088);
static_assert(offsetof(UAISense_Blueprint, ListenerDataType) == 0x0080);
static_assert(offsetof(UAISense_Blueprint, ListenerContainer) == 0x0088);
static_assert(offsetof(UAISense_Blueprint, UnprocessedEvents) == 0x0098);
static_assert(offsetof(FAIDamageEvent, Location) == 0x0004);
static_assert(offsetof(FAIDamageEvent, HitLocation) == 0x0010);
static_assert(offsetof(FAIDamageEvent, DamagedActor) == 0x0020);
static_assert(offsetof(FAIDamageEvent, Instigator) == 0x0028);
static_assert(offsetof(FAIDamageEvent, Tag) == 0x0030);
static_assert(offsetof(UAISense_Damage, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAINoiseEvent, NoiseLocation) == 0x0004);
static_assert(offsetof(FAINoiseEvent, Instigator) == 0x0018);
static_assert(offsetof(FAINoiseEvent, Tag) == 0x0020);
static_assert(offsetof(UAISense_Hearing, NoiseEvents) == 0x0080);
static_assert(offsetof(FAIPredictionEvent, Requestor) == 0x0000);
static_assert(offsetof(FAIPredictionEvent, PredictedActor) == 0x0008);
static_assert(offsetof(UAISense_Prediction, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAITeamStimulusEvent, Broadcaster) == 0x0028);
static_assert(offsetof(FAITeamStimulusEvent, Enemy) == 0x0030);
static_assert(offsetof(UAISense_Team, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAITouchEvent, TouchReceiver) == 0x0010);
static_assert(offsetof(FAITouchEvent, OtherActor) == 0x0018);
static_assert(offsetof(UAISense_Touch, RegisteredEvents) == 0x0080);
static_assert(offsetof(UAISenseConfig_Blueprint, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Damage, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Hearing, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Hearing, DetectionByAffiliation) == 0x005C);
static_assert(offsetof(UAISenseEvent_Damage, Event) == 0x0028);
static_assert(offsetof(UAISenseEvent_Hearing, Event) == 0x0028);
static_assert(offsetof(UAITask, OwnerController) == 0x0068);
static_assert(offsetof(FAIMoveRequest, GoalActor) == 0x0000);
static_assert(offsetof(UAITask_MoveTo, MoveRequest) == 0x0090);
static_assert(offsetof(FBTDecoratorLogic, Operation) == 0x0000);
static_assert(offsetof(UBehaviorTree, RootNode) == 0x0030);
static_assert(offsetof(UBehaviorTree, BlackboardAsset) == 0x0038);
static_assert(offsetof(UBehaviorTree, RootDecorators) == 0x0040);
static_assert(offsetof(UBehaviorTree, RootDecoratorOps) == 0x0050);
static_assert(offsetof(UBrainComponent, BlackboardComp) == 0x00B8);
static_assert(offsetof(UBrainComponent, AIOwner) == 0x00C0);
static_assert(offsetof(UBehaviorTreeComponent, NodeInstances) == 0x0128);
static_assert(offsetof(UBehaviorTreeComponent, DefaultBehaviorTreeAsset) == 0x0278);
static_assert(offsetof(FBehaviorTreeTemplateInfo, Asset) == 0x0000);
static_assert(offsetof(FBehaviorTreeTemplateInfo, Template) == 0x0008);
static_assert(offsetof(UBehaviorTreeManager, LoadedTemplates) == 0x0030);
static_assert(offsetof(UBehaviorTreeManager, ActiveComponents) == 0x0040);
static_assert(offsetof(UBlackboardComponent, BrainComp) == 0x00B0);
static_assert(offsetof(UBlackboardComponent, DefaultBlackboardAsset) == 0x00B8);
static_assert(offsetof(UBlackboardComponent, BlackboardAsset) == 0x00C0);
static_assert(offsetof(UBlackboardComponent, KeyInstances) == 0x00E8);
static_assert(offsetof(FBlackboardEntry, EntryName) == 0x0000);
static_assert(offsetof(FBlackboardEntry, KeyType) == 0x0008);
static_assert(offsetof(UBlackboardData, Parent) == 0x0030);
static_assert(offsetof(UBlackboardData, Keys) == 0x0038);
static_assert(offsetof(UBlackboardKeyType_Class, BaseClass) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_Enum, EnumType) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_Enum, EnumName) == 0x0038);
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumName) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumType) == 0x0040);
static_assert(offsetof(UBlackboardKeyType_Object, BaseClass) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_String, StringValue) == 0x0030);
static_assert(offsetof(UBTNode, NodeName) == 0x0030);
static_assert(offsetof(UBTNode, TreeAsset) == 0x0040);
static_assert(offsetof(UBTNode, ParentNode) == 0x0048);
static_assert(offsetof(FBTCompositeChild, ChildComposite) == 0x0000);
static_assert(offsetof(FBTCompositeChild, ChildTask) == 0x0008);
static_assert(offsetof(FBTCompositeChild, Decorators) == 0x0010);
static_assert(offsetof(FBTCompositeChild, DecoratorOps) == 0x0020);
static_assert(offsetof(UBTCompositeNode, Children) == 0x0058);
static_assert(offsetof(UBTCompositeNode, Services) == 0x0068);
static_assert(offsetof(UBTComposite_SimpleParallel, FinishMode) == 0x0090);
static_assert(offsetof(UBTDecorator, FlowAbortMode) == 0x0064);
static_assert(offsetof(FBlackboardKeySelector, AllowedTypes) == 0x0000);
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyName) == 0x0010);
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyType) == 0x0018);
static_assert(offsetof(UBTDecorator_BlackboardBase, BlackboardKey) == 0x0068);
static_assert(offsetof(UBTDecorator_Blackboard, StringValue) == 0x0098);
static_assert(offsetof(UBTDecorator_Blackboard, CachedDescription) == 0x00A8);
static_assert(offsetof(UBTDecorator_Blackboard, NotifyObserver) == 0x00B9);
static_assert(offsetof(UBTDecorator_BlueprintBase, AIOwner) == 0x0068);
static_assert(offsetof(UBTDecorator_BlueprintBase, ActorOwner) == 0x0070);
static_assert(offsetof(UBTDecorator_BlueprintBase, ObservedKeyNames) == 0x0078);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck) == 0x0068);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch) == 0x0090);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags) == 0x0098);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription) == 0x00B8);
static_assert(offsetof(UBTDecorator_CompareBBEntries, Operator) == 0x0068);
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyA) == 0x0070);
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyB) == 0x0098);
static_assert(offsetof(UBTDecorator_ConeCheck, ConeOrigin) == 0x0070);
static_assert(offsetof(UBTDecorator_ConeCheck, ConeDirection) == 0x0098);
static_assert(offsetof(UBTDecorator_ConeCheck, Observed) == 0x00C0);
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyA) == 0x0068);
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyB) == 0x0090);
static_assert(offsetof(UBTDecorator_DoesPathExist, PathQueryType) == 0x00BC);
static_assert(offsetof(UBTDecorator_DoesPathExist, FilterClass) == 0x00C0);
static_assert(offsetof(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius) == 0x0098);
static_assert(offsetof(UBTDecorator_IsAtLocation, GeometricDistanceType) == 0x00D0);
static_assert(offsetof(UBTDecorator_IsBBEntryOfClass, TestClass) == 0x0090);
static_assert(offsetof(UBTDecorator_KeepInCone, ConeOrigin) == 0x0070);
static_assert(offsetof(UBTDecorator_KeepInCone, Observed) == 0x0098);
static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownTag) == 0x0068);
static_assert(offsetof(UBTDecorator_TagCooldown, CooldownTag) == 0x0068);
static_assert(offsetof(UBTService_BlackboardBase, BlackboardKey) == 0x0070);
static_assert(offsetof(UBTService_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UBTService_BlueprintBase, ActorOwner) == 0x0078);
static_assert(offsetof(FAIDynamicParam, paramName) == 0x0000);
static_assert(offsetof(FAIDynamicParam, ParamType) == 0x0008);
static_assert(offsetof(FAIDynamicParam, BBKey) == 0x0010);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryTemplate) == 0x0000);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryConfig) == 0x0008);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey) == 0x0018);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, RunMode) == 0x0040);
static_assert(offsetof(UBTService_RunEQS, EQSRequest) == 0x0098);
static_assert(offsetof(UBTTaskNode, Services) == 0x0058);
static_assert(offsetof(UBTTask_BlackboardBase, BlackboardKey) == 0x0070);
static_assert(offsetof(UBTTask_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UBTTask_BlueprintBase, ActorOwner) == 0x0078);
static_assert(offsetof(UBTTask_BlueprintBase, TickInterval) == 0x0080);
static_assert(offsetof(UBTTask_FinishWithResult, Result) == 0x0070);
static_assert(offsetof(UBTTask_MoveTo, FilterClass) == 0x00A0);
static_assert(offsetof(UBTTask_PlayAnimation, AnimationToPlay) == 0x0070);
static_assert(offsetof(UBTTask_PlayAnimation, MyOwnerComp) == 0x0080);
static_assert(offsetof(UBTTask_PlayAnimation, CachedSkelMesh) == 0x0088);
static_assert(offsetof(UBTTask_PlaySound, SoundToPlay) == 0x0070);
static_assert(offsetof(UBTTask_PushPawnAction, Action) == 0x0070);
static_assert(offsetof(UBTTask_RunBehavior, BehaviorAsset) == 0x0070);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, InjectionTag) == 0x0070);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset) == 0x0078);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, BehaviorAsset) == 0x0080);
static_assert(offsetof(FEnvNamedValue, paramName) == 0x0000);
static_assert(offsetof(FEnvNamedValue, ParamType) == 0x0008);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryTemplate) == 0x0098);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryParams) == 0x00A0);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryConfig) == 0x00B0);
static_assert(offsetof(UBTTask_RunEQSQuery, RunMode) == 0x00C0);
static_assert(offsetof(UBTTask_RunEQSQuery, EQSQueryBlackboardKey) == 0x00C8);
static_assert(offsetof(UBTTask_RunEQSQuery, EQSRequest) == 0x00F8);
static_assert(offsetof(UBTTask_SetTagCooldown, CooldownTag) == 0x0070);
static_assert(offsetof(UBTTask_WaitBlackboardTime, BlackboardKey) == 0x0078);
static_assert(offsetof(UEnvQuery, QueryName) == 0x0030);
static_assert(offsetof(UEnvQuery, Options) == 0x0038);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius) == 0x0058);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchRadius) == 0x0090);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchCenter) == 0x00C8);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, Context) == 0x0068);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratedItemType) == 0x0070);
static_assert(offsetof(UEnvQueryGenerator_Composite, Generators) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_Composite, ForcedItemType) == 0x0068);
static_assert(offsetof(UEnvQueryGenerator_Cone, AlignedPointsDistance) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_Cone, ConeDegrees) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_Cone, AngleStep) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_Cone, Range) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_Cone, CenterActor) == 0x0160);
static_assert(offsetof(UEnvQueryGenerator_CurrentLocation, QueryContext) == 0x0050);
static_assert(offsetof(FEnvDirection, LineFrom) == 0x0000);
static_assert(offsetof(FEnvDirection, LineTo) == 0x0008);
static_assert(offsetof(FEnvDirection, Rotation) == 0x0010);
static_assert(offsetof(FEnvDirection, DirMode) == 0x0018);
static_assert(offsetof(UEnvQueryGenerator_Donut, InnerRadius) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_Donut, OuterRadius) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_Donut, NumberOfRings) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_Donut, PointsPerRing) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcDirection) == 0x0160);
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcAngle) == 0x0180);
static_assert(offsetof(UEnvQueryGenerator_Donut, Center) == 0x01C0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleRadius) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, SpaceBetween) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, NumberOfPoints) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcDirection) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcAngle) == 0x0150);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenter) == 0x0190);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenterZOffset) == 0x01A0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, TraceData) == 0x01D8);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GridSize) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, SpaceBetween) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GenerateAround) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, PathToItem) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, NavigationFilter) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier) == 0x0138);
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, ItemType) == 0x0058);
static_assert(offsetof(FEnvQueryInstanceCache, Template) == 0x0000);
static_assert(offsetof(UEnvQueryManager, InstanceCache) == 0x00A8);
static_assert(offsetof(UEnvQueryManager, LocalContexts) == 0x00B8);
static_assert(offsetof(UEnvQueryManager, GCShieldedWrappers) == 0x00C8);
static_assert(offsetof(UEnvQueryOption, Generator) == 0x0028);
static_assert(offsetof(UEnvQueryOption, Tests) == 0x0030);
static_assert(offsetof(UEnvQueryTest_Distance, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Distance, DistanceTo) == 0x0200);
static_assert(offsetof(UEnvQueryTest_Dot, LineA) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Dot, LineB) == 0x0218);
static_assert(offsetof(UEnvQueryTest_Dot, TestMode) == 0x0238);
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagQueryToMatch) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagsToMatch) == 0x0241);
static_assert(offsetof(UEnvQueryTest_GameplayTags, GameplayTags) == 0x0248);
static_assert(offsetof(FEnvOverlapData, ShapeOffset) == 0x000C);
static_assert(offsetof(FEnvOverlapData, OverlapChannel) == 0x0018);
static_assert(offsetof(FEnvOverlapData, OverlapShape) == 0x0019);
static_assert(offsetof(UEnvQueryTest_Overlap, OverlapData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier) == 0x0280);
static_assert(offsetof(UEnvQueryTest_Project, ProjectionData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Trace, TraceData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Trace, TraceFromContext) == 0x0228);
static_assert(offsetof(UEnvQueryTest_Trace, ItemHeightOffset) == 0x0260);
static_assert(offsetof(UEnvQueryTest_Trace, ContextHeightOffset) == 0x0298);
static_assert(offsetof(UEnvQueryTest_Trace, Context) == 0x02D0);
static_assert(offsetof(UEnvQueryTest_Volume, VolumeContext) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Volume, VolumeClass) == 0x0200);
static_assert(offsetof(AEQSTestingPawn, QueryTemplate) == 0x04C0);
static_assert(offsetof(AEQSTestingPawn, QueryParams) == 0x04C8);
static_assert(offsetof(AEQSTestingPawn, QueryConfig) == 0x04D8);
static_assert(offsetof(AEQSTestingPawn, HighlightMode) == 0x04F0);
static_assert(offsetof(AEQSTestingPawn, QueryingMode) == 0x04F8);
static_assert(offsetof(AEQSTestingPawn, NavAgentProperties) == 0x0500);
static_assert(offsetof(UGridPathFollowingComponent, GridManager) == 0x0250);
static_assert(offsetof(ANavLinkProxy, PointLinks) == 0x0230);
static_assert(offsetof(ANavLinkProxy, SegmentLinks) == 0x0240);
static_assert(offsetof(ANavLinkProxy, SmartLinkComp) == 0x0250);
static_assert(offsetof(UPawnAction, ChildAction) == 0x0028);
static_assert(offsetof(UPawnAction, ParentAction) == 0x0030);
static_assert(offsetof(UPawnAction, OwnerComponent) == 0x0038);
static_assert(offsetof(UPawnAction, Instigator) == 0x0040);
static_assert(offsetof(UPawnAction, BrainComp) == 0x0048);
static_assert(offsetof(UPawnAction_Move, GoalActor) == 0x0090);
static_assert(offsetof(UPawnAction_Move, GoalLocation) == 0x0098);
static_assert(offsetof(UPawnAction_Move, FilterClass) == 0x00A8);
static_assert(offsetof(UPawnAction_Repeat, ActionToRepeat) == 0x0090);
static_assert(offsetof(UPawnAction_Repeat, RecentActionCopy) == 0x0098);
static_assert(offsetof(UPawnAction_Repeat, ChildFailureHandlingMode) == 0x00A0);
static_assert(offsetof(UPawnAction_Sequence, ActionSequence) == 0x0090);
static_assert(offsetof(UPawnAction_Sequence, ChildFailureHandlingMode) == 0x00A0);
static_assert(offsetof(UPawnAction_Sequence, RecentActionCopy) == 0x00A8);
static_assert(offsetof(FPawnActionStack, TopAction) == 0x0000);
static_assert(offsetof(FPawnActionEvent, Action) == 0x0000);
static_assert(offsetof(UPawnActionsComponent, ControlledPawn) == 0x00B0);
static_assert(offsetof(UPawnActionsComponent, ActionStacks) == 0x00B8);
static_assert(offsetof(UPawnActionsComponent, ActionEvents) == 0x00C8);
static_assert(offsetof(UPawnActionsComponent, CurrentAction) == 0x00D8);
static_assert(offsetof(FAIStimulus, StimulusLocation) == 0x000C);
static_assert(offsetof(FAIStimulus, ReceiverLocation) == 0x0018);
static_assert(offsetof(FAIStimulus, Tag) == 0x0024);
static_assert(offsetof(FActorPerceptionUpdateInfo, Stimulus) == 0x000C);
static_assert(offsetof(FActorPerceptionBlueprintInfo, Target) == 0x0000);
static_assert(offsetof(FActorPerceptionBlueprintInfo, LastSensedStimuli) == 0x0008);
static_assert(offsetof(FAISightEvent, SeenActor) == 0x0008);
static_assert(offsetof(FAISightEvent, Observer) == 0x0010);
static_assert(offsetof(FEnvQueryRequest, QueryTemplate) == 0x0000);
static_assert(offsetof(FEnvQueryRequest, Owner) == 0x0008);
static_assert(offsetof(FEnvQueryRequest, World) == 0x0010);
static_assert(offsetof(FEnvQueryResult, ItemType) == 0x0010);
static_assert(offsetof(FRecastGraphWrapper, RecastNavMeshActor) == 0x0000);
