
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/InputCore.ETouchIndex
/// Size: 0x01 (1 bytes)
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1                                                              = 0,
	ETouchIndex__Touch2                                                              = 1,
	ETouchIndex__Touch3                                                              = 2,
	ETouchIndex__Touch4                                                              = 3,
	ETouchIndex__Touch5                                                              = 4,
	ETouchIndex__Touch6                                                              = 5,
	ETouchIndex__Touch7                                                              = 6,
	ETouchIndex__Touch8                                                              = 7,
	ETouchIndex__Touch9                                                              = 8,
	ETouchIndex__Touch10                                                             = 9,
	ETouchIndex__CursorPointerIndex                                                  = 10,
	ETouchIndex__MAX_TOUCHES                                                         = 11
};

/// Enum /Script/InputCore.EControllerHand
/// Size: 0x01 (1 bytes)
enum class EControllerHand : uint8_t
{
	EControllerHand__Left                                                            = 0,
	EControllerHand__Right                                                           = 1,
	EControllerHand__AnyHand                                                         = 2,
	EControllerHand__Pad                                                             = 3,
	EControllerHand__ExternalCamera                                                  = 4,
	EControllerHand__Gun                                                             = 5,
	EControllerHand__HMD                                                             = 6,
	EControllerHand__Special                                                         = 7,
	EControllerHand__Special9                                                        = 8,
	EControllerHand__Special10                                                       = 9,
	EControllerHand__Special11                                                       = 10,
	EControllerHand__Special12                                                       = 11,
	EControllerHand__Special13                                                       = 12,
	EControllerHand__Special14                                                       = 13,
	EControllerHand__Special15                                                       = 14,
	EControllerHand__Special16                                                       = 15,
	EControllerHand__Special17                                                       = 16,
	EControllerHand__Special18                                                       = 17,
	EControllerHand__ControllerHand_Count                                            = 18
};

/// Enum /Script/InputCore.ETouchType
/// Size: 0x01 (1 bytes)
enum class ETouchType : uint8_t
{
	ETouchType__Began                                                                = 0,
	ETouchType__Moved                                                                = 1,
	ETouchType__Stationary                                                           = 2,
	ETouchType__ForceChanged                                                         = 3,
	ETouchType__FirstMove                                                            = 4,
	ETouchType__Ended                                                                = 5,
	ETouchType__NumTypes                                                             = 6
};

/// Enum /Script/InputCore.EConsoleForGamepadLabels
/// Size: 0x01 (1 bytes)
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None                                                   = 0,
	EConsoleForGamepadLabels__XBoxOne                                                = 1,
	EConsoleForGamepadLabels__PS4                                                    = 2
};

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UInputCoreTypes : public UObject
{ 
public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FKey
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

static_assert(sizeof(UInputCoreTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FKey, KeyName) == 0x0000);
