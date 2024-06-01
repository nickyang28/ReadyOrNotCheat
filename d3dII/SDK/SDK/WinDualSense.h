
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/WinDualSense.EDualSense2DType
/// Size: 0x01 (1 bytes)
enum class EDualSense2DType : uint8_t
{
	EDualSense2DType__TOUCHPOINT_FIRST                                               = 0,
	EDualSense2DType__TOUCHPOINT_SECOND                                              = 1
};

/// Enum /Script/WinDualSense.EDualSenseVectorType
/// Size: 0x01 (1 bytes)
enum class EDualSenseVectorType : uint8_t
{
	EDualSenseVectorType__GYROSCOPE                                                  = 0,
	EDualSenseVectorType__ACCELERATION                                               = 1
};

/// Enum /Script/WinDualSense.EDualSenseAnalogType
/// Size: 0x01 (1 bytes)
enum class EDualSenseAnalogType : uint8_t
{
	EDualSenseAnalogType__LEFT_STICK_X                                               = 0,
	EDualSenseAnalogType__LEFT_STICK_Y                                               = 1,
	EDualSenseAnalogType__RIGHT_STICK_X                                              = 2,
	EDualSenseAnalogType__RIGHT_STICK_Y                                              = 3,
	EDualSenseAnalogType__LEFT_TRIGGER                                               = 4,
	EDualSenseAnalogType__RIGHT_TRIGGER                                              = 5
};

/// Enum /Script/WinDualSense.EDualSenseButtonType
/// Size: 0x01 (1 bytes)
enum class EDualSenseButtonType : uint8_t
{
	EDualSenseButtonType__TRIANGLE                                                   = 0,
	EDualSenseButtonType__CROSS                                                      = 1,
	EDualSenseButtonType__SQUARE                                                     = 2,
	EDualSenseButtonType__CIRCLE                                                     = 3,
	EDualSenseButtonType__DPAD_UP                                                    = 4,
	EDualSenseButtonType__DPAD_DOWN                                                  = 5,
	EDualSenseButtonType__DPAD_LEFT                                                  = 6,
	EDualSenseButtonType__DPAD_RIGHT                                                 = 7,
	EDualSenseButtonType__BUMPER_LEFT                                                = 8,
	EDualSenseButtonType__BUMPER_RIGHT                                               = 9,
	EDualSenseButtonType__TRIGGER_LEFT                                               = 10,
	EDualSenseButtonType__TRIGGER_RIGHT                                              = 11,
	EDualSenseButtonType__LEFT_STICK_PUSH                                            = 12,
	EDualSenseButtonType__RIGHT_STICK_PUSH                                           = 13,
	EDualSenseButtonType__SELECT                                                     = 14,
	EDualSenseButtonType__MENU                                                       = 15,
	EDualSenseButtonType__PLAYSTATION_LOGO                                           = 16,
	EDualSenseButtonType__TOUCHPAD                                                   = 17,
	EDualSenseButtonType__MIC                                                        = 18,
	EDualSenseButtonType__MAX_COUNT                                                  = 19
};

/// Enum /Script/WinDualSense.EDualSenseButtonState
/// Size: 0x01 (1 bytes)
enum class EDualSenseButtonState : uint8_t
{
	EDualSenseButtonState__NONE                                                      = 0,
	EDualSenseButtonState__PRESS                                                     = 1,
	EDualSenseButtonState__REPEAT                                                    = 2,
	EDualSenseButtonState__RELEASE                                                   = 3
};

/// Struct /Script/WinDualSense.DualSenseVectorData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FDualSenseVectorData
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/WinDualSense.DualSenseAnalogData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FDualSenseAnalogData
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/WinDualSense.DualSenseButtonData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FDualSenseButtonData
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

static_assert(sizeof(FDualSenseVectorData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDualSenseAnalogData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDualSenseButtonData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
