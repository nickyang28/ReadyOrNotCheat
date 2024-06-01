
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (48 bytes) (0x000220 - 0x000250) align 8 pad: 0x0000
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0220   (0x0004)  
	float                                              CraneYaw;                                                   // 0x0224   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0228   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x022C   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x022D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x022E   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0230   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x0238   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x0240   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x0248   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (32 bytes) (0x000220 - 0x000240) align 8 pad: 0x0000
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0220   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x0224   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0225   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0228   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x0230   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x0238   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x208dc70] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	SDK_UNDEFINED(40,502) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                        // 0x0018   (0x0028)  
	FVector                                            RelativeOffset;                                             // 0x0040   (0x000C)  
	bool                                               bAllowRoll : 1;                                             // 0x004C:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0060 (96 bytes) (0x0007B0 - 0x000810) align 16 pad: 0x0000
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x07B0   (0x0050)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0800   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x3737e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FCameraTrackingFocusSettings
{ 
	SDK_UNDEFINED(40,503) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                        // 0x0000   (0x0028)  
	FVector                                            RelativeOffset;                                             // 0x0028   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0038)  
	bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x0044   (0x0004)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x004C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0100 (256 bytes) (0x0007D0 - 0x0008D0) align 16 pad: 0x0000
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x07D0   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x07DC   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x07E8   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x0800   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x0858   (0x0004)  
	float                                              CurrentAperture;                                            // 0x085C   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0860   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0864   (0x000C)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0870   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0880   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x0890   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x08A0   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x08B0   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x08C0   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x08C4   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x08C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x3738350] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x37382b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x3738230] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x3738200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x3738120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x37380a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x3738070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x3737f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x3737f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x3737e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

static_assert(sizeof(ACameraRig_Crane) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(ACameraRig_Rail) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ACineCameraActor) == 0x0810); // 2064 bytes (0x0007B0 - 0x000810)
static_assert(sizeof(FCameraFilmbackSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraLensSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCameraFocusSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNamedFilmbackPreset) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedLensPreset) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCineCameraComponent) == 0x08D0); // 2256 bytes (0x0007D0 - 0x0008D0)
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x0230);
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x0238);
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x0240);
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x0248);
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x0228);
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x0230);
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x0238);
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x0040);
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x07B0);
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x0028);
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x0000);
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x0008);
static_assert(offsetof(FCameraFocusSettings, DebugFocusPlaneColor) == 0x0044);
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x0000);
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x0010);
static_assert(offsetof(FNamedLensPreset, Name) == 0x0000);
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x0010);
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x07D0);
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x07DC);
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x07E8);
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0800);
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x0870);
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x0880);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x0890);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x08A0);
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x08B0);
