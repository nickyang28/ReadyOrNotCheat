
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureDirection
/// Size: 0x01 (1 bytes)
enum class EMagicLeapTouchpadGestureDirection : uint8_t
{
	EMagicLeapTouchpadGestureDirection__None                                         = 0,
	EMagicLeapTouchpadGestureDirection__Up                                           = 1,
	EMagicLeapTouchpadGestureDirection__Down                                         = 2,
	EMagicLeapTouchpadGestureDirection__Left                                         = 3,
	EMagicLeapTouchpadGestureDirection__Right                                        = 4,
	EMagicLeapTouchpadGestureDirection__In                                           = 5,
	EMagicLeapTouchpadGestureDirection__Out                                          = 6,
	EMagicLeapTouchpadGestureDirection__Clockwise                                    = 7,
	EMagicLeapTouchpadGestureDirection__CounterClockwise                             = 8
};

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapTouchpadGestureType : uint8_t
{
	EMagicLeapTouchpadGestureType__None                                              = 0,
	EMagicLeapTouchpadGestureType__Tap                                               = 1,
	EMagicLeapTouchpadGestureType__ForceTapDown                                      = 2,
	EMagicLeapTouchpadGestureType__ForceTapUp                                        = 3,
	EMagicLeapTouchpadGestureType__ForceDwell                                        = 4,
	EMagicLeapTouchpadGestureType__SecondForceDown                                   = 5,
	EMagicLeapTouchpadGestureType__LongHold                                          = 6,
	EMagicLeapTouchpadGestureType__RadialScroll                                      = 7,
	EMagicLeapTouchpadGestureType__Swipe                                             = 8,
	EMagicLeapTouchpadGestureType__Scroll                                            = 9,
	EMagicLeapTouchpadGestureType__Pinch                                             = 10
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerTrackingMode : uint8_t
{
	EMagicLeapControllerTrackingMode__InputService                                   = 0,
	EMagicLeapControllerTrackingMode__CoordinateFrameUID                             = 1
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticIntensity
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerHapticIntensity : uint8_t
{
	EMagicLeapControllerHapticIntensity__Low                                         = 0,
	EMagicLeapControllerHapticIntensity__Medium                                      = 1,
	EMagicLeapControllerHapticIntensity__High                                        = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticPattern
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerHapticPattern : uint8_t
{
	EMagicLeapControllerHapticPattern__None                                          = 0,
	EMagicLeapControllerHapticPattern__Click                                         = 1,
	EMagicLeapControllerHapticPattern__Bump                                          = 2,
	EMagicLeapControllerHapticPattern__DoubleClick                                   = 3,
	EMagicLeapControllerHapticPattern__Buzz                                          = 4,
	EMagicLeapControllerHapticPattern__Tick                                          = 5,
	EMagicLeapControllerHapticPattern__ForceDown                                     = 6,
	EMagicLeapControllerHapticPattern__ForceUp                                       = 7,
	EMagicLeapControllerHapticPattern__ForceDwell                                    = 8,
	EMagicLeapControllerHapticPattern__SecondForceDown                               = 9
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDSpeed
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDSpeed : uint8_t
{
	EMagicLeapControllerLEDSpeed__Slow                                               = 0,
	EMagicLeapControllerLEDSpeed__Medium                                             = 1,
	EMagicLeapControllerLEDSpeed__Fast                                               = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDColor
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDColor : uint8_t
{
	EMagicLeapControllerLEDColor__BrightMissionRed                                   = 0,
	EMagicLeapControllerLEDColor__PastelMissionRed                                   = 1,
	EMagicLeapControllerLEDColor__BrightFloridaOrange                                = 2,
	EMagicLeapControllerLEDColor__PastelFloridaOrange                                = 3,
	EMagicLeapControllerLEDColor__BrightLunaYellow                                   = 4,
	EMagicLeapControllerLEDColor__PastelLunaYellow                                   = 5,
	EMagicLeapControllerLEDColor__BrightNebulaPink                                   = 6,
	EMagicLeapControllerLEDColor__PastelNebulaPink                                   = 7,
	EMagicLeapControllerLEDColor__BrightCosmicPurple                                 = 8,
	EMagicLeapControllerLEDColor__PastelCosmicPurple                                 = 9,
	EMagicLeapControllerLEDColor__BrightMysticBlue                                   = 10,
	EMagicLeapControllerLEDColor__PastelMysticBlue                                   = 11,
	EMagicLeapControllerLEDColor__BrightCelestialBlue                                = 12,
	EMagicLeapControllerLEDColor__PastelCelestialBlue                                = 13,
	EMagicLeapControllerLEDColor__BrightShaggleGreen                                 = 14,
	EMagicLeapControllerLEDColor__PastelShaggleGreen                                 = 15
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDEffect
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDEffect : uint8_t
{
	EMagicLeapControllerLEDEffect__RotateCW                                          = 0,
	EMagicLeapControllerLEDEffect__RotateCCW                                         = 1,
	EMagicLeapControllerLEDEffect__Pulse                                             = 2,
	EMagicLeapControllerLEDEffect__PaintCW                                           = 3,
	EMagicLeapControllerLEDEffect__PaintCCW                                          = 4,
	EMagicLeapControllerLEDEffect__Blink                                             = 5
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDPattern
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerLEDPattern : uint8_t
{
	EMagicLeapControllerLEDPattern__None                                             = 0,
	EMagicLeapControllerLEDPattern__Clock01                                          = 1,
	EMagicLeapControllerLEDPattern__Clock02                                          = 2,
	EMagicLeapControllerLEDPattern__Clock03                                          = 3,
	EMagicLeapControllerLEDPattern__Clock04                                          = 4,
	EMagicLeapControllerLEDPattern__Clock05                                          = 5,
	EMagicLeapControllerLEDPattern__Clock06                                          = 6,
	EMagicLeapControllerLEDPattern__Clock07                                          = 7,
	EMagicLeapControllerLEDPattern__Clock08                                          = 8,
	EMagicLeapControllerLEDPattern__Clock09                                          = 9,
	EMagicLeapControllerLEDPattern__Clock10                                          = 10,
	EMagicLeapControllerLEDPattern__Clock11                                          = 11,
	EMagicLeapControllerLEDPattern__Clock12                                          = 12,
	EMagicLeapControllerLEDPattern__Clock01_07                                       = 13,
	EMagicLeapControllerLEDPattern__Clock02_08                                       = 14,
	EMagicLeapControllerLEDPattern__Clock03_09                                       = 15,
	EMagicLeapControllerLEDPattern__Clock0417                                        = 16,
	EMagicLeapControllerLEDPattern__Clock0518                                        = 17,
	EMagicLeapControllerLEDPattern__Clock0619                                        = 18
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapControllerType : uint8_t
{
	EMagicLeapControllerType__None                                                   = 0,
	EMagicLeapControllerType__Device                                                 = 1,
	EMagicLeapControllerType__MobileApp                                              = 2
};

/// Class /Script/MagicLeapController.MagicLeapControllerFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	// bool SetMotionSourceForHand(EControllerHand hand, FName MotionSource);                                                   // [0x1a25510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	// bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);                                           // [0x1a24b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	// bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1a253c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	// bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1a251f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	// bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity); // [0x1a250f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	// bool PlayControllerLEDEffect(EControllerHand hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1a24f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	// bool PlayControllerLED(EControllerHand hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1a24dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	// bool PlayControllerHapticFeedback(EControllerHand hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity); // [0x1a24cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	// int32_t MaxSupportedMagicLeapControllers();                                                                              // [0x1a17910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	// bool IsMLControllerConnected(FName MotionSource);                                                                        // [0x1a24a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	// void InvertControllerMapping();                                                                                          // [0x1a24ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	// FName GetMotionSourceForHand(EControllerHand hand);                                                                      // [0x1a24c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	// EMagicLeapControllerType GetMLControllerType(EControllerHand hand);                                                      // [0x1a24b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	// EControllerHand GetHandForMotionSource(FName MotionSource);                                                              // [0x1a24b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	// EMagicLeapControllerType GetControllerType(FName MotionSource);                                                          // [0x1a24a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	// EMagicLeapControllerTrackingMode GetControllerTrackingMode();                                                            // [0x1a24a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	// bool GetControllerMapping(int32_t ControllerIndex, EControllerHand& hand);                                               // [0x1a24970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MagicLeapController.MagicLeapTouchpadGesturesComponent
/// Size: 0x0090 (144 bytes) (0x0000B0 - 0x000140) align 8 pad: 0x0000
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B0   (0x0008)  MISSED
	SDK_UNDEFINED(16,1822) /* FMulticastInlineDelegate */ __um(OnTouchpadGestureStart);                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,1823) /* FMulticastInlineDelegate */ __um(OnTouchpadGestureContinue);                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,1824) /* FMulticastInlineDelegate */ __um(OnTouchpadGestureEnd);                              // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x00E8   (0x0058)  MISSED
};

/// Struct /Script/MagicLeapController.MagicLeapTouchpadGesture
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FMagicLeapTouchpadGesture
{ 
	EControllerHand                                    hand;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0004   (0x0008)  
	EMagicLeapTouchpadGestureType                      Type;                                                       // 0x000C   (0x0001)  
	EMagicLeapTouchpadGestureDirection                 Direction;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FVector                                            PositionAndForce;                                           // 0x0010   (0x000C)  
	float                                              Speed;                                                      // 0x001C   (0x0004)  
	float                                              Distance;                                                   // 0x0020   (0x0004)  
	float                                              FingerGap;                                                  // 0x0024   (0x0004)  
	float                                              Radius;                                                     // 0x0028   (0x0004)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

static_assert(sizeof(UMagicLeapControllerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapTouchpadGesturesComponent) == 0x0140); // 320 bytes (0x0000B0 - 0x000140)
static_assert(sizeof(FMagicLeapTouchpadGesture) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMagicLeapTouchpadGesture, hand) == 0x0000);
static_assert(offsetof(FMagicLeapTouchpadGesture, MotionSource) == 0x0004);
static_assert(offsetof(FMagicLeapTouchpadGesture, Type) == 0x000C);
static_assert(offsetof(FMagicLeapTouchpadGesture, Direction) == 0x000D);
static_assert(offsetof(FMagicLeapTouchpadGesture, PositionAndForce) == 0x0010);
