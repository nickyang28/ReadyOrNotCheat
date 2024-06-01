
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieSceneTracks
/// dependency: TemplateSequence

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x01 (1 bytes)
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x01 (1 bytes)
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x01 (1 bytes)
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0008 (8 bytes) (0x0000A8 - 0x0000B0) align 16 pad: 0x0000
class UTestCameraShake : public UCameraShakeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	float                                              BlendInTime;                                                // 0x002C   (0x0004)  
	float                                              BlendoutTime;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	FVector                                            LocationOffset;                                             // 0x0038   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0044   (0x000C)  
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
public:
	TArray<class UCameraShakePattern*>                 ChildPatterns;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0008 (8 bytes) (0x0000A8 - 0x0000B0) align 16 pad: 0x0000
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FFOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                              // 0x0008   (0x0001)  
	EOscillatorWaveform                                Waveform;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FROscillator
{ 
	FFOscillator                                       Pitch;                                                      // 0x0000   (0x000C)  
	FFOscillator                                       Yaw;                                                        // 0x000C   (0x000C)  
	FFOscillator                                       Roll;                                                       // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FVOscillator
{ 
	FFOscillator                                       X;                                                          // 0x0000   (0x000C)  
	FFOscillator                                       Y;                                                          // 0x000C   (0x000C)  
	FFOscillator                                       Z;                                                          // 0x0018   (0x000C)  
};

/// Class /Script/GameplayCameras.MatineeCameraShake
/// Size: 0x0108 (264 bytes) (0x0000A8 - 0x0001B0) align 16 pad: 0x0000
class UMatineeCameraShake : public UCameraShakeBase
{ 
public:
	float                                              OscillationDuration;                                        // 0x00A8   (0x0004)  
	float                                              OscillationBlendInTime;                                     // 0x00AC   (0x0004)  
	float                                              OscillationBlendOutTime;                                    // 0x00B0   (0x0004)  
	FROscillator                                       RotOscillation;                                             // 0x00B4   (0x0024)  
	FVOscillator                                       LocOscillation;                                             // 0x00D8   (0x0024)  
	FFOscillator                                       FOVOscillation;                                             // 0x00FC   (0x000C)  
	float                                              AnimPlayRate;                                               // 0x0108   (0x0004)  
	float                                              AnimScale;                                                  // 0x010C   (0x0004)  
	float                                              AnimBlendInTime;                                            // 0x0110   (0x0004)  
	float                                              AnimBlendOutTime;                                           // 0x0114   (0x0004)  
	float                                              RandomAnimSegmentDuration;                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	class UCameraAnim*                                 Anim;                                                       // 0x0120   (0x0008)  
	class UCameraAnimationSequence*                    AnimSequence;                                               // 0x0128   (0x0008)  
	bool                                               bRandomAnimSegment : 1;                                     // 0x0130:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              OscillatorTimeRemaining;                                    // 0x0134   (0x0004)  
	class UCameraAnimInst*                             AnimInst;                                                   // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0140   (0x0040)  MISSED
	class USequenceCameraShakePattern*                 SequenceShakePattern;                                       // 0x0180   (0x0008)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x0188   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	// class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x198e230] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	// class UMatineeCameraShake* StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x198e060] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceiveStopShake
	// void ReceiveStopShake(bool bImmediately);                                                                                // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceivePlayShake
	// void ReceivePlayShake(float Scale);                                                                                      // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	// bool ReceiveIsFinished();                                                                                                // [0xbbbfe0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
	// void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.MatineeCameraShakePattern
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMatineeCameraShakePattern : public UCameraShakePattern
{ 
public:
};

/// Class /Script/GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{ 
public:
};

/// Class /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
	// class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);                                 // [0x198dfe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FPerlinNoiseShaker
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (128 bytes) (0x000038 - 0x0000B8) align 8 pad: 0x0000
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0038   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x003C   (0x0004)  
	FPerlinNoiseShaker                                 X;                                                          // 0x0040   (0x0008)  
	FPerlinNoiseShaker                                 Y;                                                          // 0x0048   (0x0008)  
	FPerlinNoiseShaker                                 Z;                                                          // 0x0050   (0x0008)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0058   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x005C   (0x0004)  
	FPerlinNoiseShaker                                 Pitch;                                                      // 0x0060   (0x0008)  
	FPerlinNoiseShaker                                 Yaw;                                                        // 0x0068   (0x0008)  
	FPerlinNoiseShaker                                 Roll;                                                       // 0x0070   (0x0008)  
	FPerlinNoiseShaker                                 FOV;                                                        // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FWaveOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	EInitialWaveOscillatorOffsetType                   InitialOffsetType;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000D8) align 8 pad: 0x0000
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0038   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x003C   (0x0004)  
	FWaveOscillator                                    X;                                                          // 0x0040   (0x000C)  
	FWaveOscillator                                    Y;                                                          // 0x004C   (0x000C)  
	FWaveOscillator                                    Z;                                                          // 0x0058   (0x000C)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0064   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x0068   (0x0004)  
	FWaveOscillator                                    Pitch;                                                      // 0x006C   (0x000C)  
	FWaveOscillator                                    Yaw;                                                        // 0x0078   (0x000C)  
	FWaveOscillator                                    Roll;                                                       // 0x0084   (0x000C)  
	FWaveOscillator                                    FOV;                                                        // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x009C   (0x003C)  MISSED
};

static_assert(sizeof(UTestCameraShake) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USimpleCameraShakePattern) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UConstantCameraShakePattern) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UCompositeCameraShakePattern) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UDefaultCameraShakeBase) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(FFOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FROscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FVOscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMatineeCameraShake) == 0x01B0); // 432 bytes (0x0000A8 - 0x0001B0)
static_assert(sizeof(UMatineeCameraShakePattern) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneMatineeCameraShakeEvaluator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMatineeCameraShakeFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPerlinNoiseShaker) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UPerlinNoiseCameraShakePattern) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(sizeof(FWaveOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UWaveOscillatorCameraShakePattern) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 0x0038);
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 0x0044);
static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 0x0028);
static_assert(offsetof(FFOscillator, InitialOffset) == 0x0008);
static_assert(offsetof(FFOscillator, Waveform) == 0x0009);
static_assert(offsetof(FROscillator, Pitch) == 0x0000);
static_assert(offsetof(FROscillator, Yaw) == 0x000C);
static_assert(offsetof(FROscillator, Roll) == 0x0018);
static_assert(offsetof(FVOscillator, X) == 0x0000);
static_assert(offsetof(FVOscillator, Y) == 0x000C);
static_assert(offsetof(FVOscillator, Z) == 0x0018);
static_assert(offsetof(UMatineeCameraShake, RotOscillation) == 0x00B4);
static_assert(offsetof(UMatineeCameraShake, LocOscillation) == 0x00D8);
static_assert(offsetof(UMatineeCameraShake, FOVOscillation) == 0x00FC);
static_assert(offsetof(UMatineeCameraShake, Anim) == 0x0120);
static_assert(offsetof(UMatineeCameraShake, AnimSequence) == 0x0128);
static_assert(offsetof(UMatineeCameraShake, AnimInst) == 0x0138);
static_assert(offsetof(UMatineeCameraShake, SequenceShakePattern) == 0x0180);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 0x0040);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 0x0048);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 0x0050);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 0x0060);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 0x0068);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 0x0070);
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 0x0078);
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 0x0008);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 0x0040);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 0x004C);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 0x0058);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 0x006C);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 0x0078);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 0x0084);
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 0x0090);
