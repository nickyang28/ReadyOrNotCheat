
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
/// dependency: SlateCore

/// Enum /Script/CommonInput.ECommonInputType
/// Size: 0x01 (1 bytes)
enum class ECommonInputType : uint8_t
{
	ECommonInputType__MouseAndKeyboard                                               = 0,
	ECommonInputType__Gamepad                                                        = 1,
	ECommonInputType__Touch                                                          = 2,
	ECommonInputType__Count                                                          = 3
};

/// Class /Script/CommonInput.CommonUIInputData
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UCommonUIInputData : public UObject
{ 
public:
	FDataTableRowHandle                                DefaultClickAction;                                         // 0x0028   (0x0010)  
	FDataTableRowHandle                                DefaultBackAction;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/CommonInput.CommonInputKeyBrushConfiguration
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FCommonInputKeyBrushConfiguration
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	FSlateBrush                                        KeyBrush;                                                   // 0x0018   (0x0088)  
};

/// Struct /Script/CommonInput.CommonInputKeySetBrushConfiguration
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FCommonInputKeySetBrushConfiguration
{ 
	TArray<FKey>                                       Keys;                                                       // 0x0000   (0x0010)  
	FSlateBrush                                        KeyBrush;                                                   // 0x0010   (0x0088)  
};

/// Class /Script/CommonInput.CommonInputBaseControllerData
/// Size: 0x0080 (128 bytes) (0x000028 - 0x0000A8) align 8 pad: 0x0000
class UCommonInputBaseControllerData : public UObject
{ 
public:
	ECommonInputType                                   InputType;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FName                                              GamepadName;                                                // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(40,504) /* TWeakObjectPtr<UTexture2D*> */ __um(ControllerTexture);                               // 0x0038   (0x0028)  
	SDK_UNDEFINED(40,505) /* TWeakObjectPtr<UTexture2D*> */ __um(ControllerButtonMaskTexture);                     // 0x0060   (0x0028)  
	TArray<FCommonInputKeyBrushConfiguration>          InputBrushDataMap;                                          // 0x0088   (0x0010)  
	TArray<FCommonInputKeySetBrushConfiguration>       InputBrushKeySets;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	// TArray<FName> GetRegisteredGamepads();                                                                                   // [0x177a820] Final|Native|Static|Public 
};

/// Struct /Script/CommonInput.CommonInputPlatformBaseData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FCommonInputPlatformBaseData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	bool                                               bSupported;                                                 // 0x0008   (0x0001)  
	ECommonInputType                                   DefaultInputType;                                           // 0x0009   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x000A   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x000B   (0x0001)  
	FName                                              DefaultGamepadName;                                         // 0x000C   (0x0008)  
	bool                                               bCanChangeGamepadType;                                      // 0x0014   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	SDK_UNDEFINED(16,506) /* TArray<TWeakObjectPtr<UClass*>> */ __um(ControllerData);                              // 0x0018   (0x0010)  
	TArray<class UClass*>                              ControllerDataClasses;                                      // 0x0028   (0x0010)  
};

/// Class /Script/CommonInput.CommonInputSettings
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x000100) align 8 pad: 0x0000
class UCommonInputSettings : public UObject
{ 
public:
	SDK_UNDEFINED(40,507) /* TWeakObjectPtr<UClass*> */ __um(InputData);                                           // 0x0028   (0x0028)  
	SDK_UNDEFINED(80,508) /* TMap<FName, FCommonInputPlatformBaseData> */ __um(CommonInputPlatformData);           // 0x0050   (0x0050)  
	bool                                               bEnableInputMethodThrashingProtection;                      // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            InputMethodThrashingLimit;                                  // 0x00A4   (0x0004)  
	double                                             InputMethodThrashingWindowInSeconds;                        // 0x00A8   (0x0008)  
	double                                             InputMethodThrashingCooldownInSeconds;                      // 0x00B0   (0x0008)  
	bool                                               bAllowOutOfFocusDeviceInput;                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class UClass*                                      InputDataClass;                                             // 0x00C0   (0x0008)  
	FCommonInputPlatformBaseData                       CurrentPlatform;                                            // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/CommonInput.CommonInputSettings.GetRegisteredPlatforms
	// TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x177a860] Final|Native|Static|Private 
};

/// Class /Script/CommonInput.CommonInputSubsystem
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000F8) align 8 pad: 0x0000
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0030   (0x0020)  MISSED
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                               // 0x0050   (0x0010)  
	int32_t                                            NumberOfInputMethodChangesRecently;                         // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	double                                             LastInputMethodChangeTime;                                  // 0x0068   (0x0008)  
	double                                             LastTimeInputMethodThrashingBegan;                          // 0x0070   (0x0008)  
	ECommonInputType                                   LastInputType;                                              // 0x0078   (0x0001)  
	ECommonInputType                                   CurrentInputType;                                           // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	FName                                              GamepadInputType;                                           // 0x007C   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	SDK_UNDEFINED(80,510) /* TMap<FName, ECommonInputType> */ __um(CurrentInputLocks);                             // 0x0088   (0x0050)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               bIsGamepadSimulatedClick;                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x00F1   (0x0007)  MISSED


	/// Functions
	// Function /Script/CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	// bool ShouldShowInputKeys();                                                                                              // [0x177aa70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.SetGamepadInputType
	// void SetGamepadInputType(FName& InGamepadInputType);                                                                     // [0x177a9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.SetCurrentInputType
	// void SetCurrentInputType(ECommonInputType NewInputType);                                                                 // [0x177a960] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.IsUsingPointerInput
	// bool IsUsingPointerInput();                                                                                              // [0x177a930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.IsInputMethodActive
	// bool IsInputMethodActive(ECommonInputType InputMethod);                                                                  // [0x177a8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetDefaultInputType
	// ECommonInputType GetDefaultInputType();                                                                                  // [0x177a7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentInputType
	// ECommonInputType GetCurrentInputType();                                                                                  // [0x177a7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	// FName GetCurrentGamepadName();                                                                                           // [0x177a780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

static_assert(sizeof(UCommonUIInputData) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FCommonInputKeyBrushConfiguration) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FCommonInputKeySetBrushConfiguration) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UCommonInputBaseControllerData) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FCommonInputPlatformBaseData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UCommonInputSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UCommonInputSubsystem) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(offsetof(UCommonUIInputData, DefaultClickAction) == 0x0028);
static_assert(offsetof(UCommonUIInputData, DefaultBackAction) == 0x0038);
static_assert(offsetof(FCommonInputKeyBrushConfiguration, Key) == 0x0000);
static_assert(offsetof(FCommonInputKeyBrushConfiguration, KeyBrush) == 0x0018);
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, Keys) == 0x0000);
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, KeyBrush) == 0x0010);
static_assert(offsetof(UCommonInputBaseControllerData, InputType) == 0x0028);
static_assert(offsetof(UCommonInputBaseControllerData, GamepadName) == 0x002C);
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushDataMap) == 0x0088);
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushKeySets) == 0x0098);
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultInputType) == 0x0009);
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultGamepadName) == 0x000C);
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerDataClasses) == 0x0028);
static_assert(offsetof(UCommonInputSettings, InputDataClass) == 0x00C0);
static_assert(offsetof(UCommonInputSettings, CurrentPlatform) == 0x00C8);
static_assert(offsetof(UCommonInputSubsystem, LastInputType) == 0x0078);
static_assert(offsetof(UCommonInputSubsystem, CurrentInputType) == 0x0079);
static_assert(offsetof(UCommonInputSubsystem, GamepadInputType) == 0x007C);
