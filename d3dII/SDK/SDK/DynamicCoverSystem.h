
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

/// Enum /Script/DynamicCoverSystem.ECoverStance
/// Size: 0x01 (1 bytes)
enum class ECoverStance : uint8_t
{
	ECoverStance__Both                                                               = 0,
	ECoverStance__StandOnly                                                          = 1,
	ECoverStance__CrouchOnly                                                         = 2
};

/// Enum /Script/DynamicCoverSystem.ECoverSearchMode
/// Size: 0x01 (1 bytes)
enum class ECoverSearchMode : uint8_t
{
	ECoverSearchMode__NonWallOnly                                                    = 0,
	ECoverSearchMode__WallOnly                                                       = 1,
	ECoverSearchMode__Both                                                           = 2
};

/// Enum /Script/DynamicCoverSystem.ECoverFireType
/// Size: 0x01 (1 bytes)
enum class ECoverFireType : uint8_t
{
	ECoverFireType__None                                                             = 0,
	ECoverFireType__Blind                                                            = 1,
	ECoverFireType__Exposed                                                          = 2
};

/// Enum /Script/DynamicCoverSystem.ECoverAimType
/// Size: 0x01 (1 bytes)
enum class ECoverAimType : uint8_t
{
	ECoverAimType__LeftOrRight                                                       = 0,
	ECoverAimType__Up                                                                = 1
};

/// Enum /Script/DynamicCoverSystem.ECoverDirection
/// Size: 0x01 (1 bytes)
enum class ECoverDirection : uint8_t
{
	ECoverDirection__Left                                                            = 0,
	ECoverDirection__Right                                                           = 1
};

/// Enum /Script/DynamicCoverSystem.EStandCoverType
/// Size: 0x01 (1 bytes)
enum class EStandCoverType : uint8_t
{
	EStandCoverType__Wall                                                            = 0,
	EStandCoverType__LeftOnly                                                        = 1,
	EStandCoverType__RightOnly                                                       = 2,
	EStandCoverType__LeftAndRight                                                    = 3
};

/// Enum /Script/DynamicCoverSystem.ECrouchCoverType
/// Size: 0x01 (1 bytes)
enum class ECrouchCoverType : uint8_t
{
	ECrouchCoverType__Wall                                                           = 0,
	ECrouchCoverType__LeftOnly                                                       = 1,
	ECrouchCoverType__RightOnly                                                      = 2,
	ECrouchCoverType__LeftAndRight                                                   = 3,
	ECrouchCoverType__UpOnly                                                         = 4,
	ECrouchCoverType__LeftAndUp                                                      = 5,
	ECrouchCoverType__RightAndUp                                                     = 6,
	ECrouchCoverType__LeftRightAndUp                                                 = 7
};

/// Struct /Script/DynamicCoverSystem.CoverGenSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FCoverGenSettings
{ 
	float                                              MaxCrouchCoverHeight;                                       // 0x0000   (0x0004)  
	float                                              MaxStandCoverHeight;                                        // 0x0004   (0x0004)  
	float                                              CrouchEdgeTestHeightOffset;                                 // 0x0008   (0x0004)  
	float                                              CrouchUpEdgeOffset;                                         // 0x000C   (0x0004)  
	float                                              StandHeightOffset;                                          // 0x0010   (0x0004)  
	float                                              DepthThreshold;                                             // 0x0014   (0x0004)  
	float                                              LeftRightEdgeExtent;                                        // 0x0018   (0x0004)  
	float                                              UpEdgeExtent;                                               // 0x001C   (0x0004)  
	float                                              LeftRightEdgeAngle;                                         // 0x0020   (0x0004)  
	float                                              MaxCoverTestDistance;                                       // 0x0024   (0x0004)  
	float                                              VertexZOffset;                                              // 0x0028   (0x0004)  
	float                                              IndentOffset;                                               // 0x002C   (0x0004)  
};

/// Class /Script/DynamicCoverSystem.CoverGenOverrideVolume
/// Size: 0x0050 (80 bytes) (0x000258 - 0x0002A8) align 8 pad: 0x0000
class ACoverGenOverrideVolume : public AVolume
{ 
public:
	FCoverGenSettings                                  CoverGenSettings;                                           // 0x0258   (0x0030)  
	int32_t                                            NumCoverPoints;                                             // 0x0288   (0x0004)  
	float                                              CoverGenTime;                                               // 0x028C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0290   (0x0018)  MISSED


	/// Functions
	// Function /Script/DynamicCoverSystem.CoverGenOverrideVolume.GenerateCoverPoints
	// void GenerateCoverPoints();                                                                                              // [0x1197f70] Final|Native|Public  
};

/// Struct /Script/DynamicCoverSystem.CoverPointIndex
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FCoverPointIndex
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	int32_t                                            Index;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/DynamicCoverSystem.CoverRail
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FCoverRail
{ 
	FVector                                            Start;                                                      // 0x0000   (0x000C)  
	FVector                                            End;                                                        // 0x000C   (0x000C)  
	FVector                                            Direction;                                                  // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FCoverPointIndex>                           CoverPoints;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/DynamicCoverSystem.CoverDirection
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FCoverDirection
{ 
	FVector                                            Left;                                                       // 0x0000   (0x000C)  
	FVector                                            Right;                                                      // 0x000C   (0x000C)  
};

/// Class /Script/DynamicCoverSystem.CoverPoint
/// Size: 0x0080 (128 bytes) (0x000220 - 0x0002A0) align 8 pad: 0x0000
class ACoverPoint : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0220   (0x0008)  
	SDK_UNDEFINED(8,566) /* TWeakObjectPtr<AActor*> */ __um(CoverActor);                                           // 0x0228   (0x0008)  
	FCoverRail                                         CoverRail;                                                  // 0x0230   (0x0038)  
	FCoverDirection                                    StandCoverDirection;                                        // 0x0268   (0x0018)  
	FCoverDirection                                    CrouchCoverDirection;                                       // 0x0280   (0x0018)  
	int32_t                                            Index;                                                      // 0x0298   (0x0004)  
	bool                                               bIsCrouchOnlyCover : 1;                                     // 0x029C:0 (0x0001)  
	bool                                               bOverrideCoverType : 1;                                     // 0x029C:1 (0x0001)  
	EStandCoverType                                    StandCoverType;                                             // 0x029D   (0x0001)  
	ECrouchCoverType                                   CrouchCoverType;                                            // 0x029E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x029F   (0x0001)  MISSED


	/// Functions
	// Function /Script/DynamicCoverSystem.CoverPoint.StopPreviewCoverAnim
	// void StopPreviewCoverAnim();                                                                                             // [0xbbc500] Final|Native|Protected 
	// Function /Script/DynamicCoverSystem.CoverPoint.SetStandCoverType
	// void SetStandCoverType(EStandCoverType& NewCoverType);                                                                   // [0x1198220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicCoverSystem.CoverPoint.SetCrouchCoverType
	// void SetCrouchCoverType(ECrouchCoverType& NewCoverType);                                                                 // [0x1198190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicCoverSystem.CoverPoint.ResetCoverTypes
	// void ResetCoverTypes();                                                                                                  // [0xbbc500] Final|Native|Protected 
	// Function /Script/DynamicCoverSystem.CoverPoint.PreviewCoverAnim
	// void PreviewCoverAnim();                                                                                                 // [0xbbc500] Final|Native|Protected 
};

/// Class /Script/DynamicCoverSystem.CoverSystem
/// Size: 0x0088 (136 bytes) (0x000040 - 0x0000C8) align 8 pad: 0x0000
class UCoverSystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0040   (0x0088)  MISSED


	/// Functions
	// Function /Script/DynamicCoverSystem.CoverSystem.ReleaseCover
	// bool ReleaseCover(FVector& InCoverPoint);                                                                                // [0x11980f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DynamicCoverSystem.CoverSystem.OccupyCover
	// bool OccupyCover(FVector& InCoverPoint);                                                                                 // [0x1198050] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DynamicCoverSystem.CoverSystem.IsCoverPointOccupied
	// bool IsCoverPointOccupied(FVector& InCoverLocation);                                                                     // [0x1197fb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DynamicCoverSystem.NotifyingRecastNavMesh
/// Size: 0x00D0 (208 bytes) (0x0004D8 - 0x0005A8) align 8 pad: 0x0000
class ANotifyingRecastNavMesh : public ARecastNavMesh
{ 
public:
	int32_t                                            NumCoverPoints;                                             // 0x04D8   (0x0004)  
	float                                              CoverGenTimeMs;                                             // 0x04DC   (0x0004)  
	FCoverGenSettings                                  CoverGenSettings;                                           // 0x04E0   (0x0030)  
	float                                              MinDistanceBetweenCoverPoints;                              // 0x0510   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0514   (0x0004)  MISSED
	SDK_UNDEFINED(16,567) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(IgnoredPhysicalSurfacesForGeoTest);     // 0x0518   (0x0010)  
	SDK_UNDEFINED(16,568) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(IgnoredPhysicalSurfacesForEdgeTests);   // 0x0528   (0x0010)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x0538   (0x0070)  MISSED


	/// Functions
	// Function /Script/DynamicCoverSystem.NotifyingRecastNavMesh.GenerateCoverPoints
	// void GenerateCoverPoints();                                                                                              // [0x1197f90] Native|Public        
	// Function /Script/DynamicCoverSystem.NotifyingRecastNavMesh.DeleteAllCoverPoints
	// void DeleteAllCoverPoints();                                                                                             // [0x1197f50] Native|Public        
};

/// Struct /Script/DynamicCoverSystem.CoverGenResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FCoverGenResult
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

static_assert(sizeof(FCoverGenSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(ACoverGenOverrideVolume) == 0x02A8); // 680 bytes (0x000258 - 0x0002A8)
static_assert(sizeof(FCoverPointIndex) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCoverRail) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCoverDirection) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ACoverPoint) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(sizeof(UCoverSystem) == 0x00C8); // 200 bytes (0x000040 - 0x0000C8)
static_assert(sizeof(ANotifyingRecastNavMesh) == 0x05A8); // 1448 bytes (0x0004D8 - 0x0005A8)
static_assert(sizeof(FCoverGenResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(ACoverGenOverrideVolume, CoverGenSettings) == 0x0258);
static_assert(offsetof(FCoverPointIndex, Location) == 0x0000);
static_assert(offsetof(FCoverRail, Start) == 0x0000);
static_assert(offsetof(FCoverRail, End) == 0x000C);
static_assert(offsetof(FCoverRail, Direction) == 0x0018);
static_assert(offsetof(FCoverRail, CoverPoints) == 0x0028);
static_assert(offsetof(FCoverDirection, Left) == 0x0000);
static_assert(offsetof(FCoverDirection, Right) == 0x000C);
static_assert(offsetof(ACoverPoint, SceneComponent) == 0x0220);
static_assert(offsetof(ACoverPoint, CoverRail) == 0x0230);
static_assert(offsetof(ACoverPoint, StandCoverDirection) == 0x0268);
static_assert(offsetof(ACoverPoint, CrouchCoverDirection) == 0x0280);
static_assert(offsetof(ACoverPoint, StandCoverType) == 0x029D);
static_assert(offsetof(ACoverPoint, CrouchCoverType) == 0x029E);
static_assert(offsetof(ANotifyingRecastNavMesh, CoverGenSettings) == 0x04E0);
