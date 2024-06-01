
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: MediaAssets
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x01 (1 bytes)
enum class ECommonNumericType : uint8_t
{
	ECommonNumericType__Number                                                       = 0,
	ECommonNumericType__Percentage                                                   = 1,
	ECommonNumericType__Seconds                                                      = 2,
	ECommonNumericType__Distance                                                     = 3
};

/// Enum /Script/CommonUI.ECommonInputMode
/// Size: 0x01 (1 bytes)
enum class ECommonInputMode : uint8_t
{
	ECommonInputMode__Menu                                                           = 0,
	ECommonInputMode__Game                                                           = 1,
	ECommonInputMode__All                                                            = 2
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x01 (1 bytes)
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly                                         = 0,
	ERichTextInlineIconDisplayMode__TextOnly                                         = 1,
	ERichTextInlineIconDisplayMode__IconAndText                                      = 2
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x01 (1 bytes)
enum class EInputActionState : uint8_t
{
	EInputActionState__Enabled                                                       = 0,
	EInputActionState__Disabled                                                      = 1,
	EInputActionState__Hidden                                                        = 2,
	EInputActionState__HiddenAndDisabled                                             = 3
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x01 (1 bytes)
enum class ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear                                                         = 0,
	ETransitionCurve__QuadIn                                                         = 1,
	ETransitionCurve__QuadOut                                                        = 2,
	ETransitionCurve__QuadInOut                                                      = 3,
	ETransitionCurve__CubicIn                                                        = 4,
	ETransitionCurve__CubicOut                                                       = 5,
	ETransitionCurve__CubicInOut                                                     = 6
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x01 (1 bytes)
enum class ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly                                              = 0,
	ECommonSwitcherTransition__Horizontal                                            = 1,
	ECommonSwitcherTransition__Vertical                                              = 2,
	ECommonSwitcherTransition__Zoom                                                  = 3
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0020 (32 bytes) (0x0004F8 - 0x000518) align 8 pad: 0x0000
class UAnalogSlider : public USlider
{ 
public:
	SDK_UNDEFINED(16,519) /* FMulticastInlineDelegate */ __um(OnAnalogCapture);                                    // 0x04F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0508   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UCommonActionHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x0218 (536 bytes) (0x000108 - 0x000320) align 8 pad: 0x0000
class UCommonActionWidget : public UWidget
{ 
public:
	SDK_UNDEFINED(16,520) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                               // 0x0108   (0x0010)  
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x0118   (0x0088)  
	FName                                              ProgressMaterialParam;                                      // 0x01A0   (0x0008)  
	FSlateBrush                                        IconRimBrush;                                               // 0x01A8   (0x0088)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0230   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0240   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                    // 0x0248   (0x0008)  
	unsigned char                                      UnknownData01_7[0xD0];                                      // 0x0250   (0x00D0)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0x1768a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x1768810] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x1768710] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0x1768290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0x1767560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x17674c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (40 bytes) (0x000260 - 0x000288) align 8 pad: 0x0000
class UCommonUserWidget : public UUserWidget
{ 
public:
	bool                                               bConsumePointerInput;                                       // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_7[0x27];                                      // 0x0261   (0x0027)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x1773e70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0098 (152 bytes) (0x000288 - 0x000320) align 8 pad: 0x0000
class UCommonActivatableWidget : public UCommonUserWidget
{ 
public:
	bool                                               bAutoActivate;                                              // 0x0288   (0x0001)  
	bool                                               bIsBackHandler;                                             // 0x0289   (0x0001)  
	bool                                               bSupportsActivationFocus;                                   // 0x028A   (0x0001)  
	bool                                               bIsModal;                                                   // 0x028B   (0x0001)  
	bool                                               bAutoRestoreFocus;                                          // 0x028C   (0x0001)  
	bool                                               bSetVisibilityOnActivated;                                  // 0x028D   (0x0001)  
	ESlateVisibility                                   ActivatedVisibility;                                        // 0x028E   (0x0001)  
	bool                                               bSetVisibilityOnDeactivated;                                // 0x028F   (0x0001)  
	ESlateVisibility                                   DeactivatedVisibility;                                      // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	SDK_UNDEFINED(16,521) /* FMulticastInlineDelegate */ __um(BP_OnWidgetActivated);                               // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,522) /* FMulticastInlineDelegate */ __um(BP_OnWidgetDeactivated);                             // 0x02A8   (0x0010)  
	bool                                               bIsActive;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x67];                                      // 0x02B9   (0x0067)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	// bool IsActivated();                                                                                                      // [0x1768270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x1766e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// bool BP_OnHandleBackAction();                                                                                            // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// class UWidget* BP_GetDesiredFocusTarget();                                                                               // [0x24710f0] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x1766d60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0100 (256 bytes) (0x000108 - 0x000208) align 8 pad: 0x0000
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
public:
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0108   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x010A   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x010C   (0x0004)  
	TArray<class UCommonActivatableWidget*>            WidgetList;                                                 // 0x0110   (0x0010)  
	class UCommonActivatableWidget*                    DisplayedWidget;                                            // 0x0120   (0x0008)  
	FUserWidgetPool                                    GeneratedWidgetsPool;                                       // 0x0128   (0x0080)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x01A8   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);                                                       // [0x1768450] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// class UCommonActivatableWidget* GetActiveWidget();                                                                       // [0x1766f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x1766e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);                                      // [0x1766d80] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0010 (16 bytes) (0x000208 - 0x000218) align 8 pad: 0x0000
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
public:
	class UClass*                                      RootContentWidgetClass;                                     // 0x0208   (0x0008)  
	class UCommonActivatableWidget*                    RootContentWidget;                                          // 0x0210   (0x0008)  
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0000 (0 bytes) (0x000208 - 0x000208) align 8 pad: 0x0000
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
public:
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0058 (88 bytes) (0x000138 - 0x000190) align 8 pad: 0x0000
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0138   (0x0018)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0150   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0151   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0152   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x0154   (0x0004)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x0158   (0x0038)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0x1768560] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                       // [0x1768240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x1766cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x1766c40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0000 (0 bytes) (0x000190 - 0x000190) align 8 pad: 0x0000
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
public:
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x0088 (136 bytes) (0x000028 - 0x0000B0) align 8 pad: 0x0000
class UCommonBorderStyle : public UObject
{ 
public:
	FSlateBrush                                        Background;                                                 // 0x0028   (0x0088)  


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x1766f80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (32 bytes) (0x000270 - 0x000290) align 8 pad: 0x0000
class UCommonBorder : public UBorder
{ 
public:
	class UClass*                                      Style;                                                      // 0x0270   (0x0008)  
	bool                                               bReducePaddingBySafezone;                                   // 0x0278   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0279   (0x0003)  MISSED
	FMargin                                            MinimumPadding;                                             // 0x027C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x028C   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x17692e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0010 (16 bytes) (0x0001D8 - 0x0001E8) align 8 pad: 0x0000
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
public:
	class UClass*                                      ActionButtonClass;                                          // 0x01D8   (0x0008)  
	bool                                               bDisplayOwningPlayerActionsOnly;                            // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x01E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0x17685f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x0938 (2360 bytes) (0x000288 - 0x000BC0) align 8 pad: 0x0000
class UCommonButtonBase : public UCommonUserWidget
{ 
public:
	int32_t                                            MinWidth;                                                   // 0x0288   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x028C   (0x0004)  
	class UClass*                                      Style;                                                      // 0x0290   (0x0008)  
	bool                                               bHideInputAction;                                           // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x02A0   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x02B8   (0x0018)  
	bool                                               bApplyAlphaOnDisable : 1;                                   // 0x02D0:0 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x02D0:1 (0x0001)  
	bool                                               bShouldSelectUponReceivingFocus : 1;                        // 0x02D0:2 (0x0001)  
	bool                                               bInteractableWhenSelected : 1;                              // 0x02D0:3 (0x0001)  
	bool                                               bToggleable : 1;                                            // 0x02D0:4 (0x0001)  
	bool                                               bDisplayInputActionWhenNotInteractable : 1;                 // 0x02D0:5 (0x0001)  
	bool                                               bHideInputActionWithKeyboard : 1;                           // 0x02D0:6 (0x0001)  
	bool                                               bShouldUseFallbackDefaultInputAction : 1;                   // 0x02D0:7 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x02D1   (0x0001)  MISSED
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x02D2   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x02D3   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02D5   (0x0003)  MISSED
	int32_t                                            InputPriority;                                              // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x02DC   (0x0004)  MISSED
	FDataTableRowHandle                                TriggeringInputAction;                                      // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x02F0   (0x0010)  MISSED
	SDK_UNDEFINED(16,523) /* FMulticastInlineDelegate */ __um(OnSelectedChangedBase);                              // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,524) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                                // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,525) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                          // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,526) /* FMulticastInlineDelegate */ __um(OnButtonBaseHovered);                                // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,527) /* FMulticastInlineDelegate */ __um(OnButtonBaseUnhovered);                              // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,528) /* FMulticastInlineDelegate */ __um(OnButtonBasePressed);                                // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,529) /* FMulticastInlineDelegate */ __um(OnButtonBaseReleased);                               // 0x0360   (0x0010)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x0370   (0x0004)  MISSED
	bool                                               bIsPersistentBinding;                                       // 0x0374   (0x0001)  
	ECommonInputMode                                   InputModeOverride;                                          // 0x0375   (0x0001)  
	unsigned char                                      UnknownData06_6[0x32];                                      // 0x0376   (0x0032)  MISSED
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                     // 0x03A8   (0x0008)  
	FButtonStyle                                       NormalStyle;                                                // 0x03B0   (0x0278)  
	FButtonStyle                                       SelectedStyle;                                              // 0x0628   (0x0278)  
	FButtonStyle                                       DisabledStyle;                                              // 0x08A0   (0x0278)  
	bool                                               bStopDoubleClickPropagation : 1;                            // 0x0B18:0 (0x0001)  
	unsigned char                                      UnknownData07_5[0x9F];                                      // 0x0B19   (0x009F)  MISSED
	class UCommonActionWidget*                         InputActionWidget;                                          // 0x0BB8   (0x0008)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// void StopDoubleClickPropagation();                                                                                       // [0x17695c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	// void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0x1769520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0x1769480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x1769400] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x1769370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0x1769250] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x17691c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x1769090] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x1768f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	// void SetPressedSoundOverride(class USoundBase* Sound);                                                                   // [0x1769000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x1768eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x1768e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x1768d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x1768cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x1768c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0x1768ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	// void SetIsFocusable(bool bInIsFocusable);                                                                                // [0x1768b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x17688b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// void SetHoveredSoundOverride(class USoundBase* Sound);                                                                   // [0x1768680] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x17684e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x24710f0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x17683d0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                          // [0x1768340] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                           // [0x1768320] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x17682f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0x17682c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x17681a0] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	// void HandleFocusReceived();                                                                                              // [0x1768180] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x1768160] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x1768140] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x1768120] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	// class UCommonButtonStyle* GetStyle();                                                                                    // [0x17680f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                             // [0x17680c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                                // [0x1768090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	// bool GetSelected();                                                                                                      // [0x1767ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	// bool GetIsFocusable();                                                                                                   // [0x17677a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x17676f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// class UClass* GetCurrentTextStyleClass();                                                                                // [0x17672a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	// class UCommonTextStyle* GetCurrentTextStyle();                                                                           // [0x1767270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x17671d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x1767130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x1766e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	// void ClearSelection();                                                                                                   // [0x1766e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// void BP_OnDoubleClicked();                                                                                               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0010 (16 bytes) (0x000BC0 - 0x000BD0) align 8 pad: 0x0000
class UCommonBoundActionButton : public UCommonButtonBase
{ 
public:
	class UCommonTextBlock*                            Text_ActionName;                                            // 0x0BC0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0BC8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// void OnUpdateInputAction();                                                                                              // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FCommonButtonStyleOptionalSlateSound
{ 
	bool                                               bHasSound;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateSound                                        Sound;                                                      // 0x0008   (0x0018)  
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x0558 (1368 bytes) (0x000028 - 0x000580) align 8 pad: 0x0000
class UCommonButtonStyle : public UObject
{ 
public:
	bool                                               bSingleMaterial;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSlateBrush                                        SingleMaterialBrush;                                        // 0x0030   (0x0088)  
	FSlateBrush                                        NormalBase;                                                 // 0x00B8   (0x0088)  
	FSlateBrush                                        NormalHovered;                                              // 0x0140   (0x0088)  
	FSlateBrush                                        NormalPressed;                                              // 0x01C8   (0x0088)  
	FSlateBrush                                        SelectedBase;                                               // 0x0250   (0x0088)  
	FSlateBrush                                        SelectedHovered;                                            // 0x02D8   (0x0088)  
	FSlateBrush                                        SelectedPressed;                                            // 0x0360   (0x0088)  
	FSlateBrush                                        Disabled;                                                   // 0x03E8   (0x0088)  
	FMargin                                            ButtonPadding;                                              // 0x0470   (0x0010)  
	FMargin                                            CustomPadding;                                              // 0x0480   (0x0010)  
	int32_t                                            MinWidth;                                                   // 0x0490   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x0494   (0x0004)  
	class UClass*                                      NormalTextStyle;                                            // 0x0498   (0x0008)  
	class UClass*                                      NormalHoveredTextStyle;                                     // 0x04A0   (0x0008)  
	class UClass*                                      NormalPressedTextStyle;                                     // 0x04A8   (0x0008)  
	class UClass*                                      SelectedTextStyle;                                          // 0x04B0   (0x0008)  
	class UClass*                                      SelectedHoveredTextStyle;                                   // 0x04B8   (0x0008)  
	class UClass*                                      SelectedPressedTextStyle;                                   // 0x04C0   (0x0008)  
	class UClass*                                      DisabledTextStyle;                                          // 0x04C8   (0x0008)  
	FSlateSound                                        PressedSlateSound;                                          // 0x04D0   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedPressedSlateSound;                                  // 0x04E8   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               DisabledPressedSlateSound;                                  // 0x0508   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0528   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedHoveredSlateSound;                                  // 0x0540   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               DisabledHoveredSlateSound;                                  // 0x0560   (0x0020)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// class UCommonTextStyle* GetSelectedTextStyle();                                                                          // [0x1768060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedTextStyle
	// class UCommonTextStyle* GetSelectedPressedTextStyle();                                                                   // [0x1768030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x1767f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// class UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                   // [0x1767ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x1767de0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x1767cd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// class UCommonTextStyle* GetNormalTextStyle();                                                                            // [0x1767c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedTextStyle
	// class UCommonTextStyle* GetNormalPressedTextStyle();                                                                     // [0x1767c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x1767b30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// class UCommonTextStyle* GetNormalHoveredTextStyle();                                                                     // [0x1767b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x17679f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x17678e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x17677d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// class UCommonTextStyle* GetDisabledTextStyle();                                                                          // [0x1767490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x1767380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x17672e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x1767090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0060 (96 bytes) (0x000428 - 0x000488) align 8 pad: 0x0000
class UCommonButtonInternalBase : public UButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0428   (0x0010)  MISSED
	SDK_UNDEFINED(16,530) /* FMulticastInlineDelegate */ __um(OnDoubleClicked);                                    // 0x0438   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0448   (0x0010)  MISSED
	int32_t                                            MinWidth;                                                   // 0x0458   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x045C   (0x0004)  
	bool                                               bButtonEnabled;                                             // 0x0460   (0x0001)  
	bool                                               bInteractionEnabled;                                        // 0x0461   (0x0001)  
	unsigned char                                      UnknownData02_7[0x26];                                      // 0x0462   (0x0026)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UCommonWidgetGroupBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveWidget
	// void RemoveWidget(class UWidget* InWidget);                                                                              // [0x1773ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                        // [0x1773b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(class UWidget* InWidget);                                                                                 // [0x1773580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x000110) align 8 pad: 0x0000
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
public:
	SDK_UNDEFINED(16,531) /* FMulticastInlineDelegate */ __um(OnSelectedButtonBaseChanged);                        // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,532) /* FMulticastInlineDelegate */ __um(OnHoveredButtonBaseChanged);                         // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0060   (0x0018)  MISSED
	SDK_UNDEFINED(16,533) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                                // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	SDK_UNDEFINED(16,534) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                          // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x00B0   (0x0018)  MISSED
	SDK_UNDEFINED(16,535) /* FMulticastInlineDelegate */ __um(OnSelectionCleared);                                 // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               bSelectionRequired;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData05_7[0x1F];                                      // 0x00F1   (0x001F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	// void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x176d4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x176c650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                                  // [0x176c5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex);                                                                           // [0x176c530] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);                                 // [0x176c340] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);                                               // [0x176c2b0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);                                                     // [0x176c220] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);                                                         // [0x176c190] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);                                                           // [0x176c100] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	// bool HasAnyButtons();                                                                                                    // [0x176bd90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                        // [0x176bbd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// class UCommonButtonBase* GetSelectedButtonBase();                                                                        // [0x176bba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// int32_t GetHoveredButtonIndex();                                                                                         // [0x176bab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	// int32_t GetButtonCount();                                                                                                // [0x176ba20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                            // [0x176b980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	// int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);                                                          // [0x176b8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	// void DeselectAll();                                                                                                      // [0x176b8c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonCarousel
/// Size: 0x00D8 (216 bytes) (0x000288 - 0x000360) align 8 pad: 0x0000
class UCommonCarousel : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,536) /* FMulticastInlineDelegate */ __um(OnNextHandled);                                      // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,537) /* FMulticastInlineDelegate */ __um(OnPreviousHandled);                                  // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,538) /* FMulticastInlineDelegate */ __um(OnOptionSelected);                                   // 0x02A8   (0x0010)  
	FDataTableRowHandle                                NextOptionInputActionData;                                  // 0x02B8   (0x0010)  
	FDataTableRowHandle                                PreviousOptionInputActionData;                              // 0x02C8   (0x0010)  
	bool                                               bAutoListenForInput;                                        // 0x02D8   (0x0001)  
	bool                                               bAllowWrap;                                                 // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x02DA   (0x0002)  MISSED
	FName                                              DefaultSelection;                                           // 0x02DC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
	SDK_UNDEFINED(80,539) /* TMap<FName, FText> */     __um(OptionMap);                                            // 0x02E8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0338   (0x0008)  MISSED
	TArray<FName>                                      OptionIDs;                                                  // 0x0340   (0x0010)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0350   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonCarousel.SetSelection
	// void SetSelection(FName OptionNameID);                                                                                   // [0x176d430] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.SetOptions
	// void SetOptions(TMap<FName, FText> NewOptions);                                                                          // [0x176d270] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.SetOptionLabelTextByID
	// void SetOptionLabelTextByID(FName OptionNameID, FText NewLabelText);                                                     // [0x176d140] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0x176ced0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.RemoveOption
	// void RemoveOption(FName OptionNameID);                                                                                   // [0x176c4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.OptionSelected
	// void OptionSelected(FName OptionNameID);                                                                                 // [0x176c410] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonCarousel.OnPreviousHandled__DelegateSignature
	// void OnPreviousHandled__DelegateSignature(FName OptionID);                                                               // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonCarousel.OnOptionSelected__DelegateSignature
	// void OnOptionSelected__DelegateSignature(FName OptionID);                                                                // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonCarousel.OnNextHandled__DelegateSignature
	// void OnNextHandled__DelegateSignature(FName OptionID);                                                                   // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonCarousel.NavigatePrevTerminated
	// void NavigatePrevTerminated(bool Terminated);                                                                            // [0x176c070] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonCarousel.NavigateNextTerminated
	// void NavigateNextTerminated(bool Terminated);                                                                            // [0x176bfe0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonCarousel.HandlePreviousInputAction
	// void HandlePreviousInputAction(bool& bPassThrough);                                                                      // [0x176bd00] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.HandleNextInputAction
	// void HandleNextInputAction(bool& bPassThrough);                                                                          // [0x176bc70] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.GetSelection
	// FName GetSelection();                                                                                                    // [0x176bc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonCarousel.GetOptionCount
	// int32_t GetOptionCount();                                                                                                // [0x176bb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonCarousel.GetOptionAtIndex
	// FName GetOptionAtIndex(int32_t Index);                                                                                   // [0x176bae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonCarousel.ClearOptions
	// void ClearOptions();                                                                                                     // [0x176b8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonCarousel.AddOption
	// void AddOption(FName OptionNameID, FText LabelText, bool DefaultSelection);                                              // [0x176b5f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (16 bytes) (0x000270 - 0x000280) align 8 pad: 0x0000
class UCommonCustomNavigation : public UBorder
{ 
public:
	SDK_UNDEFINED(16,540) /* FDelegateProperty */      __um(OnNavigationEvent);                                    // 0x0270   (0x0010)  
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0028 (40 bytes) (0x0002C0 - 0x0002E8) align 8 pad: 0x0000
class UCommonTextBlock : public UTextBlock
{ 
public:
	class UClass*                                      Style;                                                      // 0x02C0   (0x0008)  
	class UClass*                                      ScrollStyle;                                                // 0x02C8   (0x0008)  
	bool                                               bDisplayAllCaps;                                            // 0x02D0   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x02D2   (0x0002)  MISSED
	float                                              MobileFontSizeMultiplier;                                   // 0x02D4   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x02D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x1772090] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	// void SetTextCase(bool bUseAllCaps);                                                                                      // [0x1772000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x1771d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                                 // [0x1771af0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0040 (64 bytes) (0x0002E8 - 0x000328) align 8 pad: 0x0000
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x02E8   (0x0040)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                             // [0x176d550] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);                                // [0x176cb20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                                 // [0x176c9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                                 // [0x176ba70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0040 (64 bytes) (0x000360 - 0x0003A0) align 8 pad: 0x0000
class UCommonGameViewportClient : public UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0360   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0000 (0 bytes) (0x000880 - 0x000880) align 8 pad: 0x0000
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x00C8 (200 bytes) (0x000210 - 0x0002D8) align 8 pad: 0x0000
class UCommonLazyImage : public UImage
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0210   (0x0088)  
	FName                                              MaterialTextureParamName;                                   // 0x0298   (0x0008)  
	SDK_UNDEFINED(16,541) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                           // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x02B0   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0x176d030] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0x176c8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0x176c7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0x176c6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                        // [0x176bf50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000210) align 8 pad: 0x0000
class UCommonLazyWidget : public UWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0108   (0x0088)  
	class UUserWidget*                                 Content;                                                    // 0x0190   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0198   (0x0028)  MISSED
	SDK_UNDEFINED(16,542) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                           // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x01D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	// void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget);                                                                 // [0x176cdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	// bool IsLoading();                                                                                                        // [0x176bf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	// class UUserWidget* GetContent();                                                                                         // [0x176ba50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0000 (0 bytes) (0x000368 - 0x000368) align 8 pad: 0x0000
class UCommonListView : public UListView
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonListView.SetEntrySpacing
	// void SetEntrySpacing(float InEntrySpacing);                                                                              // [0x176cc30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class ULoadGuardSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x176d5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x176d3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x176ccb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0110 (272 bytes) (0x000120 - 0x000230) align 8 pad: 0x0000
class UCommonLoadGuard : public UContentWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0120   (0x0088)  
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                          // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A9   (0x0003)  MISSED
	FMargin                                            ThrobberPadding;                                            // 0x01AC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FText                                              LoadingText;                                                // 0x01C0   (0x0018)  
	class UClass*                                      TextStyle;                                                  // 0x01D8   (0x0008)  
	SDK_UNDEFINED(16,543) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                           // 0x01E0   (0x0010)  
	FSoftObjectPath                                    SpinnerMaterialPath;                                        // 0x01F0   (0x0018)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0208   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                               // [0x176cf60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                    // [0x176cd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Object);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                        // [0x176bfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0x176b770] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FCommonNumberFormattingOptions
{ 
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                               // 0x0000   (0x0001)  
	bool                                               UseGrouping;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (160 bytes) (0x0002E8 - 0x000388) align 8 pad: 0x0000
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
public:
	SDK_UNDEFINED(16,544) /* FMulticastInlineDelegate */ __um(OnInterpolationStartedEvent);                        // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,545) /* FMulticastInlineDelegate */ __um(OnInterpolationUpdatedEvent);                        // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,546) /* FMulticastInlineDelegate */ __um(OnOutroEvent);                                       // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,547) /* FMulticastInlineDelegate */ __um(OnInterpolationEndedEvent);                          // 0x0318   (0x0010)  
	float                                              CurrentNumericValue;                                        // 0x0328   (0x0004)  
	ECommonNumericType                                 NumericType;                                                // 0x032C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x032D   (0x0003)  MISSED
	FCommonNumberFormattingOptions                     FormattingSpecification;                                    // 0x0330   (0x0014)  
	float                                              EaseOutInterpolationExponent;                               // 0x0344   (0x0004)  
	float                                              InterpolationUpdateInterval;                                // 0x0348   (0x0004)  
	float                                              PostInterpolationShrinkDuration;                            // 0x034C   (0x0004)  
	bool                                               PerformSizeInterpolation;                                   // 0x0350   (0x0001)  
	bool                                               IsPercentage;                                               // 0x0351   (0x0001)  
	unsigned char                                      UnknownData01_7[0x36];                                      // 0x0352   (0x0036)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x176d0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                    // [0x176caa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                                        // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                         // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);        // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                      // [0x176bf20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x176bdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                                  // [0x176bc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UCommonPoolableWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// void OnReleaseToPool();                                                                                                  // [0x1771790] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                                // [0x1771770] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0038 (56 bytes) (0x000678 - 0x0006B0) align 8 pad: 0x0000
class UCommonRichTextBlock : public URichTextBlock
{ 
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                      // 0x0678   (0x0001)  
	bool                                               bTintInlineIcon;                                            // 0x0679   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x067A   (0x0006)  MISSED
	class UClass*                                      DefaultTextStyleOverrideClass;                              // 0x0680   (0x0008)  
	float                                              MobileTextBlockScale;                                       // 0x0688   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x068C   (0x0004)  MISSED
	class UClass*                                      ScrollStyle;                                                // 0x0690   (0x0008)  
	bool                                               bDisplayAllCaps;                                            // 0x0698   (0x0001)  
	unsigned char                                      UnknownData02_7[0x17];                                      // 0x0699   (0x0017)  MISSED
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0058 (88 bytes) (0x000BC0 - 0x000C18) align 8 pad: 0x0000
class UCommonRotator : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0BC0   (0x0010)  MISSED
	SDK_UNDEFINED(16,548) /* FMulticastInlineDelegate */ __um(OnRotated);                                          // 0x0BD0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0BE0   (0x0018)  MISSED
	class UCommonTextBlock*                            MyText;                                                     // 0x0BF8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0C00   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                   // [0x1772140] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                    // [0x1772120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                   // [0x1771c70] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x17717b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x1770fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x1770f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	// void BP_OnOptionsPopulated(int32_t Count);                                                                               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	// void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x00D0 (208 bytes) (0x000288 - 0x000358) align 8 pad: 0x0000
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,549) /* FMulticastInlineDelegate */ __um(OnTabSelected);                                      // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,550) /* FMulticastInlineDelegate */ __um(OnTabButtonCreation);                                // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,551) /* FMulticastInlineDelegate */ __um(OnTabButtonRemoval);                                 // 0x02A8   (0x0010)  
	FDataTableRowHandle                                NextTabInputActionData;                                     // 0x02B8   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputActionData;                                 // 0x02C8   (0x0010)  
	bool                                               bAutoListenForInput;                                        // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02D9   (0x0003)  MISSED
	SDK_UNDEFINED(8,552) /* TWeakObjectPtr<UCommonAnimatedSwitcher*> */ __um(LinkedSwitcher);                      // 0x02DC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
	class UCommonButtonGroupBase*                      TabButtonGroup;                                             // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02F0   (0x0008)  MISSED
	SDK_UNDEFINED(80,553) /* TMap<FName, FCommonRegisteredTabInfo> */ __um(RegisteredTabsByID);                    // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0348   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x1771f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x1771e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x1771d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0x176ced0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);                                                   // [0x1771be0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x1771b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                         // [0x1771a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                    // [0x1771a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	// bool RegisterTab(FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);                         // [0x1771920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabId);                                                                      // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// void OnTabButtonRemoval__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);                             // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// void OnTabButtonCreation__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);                            // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);                                              // [0x17716a0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);                                             // [0x17715d0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                           // [0x1771500] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x1771470] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x17713e0] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x1771350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	// int32_t GetTabCount();                                                                                                   // [0x1771320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                          // [0x1771280] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                                // [0x1770f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// class UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                      // [0x1770e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	// FName GetActiveTab();                                                                                                    // [0x1770af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x1770910] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0128 (296 bytes) (0x000028 - 0x000150) align 8 pad: 0x0000
class UCommonTextStyle : public UObject
{ 
public:
	FSlateFontInfo                                     Font;                                                       // 0x0028   (0x0058)  
	ETextTransformPolicy                               TransformPolicy;                                            // 0x0080   (0x0001)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0082   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0084   (0x0010)  
	bool                                               bUsesDropShadow;                                            // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x0098   (0x0008)  
	FLinearColor                                       ShadowColor;                                                // 0x00A0   (0x0010)  
	FMargin                                            Margin;                                                     // 0x00B0   (0x0010)  
	FSlateBrush                                        StrikeBrush;                                                // 0x00C0   (0x0088)  
	float                                              LineHeightPercentage;                                       // 0x0148   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x014C   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	// void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0x1771170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x17710e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x1771050] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                      // [0x1770eb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                         // [0x1770e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x1770ba0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                   // [0x1770b10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UCommonTextScrollStyle : public UObject
{ 
public:
	float                                              Speed;                                                      // 0x0028   (0x0004)  
	float                                              StartDelay;                                                 // 0x002C   (0x0004)  
	float                                              EndDelay;                                                   // 0x0030   (0x0004)  
	float                                              FadeInDelay;                                                // 0x0034   (0x0004)  
	float                                              FadeOutDelay;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0000 (0 bytes) (0x000388 - 0x000388) align 8 pad: 0x0000
class UCommonTileView : public UTileView
{ 
public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0000 (0 bytes) (0x0003C0 - 0x0003C0) align 8 pad: 0x0000
class UCommonTreeView : public UTreeView
{ 
public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x000100) align 8 pad: 0x0000
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0030   (0x00D0)  MISSED
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x0080 (128 bytes) (0x000028 - 0x0000A8) align 8 pad: 0x0000
class UCommonUIEditorSettings : public UObject
{ 
public:
	SDK_UNDEFINED(40,554) /* TWeakObjectPtr<UClass*> */ __um(TemplateTextStyle);                                   // 0x0028   (0x0028)  
	SDK_UNDEFINED(40,555) /* TWeakObjectPtr<UClass*> */ __um(TemplateButtonStyle);                                 // 0x0050   (0x0028)  
	SDK_UNDEFINED(40,556) /* TWeakObjectPtr<UClass*> */ __um(TemplateBorderStyle);                                 // 0x0078   (0x0028)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 4 pad: 0x0000
struct FUITag : FGameplayTag
{ 
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 4 pad: 0x0000
struct FUIActionTag : FUITag
{ 
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FUIActionKeyMapping
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	float                                              HoldTime;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FUIInputAction
{ 
	FUIActionTag                                       ActionTag;                                                  // 0x0000   (0x0008)  
	FText                                              DefaultDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FUIActionKeyMapping>                        KeyMappings;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FCommonAnalogCursorSettings
{ 
	int32_t                                            PreprocessorPriority;                                       // 0x0000   (0x0004)  
	bool                                               bEnableCursorAcceleration;                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CursorAcceleration;                                         // 0x0008   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x000C   (0x0004)  
	float                                              CursorDeadZone;                                             // 0x0010   (0x0004)  
	float                                              HoverSlowdownFactor;                                        // 0x0014   (0x0004)  
	float                                              ScrollDeadZone;                                             // 0x0018   (0x0004)  
	float                                              ScrollUpdatePeriod;                                         // 0x001C   (0x0004)  
	float                                              ScrollMultiplier;                                           // 0x0020   (0x0004)  
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UCommonUIInputSettings : public UObject
{ 
public:
	bool                                               bLinkCursorToGamepadFocus;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UIActionProcessingPriority;                                 // 0x002C   (0x0004)  
	TArray<FUIInputAction>                             InputActions;                                               // 0x0030   (0x0010)  
	TArray<FUIInputAction>                             ActionOverrides;                                            // 0x0040   (0x0010)  
	FCommonAnalogCursorSettings                        AnalogCursorSettings;                                       // 0x0050   (0x0024)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonUILibrary.FindParentWidgetOfType
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                                // [0x1770a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UCommonUIRichTextData : public UObject
{ 
public:
	class UDataTable*                                  InlineIconSet;                                              // 0x0028   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x0128 (296 bytes) (0x000028 - 0x000150) align 8 pad: 0x0000
class UCommonUISettings : public UObject
{ 
public:
	bool                                               bAutoLoadData;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(40,557) /* TWeakObjectPtr<UObject*> */ __um(DefaultImageResourceObject);                         // 0x0030   (0x0028)  
	SDK_UNDEFINED(40,558) /* TWeakObjectPtr<UMaterialInterface*> */ __um(DefaultThrobberMaterial);                 // 0x0058   (0x0028)  
	SDK_UNDEFINED(40,559) /* TWeakObjectPtr<UClass*> */ __um(DefaultRichTextDataClass);                            // 0x0080   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class UObject*                                     DefaultImageResourceObjectInstance;                         // 0x00B0   (0x0008)  
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                            // 0x00B8   (0x0008)  
	FSlateBrush                                        DefaultThrobberBrush;                                       // 0x00C0   (0x0088)  
	class UCommonUIRichTextData*                       RichTextDataInstance;                                       // 0x0148   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // [0x1770c70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000218) align 8 pad: 0x0000
class UCommonVideoPlayer : public UWidget
{ 
public:
	class UMediaSource*                                Video;                                                      // 0x0108   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0110   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0118   (0x0008)  
	class UMaterial*                                   VideoMaterial;                                              // 0x0120   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x0128   (0x0008)  
	FSlateBrush                                        VideoBrush;                                                 // 0x0130   (0x0088)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x01B8   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (40 bytes) (0x000130 - 0x000158) align 8 pad: 0x0000
class UCommonVisibilitySwitcher : public UOverlay
{ 
public:
	ESlateVisibility                                   ShownVisibility;                                            // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	int32_t                                            ActiveWidgetIndex;                                          // 0x0134   (0x0004)  
	bool                                               bAutoActivateSlot;                                          // 0x0138   (0x0001)  
	bool                                               bActivateFirstSlotOnAdding;                                 // 0x0139   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1E];                                      // 0x013A   (0x001E)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x1773d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x1773c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x1773ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x1773790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                        // [0x1773760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x17736b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// void DeactivateVisibleSlot();                                                                                            // [0x1773690] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// void ActivateVisibleSlot();                                                                                              // [0x1773560] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0010 (16 bytes) (0x000058 - 0x000068) align 8 pad: 0x0000
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilityWidgetBase
/// Size: 0x0058 (88 bytes) (0x000290 - 0x0002E8) align 8 pad: 0x0000
class UCommonVisibilityWidgetBase : public UCommonBorder
{ 
public:
	SDK_UNDEFINED(80,560) /* TMap<FName, bool> */      __um(VisibilityControls);                                   // 0x0290   (0x0050)  
	bool                                               bShowForGamepad;                                            // 0x02E0   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x02E1   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x02E2   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x02E3   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x02E5   (0x0003)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms
	// TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x17737e0] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0018 (24 bytes) (0x000158 - 0x000170) align 8 pad: 0x0000
class UCommonVisualAttachment : public USizeBox
{ 
public:
	FVector2D                                          ContentAnchor;                                              // 0x0158   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0040 (64 bytes) (0x000120 - 0x000160) align 8 pad: 0x0000
class UCommonWidgetCarousel : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	SDK_UNDEFINED(16,561) /* FMulticastInlineDelegate */ __um(OnCurrentPageIndexChanged);                          // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0138   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x1773de0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x1773cc0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x1773b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                         // [0x1773b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                          // [0x1773870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x17737b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                                 // [0x1773740] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x1773610] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (72 bytes) (0x000108 - 0x000150) align 8 pad: 0x0000
class UCommonWidgetCarouselNavBar : public UWidget
{ 
public:
	class UClass*                                      ButtonWidgetType;                                           // 0x0108   (0x0008)  
	FMargin                                            ButtonPadding;                                              // 0x0110   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0120   (0x0010)  MISSED
	class UCommonWidgetCarousel*                       LinkedCarousel;                                             // 0x0130   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup;                                                // 0x0138   (0x0008)  
	TArray<class UCommonButtonBase*>                   Buttons;                                                    // 0x0140   (0x0010)  


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);                                                     // [0x1773f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                  // [0x17739e0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                // [0x1773910] Final|Native|Protected 
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FCommonRegisteredTabInfo
{ 
	int32_t                                            TabIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UCommonButtonBase*                           TabButton;                                                  // 0x0008   (0x0008)  
	class UWidget*                                     ContentInstance;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FCommonInputActionHandlerData
{ 
	FDataTableRowHandle                                InputActionRow;                                             // 0x0000   (0x0010)  
	EInputActionState                                  State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000050) align 8 pad: 0x0000
struct FRichTextIconData : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(40,562) /* TWeakObjectPtr<UObject*> */ __um(ResourceObject);                                     // 0x0020   (0x0028)  
	FVector2D                                          ImageSize;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 pad: 0x0000
struct FCommonInputTypeInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	EInputActionState                                  OverrrideState;                                             // 0x0018   (0x0001)  
	bool                                               bActionRequiresHold;                                        // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HoldTime;                                                   // 0x001C   (0x0004)  
	FSlateBrush                                        OverrideBrush;                                              // 0x0020   (0x0088)  
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0278 (632 bytes) (0x000008 - 0x000280) align 8 pad: 0x0000
struct FCommonInputActionDataBase : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FText                                              HoldDisplayName;                                            // 0x0020   (0x0018)  
	FCommonInputTypeInfo                               KeyboardInputTypeInfo;                                      // 0x0038   (0x00A8)  
	FCommonInputTypeInfo                               DefaultGamepadInputTypeInfo;                                // 0x00E0   (0x00A8)  
	SDK_UNDEFINED(80,563) /* TMap<FName, FCommonInputTypeInfo> */ __um(GamepadInputOverrides);                     // 0x0188   (0x0050)  
	FCommonInputTypeInfo                               TouchInputTypeInfo;                                         // 0x01D8   (0x00A8)  
};

static_assert(sizeof(UAnalogSlider) == 0x0518); // 1304 bytes (0x0004F8 - 0x000518)
static_assert(sizeof(UCommonActionHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonActionWidget) == 0x0320); // 800 bytes (0x000108 - 0x000320)
static_assert(sizeof(UCommonUserWidget) == 0x0288); // 648 bytes (0x000260 - 0x000288)
static_assert(sizeof(UCommonActivatableWidget) == 0x0320); // 800 bytes (0x000288 - 0x000320)
static_assert(sizeof(UCommonActivatableWidgetContainerBase) == 0x0208); // 520 bytes (0x000108 - 0x000208)
static_assert(sizeof(UCommonActivatableWidgetStack) == 0x0218); // 536 bytes (0x000208 - 0x000218)
static_assert(sizeof(UCommonActivatableWidgetQueue) == 0x0208); // 520 bytes (0x000208 - 0x000208)
static_assert(sizeof(UCommonAnimatedSwitcher) == 0x0190); // 400 bytes (0x000138 - 0x000190)
static_assert(sizeof(UCommonActivatableWidgetSwitcher) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(UCommonBorderStyle) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UCommonBorder) == 0x0290); // 656 bytes (0x000270 - 0x000290)
static_assert(sizeof(UCommonBoundActionBar) == 0x01E8); // 488 bytes (0x0001D8 - 0x0001E8)
static_assert(sizeof(UCommonButtonBase) == 0x0BC0); // 3008 bytes (0x000288 - 0x000BC0)
static_assert(sizeof(UCommonBoundActionButton) == 0x0BD0); // 3024 bytes (0x000BC0 - 0x000BD0)
static_assert(sizeof(FCommonButtonStyleOptionalSlateSound) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UCommonButtonStyle) == 0x0580); // 1408 bytes (0x000028 - 0x000580)
static_assert(sizeof(UCommonButtonInternalBase) == 0x0488); // 1160 bytes (0x000428 - 0x000488)
static_assert(sizeof(UCommonWidgetGroupBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonButtonGroupBase) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UCommonCarousel) == 0x0360); // 864 bytes (0x000288 - 0x000360)
static_assert(sizeof(UCommonCustomNavigation) == 0x0280); // 640 bytes (0x000270 - 0x000280)
static_assert(sizeof(UCommonTextBlock) == 0x02E8); // 744 bytes (0x0002C0 - 0x0002E8)
static_assert(sizeof(UCommonDateTimeTextBlock) == 0x0328); // 808 bytes (0x0002E8 - 0x000328)
static_assert(sizeof(UCommonGameViewportClient) == 0x03A0); // 928 bytes (0x000360 - 0x0003A0)
static_assert(sizeof(UCommonHierarchicalScrollBox) == 0x0880); // 2176 bytes (0x000880 - 0x000880)
static_assert(sizeof(UCommonLazyImage) == 0x02D8); // 728 bytes (0x000210 - 0x0002D8)
static_assert(sizeof(UCommonLazyWidget) == 0x0210); // 528 bytes (0x000108 - 0x000210)
static_assert(sizeof(UCommonListView) == 0x0368); // 872 bytes (0x000368 - 0x000368)
static_assert(sizeof(ULoadGuardSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UCommonLoadGuard) == 0x0230); // 560 bytes (0x000120 - 0x000230)
static_assert(sizeof(FCommonNumberFormattingOptions) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UCommonNumericTextBlock) == 0x0388); // 904 bytes (0x0002E8 - 0x000388)
static_assert(sizeof(UCommonPoolableWidgetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonRichTextBlock) == 0x06B0); // 1712 bytes (0x000678 - 0x0006B0)
static_assert(sizeof(UCommonRotator) == 0x0C18); // 3096 bytes (0x000BC0 - 0x000C18)
static_assert(sizeof(UCommonTabListWidgetBase) == 0x0358); // 856 bytes (0x000288 - 0x000358)
static_assert(sizeof(UCommonTextStyle) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(UCommonTextScrollStyle) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UCommonTileView) == 0x0388); // 904 bytes (0x000388 - 0x000388)
static_assert(sizeof(UCommonTreeView) == 0x03C0); // 960 bytes (0x0003C0 - 0x0003C0)
static_assert(sizeof(UCommonUIActionRouterBase) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(UCommonUIEditorSettings) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FUITag) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FUIActionTag) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FUIActionKeyMapping) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUIInputAction) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FCommonAnalogCursorSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UCommonUIInputSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UCommonUILibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonUIRichTextData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCommonUISettings) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(UCommonUISubsystemBase) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCommonVideoPlayer) == 0x0218); // 536 bytes (0x000108 - 0x000218)
static_assert(sizeof(UCommonVisibilitySwitcher) == 0x0158); // 344 bytes (0x000130 - 0x000158)
static_assert(sizeof(UCommonVisibilitySwitcherSlot) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UCommonVisibilityWidgetBase) == 0x02E8); // 744 bytes (0x000290 - 0x0002E8)
static_assert(sizeof(UCommonVisualAttachment) == 0x0170); // 368 bytes (0x000158 - 0x000170)
static_assert(sizeof(UCommonWidgetCarousel) == 0x0160); // 352 bytes (0x000120 - 0x000160)
static_assert(sizeof(UCommonWidgetCarouselNavBar) == 0x0150); // 336 bytes (0x000108 - 0x000150)
static_assert(sizeof(FCommonRegisteredTabInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCommonInputActionHandlerData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRichTextIconData) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FCommonInputTypeInfo) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FCommonInputActionDataBase) == 0x0280); // 640 bytes (0x000008 - 0x000280)
static_assert(offsetof(UCommonActionWidget, ProgressMaterialBrush) == 0x0118);
static_assert(offsetof(UCommonActionWidget, ProgressMaterialParam) == 0x01A0);
static_assert(offsetof(UCommonActionWidget, IconRimBrush) == 0x01A8);
static_assert(offsetof(UCommonActionWidget, InputActions) == 0x0230);
static_assert(offsetof(UCommonActionWidget, ProgressDynamicMaterial) == 0x0248);
static_assert(offsetof(UCommonActivatableWidget, ActivatedVisibility) == 0x028E);
static_assert(offsetof(UCommonActivatableWidget, DeactivatedVisibility) == 0x0290);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionType) == 0x0108);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionCurveType) == 0x0109);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, WidgetList) == 0x0110);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, DisplayedWidget) == 0x0120);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, GeneratedWidgetsPool) == 0x0128);
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidgetClass) == 0x0208);
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidget) == 0x0210);
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionType) == 0x0150);
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionCurveType) == 0x0151);
static_assert(offsetof(UCommonBorderStyle, Background) == 0x0028);
static_assert(offsetof(UCommonBorder, Style) == 0x0270);
static_assert(offsetof(UCommonBorder, MinimumPadding) == 0x027C);
static_assert(offsetof(UCommonBoundActionBar, ActionButtonClass) == 0x01D8);
static_assert(offsetof(UCommonButtonBase, Style) == 0x0290);
static_assert(offsetof(UCommonButtonBase, PressedSlateSoundOverride) == 0x02A0);
static_assert(offsetof(UCommonButtonBase, HoveredSlateSoundOverride) == 0x02B8);
static_assert(offsetof(UCommonButtonBase, ClickMethod) == 0x02D2);
static_assert(offsetof(UCommonButtonBase, TouchMethod) == 0x02D3);
static_assert(offsetof(UCommonButtonBase, PressMethod) == 0x02D4);
static_assert(offsetof(UCommonButtonBase, TriggeringInputAction) == 0x02E0);
static_assert(offsetof(UCommonButtonBase, InputModeOverride) == 0x0375);
static_assert(offsetof(UCommonButtonBase, SingleMaterialStyleMID) == 0x03A8);
static_assert(offsetof(UCommonButtonBase, NormalStyle) == 0x03B0);
static_assert(offsetof(UCommonButtonBase, SelectedStyle) == 0x0628);
static_assert(offsetof(UCommonButtonBase, DisabledStyle) == 0x08A0);
static_assert(offsetof(UCommonButtonBase, InputActionWidget) == 0x0BB8);
static_assert(offsetof(UCommonBoundActionButton, Text_ActionName) == 0x0BC0);
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, Sound) == 0x0008);
static_assert(offsetof(UCommonButtonStyle, SingleMaterialBrush) == 0x0030);
static_assert(offsetof(UCommonButtonStyle, NormalBase) == 0x00B8);
static_assert(offsetof(UCommonButtonStyle, NormalHovered) == 0x0140);
static_assert(offsetof(UCommonButtonStyle, NormalPressed) == 0x01C8);
static_assert(offsetof(UCommonButtonStyle, SelectedBase) == 0x0250);
static_assert(offsetof(UCommonButtonStyle, SelectedHovered) == 0x02D8);
static_assert(offsetof(UCommonButtonStyle, SelectedPressed) == 0x0360);
static_assert(offsetof(UCommonButtonStyle, Disabled) == 0x03E8);
static_assert(offsetof(UCommonButtonStyle, ButtonPadding) == 0x0470);
static_assert(offsetof(UCommonButtonStyle, CustomPadding) == 0x0480);
static_assert(offsetof(UCommonButtonStyle, NormalTextStyle) == 0x0498);
static_assert(offsetof(UCommonButtonStyle, NormalHoveredTextStyle) == 0x04A0);
static_assert(offsetof(UCommonButtonStyle, NormalPressedTextStyle) == 0x04A8);
static_assert(offsetof(UCommonButtonStyle, SelectedTextStyle) == 0x04B0);
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredTextStyle) == 0x04B8);
static_assert(offsetof(UCommonButtonStyle, SelectedPressedTextStyle) == 0x04C0);
static_assert(offsetof(UCommonButtonStyle, DisabledTextStyle) == 0x04C8);
static_assert(offsetof(UCommonButtonStyle, PressedSlateSound) == 0x04D0);
static_assert(offsetof(UCommonButtonStyle, SelectedPressedSlateSound) == 0x04E8);
static_assert(offsetof(UCommonButtonStyle, DisabledPressedSlateSound) == 0x0508);
static_assert(offsetof(UCommonButtonStyle, HoveredSlateSound) == 0x0528);
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredSlateSound) == 0x0540);
static_assert(offsetof(UCommonButtonStyle, DisabledHoveredSlateSound) == 0x0560);
static_assert(offsetof(UCommonCarousel, NextOptionInputActionData) == 0x02B8);
static_assert(offsetof(UCommonCarousel, PreviousOptionInputActionData) == 0x02C8);
static_assert(offsetof(UCommonCarousel, DefaultSelection) == 0x02DC);
static_assert(offsetof(UCommonCarousel, OptionIDs) == 0x0340);
static_assert(offsetof(UCommonTextBlock, Style) == 0x02C0);
static_assert(offsetof(UCommonTextBlock, ScrollStyle) == 0x02C8);
static_assert(offsetof(UCommonLazyImage, LoadingBackgroundBrush) == 0x0210);
static_assert(offsetof(UCommonLazyImage, MaterialTextureParamName) == 0x0298);
static_assert(offsetof(UCommonLazyWidget, LoadingBackgroundBrush) == 0x0108);
static_assert(offsetof(UCommonLazyWidget, Content) == 0x0190);
static_assert(offsetof(ULoadGuardSlot, Padding) == 0x0038);
static_assert(offsetof(ULoadGuardSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(ULoadGuardSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UCommonLoadGuard, LoadingBackgroundBrush) == 0x0120);
static_assert(offsetof(UCommonLoadGuard, ThrobberAlignment) == 0x01A8);
static_assert(offsetof(UCommonLoadGuard, ThrobberPadding) == 0x01AC);
static_assert(offsetof(UCommonLoadGuard, LoadingText) == 0x01C0);
static_assert(offsetof(UCommonLoadGuard, TextStyle) == 0x01D8);
static_assert(offsetof(UCommonLoadGuard, SpinnerMaterialPath) == 0x01F0);
static_assert(offsetof(FCommonNumberFormattingOptions, RoundingMode) == 0x0000);
static_assert(offsetof(UCommonNumericTextBlock, NumericType) == 0x032C);
static_assert(offsetof(UCommonNumericTextBlock, FormattingSpecification) == 0x0330);
static_assert(offsetof(UCommonRichTextBlock, InlineIconDisplayMode) == 0x0678);
static_assert(offsetof(UCommonRichTextBlock, DefaultTextStyleOverrideClass) == 0x0680);
static_assert(offsetof(UCommonRichTextBlock, ScrollStyle) == 0x0690);
static_assert(offsetof(UCommonRotator, MyText) == 0x0BF8);
static_assert(offsetof(UCommonTabListWidgetBase, NextTabInputActionData) == 0x02B8);
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabInputActionData) == 0x02C8);
static_assert(offsetof(UCommonTabListWidgetBase, TabButtonGroup) == 0x02E8);
static_assert(offsetof(UCommonTextStyle, Font) == 0x0028);
static_assert(offsetof(UCommonTextStyle, TransformPolicy) == 0x0080);
static_assert(offsetof(UCommonTextStyle, Justification) == 0x0081);
static_assert(offsetof(UCommonTextStyle, Color) == 0x0084);
static_assert(offsetof(UCommonTextStyle, ShadowOffset) == 0x0098);
static_assert(offsetof(UCommonTextStyle, ShadowColor) == 0x00A0);
static_assert(offsetof(UCommonTextStyle, Margin) == 0x00B0);
static_assert(offsetof(UCommonTextStyle, StrikeBrush) == 0x00C0);
static_assert(offsetof(FUIActionKeyMapping, Key) == 0x0000);
static_assert(offsetof(FUIInputAction, ActionTag) == 0x0000);
static_assert(offsetof(FUIInputAction, DefaultDisplayName) == 0x0008);
static_assert(offsetof(FUIInputAction, KeyMappings) == 0x0020);
static_assert(offsetof(UCommonUIInputSettings, InputActions) == 0x0030);
static_assert(offsetof(UCommonUIInputSettings, ActionOverrides) == 0x0040);
static_assert(offsetof(UCommonUIInputSettings, AnalogCursorSettings) == 0x0050);
static_assert(offsetof(UCommonUIRichTextData, InlineIconSet) == 0x0028);
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObjectInstance) == 0x00B0);
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterialInstance) == 0x00B8);
static_assert(offsetof(UCommonUISettings, DefaultThrobberBrush) == 0x00C0);
static_assert(offsetof(UCommonUISettings, RichTextDataInstance) == 0x0148);
static_assert(offsetof(UCommonVideoPlayer, Video) == 0x0108);
static_assert(offsetof(UCommonVideoPlayer, MediaPlayer) == 0x0110);
static_assert(offsetof(UCommonVideoPlayer, MediaTexture) == 0x0118);
static_assert(offsetof(UCommonVideoPlayer, VideoMaterial) == 0x0120);
static_assert(offsetof(UCommonVideoPlayer, SoundComponent) == 0x0128);
static_assert(offsetof(UCommonVideoPlayer, VideoBrush) == 0x0130);
static_assert(offsetof(UCommonVisibilitySwitcher, ShownVisibility) == 0x0130);
static_assert(offsetof(UCommonVisibilityWidgetBase, VisibleType) == 0x02E3);
static_assert(offsetof(UCommonVisibilityWidgetBase, HiddenType) == 0x02E4);
static_assert(offsetof(UCommonVisualAttachment, ContentAnchor) == 0x0158);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonWidgetType) == 0x0108);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonPadding) == 0x0110);
static_assert(offsetof(UCommonWidgetCarouselNavBar, LinkedCarousel) == 0x0130);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonGroup) == 0x0138);
static_assert(offsetof(UCommonWidgetCarouselNavBar, Buttons) == 0x0140);
static_assert(offsetof(FCommonRegisteredTabInfo, TabButton) == 0x0008);
static_assert(offsetof(FCommonRegisteredTabInfo, ContentInstance) == 0x0010);
static_assert(offsetof(FCommonInputActionHandlerData, InputActionRow) == 0x0000);
static_assert(offsetof(FCommonInputActionHandlerData, State) == 0x0010);
static_assert(offsetof(FRichTextIconData, DisplayName) == 0x0008);
static_assert(offsetof(FRichTextIconData, ImageSize) == 0x0048);
static_assert(offsetof(FCommonInputTypeInfo, Key) == 0x0000);
static_assert(offsetof(FCommonInputTypeInfo, OverrrideState) == 0x0018);
static_assert(offsetof(FCommonInputTypeInfo, OverrideBrush) == 0x0020);
static_assert(offsetof(FCommonInputActionDataBase, DisplayName) == 0x0008);
static_assert(offsetof(FCommonInputActionDataBase, HoldDisplayName) == 0x0020);
static_assert(offsetof(FCommonInputActionDataBase, KeyboardInputTypeInfo) == 0x0038);
static_assert(offsetof(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo) == 0x00E0);
static_assert(offsetof(FCommonInputActionDataBase, TouchInputTypeInfo) == 0x01D8);
