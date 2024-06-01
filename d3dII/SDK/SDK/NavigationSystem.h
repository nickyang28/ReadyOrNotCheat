
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x01 (1 bytes)
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x01 (1 bytes)
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x01 (1 bytes)
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x01 (1 bytes)
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0208 (520 bytes) (0x000220 - 0x000428) align 8 pad: 0x0000
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0220   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x0228   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x0230   (0x0078)  
	bool                                               bEnableDrawing : 1;                                         // 0x02A8:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x02A8:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x02A8:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x02A8:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x02A8:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x02A8:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02AD   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x02B0   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x02B4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x108];                                     // 0x02B8   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x03C0   (0x0010)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x03D0   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x00B0 (176 bytes) (0x000428 - 0x0004D8) align 8 pad: 0x0000
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x0428:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x0428:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x0428:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x0428:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x0428:4 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x0428:5 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x0428:6 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x0428:7 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x0429:0 (0x0001)  
	bool                                               bDrawPolygonFlags : 1;                                      // 0x0429:1 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x0429:2 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x0429:3 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x0429:4 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x0429:5 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x0429:6 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x0429:7 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x042A:0 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x042A:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x042B   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x042C   (0x0004)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x0430:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0431   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x0434   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0438   (0x0004)  
	float                                              CellSize;                                                   // 0x043C   (0x0004)  
	float                                              CellHeight;                                                 // 0x0440   (0x0004)  
	float                                              AgentRadius;                                                // 0x0444   (0x0004)  
	float                                              AgentHeight;                                                // 0x0448   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x044C   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x0450   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0454   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0458   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x045C   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0460   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x0464   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x0468   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x046C   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0470   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x0474   (0x000C)  
	float                                              DefaultDrawDistance;                                        // 0x0480   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x0484   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0488   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x048C   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x048D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x048E   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0490   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0494   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0498:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0498:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0498:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0498:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0498:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0498:5 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0498:6 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0498:7 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0499:0 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0499:1 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0499:2 (0x0001)  
	bool                                               bUseVoxelCache : 1;                                         // 0x0499:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x049A   (0x0002)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x049C   (0x0004)  
	float                                              HeuristicScale;                                             // 0x04A0   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x04A4   (0x0004)  
	unsigned char                                      UnknownData04_7[0x30];                                      // 0x04A8   (0x0030)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);           // [0x425a030] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0030   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0038   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0040:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0040:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0040:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0040:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0040:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0040:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0040:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0040:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0041:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0041:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0041:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0041:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0041:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0041:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0041:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0041:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15B8 (5560 bytes) (0x000028 - 0x0015E0) align 8 pad: 0x0000
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0028   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0030   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0038   (0x0008)  
	SDK_UNDEFINED(40,431) /* TWeakObjectPtr<UClass*> */ __um(CrowdManagerClass);                                   // 0x0040   (0x0028)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0068:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0068:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0068:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0068:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0068:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0068:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0068:6 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0068:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0069:0 (0x0001)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0069:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x006C   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x0074   (0x0004)  
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0078   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x0088   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x0090   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnNavDataRegisteredEvent);                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationFinishedDelegate);             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData05_6[0xDC];                                      // 0x00E0   (0x00DC)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData06_6[0x13FF];                                    // 0x01BD   (0x13FF)  MISSED
	float                                              DirtyAreasUpdateFreq;                                       // 0x15BC   (0x0004)  
	unsigned char                                      UnknownData07_7[0x20];                                      // 0x15C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                                 // [0x42582b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x42581f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x41691c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x4258160] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x42580e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x42580c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);              // [0x4257fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	// FVector ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x4257dc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                   // [0x4257d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x4257b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                    // [0x42579f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x42577f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x42575d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x42573b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x42573b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                                  // [0x42572c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                          // [0x4257230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	// FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x4257050] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	// FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x4256e70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x4256c40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x42569e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                       // [0x4256920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x42566d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x42564c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0 bytes) (0x000428 - 0x000428) align 8 pad: 0x0000
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (128 bytes) (0x000048 - 0x0000C8) align 8 pad: 0x0000
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0048   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x0098   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C0   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0068 (104 bytes) (0x000070 - 0x0000D8) align 8 pad: 0x0000
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0090   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A0   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00A8:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2F];                                      // 0x00A9   (0x002F)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0 bytes) (0x000428 - 0x000428) align 8 pad: 0x0000
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0 bytes) (0x000220 - 0x000220) align 8 pad: 0x0000
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0028 (40 bytes) (0x0001F8 - 0x000220) align 16 pad: 0x0000
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x01F8   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0210   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0218   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0008 (8 bytes) (0x0000B0 - 0x0000B8) align 8 pad: 0x0000
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00B0   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00B4   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000088) align 8 pad: 0x0000
class UNavigationPath : public UObject
{ 
public:
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(PathUpdatedNotifier);                                // 0x0028   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)  
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x0049   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                          // [0x4257380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                   // [0x1fd8d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                        // [0x4257350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// float GetPathLength();                                                                                                   // [0x4256c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// float GetPathCost();                                                                                                     // [0x42569b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                                // [0x42568a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x4256440] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x4256360] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (8 bytes) (0x000050 - 0x000058) align 8 pad: 0x0000
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0050:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0050:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0050:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x00F0 (240 bytes) (0x000220 - 0x000310) align 8 pad: 0x0000
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0220   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0230   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x0238   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x0240:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0241   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x0248   (0x0030)  
	FVector                                            QueryingExtent;                                             // 0x0278   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x0288   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0290   (0x000C)  
	bool                                               bProjectedLocationValid : 1;                                // 0x029C:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x029C:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x029D   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x02A0   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x02A4   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x02A8:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x02A8:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x02A8:2 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x02A8:3 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x02A8:4 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x02A8:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x02A8:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x02A8:7 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                            // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x02AD   (0x0003)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x02B0   (0x0008)  
	bool                                               bPathExist : 1;                                             // 0x02B8:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x02B8:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x02B8:2 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x02BC   (0x0004)  
	float                                              PathCost;                                                   // 0x02C0   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x02C4   (0x0004)  
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x02C8   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x02D0   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x02D8   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x02DC   (0x0004)  
	unsigned char                                      UnknownData07_7[0x30];                                      // 0x02E0   (0x0030)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0020 (32 bytes) (0x000450 - 0x000470) align 16 pad: 0x0000
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0450   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x0458   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0468   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0030 (48 bytes) (0x0000B0 - 0x0000E0) align 8 pad: 0x0000
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x24];                                      // 0x00B0   (0x0024)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x00D4:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x425a2f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00B0 (176 bytes) (0x0000E0 - 0x000190) align 8 pad: 0x0000
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00E0   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	class UClass*                                      EnabledAreaClass;                                           // 0x00F0   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x00F8   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0100   (0x0004)  
	FVector                                            LinkRelativeStart;                                          // 0x0104   (0x000C)  
	FVector                                            LinkRelativeEnd;                                            // 0x0110   (0x000C)  
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                              // 0x011C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x011D   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x0120:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x0120:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x0120:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x0120:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x0124   (0x000C)  
	FVector                                            ObstacleExtent;                                             // 0x0130   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	class UClass*                                      ObstacleAreaClass;                                          // 0x0140   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0148   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x014C   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3F];                                      // 0x0151   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0 bytes) (0x000450 - 0x000450) align 16 pad: 0x0000
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0 bytes) (0x000050 - 0x000050) align 8 pad: 0x0000
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (8 bytes) (0x000258 - 0x000260) align 8 pad: 0x0000
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0258   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x025C   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (16 bytes) (0x000450 - 0x000460) align 16 pad: 0x0000
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0450   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0060 (96 bytes) (0x0000E0 - 0x000140) align 16 pad: 0x0000
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x00E0   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00E8   (0x000C)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x00F4:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x4B];                                      // 0x00F5   (0x004B)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x425a260] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (24 bytes) (0x000258 - 0x000270) align 8 pad: 0x0000
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0258   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0260   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0269   (0x0007)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x425a1d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 8 pad: 0x0000
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x0220   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x0228   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x0229:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x022A   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0 bytes) (0x000450 - 0x000450) align 16 pad: 0x0000
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (8 bytes) (0x000068 - 0x000070) align 8 pad: 0x0000
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 pad: 0x0000
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                         // 0x0030   (0x0001)  
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

static_assert(sizeof(FSupportedAreaData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ANavigationData) == 0x0428); // 1064 bytes (0x000220 - 0x000428)
static_assert(sizeof(ARecastNavMesh) == 0x04D8); // 1240 bytes (0x000428 - 0x0004D8)
static_assert(sizeof(UCrowdManagerBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavArea) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UNavigationSystemV1) == 0x15E0); // 5600 bytes (0x000028 - 0x0015E0)
static_assert(sizeof(FNavigationFilterArea) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavigationFilterFlags) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UNavigationQueryFilter) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(AAbstractNavData) == 0x0428); // 1064 bytes (0x000428 - 0x000428)
static_assert(sizeof(UNavArea_Default) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_LowHeight) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Null) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Obstacle) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(FNavCollisionCylinder) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNavCollisionBox) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavCollision) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(ANavigationGraph) == 0x0428); // 1064 bytes (0x000428 - 0x000428)
static_assert(sizeof(ANavigationGraphNode) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(FNavGraphNode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavigationGraphNodeComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UNavigationInvokerComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UNavigationPath) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UNavigationPathGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavigationSystemModuleConfig) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(ANavigationTestingActor) == 0x0310); // 784 bytes (0x000220 - 0x000310)
static_assert(sizeof(UNavLinkComponent) == 0x0470); // 1136 bytes (0x000450 - 0x000470)
static_assert(sizeof(UNavRelevantComponent) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UNavLinkCustomComponent) == 0x0190); // 400 bytes (0x0000E0 - 0x000190)
static_assert(sizeof(UNavLinkCustomInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkHostInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkRenderingComponent) == 0x0450); // 1104 bytes (0x000450 - 0x000450)
static_assert(sizeof(UNavLinkTrivial) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(ANavMeshBoundsVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(sizeof(UNavMeshRenderingComponent) == 0x0460); // 1120 bytes (0x000450 - 0x000460)
static_assert(sizeof(UNavModifierComponent) == 0x0140); // 320 bytes (0x0000E0 - 0x000140)
static_assert(sizeof(ANavModifierVolume) == 0x0270); // 624 bytes (0x000258 - 0x000270)
static_assert(sizeof(UNavNodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavSystemConfigOverride) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UNavTestRenderingComponent) == 0x0450); // 1104 bytes (0x000450 - 0x000450)
static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(URecastNavMeshDataChunk) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FNavGraphEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x0000);
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x0018);
static_assert(offsetof(ANavigationData, RenderingComp) == 0x0228);
static_assert(offsetof(ANavigationData, NavDataConfig) == 0x0230);
static_assert(offsetof(ANavigationData, RuntimeGeneration) == 0x02AC);
static_assert(offsetof(ANavigationData, SupportedAreas) == 0x03C0);
static_assert(offsetof(ARecastNavMesh, NavMeshOriginOffset) == 0x0474);
static_assert(offsetof(ARecastNavMesh, RegionPartitioning) == 0x048C);
static_assert(offsetof(ARecastNavMesh, LayerPartitioning) == 0x048D);
static_assert(offsetof(UNavArea, DrawColor) == 0x0038);
static_assert(offsetof(UNavArea, SupportedAgents) == 0x003C);
static_assert(offsetof(UNavigationSystemV1, MainNavData) == 0x0028);
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 0x0030);
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 0x0038);
static_assert(offsetof(UNavigationSystemV1, DataGatheringMode) == 0x0070);
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 0x0078);
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 0x0088);
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 0x0090);
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 0x00A0);
static_assert(offsetof(UNavigationSystemV1, OperationMode) == 0x01BC);
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x0000);
static_assert(offsetof(UNavigationQueryFilter, Areas) == 0x0028);
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 0x0038);
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 0x003C);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 0x0048);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 0x0050);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 0x0058);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 0x0060);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 0x0068);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 0x0070);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 0x0078);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 0x0080);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 0x0088);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 0x0090);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 0x0098);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 0x00A0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 0x00A8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 0x00B0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 0x00B8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 0x00C0);
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000C);
static_assert(offsetof(UNavCollision, CylinderCollision) == 0x0080);
static_assert(offsetof(UNavCollision, BoxCollision) == 0x0090);
static_assert(offsetof(UNavCollision, AreaClass) == 0x00A0);
static_assert(offsetof(FNavGraphNode, Owner) == 0x0000);
static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 0x01F8);
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 0x0210);
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 0x0218);
static_assert(offsetof(UNavigationPath, PathPoints) == 0x0038);
static_assert(offsetof(UNavigationPath, RecalculateOnInvalidation) == 0x0048);
static_assert(offsetof(ANavigationTestingActor, CapsuleComponent) == 0x0230);
static_assert(offsetof(ANavigationTestingActor, InvokerComponent) == 0x0238);
static_assert(offsetof(ANavigationTestingActor, NavAgentProps) == 0x0248);
static_assert(offsetof(ANavigationTestingActor, QueryingExtent) == 0x0278);
static_assert(offsetof(ANavigationTestingActor, MyNavData) == 0x0288);
static_assert(offsetof(ANavigationTestingActor, ProjectedLocation) == 0x0290);
static_assert(offsetof(ANavigationTestingActor, CostDisplayMode) == 0x02AC);
static_assert(offsetof(ANavigationTestingActor, TextCanvasOffset) == 0x02B0);
static_assert(offsetof(ANavigationTestingActor, OtherActor) == 0x02C8);
static_assert(offsetof(ANavigationTestingActor, FilterClass) == 0x02D0);
static_assert(offsetof(UNavLinkComponent, Links) == 0x0458);
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 0x00D8);
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 0x00F0);
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 0x00F8);
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 0x0100);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 0x0104);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 0x0110);
static_assert(offsetof(UNavLinkCustomComponent, LinkDirection) == 0x011C);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 0x0124);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 0x0130);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 0x0140);
static_assert(offsetof(UNavLinkCustomComponent, BroadcastChannel) == 0x0150);
static_assert(offsetof(ANavMeshBoundsVolume, SupportedAgents) == 0x0258);
static_assert(offsetof(UNavModifierComponent, AreaClass) == 0x00E0);
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 0x00E8);
static_assert(offsetof(ANavModifierVolume, AreaClass) == 0x0260);
static_assert(offsetof(ANavSystemConfigOverride, NavigationSystemConfig) == 0x0220);
static_assert(offsetof(ANavSystemConfigOverride, OverridePolicy) == 0x0228);
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionPartitioning) == 0x0030);
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerPartitioning) == 0x0031);
