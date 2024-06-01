
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InputCore
/// dependency: SlateCore

/// Enum /Script/Slate.ETextJustify
/// Size: 0x01 (1 bytes)
enum class ETextJustify : uint8_t
{
	ETextJustify__Left                                                               = 0,
	ETextJustify__Center                                                             = 1,
	ETextJustify__Right                                                              = 2
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x01 (1 bytes)
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto                                                         = 0,
	ETextFlowDirection__LeftToRight                                                  = 1,
	ETextFlowDirection__RightToLeft                                                  = 2
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x01 (1 bytes)
enum class EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss                               = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept                                = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss                               = 2
};

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x01 (1 bytes)
enum class EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer                                        = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents                                        = 1
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x01 (1 bytes)
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping                                             = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping                                   = 1
};

/// Enum /Script/Slate.ETextTransformPolicy
/// Size: 0x01 (1 bytes)
enum class ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None                                                       = 0,
	ETextTransformPolicy__ToLower                                                    = 1,
	ETextTransformPolicy__ToUpper                                                    = 2
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x01 (1 bytes)
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List                                                             = 0,
	ETableViewMode__Tile                                                             = 1,
	ETableViewMode__Tree                                                             = 2
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x01 (1 bytes)
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None                                                             = 0,
	ESelectionMode__Single                                                           = 1,
	ESelectionMode__SingleToggle                                                     = 2,
	ESelectionMode__Multi                                                            = 3
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x01 (1 bytes)
enum class EMultiBlockType : uint8_t
{
	EMultiBlockType__None                                                            = 0,
	EMultiBlockType__ButtonRow                                                       = 1,
	EMultiBlockType__EditableText                                                    = 2,
	EMultiBlockType__Heading                                                         = 3,
	EMultiBlockType__MenuEntry                                                       = 4,
	EMultiBlockType__Separator                                                       = 5,
	EMultiBlockType__ToolBarButton                                                   = 6,
	EMultiBlockType__ToolBarComboButton                                              = 7,
	EMultiBlockType__Widget                                                          = 8
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x01 (1 bytes)
enum class EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar                                                           = 0,
	EMultiBoxType__ToolBar                                                           = 1,
	EMultiBoxType__VerticalToolBar                                                   = 2,
	EMultiBoxType__UniformToolBar                                                    = 3,
	EMultiBoxType__Menu                                                              = 4,
	EMultiBoxType__ButtonRow                                                         = 5
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x01 (1 bytes)
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight                                                = 0,
	EProgressBarFillType__RightToLeft                                                = 1,
	EProgressBarFillType__FillFromCenter                                             = 2,
	EProgressBarFillType__TopToBottom                                                = 3,
	EProgressBarFillType__BottomToTop                                                = 4
};

/// Enum /Script/Slate.EStretch
/// Size: 0x01 (1 bytes)
enum class EStretch : uint8_t
{
	EStretch__None                                                                   = 0,
	EStretch__Fill                                                                   = 1,
	EStretch__ScaleToFit                                                             = 2,
	EStretch__ScaleToFitX                                                            = 3,
	EStretch__ScaleToFitY                                                            = 4,
	EStretch__ScaleToFill                                                            = 5,
	EStretch__ScaleBySafeZone                                                        = 6,
	EStretch__UserSpecified                                                          = 7
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x01 (1 bytes)
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both                                                          = 0,
	EStretchDirection__DownOnly                                                      = 1,
	EStretchDirection__UpOnly                                                        = 2
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x01 (1 bytes)
enum class EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll                                                = 0,
	EScrollWhenFocusChanges__InstantScroll                                           = 1,
	EScrollWhenFocusChanges__AnimatedScroll                                          = 2
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x01 (1 bytes)
enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView                                           = 0,
	EDescendantScrollDestination__TopOrLeft                                          = 1,
	EDescendantScrollDestination__Center                                             = 2,
	EDescendantScrollDestination__BottomOrRight                                      = 3
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x01 (1 bytes)
enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed                                            = 0,
	EListItemAlignment__EvenlySize                                                   = 1,
	EListItemAlignment__EvenlyWide                                                   = 2,
	EListItemAlignment__LeftAligned                                                  = 3,
	EListItemAlignment__RightAligned                                                 = 4,
	EListItemAlignment__CenterAligned                                                = 5,
	EListItemAlignment__Fill                                                         = 6
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x04 (4 bytes)
enum class ECustomizedToolMenuVisibility : uint32_t
{
	ECustomizedToolMenuVisibility__None                                              = 0,
	ECustomizedToolMenuVisibility__Visible                                           = 1,
	ECustomizedToolMenuVisibility__Hidden                                            = 2
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x01 (1 bytes)
enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary                                                = 0,
	EMultipleKeyBindingIndex__Secondary                                              = 1,
	EMultipleKeyBindingIndex__NumChords                                              = 2
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x01 (1 bytes)
enum class EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None                                                   = 0,
	EUserInterfaceActionType__Button                                                 = 1,
	EUserInterfaceActionType__ToggleButton                                           = 2,
	EUserInterfaceActionType__RadioButton                                            = 3,
	EUserInterfaceActionType__Check                                                  = 4,
	EUserInterfaceActionType__CollapsedButton                                        = 5
};

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x0278 (632 bytes) (0x000030 - 0x0002A8) align 8 pad: 0x0000
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FButtonStyle                                       ButtonStyle;                                                // 0x0030   (0x0278)  
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0580 (1408 bytes) (0x000030 - 0x0005B0) align 8 pad: 0x0000
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0030   (0x0580)  
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x03F0 (1008 bytes) (0x000030 - 0x000420) align 8 pad: 0x0000
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0030   (0x03F0)  
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x03B8 (952 bytes) (0x000030 - 0x0003E8) align 8 pad: 0x0000
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0030   (0x03B8)  
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x07F8 (2040 bytes) (0x000030 - 0x000828) align 8 pad: 0x0000
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0030   (0x07F8)  
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0220 (544 bytes) (0x000030 - 0x000250) align 8 pad: 0x0000
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x0030   (0x0220)  
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x01A0 (416 bytes) (0x000030 - 0x0001D0) align 8 pad: 0x0000
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0030   (0x01A0)  
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x04D0 (1232 bytes) (0x000030 - 0x000500) align 8 pad: 0x0000
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0030   (0x04D0)  
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0228 (552 bytes) (0x000030 - 0x000258) align 8 pad: 0x0000
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0030   (0x0228)  
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class USlateSettings : public UObject
{ 
public:
	bool                                               bExplicitCanvasChildZOrder;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x02E8 (744 bytes) (0x000030 - 0x000318) align 8 pad: 0x0000
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0030   (0x02E8)  
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0270 (624 bytes) (0x000030 - 0x0002A0) align 8 pad: 0x0000
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTextBlockStyle                                    TextBlockStyle;                                             // 0x0030   (0x0270)  
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UToolMenuBase : public UObject
{ 
public:
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FVirtualKeyboardOptions
{ 
	bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FInputChord
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	bool                                               bShift : 1;                                                 // 0x0018:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0018:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0018:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0018:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FAnchors
{ 
	FVector2D                                          Minimum;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x01E8 (488 bytes) (0x000000 - 0x0001E8) align 8 pad: 0x0000
struct FCustomizedToolMenu
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,4) /* TMap<FName, FCustomizedToolMenuEntry> */ __um(Entries);                                 // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,5) /* TMap<FName, FCustomizedToolMenuSection> */ __um(Sections);                              // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,6) /* TMap<FName, FCustomizedToolMenuNameArray> */ __um(EntryOrder);                          // 0x00A8   (0x0050)  
	TArray<FName>                                      SectionOrder;                                               // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x0108   (0x00E0)  MISSED
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FCustomizedToolMenuNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FCustomizedToolMenuSection
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FCustomizedToolMenuEntry
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

static_assert(sizeof(UButtonWidgetStyle) == 0x02A8); // 680 bytes (0x000030 - 0x0002A8)
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x05B0); // 1456 bytes (0x000030 - 0x0005B0)
static_assert(sizeof(UComboBoxWidgetStyle) == 0x0420); // 1056 bytes (0x000030 - 0x000420)
static_assert(sizeof(UComboButtonWidgetStyle) == 0x03E8); // 1000 bytes (0x000030 - 0x0003E8)
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x0828); // 2088 bytes (0x000030 - 0x000828)
static_assert(sizeof(UEditableTextWidgetStyle) == 0x0250); // 592 bytes (0x000030 - 0x000250)
static_assert(sizeof(UProgressWidgetStyle) == 0x01D0); // 464 bytes (0x000030 - 0x0001D0)
static_assert(sizeof(UScrollBarWidgetStyle) == 0x0500); // 1280 bytes (0x000030 - 0x000500)
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x0258); // 600 bytes (0x000030 - 0x000258)
static_assert(sizeof(USlateSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USpinBoxWidgetStyle) == 0x0318); // 792 bytes (0x000030 - 0x000318)
static_assert(sizeof(UTextBlockWidgetStyle) == 0x02A0); // 672 bytes (0x000030 - 0x0002A0)
static_assert(sizeof(UToolMenuBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FVirtualKeyboardOptions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FInputChord) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnchors) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenu) == 0x01E8); // 488 bytes (0x000000 - 0x0001E8)
static_assert(sizeof(FCustomizedToolMenuNameArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenuSection) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuEntry) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x0030);
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x0030);
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x0030);
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x0030);
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x0030);
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x0030);
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x0030);
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x0030);
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x0030);
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x0030);
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x0030);
static_assert(offsetof(FInputChord, Key) == 0x0000);
static_assert(offsetof(FAnchors, Minimum) == 0x0000);
static_assert(offsetof(FAnchors, Maximum) == 0x0008);
static_assert(offsetof(FCustomizedToolMenu, Name) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 0x00F8);
static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuSection, Visibility) == 0x0000);
static_assert(offsetof(FCustomizedToolMenuEntry, Visibility) == 0x0000);
