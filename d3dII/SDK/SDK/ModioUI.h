
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
/// dependency: Modio
/// dependency: ModioUICore
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/ModioUI.EModioUIInputMode
/// Size: 0x01 (1 bytes)
enum class EModioUIInputMode : uint8_t
{
	EModioUIInputMode__Unknown                                                       = 0,
	EModioUIInputMode__Mouse                                                         = 2,
	EModioUIInputMode__Keyboard                                                      = 4,
	EModioUIInputMode__XBox                                                          = 8,
	EModioUIInputMode__Playstation                                                   = 16,
	EModioUIInputMode__Controller                                                    = 24,
	EModioUIInputMode__NintendoSwitch                                                = 64
};

/// Enum /Script/ModioUI.EModioUIAsyncOperationWidgetState
/// Size: 0x01 (1 bytes)
enum class EModioUIAsyncOperationWidgetState : uint8_t
{
	EModioUIAsyncOperationWidgetState__Success                                       = 0,
	EModioUIAsyncOperationWidgetState__Error                                         = 1,
	EModioUIAsyncOperationWidgetState__InProgress                                    = 2
};

/// Enum /Script/ModioUI.EModioUIDirection
/// Size: 0x01 (1 bytes)
enum class EModioUIDirection : uint8_t
{
	EModioUIDirection__MoveLeft                                                      = 0,
	EModioUIDirection__MoveRight                                                     = 1,
	EModioUIDirection__MoveUp                                                        = 2,
	EModioUIDirection__MoveDown                                                      = 3
};

/// Enum /Script/ModioUI.EModioTextValidationRule
/// Size: 0x01 (1 bytes)
enum class EModioTextValidationRule : uint8_t
{
	EModioTextValidationRule__ETVR_ValidateEmailAddress                              = 0,
	EModioTextValidationRule__ETVR_ValidateAllLetters                                = 1,
	EModioTextValidationRule__ETVR_ValidateAllNumeric                                = 2,
	EModioTextValidationRule__ETVR_ValidateAlphanumeric                              = 3,
	EModioTextValidationRule__ETVR_ValidateLength                                    = 4,
	EModioTextValidationRule__ETVR_ValidateNotEmpty                                  = 5,
	EModioTextValidationRule__ETVR_ValidateNoWhitespace                              = 6
};

/// Enum /Script/ModioUI.EModioDialogReply
/// Size: 0x01 (1 bytes)
enum class EModioDialogReply : uint8_t
{
	EModioDialogReply__Neutral                                                       = 0,
	EModioDialogReply__Confirm                                                       = 1,
	EModioDialogReply__Cancel                                                        = 2
};

/// Enum /Script/ModioUI.EModioDialogOperationCall
/// Size: 0x01 (1 bytes)
enum class EModioDialogOperationCall : uint8_t
{
	EModioDialogOperationCall__SetReportEmailAddress                                 = 0,
	EModioDialogOperationCall__SetReportDetails                                      = 1
};

/// Enum /Script/ModioUI.EModioDialogAsyncCall
/// Size: 0x01 (1 bytes)
enum class EModioDialogAsyncCall : uint8_t
{
	EModioDialogAsyncCall__AuthSubmitEmail                                           = 0,
	EModioDialogAsyncCall__AuthSubmitCode                                            = 1,
	EModioDialogAsyncCall__BeginAuthentication                                       = 2,
	EModioDialogAsyncCall__RetryFetchTerms                                           = 3,
	EModioDialogAsyncCall__SubmitReport                                              = 4,
	EModioDialogAsyncCall__UnsubscribeFromMod                                        = 5,
	EModioDialogAsyncCall__UninstallMod                                              = 6,
	EModioDialogAsyncCall__Logout                                                    = 7
};

/// Enum /Script/ModioUI.EModioDialogButtonCommand
/// Size: 0x01 (1 bytes)
enum class EModioDialogButtonCommand : uint8_t
{
	EModioDialogButtonCommand__Back                                                  = 0,
	EModioDialogButtonCommand__Cancel                                                = 1,
	EModioDialogButtonCommand__Close                                                 = 2,
	EModioDialogButtonCommand__PushDialog                                            = 3,
	EModioDialogButtonCommand__AsyncCallThenPushDialog                               = 4,
	EModioDialogButtonCommand__PushDialogWithOperation                               = 5
};

/// Enum /Script/ModioUI.EModioDrawerControllerSlotEdge
/// Size: 0x01 (1 bytes)
enum class EModioDrawerControllerSlotEdge : uint8_t
{
	EModioDrawerControllerSlotEdge__Top                                              = 0,
	EModioDrawerControllerSlotEdge__Bottom                                           = 1,
	EModioDrawerControllerSlotEdge__Left                                             = 2,
	EModioDrawerControllerSlotEdge__Right                                            = 3
};

/// Enum /Script/ModioUI.EModioInputValidationType
/// Size: 0x01 (1 bytes)
enum class EModioInputValidationType : uint8_t
{
	EModioInputValidationType__Email                                                 = 0,
	EModioInputValidationType__NotEmpty                                              = 1,
	EModioInputValidationType__Custom                                                = 2
};

/// Enum /Script/ModioUI.EModioMenuDrawer
/// Size: 0x01 (1 bytes)
enum class EModioMenuDrawer : uint8_t
{
	EModioMenuDrawer__EMMD_RefineSearch                                              = 0,
	EModioMenuDrawer__EMMD_DownloadQueue                                             = 1
};

/// Enum /Script/ModioUI.EModioMenuScreen
/// Size: 0x01 (1 bytes)
enum class EModioMenuScreen : uint8_t
{
	EModioMenuScreen__EMMS_Featured                                                  = 0,
	EModioMenuScreen__EMMS_Collection                                                = 1,
	EModioMenuScreen__EMMS_SearchResults                                             = 2,
	EModioMenuScreen__EMMS_ModDetails                                                = 3
};

/// Enum /Script/ModioUI.EModioModInfoPropertyType
/// Size: 0x01 (1 bytes)
enum class EModioModInfoPropertyType : uint8_t
{
	EModioModInfoPropertyType__Name                                                  = 0,
	EModioModInfoPropertyType__Size                                                  = 1,
	EModioModInfoPropertyType__LastUpdated                                           = 2,
	EModioModInfoPropertyType__ReleaseDate                                           = 3,
	EModioModInfoPropertyType__Subscribers                                           = 4,
	EModioModInfoPropertyType__CreatorName                                           = 5
};

/// Enum /Script/ModioUI.EModioNotificationControllerSlotEdge
/// Size: 0x01 (1 bytes)
enum class EModioNotificationControllerSlotEdge : uint8_t
{
	EModioNotificationControllerSlotEdge__Top                                        = 0,
	EModioNotificationControllerSlotEdge__Bottom                                     = 1,
	EModioNotificationControllerSlotEdge__Left                                       = 2,
	EModioNotificationControllerSlotEdge__Right                                      = 3
};

/// Enum /Script/ModioUI.EModioPopupPlacement
/// Size: 0x01 (1 bytes)
enum class EModioPopupPlacement : uint8_t
{
	EModioPopupPlacement__AlignBottomLeft                                            = 0,
	EModioPopupPlacement__AlignTopLeft                                               = 1
};

/// Enum /Script/ModioUI.EModioScrollBoxBarAlignment
/// Size: 0x01 (1 bytes)
enum class EModioScrollBoxBarAlignment : uint8_t
{
	EModioScrollBoxBarAlignment__Default                                             = 0,
	EModioScrollBoxBarAlignment__Left                                                = 1,
	EModioScrollBoxBarAlignment__Right                                               = 2,
	EModioScrollBoxBarAlignment__Top                                                 = 3,
	EModioScrollBoxBarAlignment__Bottom                                              = 4
};

/// Enum /Script/ModioUI.EModioWidgetCarouselSizeOverrideType
/// Size: 0x04 (4 bytes)
enum class EModioWidgetCarouselSizeOverrideType : uint32_t
{
	EModioWidgetCarouselSizeOverrideType__AbsoluteDimensions                         = 0,
	EModioWidgetCarouselSizeOverrideType__RelativeLayoutScale                        = 1,
	EModioWidgetCarouselSizeOverrideType__NoOverride                                 = 2
};

/// Class /Script/ModioUI.FxWidget
/// Size: 0x0058 (88 bytes) (0x000108 - 0x000160) align 8 pad: 0x0000
class UFxWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0108   (0x0020)  MISSED
	float                                              RenderScale;                                                // 0x0128   (0x0004)  
	FVector2D                                          RenderScaleOrigin;                                          // 0x012C   (0x0008)  
	float                                              LayoutScale;                                                // 0x0134   (0x0004)  
	FVector2D                                          VisualOffset;                                               // 0x0138   (0x0008)  
	bool                                               bIgnoreClipping;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	class UClass*                                      ContentClass;                                               // 0x0148   (0x0008)  
	SDK_UNDEFINED(16,1839) /* FDelegateProperty */     __um(OnGetContent);                                         // 0x0150   (0x0010)  
};

/// Class /Script/ModioUI.ModioAuthenticationContextUIDetails
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioAuthenticationContextUIDetails : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioAuthenticationContextUIDetails.GetTerms
	// FModioTerms GetTerms();                                                                                                  // [0x16d9180] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioAuthenticationContextUIDetails.GetProviderInfo
	// FModioUIAuthenticationProviderInfo GetProviderInfo();                                                                    // [0x16d8f60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioMenuBackgroundProvider
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioMenuBackgroundProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioMenuBackgroundProvider.GetBackgroundMaterial
	// class UMaterialInterface* GetBackgroundMaterial();                                                                       // [0x16d8dc0] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIAsyncHandlerWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIAsyncHandlerWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIAsyncHandlerWidget.LinkAsyncOperationWidget
	// void LinkAsyncOperationWidget(TScriptInterface<Class>& Widget);                                                          // [0x16d9440] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIAsyncOperationWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIAsyncOperationWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIAsyncOperationWidget.SetOperationStateDelegate
	// void SetOperationStateDelegate(FDelegateProperty& Delegate);                                                             // [0x16d9e90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIAsyncOperationWidget.RequestOperationRetry
	// void RequestOperationRetry();                                                                                            // [0x16d9730] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIAsyncOperationWidget.NotifyOperationState
	// void NotifyOperationState(EModioUIAsyncOperationWidgetState NewState);                                                   // [0x16d94e0] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIAsyncRetryWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIAsyncRetryWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIAsyncRetryWidget.SetRetryRequestedDelegate
	// void SetRetryRequestedDelegate(FDelegateProperty& Delegate);                                                             // [0x16d9e90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIAuthenticationDataProvider
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIAuthenticationDataProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIAuthenticationDataProvider.ShouldOfferEmailAuthentication
	// bool ShouldOfferEmailAuthentication();                                                                                   // [0x16da1d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIAuthenticationDataProvider.GetAuthenticationTypes
	// TArray<FModioUIAuthenticationProviderInfo> GetAuthenticationTypes();                                                     // [0x16d8d70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIAuthenticationDataProvider.GetAuthenticationParams
	// FModioAuthenticationParams GetAuthenticationParams(EModioAuthenticationProvider Provider);                               // [0x16d8c50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIBusyStateWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIBusyStateWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIBusyStateWidget.EndBusyState
	// void EndBusyState(bool bErrorOccurred);                                                                                  // [0x16d8b40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIBusyStateWidget.DisplayBusyState
	// void DisplayBusyState();                                                                                                 // [0x16d86e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIClickableWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIClickableWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIClickableWidget.RemoveClickHandler
	// void RemoveClickHandler(class UObject* UserObject, FName FunctionName);                                                  // [0x16d9810] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIClickableWidget.AddClickHandler
	// void AddClickHandler(class UObject* UserObject, FName FunctionName);                                                     // [0x16d8610] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUICommand
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUICommand : public UInterface
{ 
public:
};

/// Class /Script/ModioUI.ModioUIDataSourceWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIDataSourceWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIDataSourceWidget.SetDataSource
	// void SetDataSource(class UObject* InDataSource);                                                                         // [0x16d98e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIDialogButtonWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIDialogButtonWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIDialogButtonWidget.SetStyle
	// void SetStyle(FModioDialogStyle& Style);                                                                                 // [0x16d9f40] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIDialogButtonWidget.SetDialogController
	// void SetDialogController(class UModioDialogController* Controller);                                                      // [0x16d9a00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIDownloadQueueWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIDownloadQueueWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIDownloadQueueWidget.RefreshDownloadQueue
	// void RefreshDownloadQueue();                                                                                             // [0x16d9730] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIDownloadQueueWidget.DisplayUserInfo
	// void DisplayUserInfo(FModioOptionalUser NewUser);                                                                        // [0x16d89f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIErrorDisplayWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIErrorDisplayWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIErrorDisplayWidget.SetErrorText
	// void SetErrorText(FText& InErrorText);                                                                                   // [0x16d9b30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIErrorDisplayWidget.SetErrorString
	// void SetErrorString(FString InErrorString);                                                                              // [0x16d9a90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIErrorDisplayWidget.IsErrorSet
	// bool IsErrorSet();                                                                                                       // [0x16d9410] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/ModioUI.ModioUIErrorDisplayWidget.DisplayError
	// void DisplayError(FModioErrorCode& ec);                                                                                  // [0x16d8700] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIImageDisplay
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIImageDisplay : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIImageDisplay.DisplayImage
	// void DisplayImage(FSlateBrush& Image);                                                                                   // [0x16d87a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIInputDeviceChangedReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIInputDeviceChangedReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIInputDeviceChangedReceiver.OnInputDeviceChanged
	// void OnInputDeviceChanged(EModioUIInputMode InputDevice);                                                                // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIInputHintDisplayWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIInputHintDisplayWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIInputHintDisplayWidget.OnDisplayHintForInput
	// void OnDisplayHintForInput(FKey VirtualKey);                                                                             // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIInputHintGlyphProvider
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIInputHintGlyphProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIInputHintGlyphProvider.GetInputGlyphMaterialForInputType
	// class UMaterialInterface* GetInputGlyphMaterialForInputType(FKey VirtualInput, EModioUIInputMode InputType);             // [0x16d8df0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIModDetailsDisplay
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIModDetailsDisplay : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIModDetailsDisplay.RegisterUserWidget
	// void RegisterUserWidget(TScriptInterface<Class>& DisplayWidget);                                                         // [0x16d9770] Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIModDetailsDisplay.HandleDisplayModDetailsForID
	// void HandleDisplayModDetailsForID(FModioModID& ModId);                                                                   // [0x16d9370] Native|Protected|HasOutParms 
	// Function /Script/ModioUI.ModioUIModDetailsDisplay.HandleDisplayModDetails
	// void HandleDisplayModDetails(TScriptInterface<Class>& Details);                                                          // [0x16d92d0] Native|Protected|HasOutParms 
	// Function /Script/ModioUI.ModioUIModDetailsDisplay.DisplayModDetailsForID
	// void DisplayModDetailsForID(FModioModID& ModId);                                                                         // [0x16d8950] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIModDetailsDisplay.DisplayModDetails
	// void DisplayModDetails(TScriptInterface<Class>& Details);                                                                // [0x16d88b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIPopupMenuContentWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIPopupMenuContentWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIPopupMenuContentWidget.SetStyle
	// void SetStyle(FModioUIStyleRef& StyleRef);                                                                               // [0x16da030] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIPopupMenuContentWidget.SetMenuEntries
	// void SetMenuEntries(FModioUIMenuCommandList& Entries);                                                                   // [0x16d9d70] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIPopupMenuContentWidget.SetDesiredSize
	// void SetDesiredSize(FVector2D& DesiredSize);                                                                             // [0x16d9970] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIRefineSearchWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIRefineSearchWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIRefineSearchWidget.RefreshTags
	// void RefreshTags();                                                                                                      // [0x16d9750] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIRefineSearchWidget.NotifySettingsChanged
	// void NotifySettingsChanged(FModioFilterParams& SearchSettings);                                                          // [0x16d9560] Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIRefineSearchWidget.GetSelectedTagValues
	// TArray<FString> GetSelectedTagValues();                                                                                  // [0x16d9090] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIRefineSearchWidget.GetSearchString
	// FString GetSearchString();                                                                                               // [0x16d9010] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIStringInputWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIStringInputWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIStringInputWidget.SetInput
	// void SetInput(FString Input);                                                                                            // [0x16d9cd0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIStringInputWidget.SetHint
	// void SetHint(FText& HintText);                                                                                           // [0x16d9c00] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUIStringInputWidget.GatherInput
	// FString GatherInput();                                                                                                   // [0x16d8bd0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIStyleRefSerializer
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIStyleRefSerializer : public UInterface
{ 
public:
};

/// Class /Script/ModioUI.ModioUIInputValidationLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIInputValidationLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateUsingRule
	// bool ValidateUsingRule(FModioTextValidationRule& Rule, FText& TextToValidate, FText& ValidationMessageText);             // [0x16da920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateNoWhitespace
	// bool ValidateNoWhitespace(FText& TextToValidate);                                                                        // [0x16da600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateNotEmpty
	// bool ValidateNotEmpty(FText& TextToValidate);                                                                            // [0x16da6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateLength
	// bool ValidateLength(FText& TextToValidate, int32_t DesiredMaximumLength, int32_t DesiredMinimumLength);                  // [0x16da470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateEmailAddress
	// bool ValidateEmailAddress(FText& TextToValidate);                                                                        // [0x16da3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateAlphanumeric
	// bool ValidateAlphanumeric(FText& TextToValidate);                                                                        // [0x16da2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateAllNumeric
	// bool ValidateAllNumeric(FText& TextToValidate);                                                                          // [0x93e9e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUI.ModioUIInputValidationLibrary.ValidateAllLetters
	// bool ValidateAllLetters(FText& TextToValidate);                                                                          // [0x16da200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioUITextValidator
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUITextValidator : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUITextValidator.ValidateText
	// bool ValidateText(FText& inputText, FText& ValidationMessageText);                                                       // [0x16da7a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUITextValidator.SetValidationError
	// void SetValidationError(FText& ErrorText);                                                                               // [0x16da0d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUI.ModioUITextValidator.GetTextValidationRules
	// void GetTextValidationRules(TArray<FModioTextValidationRule>& Rules);                                                    // [0x16d91d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUIUserStringListEntry
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIUserStringListEntry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUIUserStringListEntry.SetListItemString
	// void SetListItemString(FString inString);                                                                                // [0x16e26a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioAsyncOpWrapperWidget
/// Size: 0x0030 (48 bytes) (0x000270 - 0x0002A0) align 8 pad: 0x0000
class UModioAsyncOpWrapperWidget : public UBorder
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0270   (0x0020)  MISSED
	SDK_UNDEFINED(16,1840) /* TScriptInterface<Class> */ __um(ActualWidget);                                       // 0x0290   (0x0010)  


	/// Functions
	// Function /Script/ModioUI.ModioAsyncOpWrapperWidget.SetActualAsyncOperationWidget
	// void SetActualAsyncOperationWidget(TScriptInterface<Class>& Widget);                                                     // [0x16e2430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ModioUI.ModioUIAuthenticationProviderInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioUIAuthenticationProviderInfo
{ 
	bool                                               bIsEmailAuthentication;                                     // 0x0000   (0x0001)  
	EModioAuthenticationProvider                       ProviderID;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FText                                              ProviderUILabel;                                            // 0x0008   (0x0018)  
};

/// Class /Script/ModioUI.ModioAuthenticationContextUI
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x000120) align 8 pad: 0x0000
class UModioAuthenticationContextUI : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FModioTerms                                        Terms;                                                      // 0x0030   (0x00D0)  
	FModioUIAuthenticationProviderInfo                 ProviderInfo;                                               // 0x0100   (0x0020)  
};

/// Class /Script/ModioUI.ModioAuthenticationMethodSelector
/// Size: 0x0060 (96 bytes) (0x000108 - 0x000168) align 8 pad: 0x0000
class UModioAuthenticationMethodSelector : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0108   (0x0058)  MISSED
	class UModioRichTextButton*                        CancelButton;                                               // 0x0160   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioAuthenticationMethodSelector.CancelClicked
	// void CancelClicked();                                                                                                    // [0x16e1c60] Final|Native|Protected 
};

/// Struct /Script/ModioUI.ModioUIStyleRef
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FModioUIStyleRef
{ 
	FName                                              StyleName;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/ModioUI.ModioUIColorRef
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FModioUIColorRef
{ 
	FName                                              ColorName;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/ModioUI.ModioWidgetBorderStyle
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000080) align 8 pad: 0x0000
struct FModioWidgetBorderStyle : FSlateWidgetStyle
{ 
	bool                                               bMaskWithMaterial;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(40,1841) /* TWeakObjectPtr<UMaterialInterface*> */ __um(MaskMaterial);                           // 0x0010   (0x0028)  
	bool                                               bRelativeRadius;                                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              CornerRadius;                                               // 0x003C   (0x0004)  
	bool                                               bEnableBorder;                                              // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FModioUIColorRef                                   BorderColor;                                                // 0x0044   (0x0008)  
	FModioUIColorRef                                   HoverColor;                                                 // 0x004C   (0x0008)  
	FModioUIColorRef                                   ActiveColor;                                                // 0x0054   (0x0008)  
	FModioUIColorRef                                   NewInnerColor;                                              // 0x005C   (0x0008)  
	float                                              BorderThickness;                                            // 0x0064   (0x0004)  
	float                                              BorderOpacity;                                              // 0x0068   (0x0004)  
	bool                                               bUseWidgetTexture;                                          // 0x006C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	FLinearColor                                       InnerColor;                                                 // 0x0070   (0x0010)  
};

/// Class /Script/ModioUI.ModioButton
/// Size: 0x00B8 (184 bytes) (0x000428 - 0x0004E0) align 8 pad: 0x0000
class UModioButton : public UButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0428   (0x0008)  MISSED
	SDK_UNDEFINED(16,1842) /* FMulticastInlineDelegate */ __um(OnSetLabel);                                        // 0x0430   (0x0010)  
	FModioUIStyleRef                                   ButtonStyle;                                                // 0x0440   (0x0008)  
	FModioWidgetBorderStyle                            BorderStyle;                                                // 0x0448   (0x0080)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x04C8   (0x0010)  MISSED
	bool                                               bOverrideGlobalStyle;                                       // 0x04D8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x04D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioButton.SetLabel
	// void SetLabel(FText NewLabel);                                                                                           // [0x16e25c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioButton.SetButtonStyle
	// void SetButtonStyle(FModioUIStyleRef ButtonStyleRef, bool bApplyStyle);                                                  // [0x16e24d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioUIWidgetStyleContainer
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UModioUIWidgetStyleContainer : public USlateWidgetStyleContainerBase
{ 
public:
	SDK_UNDEFINED(80,1843) /* TMap<FName, FModioUIColorRef> */ __um(SerializedColors);                             // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,1844) /* TMap<FName, FModioUIMaterialRef> */ __um(SerializedMaterials);                       // 0x0080   (0x0050)  
};

/// Struct /Script/ModioUI.ModioButtonStyle
/// Size: 0x0298 (664 bytes) (0x000008 - 0x0002A0) align 8 pad: 0x0000
struct FModioButtonStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       ButtonStyle;                                                // 0x0008   (0x0278)  
	FModioUIStyleRef                                   RichTextStyle;                                              // 0x0280   (0x0008)  
	FModioUIStyleRef                                   BorderStyle;                                                // 0x0288   (0x0008)  
	FMargin                                            ContentPadding;                                             // 0x0290   (0x0010)  
};

/// Class /Script/ModioUI.ModioButtonStyleContainer
/// Size: 0x02A0 (672 bytes) (0x0000D0 - 0x000370) align 8 pad: 0x0000
class UModioButtonStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioButtonStyle                                  Style;                                                      // 0x00D0   (0x02A0)  
};

/// Class /Script/ModioUI.ModioCheckBox
/// Size: 0x0030 (48 bytes) (0x000770 - 0x0007A0) align 8 pad: 0x0000
class UModioCheckBox : public UCheckBox
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0770   (0x0010)  MISSED
	FText                                              LabelText;                                                  // 0x0780   (0x0018)  
	FModioUIStyleRef                                   CheckBoxStyle;                                              // 0x0798   (0x0008)  
};

/// Class /Script/ModioUI.ModioProceduralBrushParams
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioProceduralBrushParams : public UObject
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioProceduralBrushParams.GetMaterialInstance
	// class UMaterialInterface* GetMaterialInstance();                                                                         // [0x16fc6d0] Native|Public        
};

/// Class /Script/ModioUI.ModioCheckBoxMaterialParams
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UModioCheckBoxMaterialParams : public UModioProceduralBrushParams
{ 
public:
	FModioUIColorRef                                   InnerColor;                                                 // 0x0028   (0x0008)  
	FModioUIColorRef                                   TickColor;                                                  // 0x0030   (0x0008)  
	FModioUIColorRef                                   BorderColor;                                                // 0x0038   (0x0008)  
	bool                                               bIsTicked;                                                  // 0x0040   (0x0001)  
	bool                                               bEnableBorder;                                              // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              BorderRadius;                                               // 0x0044   (0x0004)  
};

/// Struct /Script/ModioUI.ModioCheckBoxStyle
/// Size: 0x08B8 (2232 bytes) (0x000008 - 0x0008C0) align 8 pad: 0x0000
struct FModioCheckBoxStyle : FSlateWidgetStyle
{ 
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0008   (0x0580)  
	FMargin                                            ContentPadding;                                             // 0x0588   (0x0010)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0598   (0x0270)  
	FModioUIStyleRef                                   TextStyleNew;                                               // 0x0808   (0x0008)  
	FModioWidgetBorderStyle                            CheckBoxBorderStyle;                                        // 0x0810   (0x0080)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0890   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x08A8   (0x0018)  
};

/// Class /Script/ModioUI.ModioCheckBoxStyleContainer
/// Size: 0x08C0 (2240 bytes) (0x0000D0 - 0x000990) align 8 pad: 0x0000
class UModioCheckBoxStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioCheckBoxStyle                                Style;                                                      // 0x00D0   (0x08C0)  
};

/// Class /Script/ModioUI.ModioCircle
/// Size: 0x0050 (80 bytes) (0x000108 - 0x000158) align 8 pad: 0x0000
class UModioCircle : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	float                                              Resolution;                                                 // 0x0118   (0x0004)  
	float                                              StartAngleInDegrees;                                        // 0x011C   (0x0004)  
	float                                              ArcInDegrees;                                               // 0x0120   (0x0004)  
	float                                              Radius;                                                     // 0x0124   (0x0004)  
	float                                              Thickness;                                                  // 0x0128   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FSlateColor                                        ColorAndOpacity;                                            // 0x0130   (0x0028)  
};

/// Class /Script/ModioUI.ModioCircularProgressBar
/// Size: 0x0058 (88 bytes) (0x000108 - 0x000160) align 8 pad: 0x0000
class UModioCircularProgressBar : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	int32_t                                            BackgroundThickness;                                        // 0x0118   (0x0004)  
	int32_t                                            ForegroundThickness;                                        // 0x011C   (0x0004)  
	float                                              Radius;                                                     // 0x0120   (0x0004)  
	int32_t                                            StartAngleInDegrees;                                        // 0x0124   (0x0004)  
	float                                              Progress;                                                   // 0x0128   (0x0004)  
	FLinearColor                                       BackgroundColor;                                            // 0x012C   (0x0010)  
	FLinearColor                                       ForegroundColor;                                            // 0x013C   (0x0010)  
	SDK_UNDEFINED(16,1845) /* FDelegateProperty */     __um(OnGetProgress);                                        // 0x014C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x015C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioCircularProgressBar.GetProgress
	// float GetProgress();                                                                                                     // [0x16e1e50] Native|Event|Protected|BlueprintEvent|Const 
};

/// Struct /Script/ModioUI.ModioUIMaterialRef
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FModioUIMaterialRef
{ 
	FName                                              MaterialName;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/ModioUI.ModioCodeInputStyle
/// Size: 0x00B0 (176 bytes) (0x000270 - 0x000320) align 8 pad: 0x0000
struct FModioCodeInputStyle : FTextBlockStyle
{ 
	FSlateBrush                                        CharacterBrush;                                             // 0x0270   (0x0088)  
	FModioUIColorRef                                   ColorWhenFocused;                                           // 0x02F8   (0x0008)  
	FModioUIMaterialRef                                FakeCaretMaterial;                                          // 0x0300   (0x0008)  
	FMargin                                            CharacterSpacing;                                           // 0x0308   (0x0010)  
	FVector2D                                          MinimumCharacterSize;                                       // 0x0318   (0x0008)  
};

/// Class /Script/ModioUI.ModioCodeInputStyleContainer
/// Size: 0x0320 (800 bytes) (0x0000D0 - 0x0003F0) align 8 pad: 0x0000
class UModioCodeInputStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioCodeInputStyle                               Style;                                                      // 0x00D0   (0x0320)  
};

/// Struct /Script/ModioUI.ModioTextValidationRule
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioTextValidationRule
{ 
	EModioTextValidationRule                           RuleToUse;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              ValidationMessage;                                          // 0x0008   (0x0018)  
	int32_t                                            MinimumLength;                                              // 0x0020   (0x0004)  
	int32_t                                            MaximumLength;                                              // 0x0024   (0x0004)  
};

/// Class /Script/ModioUI.ModioCodeInputWidget
/// Size: 0x0070 (112 bytes) (0x000108 - 0x000178) align 8 pad: 0x0000
class UModioCodeInputWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0108   (0x0020)  MISSED
	int32_t                                            NumberOfCharacters;                                         // 0x0128   (0x0004)  
	FModioUIStyleRef                                   Style;                                                      // 0x012C   (0x0008)  
	bool                                               bValidateInput;                                             // 0x0134   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0135   (0x0003)  MISSED
	TArray<FModioTextValidationRule>                   ValidationRules;                                            // 0x0138   (0x0010)  
	bool                                               bDisplayValidationErrors;                                   // 0x0148   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	FModioUIStyleRef                                   TextStyle;                                                  // 0x014C   (0x0008)  
	unsigned char                                      UnknownData03_7[0x24];                                      // 0x0154   (0x0024)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioCodeInputWidget.ValidateCodeInputCharacter
	// FEventReply ValidateCodeInputCharacter(FString Character);                                                               // [0x16e28b0] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioUserWidgetBase
/// Size: 0x0018 (24 bytes) (0x000260 - 0x000278) align 8 pad: 0x0000
class UModioUserWidgetBase : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0260   (0x0008)  MISSED
	bool                                               bRoutedSetDataSource;                                       // 0x0268   (0x0001)  
	bool                                               bRoutedLoadExternalData;                                    // 0x0269   (0x0001)  
	bool                                               bRoutedFinishLoadExternalData;                              // 0x026A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x026B   (0x0005)  MISSED
	class UObject*                                     DataSource;                                                 // 0x0270   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioUserWidgetBase.SetDataSource
	// void SetDataSource(class UObject* NewDataSource);                                                                        // [0x1702420] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUserWidgetBase.OnFinishLoadExternalData
	// void OnFinishLoadExternalData(FModioErrorCode ec);                                                                       // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/ModioUI.ModioUserWidgetBase.OnDataSourceUpdated
	// void OnDataSourceUpdated();                                                                                              // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/ModioUI.ModioUserWidgetBase.OnBeginLoadExternalData
	// void OnBeginLoadExternalData();                                                                                          // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/ModioUI.ModioUserWidgetBase.LoadExternalData
	// void LoadExternalData();                                                                                                 // [0x17020c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUserWidgetBase.FinishLoadExternalData
	// void FinishLoadExternalData(FModioErrorCode ec);                                                                         // [0x1701af0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioModManagementWidgetBase
/// Size: 0x0028 (40 bytes) (0x000278 - 0x0002A0) align 8 pad: 0x0000
class UModioModManagementWidgetBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0278   (0x0028)  MISSED
};

/// Class /Script/ModioUI.ModioCollectionTileStatus
/// Size: 0x00D8 (216 bytes) (0x0002A0 - 0x000378) align 8 pad: 0x0000
class UModioCollectionTileStatus : public UModioModManagementWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02A0   (0x0010)  MISSED
	FText                                              PendingLabelText;                                           // 0x02B0   (0x0018)  
	FText                                              UpdatePendingLabelText;                                     // 0x02C8   (0x0018)  
	FText                                              UninstallPendingLabelText;                                  // 0x02E0   (0x0018)  
	FText                                              DownloadingLabelText;                                       // 0x02F8   (0x0018)  
	FText                                              ExtractingLabelText;                                        // 0x0310   (0x0018)  
	FText                                              SubscribedLabelText;                                        // 0x0328   (0x0018)  
	FText                                              InstalledLabelText;                                         // 0x0340   (0x0018)  
	class UModioRichTextBlock*                         StatusText;                                                 // 0x0358   (0x0008)  
	class UModioRichTextBlock*                         StatusPercent;                                              // 0x0360   (0x0008)  
	class UModioProgressBar*                           ProgressBar;                                                // 0x0368   (0x0008)  
	class UModioSizeBox*                               ProgressBarSizeBox;                                         // 0x0370   (0x0008)  
};

/// Class /Script/ModioUI.ModioMenuView
/// Size: 0x0030 (48 bytes) (0x000278 - 0x0002A8) align 8 pad: 0x0000
class UModioMenuView : public UModioUserWidgetBase
{ 
public:
	class UUserWidget*                                 CachedMenuTitleContentWidget;                               // 0x0278   (0x0008)  
	FText                                              MenuName;                                                   // 0x0280   (0x0018)  
	class UClass*                                      TitleContentClass;                                          // 0x0298   (0x0008)  
	bool                                               bShouldShowTopNavBar;                                       // 0x02A0   (0x0001)  
	bool                                               bShouldShowBackButton;                                      // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x02A2   (0x0006)  MISSED
};

/// Class /Script/ModioUI.ModioCollectionView
/// Size: 0x0170 (368 bytes) (0x0002A8 - 0x000418) align 8 pad: 0x0000
class UModioCollectionView : public UModioMenuView
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x02A8   (0x0020)  MISSED
	class UModioRichTextBlock*                         CollectionTitle;                                            // 0x02C8   (0x0008)  
	class UModioEditableTextBox*                       SearchInput;                                                // 0x02D0   (0x0008)  
	FText                                              ShowUserSubscriptionsText;                                  // 0x02D8   (0x0018)  
	FText                                              ShowSystemCollectionText;                                   // 0x02F0   (0x0018)  
	class UModioRichTextButton*                        FetchButton;                                                // 0x0308   (0x0008)  
	class UModioPopupComboBox*                         ModGroupSelection;                                          // 0x0310   (0x0008)  
	class UModioPopupComboBox*                         SortBy;                                                     // 0x0318   (0x0008)  
	class UModioListView*                              CollectionList;                                             // 0x0320   (0x0008)  
	class UModioRichTextBlock*                         CollectionCount;                                            // 0x0328   (0x0008)  
	class UModioRichTextBlock*                         InfoRichTextBlock;                                          // 0x0330   (0x0008)  
	TArray<class UModioModCollectionEntryUI*>          CachedCollection;                                           // 0x0338   (0x0010)  
	TArray<class UModioModCollectionEntryUI*>          FilteredCollection;                                         // 0x0348   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0358   (0x0040)  MISSED
	class UModioModCollectionTile*                     CurrentTile;                                                // 0x0398   (0x0008)  
	FText                                              DefaultButtonLabel;                                         // 0x03A0   (0x0018)  
	FText                                              SearchingButtonLabel;                                       // 0x03B8   (0x0018)  
	FText                                              NoSubscribedModsText;                                       // 0x03D0   (0x0018)  
	FText                                              NoModsFoundText;                                            // 0x03E8   (0x0018)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0400   (0x0018)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioCollectionView.SortZToA
	// void SortZToA();                                                                                                         // [0x16e2890] Final|Native|Protected 
	// Function /Script/ModioUI.ModioCollectionView.SortSizeOnDisk
	// void SortSizeOnDisk();                                                                                                   // [0x16e2870] Final|Native|Protected 
	// Function /Script/ModioUI.ModioCollectionView.SortRecentlyUpdatedDelegate
	// void SortRecentlyUpdatedDelegate();                                                                                      // [0x16e2850] Final|Native|Protected 
	// Function /Script/ModioUI.ModioCollectionView.SortAToZ
	// void SortAToZ();                                                                                                         // [0x16e2830] Final|Native|Protected 
	// Function /Script/ModioUI.ModioCollectionView.OnModGroupChanged
	// void OnModGroupChanged(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);                                      // [0x16e21a0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioCollectionView.OnFetchUpdatesClicked
	// void OnFetchUpdatesClicked();                                                                                            // [0x16e2180] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioColorPresets
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UModioColorPresets : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,1846) /* TMap<FName, FModioUIColor> */ __um(ColorPresets);                                    // 0x0030   (0x0050)  
};

/// Class /Script/ModioUI.ModioComboBox
/// Size: 0x0008 (8 bytes) (0x000140 - 0x000148) align 8 pad: 0x0000
class UModioComboBox : public UComboBox
{ 
public:
	TEnumAsByte<EMenuPlacement>                        MenuPlacement;                                              // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0141   (0x0007)  MISSED
};

/// Class /Script/ModioUI.ModioComboBoxString
/// Size: 0x0078 (120 bytes) (0x000E00 - 0x000E78) align 8 pad: 0x0000
class UModioComboBoxString : public UComboBoxString
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0E00   (0x0010)  MISSED
	TEnumAsByte<EMenuPlacement>                        Placement;                                                  // 0x0E10   (0x0001)  
	bool                                               bCreateNewWindow;                                           // 0x0E11   (0x0001)  
	bool                                               bWrapMenuContent;                                           // 0x0E12   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0E13   (0x0005)  MISSED
	SDK_UNDEFINED(40,1847) /* TWeakObjectPtr<UMaterialInterface*> */ __um(ContentWrapMaterial);                    // 0x0E18   (0x0028)  
	bool                                               bEnableBorder;                                              // 0x0E40   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0E41   (0x0003)  MISSED
	FColor                                             BorderColor;                                                // 0x0E44   (0x0004)  
	float                                              BorderRadius;                                               // 0x0E48   (0x0004)  
	float                                              BorderThickness;                                            // 0x0E4C   (0x0004)  
	float                                              BorderOpacity;                                              // 0x0E50   (0x0004)  
	unsigned char                                      UnknownData03_7[0x24];                                      // 0x0E54   (0x0024)  MISSED
};

/// Class /Script/ModioUI.ModioUICommandInfoLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUICommandInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.RefineSearchCommand
	// FModioUIMenuEntry RefineSearchCommand();                                                                                 // [0x16e23a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.PreviousPageCommand
	// FModioUIMenuEntry PreviousPageCommand();                                                                                 // [0x16e2310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.NextPageCommand
	// FModioUIMenuEntry NextPageCommand();                                                                                     // [0x16e20f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.MoreOptionsCommand
	// FModioUIMenuEntry MoreOptionsCommand();                                                                                  // [0x16e2060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.DownloadQueueCommand
	// FModioUIMenuEntry DownloadQueueCommand();                                                                                // [0x16e1dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.ConfirmCommand
	// FModioUIMenuEntry ConfirmCommand();                                                                                      // [0x16e1d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.CollapseCommand
	// FModioUIMenuEntry CollapseCommand();                                                                                     // [0x16e1ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUICommandInfoLibrary.BackCommand
	// FModioUIMenuEntry BackCommand();                                                                                         // [0x16e1bd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/ModioUI.ModioCustomComboBoxStyle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FModioCustomComboBoxStyle : FSlateWidgetStyle
{ 
	FModioUIStyleRef                                   BorderStyle;                                                // 0x0008   (0x0008)  
	FModioUIStyleRef                                   RowStyle;                                                   // 0x0010   (0x0008)  
	FModioUIStyleRef                                   TextStyle;                                                  // 0x0018   (0x0008)  
	FModioUIColorRef                                   BackgroundColor;                                            // 0x0020   (0x0008)  
	FSlateSound                                        PressedSound;                                               // 0x0028   (0x0018)  
	FSlateSound                                        HoveredSound;                                               // 0x0040   (0x0018)  
};

/// Class /Script/ModioUI.ModioCustomComboBoxStyleContainer
/// Size: 0x0058 (88 bytes) (0x0000D0 - 0x000128) align 8 pad: 0x0000
class UModioCustomComboBoxStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioCustomComboBoxStyle                          Style;                                                      // 0x00D0   (0x0058)  
};

/// Class /Script/ModioUI.ModioDefaultInputGlyphProvider
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x000118) align 8 pad: 0x0000
class UModioDefaultInputGlyphProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0028   (0x00F0)  MISSED
};

/// Class /Script/ModioUI.ModioDefaultPopupMenuContent
/// Size: 0x00F0 (240 bytes) (0x000260 - 0x000350) align 8 pad: 0x0000
class UModioDefaultPopupMenuContent : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0260   (0x00A0)  MISSED
	FModioUIStyleRef                                   TextStyle;                                                  // 0x0300   (0x0008)  
	FModioUIStyleRef                                   BorderStyle;                                                // 0x0308   (0x0008)  
	FModioUIMaterialRef                                RetainerMaterial;                                           // 0x0310   (0x0008)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x0318   (0x0038)  MISSED
};

/// Class /Script/ModioUI.ModioDialogBase
/// Size: 0x0008 (8 bytes) (0x000278 - 0x000280) align 8 pad: 0x0000
class UModioDialogBase : public UModioUserWidgetBase
{ 
public:
	FModioUIStyleRef                                   DialogStyle;                                                // 0x0278   (0x0008)  
};

/// Class /Script/ModioUI.ModioDialogBaseInternal
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000230) align 8 pad: 0x0000
class UModioDialogBaseInternal : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0xB0];                                      // 0x0108   (0x00B0)  MISSED
	class UWidget*                                     LoadingSpinner;                                             // 0x01B8   (0x0008)  
	class UObject*                                     DataSource;                                                 // 0x01C0   (0x0008)  
	FModioUIStyleRef                                   DialogStyle;                                                // 0x01C8   (0x0008)  
	FMargin                                            ButtonSpacing;                                              // 0x01D0   (0x0010)  
	class UWidget*                                     SubHeaderWidget;                                            // 0x01E0   (0x0008)  
	SDK_UNDEFINED(8,1848) /* TWeakObjectPtr<UModioDialogController*> */ __um(Controller);                          // 0x01E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01F0   (0x0010)  MISSED
	class UWidget*                                     InputWidget;                                                // 0x0200   (0x0008)  
	class UWidget*                                     ButtonWidget;                                               // 0x0208   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0210   (0x0020)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioDialogBaseInternal.SetDialogFocus
	// void SetDialogFocus();                                                                                                   // [0x16e25a0] Final|Native|Public  
	// Function /Script/ModioUI.ModioDialogBaseInternal.OnSubmitKeyPressed
	// void OnSubmitKeyPressed();                                                                                               // [0x16e22f0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioDialogBaseInternal.OnNavigateDownFromCodeInputWidget
	// void OnNavigateDownFromCodeInputWidget();                                                                                // [0x16e22d0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioWidgetBase
/// Size: 0x0000 (0 bytes) (0x000108 - 0x000108) align 8 pad: 0x0000
class UModioWidgetBase : public UWidget
{ 
public:
};

/// Class /Script/ModioUI.ModioDialogController
/// Size: 0x0238 (568 bytes) (0x000108 - 0x000340) align 8 pad: 0x0000
class UModioDialogController : public UModioWidgetBase
{ 
public:
	class UModioDialogBaseInternal*                    ActualDialog;                                               // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x0110   (0x0044)  MISSED
	FModioUIStyleRef                                   InvisibleButtonStyleRef;                                    // 0x0154   (0x0008)  
	bool                                               bCurrentlyDisplayingDialog;                                 // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	TArray<FString>                                    DialogInputValues;                                          // 0x0160   (0x0010)  
	FInterpCurveFloat                                  BlurCurve;                                                  // 0x0170   (0x0018)  
	SDK_UNDEFINED(40,1849) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(AuthenticationChoiceDialog);               // 0x0188   (0x0028)  
	SDK_UNDEFINED(40,1850) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(UnsubscribeConfirmationDialog);            // 0x01B0   (0x0028)  
	SDK_UNDEFINED(40,1851) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(EmailAuthenticationDialog);                // 0x01D8   (0x0028)  
	SDK_UNDEFINED(40,1852) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(ReportContentDialog);                      // 0x0200   (0x0028)  
	SDK_UNDEFINED(40,1853) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(ReportEmailDialog);                        // 0x0228   (0x0028)  
	SDK_UNDEFINED(40,1854) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(UninstallConfirmationDialog);              // 0x0250   (0x0028)  
	SDK_UNDEFINED(40,1855) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(TermsOfUseDialog);                         // 0x0278   (0x0028)  
	SDK_UNDEFINED(40,1856) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(TermsOfUseFailDialog);                     // 0x02A0   (0x0028)  
	SDK_UNDEFINED(40,1857) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(ErrorDisplayDialog);                       // 0x02C8   (0x0028)  
	SDK_UNDEFINED(40,1858) /* TWeakObjectPtr<UModioDialogInfo*> */ __um(LogoutConfirmationDialog);                 // 0x02F0   (0x0028)  
	class UClass*                                      LoadingOverlay;                                             // 0x0318   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0320   (0x0010)  MISSED
	TArray<class UModioDialogInfo*>                    DialogStack;                                                // 0x0330   (0x0010)  


	/// Functions
	// Function /Script/ModioUI.ModioDialogController.ShowErrorDialog
	// void ShowErrorDialog(FModioErrorCode ec, bool bCloseDialogsOnOK);                                                        // [0x16e2740] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioDialogController.HandleBackgroundClick
	// FEventReply HandleBackgroundClick(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                      // [0x16e1e90] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/ModioUI.ModioDialogButtonInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FModioDialogButtonInfo
{ 
	FText                                              ButtonLabel;                                                // 0x0000   (0x0018)  
	EModioDialogButtonCommand                          ButtonCommand;                                              // 0x0018   (0x0001)  
	EModioDialogAsyncCall                              AsyncCallType;                                              // 0x0019   (0x0001)  
	EModioDialogOperationCall                          OperationCallType;                                          // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x001B   (0x0005)  MISSED
	class UModioDialogInfo*                            Destination;                                                // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/ModioUI.ModioDialogInfo
/// Size: 0x0088 (136 bytes) (0x000028 - 0x0000B0) align 8 pad: 0x0000
class UModioDialogInfo : public UObject
{ 
public:
	FText                                              TitleText;                                                  // 0x0028   (0x0018)  
	class UClass*                                      SubHeaderWidget;                                            // 0x0040   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  SubHeaderWidgetHAlign;                                      // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    SubHeaderWidgetVAlign;                                      // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FText                                              DialogText;                                                 // 0x0050   (0x0018)  
	class UClass*                                      InputWidget;                                                // 0x0068   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  InputWidgetHAlign;                                          // 0x0070   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    InputWidgetVAlign;                                          // 0x0071   (0x0001)  
	TEnumAsByte<EStretchDirection>                     InputWidgetScalingType;                                     // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0073   (0x0001)  MISSED
	float                                              InputWidgetHeightOverride;                                  // 0x0074   (0x0004)  
	FText                                              InputWidgetHintText;                                        // 0x0078   (0x0018)  
	class UClass*                                      ButtonAreaWidget;                                           // 0x0090   (0x0008)  
	TEnumAsByte<EHorizontalAlignment>                  ButtonAreaWidgetHAlign;                                     // 0x0098   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    ButtonAreaWidgetVAlign;                                     // 0x0099   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FModioDialogButtonInfo>                     Buttons;                                                    // 0x00A0   (0x0010)  
};

/// Struct /Script/ModioUI.ModioDialogStyle
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B8) align 8 pad: 0x0000
struct FModioDialogStyle : FSlateWidgetStyle
{ 
	FMargin                                            ContentPadding;                                             // 0x0008   (0x0010)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0018   (0x0088)  
	FModioUIStyleRef                                   TitleTextStyle;                                             // 0x00A0   (0x0008)  
	FModioUIStyleRef                                   ContentTextStyle;                                           // 0x00A8   (0x0008)  
	FModioUIStyleRef                                   ButtonStyle;                                                // 0x00B0   (0x0008)  
};

/// Class /Script/ModioUI.ModioDialogStyleContainer
/// Size: 0x00B8 (184 bytes) (0x0000D0 - 0x000188) align 8 pad: 0x0000
class UModioDialogStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioDialogStyle                                  Style;                                                      // 0x00D0   (0x00B8)  
};

/// Class /Script/ModioUI.ModioDownloadListWidgetBase
/// Size: 0x0030 (48 bytes) (0x000278 - 0x0002A8) align 8 pad: 0x0000
class UModioDownloadListWidgetBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UModioListView*                              QueueList;                                                  // 0x0280   (0x0008)  
	class UModioRichTextBlock*                         QueueTypeLabel;                                             // 0x0288   (0x0008)  
	class UModioRichTextBlock*                         StatusString;                                               // 0x0290   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0298   (0x0010)  MISSED
};

/// Class /Script/ModioUI.ModioDownloadQueueDrawer
/// Size: 0x00F0 (240 bytes) (0x000278 - 0x000368) align 8 pad: 0x0000
class UModioDownloadQueueDrawer : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0278   (0x0038)  MISSED
	class UModioUserProfileButton*                     ProfileIcon;                                                // 0x02B0   (0x0008)  
	class UModioRichTextBlock*                         UserLabel;                                                  // 0x02B8   (0x0008)  
	class UModioRichTextBlock*                         ActivityText;                                               // 0x02C0   (0x0008)  
	class UModioRichTextBlock*                         StatusText;                                                 // 0x02C8   (0x0008)  
	class UModioRichTextButton*                        LogOutButton;                                               // 0x02D0   (0x0008)  
	class UModioDownloadQueueOpProgress*               CurrentOpProgress;                                          // 0x02D8   (0x0008)  
	class UModioDownloadListWidgetBase*                OperationQueue;                                             // 0x02E0   (0x0008)  
	class UModioDownloadListWidgetBase*                CompletedQueue;                                             // 0x02E8   (0x0008)  
	FText                                              DownloadingActionText;                                      // 0x02F0   (0x0018)  
	FText                                              ExtractingActionText;                                       // 0x0308   (0x0018)  
	FText                                              InitializingActionText;                                     // 0x0320   (0x0018)  
	FText                                              NoDownloadText;                                             // 0x0338   (0x0018)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0350   (0x0018)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioDownloadQueueDrawer.OnSubsricptionChanged
	// void OnSubsricptionChanged(FModioModID ID, bool Subscribed);                                                             // [0x16e9610] Final|Native|Protected 
	// Function /Script/ModioUI.ModioDownloadQueueDrawer.OnLogoutClicked
	// void OnLogoutClicked();                                                                                                  // [0x16e95d0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioDownloadQueueDrawer.HandleOperationCompleted
	// void HandleOperationCompleted();                                                                                         // [0x16e9380] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioDownloadQueueEntry
/// Size: 0x0088 (136 bytes) (0x000278 - 0x000300) align 8 pad: 0x0000
class UModioDownloadQueueEntry : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0278   (0x0018)  MISSED
	class UModioImage*                                 ModThumbnail;                                               // 0x0290   (0x0008)  
	class UModioRichTextBlock*                         ModNameLabel;                                               // 0x0298   (0x0008)  
	class UModioRichTextBlock*                         ModSizeLabel;                                               // 0x02A0   (0x0008)  
	class UModioRichTextButton*                        UnsubscribeButton;                                          // 0x02A8   (0x0008)  
	class UModioRichTextBlock*                         ModStatusLabel;                                             // 0x02B0   (0x0008)  
	FModioUIStyleRef                                   EntryStyle;                                                 // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02C0   (0x0038)  MISSED
	class UBorder*                                     EntryBorder;                                                // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioDownloadQueueEntry.OnUnsubClicked
	// void OnUnsubClicked();                                                                                                   // [0x16e96f0] Native|Protected     
	// Function /Script/ModioUI.ModioDownloadQueueEntry.OnEntryPressed
	// FEventReply OnEntryPressed(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                             // [0x16e9400] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/ModioUI.ModioDownloadQueueEntryStyle
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000D0) align 8 pad: 0x0000
struct FModioDownloadQueueEntryStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HighlightedBorderBrush;                                     // 0x0008   (0x0088)  
	FModioUIStyleRef                                   UnsubscribeButtonStyle;                                     // 0x0090   (0x0008)  
	FModioUIStyleRef                                   TextStyle;                                                  // 0x0098   (0x0008)  
	FSlateSound                                        HoveredSound;                                               // 0x00A0   (0x0018)  
	FSlateSound                                        PressedSound;                                               // 0x00B8   (0x0018)  
};

/// Class /Script/ModioUI.ModioDownloadQueueEntryStyleContainer
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0001A0) align 8 pad: 0x0000
class UModioDownloadQueueEntryStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioDownloadQueueEntryStyle                      Style;                                                      // 0x00D0   (0x00D0)  
};

/// Class /Script/ModioUI.ModioDownloadQueueOpProgress
/// Size: 0x0080 (128 bytes) (0x0002A0 - 0x000320) align 8 pad: 0x0000
class UModioDownloadQueueOpProgress : public UModioModManagementWidgetBase
{ 
public:
	class UModioRichTextButton*                        UnsubscribeButton;                                          // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02A8   (0x0018)  MISSED
	class UModioProgressBar*                           ProgressBar;                                                // 0x02C0   (0x0008)  
	class UModioRichTextBlock*                         ModNameLabel;                                               // 0x02C8   (0x0008)  
	class UModioRichTextBlock*                         OperationSpeedText;                                         // 0x02D0   (0x0008)  
	class UModioRichTextBlock*                         OperationProgressText;                                      // 0x02D8   (0x0008)  
	FText                                              SpeedFormatText;                                            // 0x02E0   (0x0018)  
	FText                                              ProgressFormatText;                                         // 0x02F8   (0x0018)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0310   (0x0010)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioDownloadQueueOpProgress.OperationCompletedDelegate
	// FDelegateProperty OperationCompletedDelegate();                                                                          // [0x16e9730] Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioDownloadQueueOpProgress.OnUnsubscribeClicked
	// void OnUnsubscribeClicked();                                                                                             // [0x16e9710] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioDrawer
/// Size: 0x00F8 (248 bytes) (0x000108 - 0x000200) align 8 pad: 0x0000
class UModioDrawer : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0108   (0x0038)  MISSED
	SDK_UNDEFINED(80,1859) /* TMap<FName, UWidget*> */ __um(NamedWidgets);                                         // 0x0140   (0x0050)  
	FModioUIStyleRef                                   DrawerStyle;                                                // 0x0190   (0x0008)  
	class UBorder*                                     HeaderBorder;                                               // 0x0198   (0x0008)  
	class UBorder*                                     ContentBorder;                                              // 0x01A0   (0x0008)  
	class UBorder*                                     FooterBorder;                                               // 0x01A8   (0x0008)  
	float                                              HeaderFillOverride;                                         // 0x01B0   (0x0004)  
	float                                              ContentFillOverride;                                        // 0x01B4   (0x0004)  
	float                                              FooterFillOverride;                                         // 0x01B8   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x01BC   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HeaderHorizontalAlignment;                                  // 0x01CC   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    HeaderVerticalAlignment;                                    // 0x01CD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x01CE   (0x0002)  MISSED
	FMargin                                            ContentPadding;                                             // 0x01D0   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  ContentHorizontalAlignment;                                 // 0x01E0   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    ContentVerticalAlignment;                                   // 0x01E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x01E2   (0x0002)  MISSED
	FMargin                                            FooterPadding;                                              // 0x01E4   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  FooterHorizontalAlignment;                                  // 0x01F4   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    FooterVerticalAlignment;                                    // 0x01F5   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x01F6   (0x0002)  MISSED
	int32_t                                            MinWidth;                                                   // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x01FC   (0x0004)  MISSED
};

/// Class /Script/ModioUI.ModioDrawerContentBase
/// Size: 0x0060 (96 bytes) (0x000278 - 0x0002D8) align 8 pad: 0x0000
class UModioDrawerContentBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0278   (0x0048)  MISSED
	class UNamedSlot*                                  HeaderSlot;                                                 // 0x02C0   (0x0008)  
	class UNamedSlot*                                  ContentSlot;                                                // 0x02C8   (0x0008)  
	class UNamedSlot*                                  OptionalContentSlot;                                        // 0x02D0   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioDrawerContentBase.GetOptionalContentWidget
	// class UWidget* GetOptionalContentWidget();                                                                               // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUI.ModioDrawerContentBase.GetHeaderWidget
	// class UWidget* GetHeaderWidget();                                                                                        // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUI.ModioDrawerContentBase.GetContentWidget
	// class UWidget* GetContentWidget();                                                                                       // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioOverlay
/// Size: 0x0000 (0 bytes) (0x000130 - 0x000130) align 8 pad: 0x0000
class UModioOverlay : public UOverlay
{ 
public:
};

/// Class /Script/ModioUI.ModioDrawerController
/// Size: 0x0028 (40 bytes) (0x000130 - 0x000158) align 8 pad: 0x0000
class UModioDrawerController : public UModioOverlay
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0130   (0x0028)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioDrawerController.ToggleDrawerExpanded
	// bool ToggleDrawerExpanded(int32_t SlotIndex, bool bCloseOtherDrawers);                                                   // [0x16e9ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioDrawerController.SetDrawerExpanded
	// void SetDrawerExpanded(int32_t SlotIndex, bool bExpandedState, bool bCloseOtherDrawers);                                 // [0x16e97f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioDrawerController.IsAnyDrawerExpanded
	// bool IsAnyDrawerExpanded();                                                                                              // [0x16e93d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModioUI.ModioDrawerController.DrawerAnimatedOut
	// void DrawerAnimatedOut();                                                                                                // [0x16e9140] Final|Native|Protected 
	// Function /Script/ModioUI.ModioDrawerController.CollapseAllDrawers
	// void CollapseAllDrawers();                                                                                               // [0x16e9120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioDrawerControllerSlot
/// Size: 0x0038 (56 bytes) (0x000058 - 0x000090) align 8 pad: 0x0000
class UModioDrawerControllerSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0058   (0x0018)  MISSED
	EModioDrawerControllerSlotEdge                     Edge;                                                       // 0x0070   (0x0001)  
	TEnumAsByte<EHorizontalAlignment>                  DrawerHorizontalAlignment;                                  // 0x0071   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    DrawerVerticalAlignment;                                    // 0x0072   (0x0001)  
	bool                                               bExpanded;                                                  // 0x0073   (0x0001)  
	float                                              AnimationTime;                                              // 0x0074   (0x0004)  
	float                                              CurrentAnimationProgress;                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x007C   (0x0014)  MISSED
};

/// Struct /Script/ModioUI.ModioDrawerWidgetStyle
/// Size: 0x0198 (408 bytes) (0x000008 - 0x0001A0) align 8 pad: 0x0000
struct FModioDrawerWidgetStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HeadingBackgroundBrush;                                     // 0x0008   (0x0088)  
	FSlateBrush                                        ContentBackgroundBrush;                                     // 0x0090   (0x0088)  
	FSlateBrush                                        FooterBackgroundBrush;                                      // 0x0118   (0x0088)  
};

/// Class /Script/ModioUI.ModioDrawerWidgetStyleContainer
/// Size: 0x01A0 (416 bytes) (0x0000D0 - 0x000270) align 8 pad: 0x0000
class UModioDrawerWidgetStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioDrawerWidgetStyle                            Style;                                                      // 0x00D0   (0x01A0)  
};

/// Struct /Script/ModioUI.ModioDynamicImageStyle
/// Size: 0x0128 (296 bytes) (0x000008 - 0x000130) align 8 pad: 0x0000
struct FModioDynamicImageStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        ImageLoadingBrush;                                          // 0x0008   (0x0088)  
	FSlateBrush                                        ImageUnavailableBrush;                                      // 0x0090   (0x0088)  
	FSlateSound                                        HoveredSound;                                               // 0x0118   (0x0018)  
};

/// Class /Script/ModioUI.ModioDynamicImageStyleContainer
/// Size: 0x0130 (304 bytes) (0x0000D0 - 0x000200) align 8 pad: 0x0000
class UModioDynamicImageStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioDynamicImageStyle                            Style;                                                      // 0x00D0   (0x0130)  
};

/// Class /Script/ModioUI.ModioEditableText
/// Size: 0x0020 (32 bytes) (0x000460 - 0x000480) align 8 pad: 0x0000
class UModioEditableText : public UEditableText
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0460   (0x0010)  MISSED
	FModioUIStyleRef                                   TextStyle;                                                  // 0x0470   (0x0008)  
	FName                                              DefaultStyleName;                                           // 0x0478   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioEditableText.GetStyleNames
	// TArray<FString> GetStyleNames();                                                                                         // [0x16e9180] Final|Native|Protected|Const 
};

/// Class /Script/ModioUI.ModioEditableTextBox
/// Size: 0x00A8 (168 bytes) (0x000A38 - 0x000AE0) align 8 pad: 0x0000
class UModioEditableTextBox : public UEditableTextBox
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0A38   (0x0040)  MISSED
	int32_t                                            MaxCharacters;                                              // 0x0A78   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0A7C   (0x0014)  MISSED
	bool                                               bValidateInput;                                             // 0x0A90   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0A91   (0x0007)  MISSED
	TArray<FModioTextValidationRule>                   ValidationRules;                                            // 0x0A98   (0x0010)  
	bool                                               bDisplayValidationErrors;                                   // 0x0AA8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0AA9   (0x0003)  MISSED
	FModioUIStyleRef                                   TextBoxStyle;                                               // 0x0AAC   (0x0008)  
	FModioUIStyleRef                                   TextStyle;                                                  // 0x0AB4   (0x0008)  
	unsigned char                                      UnknownData04_7[0x24];                                      // 0x0ABC   (0x0024)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioEditableTextBox.StartInput
	// void StartInput();                                                                                                       // [0x16e9ab0] Final|Native|Public  
};

/// Struct /Script/ModioUI.ModioEditableTextBoxStyle
/// Size: 0x0228 (552 bytes) (0x0007F8 - 0x000A20) align 8 pad: 0x0000
struct FModioEditableTextBoxStyle : FEditableTextBoxStyle
{ 
	bool                                               bShowHintIcon;                                              // 0x07F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x07F9   (0x0007)  MISSED
	FSlateBrush                                        HintIcon;                                                   // 0x0800   (0x0088)  
	FSlateBrush                                        NormalBorderBrush;                                          // 0x0888   (0x0088)  
	FSlateBrush                                        HoveredBorderBrush;                                         // 0x0910   (0x0088)  
	FSlateBrush                                        ErrorBorderBrush;                                           // 0x0998   (0x0088)  
};

/// Class /Script/ModioUI.ModioEditableTextBoxStyleContainer
/// Size: 0x0A20 (2592 bytes) (0x0000D0 - 0x000AF0) align 8 pad: 0x0000
class UModioEditableTextBoxStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioEditableTextBoxStyle                         Style;                                                      // 0x00D0   (0x0A20)  
};

/// Class /Script/ModioUI.ModioErrorRetryWidget
/// Size: 0x0038 (56 bytes) (0x000278 - 0x0002B0) align 8 pad: 0x0000
class UModioErrorRetryWidget : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0278   (0x0018)  MISSED
	class UModioRichTextBlock*                         ErrorText;                                                  // 0x0290   (0x0008)  
	FString                                            ErrorTextValue;                                             // 0x0298   (0x0010)  
	class UModioRichTextButton*                        RetryButton;                                                // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioErrorRetryWidget.SetErrorText
	// void SetErrorText(FString Error);                                                                                        // [0x16e9900] Final|Native|Public  
	// Function /Script/ModioUI.ModioErrorRetryWidget.OnRetryClicked
	// void OnRetryClicked();                                                                                                   // [0x16e95f0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioFeaturedCategory
/// Size: 0x0160 (352 bytes) (0x000278 - 0x0003D8) align 8 pad: 0x0000
class UModioFeaturedCategory : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0278   (0x0050)  MISSED
	class UWidgetAnimation*                            NavLeftHoverAnim;                                           // 0x02C8   (0x0008)  
	class UWidgetAnimation*                            NavRightHoverAnim;                                          // 0x02D0   (0x0008)  
	class UModioRichTextBlock*                         Title;                                                      // 0x02D8   (0x0008)  
	class UModioTileView*                              ItemList;                                                   // 0x02E0   (0x0008)  
	class UWidget*                                     TileLoader;                                                 // 0x02E8   (0x0008)  
	class UModioErrorRetryWidget*                      ModioErrorWithRetryWidget;                                  // 0x02F0   (0x0008)  
	class UModioButton*                                SeeAllButton;                                               // 0x02F8   (0x0008)  
	class UModioButton*                                NavLeftButton;                                              // 0x0300   (0x0008)  
	class UModioButton*                                NavRightButton;                                             // 0x0308   (0x0008)  
	class UModioAsyncOpWrapperWidget*                  CategoryViewContent;                                        // 0x0310   (0x0008)  
	FModioFilterParams                                 Filter;                                                     // 0x0318   (0x00A8)  
	SDK_UNDEFINED(16,1860) /* FMulticastInlineDelegate */ __um(SelectionChangedDelegate);                          // 0x03C0   (0x0010)  
	int32_t                                            ArrowButtonScrollAmount;                                    // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x03D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioFeaturedCategory.SetSelectionIndexDelegate
	// void SetSelectionIndexDelegate(FDelegateProperty Delegate);                                                              // [0x16e9a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioFeaturedCategory.PlayNavRightUnhoverAnim
	// void PlayNavRightUnhoverAnim();                                                                                          // [0x16e97d0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.PlayNavRightHoverAnim
	// void PlayNavRightHoverAnim();                                                                                            // [0x16e97b0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.PlayNavLeftUnhoverAnim
	// void PlayNavLeftUnhoverAnim();                                                                                           // [0x16e9790] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.PlayNavLeftHoverAnim
	// void PlayNavLeftHoverAnim();                                                                                             // [0x16e9770] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.OnCategorySelectionChanged__DelegateSignature
	// void OnCategorySelectionChanged__DelegateSignature(int32_t Index, class UModioFeaturedCategory* RealCategory);           // [0x24710f0] MulticastDelegate|Public|Delegate 
	// Function /Script/ModioUI.ModioFeaturedCategory.HandleSeeAllClicked
	// void HandleSeeAllClicked();                                                                                              // [0x16e93b0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.HandleNavRightClicked
	// void HandleNavRightClicked();                                                                                            // [0x16e92e0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.HandleNavLeftClicked
	// void HandleNavLeftClicked();                                                                                             // [0x16e9260] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.HandleItemListEntrySubscribeClicked
	// void HandleItemListEntrySubscribeClicked(class UModioModInfoUI* ModInfo);                                                // [0xbce480] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.HandleItemListEntryReportClicked
	// void HandleItemListEntryReportClicked(class UModioModInfoUI* ModInfo);                                                   // [0xbce480] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.HandleItemListEntryDetailsClicked
	// void HandleItemListEntryDetailsClicked(class UModioModInfoUI* ModInfo);                                                  // [0xbce480] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedCategory.GetItemList
	// class UModioTileView* GetItemList();                                                                                     // [0x16e9160] Final|Native|Public|Const 
};

/// Class /Script/ModioUI.ModioModTileBase
/// Size: 0x0138 (312 bytes) (0x000278 - 0x0003B0) align 8 pad: 0x0000
class UModioModTileBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x54];                                      // 0x0278   (0x0054)  MISSED
	bool                                               bCurrentExpandedState;                                      // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02CD   (0x0003)  MISSED
	FModioUIMaterialRef                                LoadingMaterial;                                            // 0x02D0   (0x0008)  
	FModioUIMaterialRef                                ErrorMaterial;                                              // 0x02D8   (0x0008)  
	class UModioImage*                                 Thumbnail;                                                  // 0x02E0   (0x0008)  
	class UModioUserWidgetBase*                        SubscriptionIndicator;                                      // 0x02E8   (0x0008)  
	class UModioRichTextBlock*                         ModName;                                                    // 0x02F0   (0x0008)  
	class UWidgetAnimation*                            FocusTransition;                                            // 0x02F8   (0x0008)  
	class UModioRoundedBorder*                         TileBorder;                                                 // 0x0300   (0x0008)  
	class UModioImage*                                 TileFrame;                                                  // 0x0308   (0x0008)  
	class UModioRichTextButton*                        SubscribeButton;                                            // 0x0310   (0x0008)  
	FModioUIStyleRef                                   Style;                                                      // 0x0318   (0x0008)  
	class UModioUI4Subsystem*                          UISubsystem;                                                // 0x0320   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0328   (0x0048)  MISSED
	FText                                              SubscribeLabel;                                             // 0x0370   (0x0018)  
	FText                                              UnsubscribeLabel;                                           // 0x0388   (0x0018)  
	SDK_UNDEFINED(16,1861) /* FMulticastInlineDelegate */ __um(OnSubscribeClicked);                                // 0x03A0   (0x0010)  


	/// Functions
	// Function /Script/ModioUI.ModioModTileBase.SetExpandedState
	// void SetExpandedState(bool bExpanded);                                                                                   // [0x16f65c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioModTileBase.OnSetExpandedState
	// void OnSetExpandedState(bool bExpanded);                                                                                 // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUI.ModioModTileBase.OnModSubscriptionStatusChanged
	// void OnModSubscriptionStatusChanged(FModioModID ID, bool Subscribed);                                                    // [0x16f6140] Native|Public        
	// Function /Script/ModioUI.ModioModTileBase.NativeSubscribeClicked
	// void NativeSubscribeClicked();                                                                                           // [0x16f60e0] Final|Native|Public  
	// Function /Script/ModioUI.ModioModTileBase.HandleModLogoOperationStateChanged
	// void HandleModLogoOperationStateChanged(EModioUIAsyncOperationWidgetState NewState);                                     // [0x16f6000] Native|Protected     
	// Function /Script/ModioUI.ModioModTileBase.EnableSubscribeButton
	// void EnableSubscribeButton();                                                                                            // [0x16f5d30] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioFeaturedMod
/// Size: 0x0028 (40 bytes) (0x0003B0 - 0x0003D8) align 8 pad: 0x0000
class UModioFeaturedMod : public UModioModTileBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x03B0   (0x0018)  MISSED
	class UModioPopupMenu*                             MoreOptionsMenu;                                            // 0x03C8   (0x0008)  
	class UModioImage*                                 TileActiveFrame;                                            // 0x03D0   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioFeaturedMod.SubmitPositiveRating
	// void SubmitPositiveRating();                                                                                             // [0x16f04c0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedMod.SubmitNegativeRating
	// void SubmitNegativeRating();                                                                                             // [0x16f0480] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedMod.SubmitModReport
	// void SubmitModReport();                                                                                                  // [0x16f0440] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedMod.NativeMoreOptionsClicked
	// void NativeMoreOptionsClicked();                                                                                         // [0x16efac0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioFeaturedModCarousel
/// Size: 0x0078 (120 bytes) (0x000278 - 0x0002F0) align 8 pad: 0x0000
class UModioFeaturedModCarousel : public UModioUserWidgetBase
{ 
public:
	class UCanvasPanel*                                CarouselCanvasPanel;                                        // 0x0278   (0x0008)  
	class UClass*                                      ModTileTemplate;                                            // 0x0280   (0x0008)  
	float                                              WidgetMargin;                                               // 0x0288   (0x0004)  
	float                                              ScrollTime;                                                 // 0x028C   (0x0004)  
	float                                              ScrollInputDelay;                                           // 0x0290   (0x0004)  
	FVector2D                                          GeneratedWidgetSize;                                        // 0x0294   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	class UCurveFloat*                                 AnimationCurve;                                             // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02A8   (0x0038)  MISSED
	TArray<class UObject*>                             CachedWidgetData;                                           // 0x02E0   (0x0010)  


	/// Functions
	// Function /Script/ModioUI.ModioFeaturedModCarousel.NavigateToWidget
	// void NavigateToWidget(class UWidget* InWidget);                                                                          // [0x16efb00] Final|Native|Public  
};

/// Class /Script/ModioUI.ModioFeaturedView
/// Size: 0x0088 (136 bytes) (0x0002A8 - 0x000330) align 8 pad: 0x0000
class UModioFeaturedView : public UModioMenuView
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x02A8   (0x0048)  MISSED
	class UModioErrorRetryWidget*                      ModioErrorWithRetryWidget;                                  // 0x02F0   (0x0008)  
	class UWidget*                                     PrimaryFeaturedCategoryLoader;                              // 0x02F8   (0x0008)  
	class UModioListView*                              AdditionalCategories;                                       // 0x0300   (0x0008)  
	class UModioAsyncOpWrapperWidget*                  FeaturedViewContent;                                        // 0x0308   (0x0008)  
	class UModioGridPanel*                             PrimaryCategoryGridPanel;                                   // 0x0310   (0x0008)  
	class UModioFeaturedModCarousel*                   FeaturedModCarousel;                                        // 0x0318   (0x0008)  
	TArray<class UObject*>                             CachedFeaturedItems;                                        // 0x0320   (0x0010)  


	/// Functions
	// Function /Script/ModioUI.ModioFeaturedView.SetFocusToPrimaryCategory
	// void SetFocusToPrimaryCategory();                                                                                        // [0x16f0320] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModioUI.ModioFeaturedView.SetFocusToAdditionalCategory
	// void SetFocusToAdditionalCategory();                                                                                     // [0x16f0300] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModioUI.ModioFeaturedView.GetSelectionIndex
	// int32_t GetSelectionIndex();                                                                                             // [0x16ef680] Final|Native|Protected 
	// Function /Script/ModioUI.ModioFeaturedView.CategorySelectionChanged
	// void CategorySelectionChanged(int32_t Index, class UModioFeaturedCategory* RealCategory);                                // [0x16ef010] Native|Protected     
};

/// Class /Script/ModioUI.ModioGridPanel
/// Size: 0x0000 (0 bytes) (0x000150 - 0x000150) align 8 pad: 0x0000
class UModioGridPanel : public UGridPanel
{ 
public:
};

/// Class /Script/ModioUI.ModioImage
/// Size: 0x0008 (8 bytes) (0x000210 - 0x000218) align 8 pad: 0x0000
class UModioImage : public UImage
{ 
public:
	class UMaterialInstanceDynamic*                    CachedMaterial;                                             // 0x0210   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioImage.LoadImageFromFileWithMaterialAsync
	// void LoadImageFromFileWithMaterialAsync(FModioImageWrapper ImageLoader, class UMaterialInterface* Material, FName ImageParameterName); // [0x16ef940] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioImage.LoadImageFromFileAsync
	// void LoadImageFromFileAsync(FModioImageWrapper ImageLoader);                                                             // [0x16ef850] Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioImage.ImageLoadHandler
	// void ImageLoadHandler(class UTexture2DDynamic* Texture, class UMaterialInterface* Material, FName ImageParameterName);   // [0x16ef740] Native|Protected     
	// Function /Script/ModioUI.ModioImage.DisplayImageWithMaterial
	// void DisplayImageWithMaterial(class UTexture2DDynamic* Texture, class UMaterialInterface* Material, FName ImageParameterName); // [0x16ef1b0] Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioImageGalleryBase
/// Size: 0x0080 (128 bytes) (0x000108 - 0x000188) align 8 pad: 0x0000
class UModioImageGalleryBase : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0108   (0x0030)  MISSED
	class UWidget*                                     ForegroundContent;                                          // 0x0138   (0x0008)  
	class UWidget*                                     BackgroundContent;                                          // 0x0140   (0x0008)  
	SDK_UNDEFINED(16,1862) /* FDelegateProperty */     __um(OnDisplayImage);                                       // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,1863) /* FDelegateProperty */     __um(OnConstructWidget);                                    // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,1864) /* FDelegateProperty */     __um(OnGetItemCount);                                       // 0x0168   (0x0010)  
	class UClass*                                      ImageWidgetClass;                                           // 0x0178   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0180   (0x0008)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioImageGalleryBase.ResetGallery
	// void ResetGallery();                                                                                                     // [0x16f02e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioImageGalleryBase.RefreshCurrentImage
	// void RefreshCurrentImage();                                                                                              // [0x16f02c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioImageGalleryBase.OnDisplayImage__DelegateSignature
	// void OnDisplayImage__DelegateSignature(class UWidget* ImageWidget, int32_t ImageIndex);                                  // [0x24710f0] Public|Delegate      
	// Function /Script/ModioUI.ModioImageGalleryBase.DisplayGalleryImageAtIndex
	// void DisplayGalleryImageAtIndex(EModioUIDirection Direction, int32_t DirectIndex);                                       // [0x16ef0e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioInputBindingImage
/// Size: 0x0040 (64 bytes) (0x000218 - 0x000258) align 8 pad: 0x0000
class UModioInputBindingImage : public UModioImage
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0218   (0x0010)  MISSED
	FKey                                               KeyToShow;                                                  // 0x0228   (0x0018)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0240   (0x0018)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioInputBindingImage.SetKeyToShow
	// void SetKeyToShow(FKey NewKey);                                                                                          // [0x16f0340] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioInputBindingImage.GetInputModeVisibilityDelegate
	// FDelegateProperty GetInputModeVisibilityDelegate();                                                                      // [0x16ef640] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioInputGlyphSet
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UModioInputGlyphSet : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,1865) /* TMap<FKey, UTexture2D*> */ __um(Glyphs);                                             // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,1866) /* TMap<FKey, UTexture2D*> */ __um(PngGlyphs);                                          // 0x0080   (0x0050)  
};

/// Class /Script/ModioUI.ModioInputMappingGlyphLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioInputMappingGlyphLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModioUI.ModioInputMappingGlyphLibrary.GetInputGlyph
	// class UTexture2D* GetInputGlyph(FModioInputMappingGlyph& MappingGlyph, EModioUIInputMode InputMode);                     // [0x16ef310] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioListView
/// Size: 0x0000 (0 bytes) (0x000368 - 0x000368) align 8 pad: 0x0000
class UModioListView : public UListView
{ 
public:
};

/// Class /Script/ModioUI.ModioListViewInteger
/// Size: 0x00F8 (248 bytes) (0x000218 - 0x000310) align 8 pad: 0x0000
class UModioListViewInteger : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xD0];                                      // 0x0218   (0x00D0)  MISSED
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x02E8   (0x0001)  
	ESlateVisibility                                   ScrollbarVisibility;                                        // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x02EA   (0x0002)  MISSED
	float                                              EntrySpacing;                                               // 0x02EC   (0x0004)  
	bool                                               bOverrideItemSize;                                          // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02F1   (0x0003)  MISSED
	FVector2D                                          ItemSize;                                                   // 0x02F4   (0x0008)  
	unsigned char                                      UnknownData03_7[0x14];                                      // 0x02FC   (0x0014)  MISSED
};

/// Class /Script/ModioUI.ModioListViewString
/// Size: 0x00F8 (248 bytes) (0x000218 - 0x000310) align 8 pad: 0x0000
class UModioListViewString : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xD0];                                      // 0x0218   (0x00D0)  MISSED
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x02E8   (0x0001)  
	ESlateVisibility                                   ScrollbarVisibility;                                        // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x02EA   (0x0002)  MISSED
	float                                              EntrySpacing;                                               // 0x02EC   (0x0004)  
	bool                                               bOverrideItemSize;                                          // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02F1   (0x0003)  MISSED
	FVector2D                                          ItemSize;                                                   // 0x02F4   (0x0008)  
	unsigned char                                      UnknownData03_7[0x14];                                      // 0x02FC   (0x0014)  MISSED
};

/// Class /Script/ModioUI.ModioLoadingSpinner
/// Size: 0x0060 (96 bytes) (0x000108 - 0x000168) align 8 pad: 0x0000
class UModioLoadingSpinner : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0108   (0x0030)  MISSED
	FModioUIMaterialRef                                LoadingImage;                                               // 0x0138   (0x0008)  
	FVector2D                                          ImageBrushSize;                                             // 0x0140   (0x0008)  
	TEnumAsByte<EStretch>                              Stretch;                                                    // 0x0148   (0x0001)  
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                           // 0x0149   (0x0001)  
	unsigned char                                      UnknownData01_6[0x16];                                      // 0x014A   (0x0016)  MISSED
	class UMaterialInterface*                          CachedReferencedMaterial;                                   // 0x0160   (0x0008)  
};

/// Class /Script/ModioUI.ModioLogoWidget
/// Size: 0x0020 (32 bytes) (0x000108 - 0x000128) align 8 pad: 0x0000
class UModioLogoWidget : public UWidget
{ 
public:
	class UObject*                                     DataSource;                                                 // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED
	FModioUIStyleRef                                   StyleRef;                                                   // 0x0120   (0x0008)  
};

/// Class /Script/ModioUI.ModioMaterialData
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000140) align 8 pad: 0x0000
class UModioMaterialData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,1867) /* TMap<FName, UModioProceduralBrushParams*> */ __um(NamedBrushMaterialsNew);           // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,1868) /* TMap<FName, UModioRoundedRectangleMaterialParams*> */ __um(RoundedRectangleParams);  // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,1869) /* TMap<FName, UModioCheckBoxMaterialParams*> */ __um(CheckBoxMaterialParams);          // 0x00D0   (0x0050)  
	class UMaterialInterface*                          DefaultRoundedRectangleMaterial;                            // 0x0120   (0x0008)  
	class UMaterialInterface*                          DefaultCheckboxMaterial;                                    // 0x0128   (0x0008)  
	class UMaterialInterface*                          PngGlyphMaterial;                                           // 0x0130   (0x0008)  
	class UMaterialInterface*                          DefaultGlyphMaterial;                                       // 0x0138   (0x0008)  
};

/// Class /Script/ModioUI.ModioMenu
/// Size: 0x00D8 (216 bytes) (0x000278 - 0x000350) align 8 pad: 0x0000
class UModioMenu : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0278   (0x0030)  MISSED
	class UWidgetAnimation*                            ViewChangedAnim;                                            // 0x02A8   (0x0008)  
	class UWidgetAnimation*                            DialogAnim;                                                 // 0x02B0   (0x0008)  
	class UModioWidgetSwitcher*                        ViewController;                                             // 0x02B8   (0x0008)  
	class UModioMenuBar*                               MenuBar;                                                    // 0x02C0   (0x0008)  
	class UModioImage*                                 Background;                                                 // 0x02C8   (0x0008)  
	class UModioDrawerController*                      DrawerController;                                           // 0x02D0   (0x0008)  
	class UModioDialogController*                      DialogController;                                           // 0x02D8   (0x0008)  
	class UUserWidget*                                 HideCursorWidget;                                           // 0x02E0   (0x0008)  
	class UWidget*                                     NotificationController;                                     // 0x02E8   (0x0008)  
	class UUserWidget*                                 ModioMenuBarWidget;                                         // 0x02F0   (0x0008)  
	class USizeBox*                                    MenuSizeBox;                                                // 0x02F8   (0x0008)  
	class UBorder*                                     LeftBlurBorder;                                             // 0x0300   (0x0008)  
	class UBorder*                                     RightBlurBorder;                                            // 0x0308   (0x0008)  
	class UClass*                                      FeaturedView;                                               // 0x0310   (0x0008)  
	class UClass*                                      CollectionView;                                             // 0x0318   (0x0008)  
	class UClass*                                      SearchResultsView;                                          // 0x0320   (0x0008)  
	class UClass*                                      ModDetailsView;                                             // 0x0328   (0x0008)  
	class UClass*                                      DownloadProgressDrawer;                                     // 0x0330   (0x0008)  
	class UClass*                                      RefineSearchDrawer;                                         // 0x0338   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0340   (0x0010)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioMenu.OnViewChanged
	// void OnViewChanged(int64_t ViewIndex);                                                                                   // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUI.ModioMenu.OnSearchSettingsChanged
	// void OnSearchSettingsChanged(FModioFilterParams Settings);                                                               // [0x16efe40] Final|Native|Protected 
	// Function /Script/ModioUI.ModioMenu.OnDrawerAnimatedOut
	// void OnDrawerAnimatedOut(int32_t SlotIndex);                                                                             // [0x16efbb0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioMenu.HandleViewChanged
	// void HandleViewChanged(int32_t ViewIndex);                                                                               // [0x16ef6b0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioMenuBar
/// Size: 0x0018 (24 bytes) (0x000278 - 0x000290) align 8 pad: 0x0000
class UModioMenuBar : public UModioUserWidgetBase
{ 
public:
	class UModioRichTextButton*                        SearchButton;                                               // 0x0278   (0x0008)  
	class UModioRichTextButton*                        BackButton;                                                 // 0x0280   (0x0008)  
	class UModioUserProfileButton*                     UserProfileButton;                                          // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioMenuBar.OnSearchClicked
	// void OnSearchClicked();                                                                                                  // [0x16efb90] Native|Protected     
	// Function /Script/ModioUI.ModioMenuBar.OnBackClicked
	// void OnBackClicked();                                                                                                    // [0x16e96f0] Native|Protected     
};

/// Class /Script/ModioUI.ModioMenuDefaultBackgroundProvider
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UModioMenuDefaultBackgroundProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/ModioUI.ModioModBrowser
/// Size: 0x0000 (0 bytes) (0x000278 - 0x000278) align 8 pad: 0x0000
class UModioModBrowser : public UModioUserWidgetBase
{ 
public:
};

/// Class /Script/ModioUI.ModioModBrowserParams
/// Size: 0x0018 (24 bytes) (0x000030 - 0x000048) align 8 pad: 0x0000
class UModioModBrowserParams : public UDataAsset
{ 
public:
	class UModioFeaturedCategoryParams*                PrimaryCategoryParams;                                      // 0x0030   (0x0008)  
	TArray<class UModioFeaturedCategoryParams*>        AdditionalCategoryParams;                                   // 0x0038   (0x0010)  
};

/// Class /Script/ModioUI.ModioCarousel
/// Size: 0x0038 (56 bytes) (0x000108 - 0x000140) align 8 pad: 0x0000
class UModioCarousel : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	TArray<class UUserWidget*>                         EntryWidgets;                                               // 0x0118   (0x0010)  
	TArray<class UModioModInfoUI*>                     ModsToDisplay;                                              // 0x0128   (0x0010)  
	class UClass*                                      EntryWidgetClass;                                           // 0x0138   (0x0008)  
};

/// Class /Script/ModioUI.ModioModCarouselTile
/// Size: 0x0000 (0 bytes) (0x0003B0 - 0x0003B0) align 8 pad: 0x0000
class UModioModCarouselTile : public UModioModTileBase
{ 
public:
};

/// Class /Script/ModioUI.ModioModCollectionTile
/// Size: 0x0080 (128 bytes) (0x0003B0 - 0x000430) align 8 pad: 0x0000
class UModioModCollectionTile : public UModioModTileBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x03B0   (0x0020)  MISSED
	class UModioRichTextBlock*                         SizeOnDiskLabel;                                            // 0x03D0   (0x0008)  
	class UModioCollectionTileStatus*                  StatusWidget;                                               // 0x03D8   (0x0008)  
	class UModioRichTextBlock*                         StatusLine;                                                 // 0x03E0   (0x0008)  
	class UButton*                                     TileButton;                                                 // 0x03E8   (0x0008)  
	FText                                              SubscribedStatusText;                                       // 0x03F0   (0x0018)  
	FText                                              InstalledStatusText;                                        // 0x0408   (0x0018)  
	class UModioPopupMenu*                             MoreOptionsMenu;                                            // 0x0420   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0428   (0x0008)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioModCollectionTile.SubmitPositiveRating
	// void SubmitPositiveRating();                                                                                             // [0x16f04e0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.SubmitNegativeRating
	// void SubmitNegativeRating();                                                                                             // [0x16f04a0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.SubmitModReport
	// void SubmitModReport();                                                                                                  // [0x16f0460] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.ShowModDetails
	// void ShowModDetails();                                                                                                   // [0x16f0420] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.OnRatingSubmissionComplete
	// void OnRatingSubmissionComplete(FModioErrorCode ec, EModioRating Rating);                                                // [0x16efd60] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.NativeMoreOptionsClicked
	// void NativeMoreOptionsClicked();                                                                                         // [0x16efae0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.NativeCollectionTileClicked
	// void NativeCollectionTileClicked();                                                                                      // [0x16efaa0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModCollectionTile.ForceUninstall
	// void ForceUninstall();                                                                                                   // [0x16ef2c0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioModDetailsImage
/// Size: 0x0020 (32 bytes) (0x000278 - 0x000298) align 8 pad: 0x0000
class UModioModDetailsImage : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UModioRoundedImage*                          Image;                                                      // 0x0280   (0x0008)  
	FModioUIMaterialRef                                FrameMaterial;                                              // 0x0288   (0x0008)  
	FName                                              TextureParameterName;                                       // 0x0290   (0x0008)  
};

/// Struct /Script/ModioUI.ModioModDetailsGalleryImageInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FModioModDetailsGalleryImageInfo
{ 
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UTexture2DDynamic*                           LoadedImage;                                                // 0x0028   (0x0008)  
};

/// Class /Script/ModioUI.ModioModDetailsImageGallery
/// Size: 0x0058 (88 bytes) (0x000278 - 0x0002D0) align 8 pad: 0x0000
class UModioModDetailsImageGallery : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0278   (0x0018)  MISSED
	TArray<FModioModDetailsGalleryImageInfo>           ImageInfo;                                                  // 0x0290   (0x0010)  
	class UModioImageGalleryBase*                      ImageGallery;                                               // 0x02A0   (0x0008)  
	class UModioListViewInteger*                       NavButtons;                                                 // 0x02A8   (0x0008)  
	FModioUIStyleRef                                   Style;                                                      // 0x02B0   (0x0008)  
	class UModioRoundedImage*                          ActiveBackground;                                           // 0x02B8   (0x0008)  
	class UModioGridPanel*                             NavButtonGridPanel;                                         // 0x02C0   (0x0008)  
	bool                                               bIsFocused;                                                 // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x02C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioModDetailsImageGallery.PrevImage
	// void PrevImage();                                                                                                        // [0x16e96f0] Native|Protected     
	// Function /Script/ModioUI.ModioModDetailsImageGallery.OnGalleryImageLoad
	// void OnGalleryImageLoad(class UTexture2DDynamic* LoadedImage, FModioModID ModId, int32_t Index);                         // [0x16efc40] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsImageGallery.NextImage
	// void NextImage();                                                                                                        // [0x16efb90] Native|Protected     
	// Function /Script/ModioUI.ModioModDetailsImageGallery.GetImageCount
	// int32_t GetImageCount();                                                                                                 // [0x16ef2e0] Native|Protected     
	// Function /Script/ModioUI.ModioModDetailsImageGallery.ApplyImageToWidget
	// void ApplyImageToWidget(class UWidget* Widget, int32_t ImageIndex);                                                      // [0x16eef40] Native|Protected     
};

/// Class /Script/ModioUI.ModioModDetailsImageGalleryNavButtonBase
/// Size: 0x0088 (136 bytes) (0x000278 - 0x000300) align 8 pad: 0x0000
class UModioModDetailsImageGalleryNavButtonBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UModioImage*                                 Image;                                                      // 0x0280   (0x0008)  
	SDK_UNDEFINED(40,1870) /* TWeakObjectPtr<UMaterialInterface*> */ __um(SpecifiedMaterial);                      // 0x0288   (0x0028)  
	FSlateColor                                        UnselectedColor;                                            // 0x02B0   (0x0028)  
	FSlateColor                                        SelectedColor;                                              // 0x02D8   (0x0028)  
};

/// Class /Script/ModioUI.ModioModDetailsOpProgress
/// Size: 0x0060 (96 bytes) (0x0002A0 - 0x000300) align 8 pad: 0x0000
class UModioModDetailsOpProgress : public UModioModManagementWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02A0   (0x0010)  MISSED
	class UModioProgressBar*                           ProgressBar;                                                // 0x02B0   (0x0008)  
	class UModioRichTextBlock*                         TimeRemainingText;                                          // 0x02B8   (0x0008)  
	FText                                              TimeRemainingTextFormat;                                    // 0x02C0   (0x0018)  
	FText                                              SpeedTextFormat;                                            // 0x02D8   (0x0018)  
	class UModioRichTextBlock*                         OperationSpeedText;                                         // 0x02F0   (0x0008)  
	class UModioRichTextBlock*                         OperationProgressText;                                      // 0x02F8   (0x0008)  
};

/// Struct /Script/ModioUI.ModioModInfoPropertyDescriptor
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioModInfoPropertyDescriptor
{ 
	FText                                              Label;                                                      // 0x0000   (0x0018)  
	EModioModInfoPropertyType                          Property;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/ModioUI.ModioModPropertyInspectorBase
/// Size: 0x0018 (24 bytes) (0x000278 - 0x000290) align 8 pad: 0x0000
class UModioModPropertyInspectorBase : public UModioUserWidgetBase
{ 
public:
	TArray<FModioModInfoPropertyDescriptor>            PropertiesToDisplay;                                        // 0x0278   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0288   (0x0008)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioModPropertyInspectorBase.UpdatePropertyDisplay
	// void UpdatePropertyDisplay();                                                                                            // [0x16f6730] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModioUI.ModioModPropertyInspectorBase.OnUpdatePropertyDisplay
	// void OnUpdatePropertyDisplay();                                                                                          // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUI.ModioModDetailsPropertyInspector
/// Size: 0x0068 (104 bytes) (0x000290 - 0x0002F8) align 8 pad: 0x0000
class UModioModDetailsPropertyInspector : public UModioModPropertyInspectorBase
{ 
public:
	class UModioGridPanel*                             PropertyGrid;                                               // 0x0290   (0x0008)  
	FText                                              LastUpdatedFormat;                                          // 0x0298   (0x0018)  
	FModioUIStyleRef                                   PropertyNameTextStyle;                                      // 0x02B0   (0x0008)  
	FName                                              DefaultPropertyNameStyleName;                               // 0x02B8   (0x0008)  
	FModioUIStyleRef                                   PropertyValueTextStyle;                                     // 0x02C0   (0x0008)  
	FName                                              DefaultPropertyValueStyleName;                              // 0x02C8   (0x0008)  
	FModioUIStyleRef                                   FillerTextStyle;                                            // 0x02D0   (0x0008)  
	FName                                              FillerStyleName;                                            // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x02E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioModDetailsPropertyInspector.GetTextStyle
	// FModioRichTextStyle GetTextStyle(FModioUIStyleRef TextStyle);                                                            // [0x16f5ed0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsPropertyInspector.GetPropertyValueStyleNames
	// TArray<FString> GetPropertyValueStyleNames();                                                                            // [0x16f5e50] Final|Native|Protected|Const 
	// Function /Script/ModioUI.ModioModDetailsPropertyInspector.GetPropertyNameStyleNames
	// TArray<FString> GetPropertyNameStyleNames();                                                                             // [0x16f5dd0] Final|Native|Protected|Const 
	// Function /Script/ModioUI.ModioModDetailsPropertyInspector.GetFillerStyleNames
	// TArray<FString> GetFillerStyleNames();                                                                                   // [0x16f5d50] Final|Native|Protected|Const 
};

/// Class /Script/ModioUI.ModioModDetailsView
/// Size: 0x0180 (384 bytes) (0x0002A8 - 0x000428) align 8 pad: 0x0000
class UModioModDetailsView : public UModioMenuView
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x02A8   (0x0048)  MISSED
	class UWidget*                                     DetailsLoader;                                              // 0x02F0   (0x0008)  
	class UModioAsyncOpWrapperWidget*                  DetailsViewContent;                                         // 0x02F8   (0x0008)  
	class UModioRichTextButton*                        SubscribeButton;                                            // 0x0300   (0x0008)  
	class UModioRichTextButton*                        RateUpButton;                                               // 0x0308   (0x0008)  
	class UModioRichTextButton*                        RateDownButton;                                             // 0x0310   (0x0008)  
	class UModioRichTextButton*                        ReportButton;                                               // 0x0318   (0x0008)  
	class UModioUserWidgetBase*                        ModPropertiesInspector;                                     // 0x0320   (0x0008)  
	class UModioModManagementWidgetBase*               ProgressWidget;                                             // 0x0328   (0x0008)  
	FText                                              SubscribeButtonFormat;                                      // 0x0330   (0x0018)  
	FText                                              RateUpTextFormat;                                           // 0x0348   (0x0018)  
	FText                                              RateDownTextFormat;                                         // 0x0360   (0x0018)  
	FText                                              ReportTextFormat;                                           // 0x0378   (0x0018)  
	class UModioRichTextBlock*                         ModTitleTextBlock;                                          // 0x0390   (0x0008)  
	class UModioRichTextBlock*                         ModSummaryTextBlock;                                        // 0x0398   (0x0008)  
	class UModioRichTextBlock*                         ModFullDescriptionTextBlock;                                // 0x03A0   (0x0008)  
	class UModioErrorRetryWidget*                      ModioErrorWithRetryWidget;                                  // 0x03A8   (0x0008)  
	class UModioTagList*                               ModTags;                                                    // 0x03B0   (0x0008)  
	class UModioRichTextBlock*                         ModChangelog;                                               // 0x03B8   (0x0008)  
	FText                                              SubscribeLabel;                                             // 0x03C0   (0x0018)  
	FText                                              UnsubscribeLabel;                                           // 0x03D8   (0x0018)  
	class UModioModDetailsImageGallery*                ImageGallery;                                               // 0x03F0   (0x0008)  
	class UModioSubscriptionBadge*                     SubscriptionBadge;                                          // 0x03F8   (0x0008)  
	class UModioScrollBox*                             ScrollBox;                                                  // 0x0400   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0408   (0x0014)  MISSED
	int32_t                                            ControllerScrollingMultiplier;                              // 0x041C   (0x0004)  
	float                                              ScrollingSpeed;                                             // 0x0420   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0424   (0x0004)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioModDetailsView.SetInitialFocus
	// void SetInitialFocus();                                                                                                  // [0x16f6650] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.ReportClicked
	// void ReportClicked();                                                                                                    // [0x16f65a0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.RateUpClicked
	// void RateUpClicked();                                                                                                    // [0x16f6580] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.RateDownClicked
	// void RateDownClicked();                                                                                                  // [0x16f6560] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.OnRatingSubmissionComplete
	// void OnRatingSubmissionComplete(FModioErrorCode ec, EModioRating SubmittedRating);                                       // [0x16f62b0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.OnModSubscriptionStatusChanged
	// void OnModSubscriptionStatusChanged(FModioModID ID, bool Subscribed);                                                    // [0x16f6140] Native|Protected     
	// Function /Script/ModioUI.ModioModDetailsView.OnDownloadQueueClosed
	// void OnDownloadQueueClosed();                                                                                            // [0x16f6120] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.OnDialogClosed
	// void OnDialogClosed();                                                                                                   // [0x16f6100] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.NativeSubscribeClicked
	// void NativeSubscribeClicked();                                                                                           // [0x16f60c0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModDetailsView.EnableSubscribeButton
	// void EnableSubscribeButton();                                                                                            // [0x16f5d10] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioModNameWidget
/// Size: 0x0028 (40 bytes) (0x000108 - 0x000130) align 8 pad: 0x0000
class UModioModNameWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UObject*                                     DataSource;                                                 // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0118   (0x0010)  MISSED
	FModioUIStyleRef                                   Style;                                                      // 0x0128   (0x0008)  
};

/// Class /Script/ModioUI.ModioModTile
/// Size: 0x0050 (80 bytes) (0x0003B0 - 0x000400) align 8 pad: 0x0000
class UModioModTile : public UModioModTileBase
{ 
public:
	class UModioPopupMenu*                             MoreOptionsMenu;                                            // 0x03B0   (0x0008)  
	FText                                              MoreOptionsLabel;                                           // 0x03B8   (0x0018)  
	class UModioImage*                                 TileActiveFrame;                                            // 0x03D0   (0x0008)  
	SDK_UNDEFINED(16,1871) /* FMulticastInlineDelegate */ __um(OnDetailsClicked);                                  // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,1872) /* FMulticastInlineDelegate */ __um(OnReportClicked);                                   // 0x03E8   (0x0010)  
	float                                              TruncateDivider;                                            // 0x03F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x03FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioModTile.SubmitPositiveRating
	// void SubmitPositiveRating();                                                                                             // [0x16f6710] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModTile.SubmitNegativeRating
	// void SubmitNegativeRating();                                                                                             // [0x16f66f0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModTile.SubmitModReport
	// void SubmitModReport();                                                                                                  // [0x16f0440] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModTile.SetSizeOverride
	// void SetSizeOverride(FVector2D NewSize);                                                                                 // [0x16f6670] Final|Native|Public|HasDefaults 
	// Function /Script/ModioUI.ModioModTile.OnThumbnailMouseDown
	// FEventReply OnThumbnailMouseDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                       // [0x16f6390] Final|Native|Protected|HasOutParms 
	// Function /Script/ModioUI.ModioModTile.NativeReportClicked
	// void NativeReportClicked();                                                                                              // [0x16f60a0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioModTile.NativeMoreOptionsClicked
	// void NativeMoreOptionsClicked();                                                                                         // [0x16f6080] Final|Native|Protected 
};

/// Struct /Script/ModioUI.ModioModTileStyle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FModioModTileStyle : FSlateWidgetStyle
{ 
	FSlateSound                                        HoveredSound;                                               // 0x0008   (0x0018)  
	FSlateSound                                        PressedSound;                                               // 0x0020   (0x0018)  
};

/// Class /Script/ModioUI.ModioModTileStyleContainer
/// Size: 0x0038 (56 bytes) (0x0000D0 - 0x000108) align 8 pad: 0x0000
class UModioModTileStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioModTileStyle                                 Style;                                                      // 0x00D0   (0x0038)  
};

/// Class /Script/ModioUI.ModioModUninstallHeaderWidget
/// Size: 0x0048 (72 bytes) (0x000108 - 0x000150) align 8 pad: 0x0000
class UModioModUninstallHeaderWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UObject*                                     DataSource;                                                 // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0118   (0x0030)  MISSED
	FModioUIStyleRef                                   Style;                                                      // 0x0148   (0x0008)  
};

/// Class /Script/ModioUI.ModioMoreOptionsDialog
/// Size: 0x0008 (8 bytes) (0x000280 - 0x000288) align 8 pad: 0x0000
class UModioMoreOptionsDialog : public UModioDialogBase
{ 
public:
	class UModioTileView*                              OptionsList;                                                // 0x0280   (0x0008)  
};

/// Class /Script/ModioUI.ModioMultiLineEditableTextBox
/// Size: 0x0070 (112 bytes) (0x000C98 - 0x000D08) align 8 pad: 0x0000
class UModioMultiLineEditableTextBox : public UMultiLineEditableTextBox
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0C98   (0x0020)  MISSED
	bool                                               bValidateInput;                                             // 0x0CB8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0CB9   (0x0007)  MISSED
	TArray<FModioTextValidationRule>                   ValidationRules;                                            // 0x0CC0   (0x0010)  
	bool                                               bDisplayValidationErrors;                                   // 0x0CD0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0CD1   (0x0003)  MISSED
	FModioUIStyleRef                                   ErrorTextStyle;                                             // 0x0CD4   (0x0008)  
	unsigned char                                      UnknownData03_6[0x24];                                      // 0x0CDC   (0x0024)  MISSED
	FModioUIStyleRef                                   TextBoxStyle;                                               // 0x0D00   (0x0008)  
};

/// Struct /Script/ModioUI.ModioMultiLineEditableTextBoxStyle
/// Size: 0x0008 (8 bytes) (0x0007F8 - 0x000800) align 8 pad: 0x0000
struct FModioMultiLineEditableTextBoxStyle : FEditableTextBoxStyle
{ 
	FModioUIStyleRef                                   ModioTextStyle;                                             // 0x07F8   (0x0008)  
};

/// Class /Script/ModioUI.ModioMultiLineEditableTextBoxStyleContainer
/// Size: 0x0800 (2048 bytes) (0x0000D0 - 0x0008D0) align 8 pad: 0x0000
class UModioMultiLineEditableTextBoxStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioMultiLineEditableTextBoxStyle                Style;                                                      // 0x00D0   (0x0800)  
};

/// Class /Script/ModioUI.ModioNamedGlyphMaterialParams
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UModioNamedGlyphMaterialParams : public UModioProceduralBrushParams
{ 
public:
	FName                                              GlyphName;                                                  // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioNamedGlyphMaterialParams.GetValidGlyphNames
	// TArray<FString> GetValidGlyphNames();                                                                                    // [0x16f5f80] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioNamedGlyphsDataAsset
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UModioNamedGlyphsDataAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,1873) /* TMap<FName, UTexture2D*> */ __um(NamedGlyphs);                                       // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,1874) /* TMap<FName, UTexture2D*> */ __um(PngGlyphs);                                         // 0x0080   (0x0050)  
};

/// Class /Script/ModioUI.ModioNavigationConfigFactoryBase
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
class UModioNavigationConfigFactoryBase : public UDataAsset
{ 
public:
};

/// Class /Script/ModioUI.ModioNavigationConfigFactory
/// Size: 0x0010 (16 bytes) (0x000030 - 0x000040) align 8 pad: 0x0000
class UModioNavigationConfigFactory : public UModioNavigationConfigFactoryBase
{ 
public:
	bool                                               bTabNavigation;                                             // 0x0030   (0x0001)  
	bool                                               bKeyNavigation;                                             // 0x0031   (0x0001)  
	bool                                               bAnalogNavigation;                                          // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              AnalogNavigationHorizontalThreshold;                        // 0x0034   (0x0004)  
	float                                              AnalogNavigationVerticalThreshold;                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/ModioUI.ModioNotificationControllerBase
/// Size: 0x0020 (32 bytes) (0x000278 - 0x000298) align 8 pad: 0x0000
class UModioNotificationControllerBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	int32_t                                            MaxNotificationsOnScreen;                                   // 0x0280   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	class UClass*                                      ErrorNotificationClass;                                     // 0x0288   (0x0008)  
	class UVerticalBox*                                NotificationList;                                           // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioNotificationControllerBase.OnNotificationExpired
	// void OnNotificationExpired(class UWidget* Notification);                                                                 // [0x16f6220] Native|Protected     
};

/// Class /Script/ModioUI.ModioNotificationControllerSlot
/// Size: 0x0028 (40 bytes) (0x000058 - 0x000080) align 8 pad: 0x0000
class UModioNotificationControllerSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0058   (0x0010)  MISSED
	EModioNotificationControllerSlotEdge               Edge;                                                       // 0x0068   (0x0001)  
	TEnumAsByte<EHorizontalAlignment>                  NotificationHorizontalAlignment;                            // 0x0069   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    NotificationVerticalAlignment;                              // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x006B   (0x0001)  MISSED
	float                                              VisibleDuration;                                            // 0x006C   (0x0004)  
	bool                                               bExpanded;                                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              AnimationTime;                                              // 0x0074   (0x0004)  
	float                                              CurrentAnimationProgress;                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/ModioUI.ModioNotificationStyle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000058) align 8 pad: 0x0000
struct FModioNotificationStyle : FSlateWidgetStyle
{ 
	FModioUIStyleRef                                   TextStyleSet;                                               // 0x0008   (0x0008)  
	FName                                              PrimaryTextStyleName;                                       // 0x0010   (0x0008)  
	FName                                              SecondaryTextStyleName;                                     // 0x0018   (0x0008)  
	FModioUIMaterialRef                                ErrorSuccessGlyph;                                          // 0x0020   (0x0008)  
	FModioUIMaterialRef                                ErrorFailureGlyph;                                          // 0x0028   (0x0008)  
	FModioUIMaterialRef                                BackgroundMaterial;                                         // 0x0030   (0x0008)  
	FModioUIColorRef                                   SuccessColor;                                               // 0x0038   (0x0008)  
	FModioUIColorRef                                   ErrorColor;                                                 // 0x0040   (0x0008)  
	FMargin                                            ContentPadding;                                             // 0x0048   (0x0010)  
};

/// Class /Script/ModioUI.ModioNotificationStyleContainer
/// Size: 0x0058 (88 bytes) (0x0000D0 - 0x000128) align 8 pad: 0x0000
class UModioNotificationStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioNotificationStyle                            Style;                                                      // 0x00D0   (0x0058)  
};

/// Class /Script/ModioUI.ModioNotificationWidgetBase
/// Size: 0x0030 (48 bytes) (0x000278 - 0x0002A8) align 8 pad: 0x0000
class UModioNotificationWidgetBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0278   (0x0010)  MISSED
	FModioUIStyleRef                                   NotificationStyle;                                          // 0x0288   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0290   (0x0018)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioNotificationWidgetBase.CreateFromParams
	// class UWidget* CreateFromParams(class UClass* NotificationClass, FModioNotificationParams& Params, class UWidget* Outer); // [0x16f58f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioNotificationErrorWidgetBase
/// Size: 0x0030 (48 bytes) (0x0002A8 - 0x0002D8) align 8 pad: 0x0000
class UModioNotificationErrorWidgetBase : public UModioNotificationWidgetBase
{ 
public:
	class UModioImage*                                 StatusColorBackground;                                      // 0x02A8   (0x0008)  
	class UModioImage*                                 StatusIndicator;                                            // 0x02B0   (0x0008)  
	class UModioRichTextBlock*                         NotificationTitle;                                          // 0x02B8   (0x0008)  
	class UModioRichTextBlock*                         NotificationMessage;                                        // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x02C8   (0x0010)  MISSED
};

/// Struct /Script/ModioUI.ModioUIMenuCommandList
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FModioUIMenuCommandList
{ 
	SDK_UNDEFINED(80,1875) /* TMap<FModioUIMenuEntry, FModioUIAction> */ __um(MappedActions);                      // 0x0000   (0x0050)  
};

/// Class /Script/ModioUI.ModioPopupComboBox
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000228) align 8 pad: 0x0000
class UModioPopupComboBox : public UWidget
{ 
public:
	FModioUIMenuCommandList                            CurrentEntries;                                             // 0x0108   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0158   (0x0010)  MISSED
	FText                                              Description;                                                // 0x0168   (0x0018)  
	FText                                              LabelFormatText;                                            // 0x0180   (0x0018)  
	FText                                              ValueFormatText;                                            // 0x0198   (0x0018)  
	bool                                               bUseRoundedCorners;                                         // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01B1   (0x0003)  MISSED
	FModioUIStyleRef                                   RoundedCornerStyle;                                         // 0x01B4   (0x0008)  
	FModioUIStyleRef                                   ComboBoxStyle;                                              // 0x01BC   (0x0008)  
	FModioUIStyleRef                                   TextStyle;                                                  // 0x01C4   (0x0008)  
	FMargin                                            ContentPadding;                                             // 0x01CC   (0x0010)  
	bool                                               bPreviewOpen;                                               // 0x01DC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01DD   (0x0003)  MISSED
	TArray<FText>                                      OptionValues;                                               // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x01F0   (0x0030)  MISSED
	EModioPopupPlacement                               PopupPlacement;                                             // 0x0220   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0221   (0x0007)  MISSED
};

/// Class /Script/ModioUI.ModioPopupMenu
/// Size: 0x00B0 (176 bytes) (0x000170 - 0x000220) align 8 pad: 0x0000
class UModioPopupMenu : public UMenuAnchor
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0170   (0x0050)  MISSED
	FText                                              ButtonLabel;                                                // 0x01C0   (0x0018)  
	TEnumAsByte<ETextJustify>                          ButtonLabelJustification;                                   // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01D9   (0x0007)  MISSED
	class UUserWidget*                                 CurrentContent;                                             // 0x01E0   (0x0008)  
	class UModioRichTextButton*                        MenuButton;                                                 // 0x01E8   (0x0008)  
	FModioUIStyleRef                                   ButtonStyle;                                                // 0x01F0   (0x0008)  
	FModioUIStyleRef                                   PopupMenuStyle;                                             // 0x01F8   (0x0008)  
	class UClass*                                      MenuContentWidgetClass;                                     // 0x0200   (0x0008)  
	FKey                                               KeyForInputHint;                                            // 0x0208   (0x0018)  


	/// Functions
	// Function /Script/ModioUI.ModioPopupMenu.SetMenuEntries
	// void SetMenuEntries(FModioUIMenuCommandList Entries);                                                                    // [0x16fcb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioPopupMenu.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x16fc850] Native|Protected     
	// Function /Script/ModioUI.ModioPopupMenu.GeneratePopupMenuContent
	// class UUserWidget* GeneratePopupMenuContent();                                                                           // [0x16fc580] Final|Native|Protected 
};

/// Struct /Script/ModioUI.ModioPopupMenuStyle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FModioPopupMenuStyle : FSlateWidgetStyle
{ 
	FSlateSound                                        HoveredSound;                                               // 0x0008   (0x0018)  
	FSlateSound                                        PressedSound;                                               // 0x0020   (0x0018)  
};

/// Class /Script/ModioUI.ModioPopupMenuStyleContainer
/// Size: 0x0038 (56 bytes) (0x0000D0 - 0x000108) align 8 pad: 0x0000
class UModioPopupMenuStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioPopupMenuStyle                               Style;                                                      // 0x00D0   (0x0038)  
};

/// Class /Script/ModioUI.ModioProgressBar
/// Size: 0x0008 (8 bytes) (0x000318 - 0x000320) align 8 pad: 0x0000
class UModioProgressBar : public UProgressBar
{ 
public:
	FModioUIStyleRef                                   StyleRef;                                                   // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioProgressBar.SetStyleRef
	// void SetStyleRef(FModioUIStyleRef NewStyle);                                                                             // [0x16fcc50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ModioUI.ModioProgressBarStyle
/// Size: 0x0000 (0 bytes) (0x0001A0 - 0x0001A0) align 8 pad: 0x0000
struct FModioProgressBarStyle : FProgressBarStyle
{ 
};

/// Class /Script/ModioUI.ModioProgressBarStyleContainer
/// Size: 0x01A0 (416 bytes) (0x0000D0 - 0x000270) align 8 pad: 0x0000
class UModioProgressBarStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioProgressBarStyle                             Style;                                                      // 0x00D0   (0x01A0)  
};

/// Class /Script/ModioUI.ModioRefineSearchDrawer
/// Size: 0x0080 (128 bytes) (0x000278 - 0x0002F8) align 8 pad: 0x0000
class UModioRefineSearchDrawer : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0278   (0x0018)  MISSED
	class UModioEditableTextBox*                       SearchInput;                                                // 0x0290   (0x0008)  
	class UModioTagListWidgetBase*                     TagSelector;                                                // 0x0298   (0x0008)  
	class UModioRichTextButton*                        ApplyButton;                                                // 0x02A0   (0x0008)  
	class UModioRichTextButton*                        ClearButton;                                                // 0x02A8   (0x0008)  
	class UModioRichTextButton*                        CancelButton;                                               // 0x02B0   (0x0008)  
	SDK_UNDEFINED(16,1876) /* FMulticastInlineDelegate */ __um(OnSettingsChanged);                                 // 0x02B8   (0x0010)  
	class UModioTagOptionsUI*                          TagOptions;                                                 // 0x02C8   (0x0008)  
	TArray<class UWidget*>                             NavigationPath;                                             // 0x02D0   (0x0010)  
	class UModioUI4Subsystem*                          UISubsystem;                                                // 0x02E0   (0x0008)  
	class UModioTagSelectorWidgetBase*                 CurrentActiveTagSelector;                                   // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioRefineSearchDrawer.OnCollapse
	// void OnCollapse();                                                                                                       // [0x16fc980] Final|Native|Protected 
	// Function /Script/ModioUI.ModioRefineSearchDrawer.OnClearClicked
	// void OnClearClicked();                                                                                                   // [0x16fc960] Final|Native|Protected 
	// Function /Script/ModioUI.ModioRefineSearchDrawer.OnCancelClicked
	// void OnCancelClicked();                                                                                                  // [0x16fc8b0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioRefineSearchDrawer.OnApplyClicked
	// void OnApplyClicked();                                                                                                   // [0x16fc890] Final|Native|Protected 
	// Function /Script/ModioUI.ModioRefineSearchDrawer.ConstructNavigationPath
	// void ConstructNavigationPath();                                                                                          // [0x16fc560] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioRemoveModDialog
/// Size: 0x0020 (32 bytes) (0x000280 - 0x0002A0) align 8 pad: 0x0000
class UModioRemoveModDialog : public UModioDialogBase
{ 
public:
	class UModioTextBlock*                             ModName;                                                    // 0x0280   (0x0008)  
	class UModioTextBlock*                             PromptMessage;                                              // 0x0288   (0x0008)  
	class UModioButton*                                BackButton;                                                 // 0x0290   (0x0008)  
	class UModioButton*                                ConfirmButton;                                              // 0x0298   (0x0008)  
};

/// Class /Script/ModioUI.ModioReportButtonGroupWidget
/// Size: 0x0048 (72 bytes) (0x000108 - 0x000150) align 8 pad: 0x0000
class UModioReportButtonGroupWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0108   (0x0020)  MISSED
	class UObject*                                     DataSource;                                                 // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0130   (0x0008)  MISSED
	FModioUIStyleRef                                   ButtonStyle;                                                // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioReportButtonGroupWidget.CancelClicked
	// void CancelClicked();                                                                                                    // [0x16fc540] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioReportModDialog
/// Size: 0x0000 (0 bytes) (0x000280 - 0x000280) align 8 pad: 0x0000
class UModioReportModDialog : public UModioDialogBase
{ 
public:
};

/// Class /Script/ModioUI.ModioReportSummaryWidget
/// Size: 0x0010 (16 bytes) (0x000D08 - 0x000D18) align 8 pad: 0x0000
class UModioReportSummaryWidget : public UModioMultiLineEditableTextBox
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0D08   (0x0008)  MISSED
	class UObject*                                     DataSource;                                                 // 0x0D10   (0x0008)  
};

/// Class /Script/ModioUI.ModioRetainerBox
/// Size: 0x0000 (0 bytes) (0x000150 - 0x000150) align 8 pad: 0x0000
class UModioRetainerBox : public URetainerBox
{ 
public:
};

/// Class /Script/ModioUI.ModioRichTextBlock
/// Size: 0x0020 (32 bytes) (0x000678 - 0x000698) align 8 pad: 0x0000
class UModioRichTextBlock : public URichTextBlock
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0678   (0x0010)  MISSED
	FModioUIStyleRef                                   TextStyle;                                                  // 0x0688   (0x0008)  
	FName                                              DefaultStyleName;                                           // 0x0690   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioRichTextBlock.GetStyleNames
	// TArray<FString> GetStyleNames();                                                                                         // [0x16fc750] Final|Native|Protected|Const 
};

/// Class /Script/ModioUI.ModioRichTextBlockDecorator
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioRichTextBlockDecorator : public URichTextBlockDecorator
{ 
public:
};

/// Class /Script/ModioUI.ModioRichTextButton
/// Size: 0x0078 (120 bytes) (0x0004E0 - 0x000558) align 8 pad: 0x0000
class UModioRichTextButton : public UModioButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x04E0   (0x0028)  MISSED
	class UModioRichTextBlock*                         ButtonContent;                                              // 0x0508   (0x0008)  
	class UModioInputBindingImage*                     InputHintImage;                                             // 0x0510   (0x0008)  
	FText                                              ButtonLabel;                                                // 0x0518   (0x0018)  
	FName                                              DefaultStyleName;                                           // 0x0530   (0x0008)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x0538   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0539   (0x0007)  MISSED
	FKey                                               KeyForInputHint;                                            // 0x0540   (0x0018)  


	/// Functions
	// Function /Script/ModioUI.ModioRichTextButton.GetStyleNames
	// TArray<FString> GetStyleNames();                                                                                         // [0x16fc7d0] Final|Native|Protected|Const 
	// Function /Script/ModioUI.ModioRichTextButton.GetRichTextStyle
	// FModioRichTextStyle GetRichTextStyle();                                                                                  // [0x16fc700] Final|Native|Public|Const 
	// Function /Script/ModioUI.ModioRichTextButton.GetInputHintVisibility
	// ESlateVisibility GetInputHintVisibility(EModioUIInputMode InputMode);                                                    // [0x16fc5b0] Final|Native|Protected 
};

/// Struct /Script/ModioUI.ModioRichTextStyle
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A8) align 8 pad: 0x0000
struct FModioRichTextStyle : FSlateWidgetStyle
{ 
	SDK_UNDEFINED(80,1877) /* TMap<FName, FTextBlockStyle> */ __um(Styles);                                        // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,1878) /* TMap<FName, FModioTextBlockStyleOverride> */ __um(InlineStyleOverrides);             // 0x0058   (0x0050)  
};

/// Class /Script/ModioUI.ModioRichTextStyleContainer
/// Size: 0x00A8 (168 bytes) (0x0000D0 - 0x000178) align 8 pad: 0x0000
class UModioRichTextStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioRichTextStyle                                Style;                                                      // 0x00D0   (0x00A8)  
};

/// Class /Script/ModioUI.ModioRoundedBorder
/// Size: 0x0030 (48 bytes) (0x000150 - 0x000180) align 8 pad: 0x0000
class UModioRoundedBorder : public UModioRetainerBox
{ 
public:
	SDK_UNDEFINED(40,1879) /* TWeakObjectPtr<UMaterialInterface*> */ __um(RetainerMaterial);                       // 0x0150   (0x0028)  
	FModioUIStyleRef                                   BorderStyle;                                                // 0x0178   (0x0008)  
};

/// Class /Script/ModioUI.ModioRoundedImage
/// Size: 0x0020 (32 bytes) (0x000218 - 0x000238) align 8 pad: 0x0000
class UModioRoundedImage : public UModioImage
{ 
public:
	FModioUIMaterialRef                                MaterialToUse;                                              // 0x0218   (0x0008)  
	class UMaterialInterface*                          CachedReferencedMaterial;                                   // 0x0220   (0x0008)  
	class UMaterialInstanceDynamic*                    ImageMaterial;                                              // 0x0228   (0x0008)  
	FName                                              TextureParameterName;                                       // 0x0230   (0x0008)  
};

/// Class /Script/ModioUI.ModioRoundedRectangleMaterialParams
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000068) align 8 pad: 0x0000
class UModioRoundedRectangleMaterialParams : public UModioProceduralBrushParams
{ 
public:
	FModioUIColorRef                                   NormalBorderColor;                                          // 0x0028   (0x0008)  
	FModioUIColorRef                                   FocusedBorderColor;                                         // 0x0030   (0x0008)  
	FModioUIColorRef                                   InnerColor;                                                 // 0x0038   (0x0008)  
	bool                                               bRelativeRadius;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              CornerRadius;                                               // 0x0044   (0x0004)  
	float                                              BorderThickness;                                            // 0x0048   (0x0004)  
	bool                                               bEnableBorder;                                              // 0x004C   (0x0001)  
	bool                                               bEnableButtonGradients;                                     // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	FModioUIColorRef                                   BorderGradientColor;                                        // 0x0050   (0x0008)  
	FModioUIColorRef                                   InnerGradientColor;                                         // 0x0058   (0x0008)  
	float                                              BorderGradientOpacity;                                      // 0x0060   (0x0004)  
	float                                              InnerGradientOpacity;                                       // 0x0064   (0x0004)  
};

/// Class /Script/ModioUI.ModioScrollBox
/// Size: 0x0030 (48 bytes) (0x000880 - 0x0008B0) align 8 pad: 0x0000
class UModioScrollBox : public UScrollBox
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0880   (0x0028)  MISSED
	EModioScrollBoxBarAlignment                        ScrollBarAlignment;                                         // 0x08A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x08A9   (0x0003)  MISSED
	float                                              AdditionalPadding;                                          // 0x08AC   (0x0004)  
};

/// Class /Script/ModioUI.ModioSearchOptionsDialog
/// Size: 0x0020 (32 bytes) (0x000280 - 0x0002A0) align 8 pad: 0x0000
class UModioSearchOptionsDialog : public UModioDialogBase
{ 
public:
	class UModioTabController*                         TagCategorySelector;                                        // 0x0280   (0x0008)  
	class UModioListView*                              TagList;                                                    // 0x0288   (0x0008)  
	class UModioButton*                                ApplyButton;                                                // 0x0290   (0x0008)  
	class UModioButton*                                MoreOptionsButton;                                          // 0x0298   (0x0008)  
};

/// Class /Script/ModioUI.ModioSearchResultsView
/// Size: 0x0198 (408 bytes) (0x0002A8 - 0x000440) align 8 pad: 0x0000
class UModioSearchResultsView : public UModioMenuView
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x02A8   (0x0048)  MISSED
	TArray<class UModioModInfoUI*>                     SearchResults;                                              // 0x02F0   (0x0010)  
	class UModioTileView*                              ResultsTileView;                                            // 0x0300   (0x0008)  
	class UUserWidget*                                 FirstTile;                                                  // 0x0308   (0x0008)  
	class UWidget*                                     ResultLoader;                                               // 0x0310   (0x0008)  
	class UModioGridPanel*                             NoResultsDialog;                                            // 0x0318   (0x0008)  
	class UModioTagList*                               SearchTags;                                                 // 0x0320   (0x0008)  
	class UModioButton*                                RefineSearchButton;                                         // 0x0328   (0x0008)  
	class UModioButton*                                NoResultsRefineSearchButton;                                // 0x0330   (0x0008)  
	class UModioPopupComboBox*                         SortBy;                                                     // 0x0338   (0x0008)  
	class UModioErrorRetryWidget*                      ModioErrorWithRetryWidget;                                  // 0x0340   (0x0008)  
	class UModioRichTextBlock*                         SearchResultsCount;                                         // 0x0348   (0x0008)  
	FModioUIStyleRef                                   TitleTextStyle;                                             // 0x0350   (0x0008)  
	FText                                              PageTitle;                                                  // 0x0358   (0x0018)  
	FText                                              ModQueryFormatText;                                         // 0x0370   (0x0018)  
	FString                                            DefaultTagText;                                             // 0x0388   (0x0010)  
	FText                                              SearchInputTagFormatText;                                   // 0x0398   (0x0018)  
	unsigned char                                      UnknownData01_7[0x90];                                      // 0x03B0   (0x0090)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioSearchResultsView.SortByTrending
	// void SortByTrending();                                                                                                   // [0x16fce70] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.SortByRecentlyAdded
	// void SortByRecentlyAdded();                                                                                              // [0x16fce50] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.SortByMostSubscribers
	// void SortByMostSubscribers();                                                                                            // [0x16fce30] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.SortByMostPopular
	// void SortByMostPopular();                                                                                                // [0x16fce10] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.SortByLastUpdated
	// void SortByLastUpdated();                                                                                                // [0x16fcdf0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.SortByHighestRated
	// void SortByHighestRated();                                                                                               // [0x16fcdd0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.OnRetryPressed
	// void OnRetryPressed();                                                                                                   // [0x16fc9c0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.OnRefineSearchButtonClicked
	// void OnRefineSearchButtonClicked();                                                                                      // [0x16fc9a0] Final|Native|Protected 
	// Function /Script/ModioUI.ModioSearchResultsView.OnDrawerClosed
	// void OnDrawerClosed();                                                                                                   // [0xbbc500] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioSelectableTag
/// Size: 0x0060 (96 bytes) (0x000278 - 0x0002D8) align 8 pad: 0x0000
class UModioSelectableTag : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0278   (0x0010)  MISSED
	FModioUIStyleRef                                   RadioCheckboxStyle;                                         // 0x0288   (0x0008)  
	FModioUIStyleRef                                   RadioCheckboxFocusedStyle;                                  // 0x0290   (0x0008)  
	class UModioCheckBox*                              TagSelectedCheckbox;                                        // 0x0298   (0x0008)  
	FModioUIStyleRef                                   NormalStyle;                                                // 0x02A0   (0x0008)  
	FModioUIStyleRef                                   FocusedStyle;                                               // 0x02A8   (0x0008)  
	FString                                            SearchString;                                               // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x02C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioSelectableTag.OnCheckboxCheckStateChanged
	// void OnCheckboxCheckStateChanged(bool bIsChecked);                                                                       // [0x16fc8d0] Final|Native|Public  
};

/// Class /Script/ModioUI.ModioSizeBox
/// Size: 0x0008 (8 bytes) (0x000158 - 0x000160) align 8 pad: 0x0000
class UModioSizeBox : public USizeBox
{ 
public:
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                     // 0x0158   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                     // 0x0159   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x015A   (0x0006)  MISSED
};

/// Class /Script/ModioUI.ModioSpecifiedMaterialParams
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UModioSpecifiedMaterialParams : public UModioProceduralBrushParams
{ 
public:
	class UMaterialInterface*                          SpecifiedMaterial;                                          // 0x0028   (0x0008)  
};

/// Class /Script/ModioUI.ModioSubscriptionBadge
/// Size: 0x0088 (136 bytes) (0x0002A0 - 0x000328) align 8 pad: 0x0000
class UModioSubscriptionBadge : public UModioModManagementWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02A0   (0x0010)  MISSED
	class UModioProgressBar*                           ProgressBar;                                                // 0x02B0   (0x0008)  
	class UModioRichTextBlock*                         Label;                                                      // 0x02B8   (0x0008)  
	FModioUIStyleRef                                   BadgeStyle;                                                 // 0x02C0   (0x0008)  
	FText                                              PendingLabelText;                                           // 0x02C8   (0x0018)  
	FText                                              DownloadingLabelText;                                       // 0x02E0   (0x0018)  
	FText                                              ExtractingLabelText;                                        // 0x02F8   (0x0018)  
	FText                                              SubscribedLabelText;                                        // 0x0310   (0x0018)  
};

/// Struct /Script/ModioUI.ModioSubscriptionBadgeStyle
/// Size: 0x0300 (768 bytes) (0x000008 - 0x000308) align 8 pad: 0x0000
struct FModioSubscriptionBadgeStyle : FSlateWidgetStyle
{ 
	FTextBlockStyle                                    LabelStyle;                                                 // 0x0008   (0x0270)  
	FModioUIStyleRef                                   LabelStyleNew;                                              // 0x0278   (0x0008)  
	FModioUIStyleRef                                   ProgressBarStyle;                                           // 0x0280   (0x0008)  
	FModioWidgetBorderStyle                            BadgeBorderStyle;                                           // 0x0288   (0x0080)  
};

/// Class /Script/ModioUI.ModioSubscriptionBadgeStyleContainer
/// Size: 0x0308 (776 bytes) (0x0000D0 - 0x0003D8) align 8 pad: 0x0000
class UModioSubscriptionBadgeStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioSubscriptionBadgeStyle                       Style;                                                      // 0x00D0   (0x0308)  
};

/// Class /Script/ModioUI.ModioTabBar
/// Size: 0x0908 (2312 bytes) (0x000108 - 0x000A10) align 8 pad: 0x0000
class UModioTabBar : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0108   (0x0030)  MISSED
	TArray<FText>                                      TabNames;                                                   // 0x0138   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0148   (0x0010)  MISSED
	FTableRowStyle                                     TEMP_TableRowStyle;                                         // 0x0158   (0x07C8)  
	FModioUIStyleRef                                   TabButtonStyle;                                             // 0x0920   (0x0008)  
	FModioUIStyleRef                                   InactiveTabButtonStyle;                                     // 0x0928   (0x0008)  
	FSlateBrush                                        SelectedButtonBrush;                                        // 0x0930   (0x0088)  
	SDK_UNDEFINED(80,1880) /* TMap<FName, FModioUIColorRef> */ __um(SerializedColors);                             // 0x09B8   (0x0050)  
	FVector2D                                          ItemSize;                                                   // 0x0A08   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioTabBar.OnTabIndexChanged
	// void OnTabIndexChanged(int32_t TabIndex);                                                                                // [0x16fc9e0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioTabButton
/// Size: 0x0010 (16 bytes) (0x000278 - 0x000288) align 8 pad: 0x0000
class UModioTabButton : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UModioButton*                                ClickableRegion;                                            // 0x0280   (0x0008)  
};

/// Class /Script/ModioUI.ModioTabController
/// Size: 0x0030 (48 bytes) (0x000278 - 0x0002A8) align 8 pad: 0x0000
class UModioTabController : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UModioInputBindingImage*                     NavigatePreviousHint;                                       // 0x0280   (0x0008)  
	class UModioTileView*                              TabButtons;                                                 // 0x0288   (0x0008)  
	class UModioInputBindingImage*                     NavigateNextHint;                                           // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,1881) /* FMulticastInlineDelegate */ __um(OnCurrentTabChanged);                               // 0x0298   (0x0010)  


	/// Functions
	// Function /Script/ModioUI.ModioTabController.SetTabItems
	// void SetTabItems(TArray<UObject*> NewItems);                                                                             // [0x16fcce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioTabController.SetCurrentTab
	// void SetCurrentTab(int64_t TabIndex);                                                                                    // [0x16fca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioTabController.PrevTab
	// void PrevTab();                                                                                                          // [0x16fca70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioTabController.NextTab
	// void NextTab();                                                                                                          // [0x16fc870] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioTabController.GetInputHintVisibility
	// ESlateVisibility GetInputHintVisibility(EModioUIInputMode InputMode);                                                    // [0x16fc640] Final|Native|Protected 
};

/// Struct /Script/ModioUI.ModioTableRowStyle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000038) align 8 pad: 0x0000
struct FModioTableRowStyle : FSlateWidgetStyle
{ 
	FModioUIColorRef                                   BackgroundHoverColor;                                       // 0x0008   (0x0008)  
	FModioUIColorRef                                   BackgroundSelectedColor;                                    // 0x0010   (0x0008)  
	FModioUIColorRef                                   BackgroundColor;                                            // 0x0018   (0x0008)  
	FModioUIColorRef                                   TextHoverColor;                                             // 0x0020   (0x0008)  
	FModioUIColorRef                                   TextSelectedColor;                                          // 0x0028   (0x0008)  
	FModioUIColorRef                                   TextColor;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/ModioUI.ModioTableRowStyleContainer
/// Size: 0x0038 (56 bytes) (0x0000D0 - 0x000108) align 8 pad: 0x0000
class UModioTableRowStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioTableRowStyle                                Style;                                                      // 0x00D0   (0x0038)  
};

/// Class /Script/ModioUI.ModioWrapBox
/// Size: 0x0000 (0 bytes) (0x000148 - 0x000148) align 8 pad: 0x0000
class UModioWrapBox : public UWrapBox
{ 
public:
};

/// Class /Script/ModioUI.ModioTagList
/// Size: 0x0068 (104 bytes) (0x000148 - 0x0001B0) align 8 pad: 0x0000
class UModioTagList : public UModioWrapBox
{ 
public:
	int32_t                                            NumberOfTagsToShow;                                         // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	TArray<FModioModTag>                               Tags;                                                       // 0x0150   (0x0010)  
	FText                                              ExcessTagCountText;                                         // 0x0160   (0x0018)  
	class UClass*                                      TagWidgetClass;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0180   (0x0030)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioTagList.SetTags
	// void SetTags(TArray<FModioModTag> NewTags);                                                                              // [0x1702770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioTagListWidgetBase
/// Size: 0x0020 (32 bytes) (0x000278 - 0x000298) align 8 pad: 0x0000
class UModioTagListWidgetBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UModioRichTextBlock*                         CategoryTextBlock;                                          // 0x0280   (0x0008)  
	class UScrollBox*                                  SelectorListScrollBox;                                      // 0x0288   (0x0008)  
	class UClass*                                      TagSelectorListTemplate;                                    // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioTagListWidgetBase.GetSelectedTags
	// TArray<FString> GetSelectedTags();                                                                                       // [0x1701f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioTagListWidgetBase.ClearSelectedTags
	// void ClearSelectedTags();                                                                                                // [0x1701ab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioTagSelectorWidgetBase
/// Size: 0x0048 (72 bytes) (0x000278 - 0x0002C0) align 8 pad: 0x0000
class UModioTagSelectorWidgetBase : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0278   (0x0010)  MISSED
	class UModioTagInfoUI*                             CachedTagInfo;                                              // 0x0288   (0x0008)  
	class UModioRichTextBlock*                         TagCategoryLabel;                                           // 0x0290   (0x0008)  
	class UModioButton*                                TagCategoryCollapseButton;                                  // 0x0298   (0x0008)  
	class UModioImage*                                 TagCategoryCollapseImage;                                   // 0x02A0   (0x0008)  
	class UModioInputBindingImage*                     TagCategoryInputHint;                                       // 0x02A8   (0x0008)  
	class UVerticalBox*                                CategoryVerticalBox;                                        // 0x02B0   (0x0008)  
	class UClass*                                      TagWidgetTemplate;                                          // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioTagSelectorWidgetBase.OnCheckboxChecked
	// void OnCheckboxChecked(class UModioSelectableTag* SourceTag, bool bIsChecked);                                           // [0x1702180] Final|Native|Protected 
	// Function /Script/ModioUI.ModioTagSelectorWidgetBase.OnCategoryCollapseToggled
	// void OnCategoryCollapseToggled();                                                                                        // [0x1702160] Final|Native|Public  
};

/// Class /Script/ModioUI.ModioTagWidgetBase
/// Size: 0x0040 (64 bytes) (0x000278 - 0x0002B8) align 8 pad: 0x0000
class UModioTagWidgetBase : public UModioUserWidgetBase
{ 
public:
	FText                                              TagTextFormat;                                              // 0x0278   (0x0018)  
	FString                                            TagValue;                                                   // 0x0290   (0x0010)  
	class UModioRichTextBlock*                         TagText;                                                    // 0x02A0   (0x0008)  
	class UModioImage*                                 TagBackground;                                              // 0x02A8   (0x0008)  
	FModioUIStyleRef                                   TagStyle;                                                   // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioTagWidgetBase.SetTagValue
	// void SetTagValue(FString Category, FString NewValue);                                                                    // [0x17025d0] Final|Native|Public  
	// Function /Script/ModioUI.ModioTagWidgetBase.SetTagTextFormat
	// void SetTagTextFormat(FText NewFormat);                                                                                  // [0x17024b0] Final|Native|Public  
	// Function /Script/ModioUI.ModioTagWidgetBase.GetTagTextStyle
	// FModioRichTextStyle GetTagTextStyle();                                                                                   // [0x1701ff0] Final|Native|Protected 
};

/// Struct /Script/ModioUI.ModioTagWidgetStyle
/// Size: 0x01C8 (456 bytes) (0x000008 - 0x0001D0) align 8 pad: 0x0000
struct FModioTagWidgetStyle : FSlateWidgetStyle
{ 
	FModioUIStyleRef                                   TextStyleNew;                                               // 0x0008   (0x0008)  
	FSlateBrush                                        TagBackgroundBrush;                                         // 0x0010   (0x0088)  
	FModioRichTextStyle                                TextStyle;                                                  // 0x0098   (0x00A8)  
	FModioWidgetBorderStyle                            TagBackgroundStyle;                                         // 0x0140   (0x0080)  
	FMargin                                            ContentPadding;                                             // 0x01C0   (0x0010)  
};

/// Class /Script/ModioUI.ModioTagWidgetStyleContainer
/// Size: 0x01D0 (464 bytes) (0x0000D0 - 0x0002A0) align 8 pad: 0x0000
class UModioTagWidgetStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FModioTagWidgetStyle                               Style;                                                      // 0x00D0   (0x01D0)  
};

/// Class /Script/ModioUI.ModioTextBlock
/// Size: 0x0010 (16 bytes) (0x0002C0 - 0x0002D0) align 8 pad: 0x0000
class UModioTextBlock : public UTextBlock
{ 
public:
	FModioUIStyleRef                                   StyleRef;                                                   // 0x02C0   (0x0008)  
	bool                                               bOverrideGlobalStyle;                                       // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02C9   (0x0007)  MISSED
};

/// Class /Script/ModioUI.ModioTextWidgetStyleContainer
/// Size: 0x0270 (624 bytes) (0x0000D0 - 0x000340) align 8 pad: 0x0000
class UModioTextWidgetStyleContainer : public UModioUIWidgetStyleContainer
{ 
public:
	FTextBlockStyle                                    Style;                                                      // 0x00D0   (0x0270)  
};

/// Class /Script/ModioUI.ModioTileView
/// Size: 0x0018 (24 bytes) (0x000388 - 0x0003A0) align 8 pad: 0x0000
class UModioTileView : public UTileView
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0388   (0x0010)  MISSED
	bool                                               AllowPartialItems;                                          // 0x0398   (0x0001)  
	bool                                               CenterPanelItems;                                           // 0x0399   (0x0001)  
	bool                                               bZoomSelectedEntryWidget;                                   // 0x039A   (0x0001)  
	ESlateVisibility                                   ScrollbarVisibility;                                        // 0x039B   (0x0001)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x039C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioTileView.SetCenterPanelItems
	// void SetCenterPanelItems(bool bCenterPanelItems);                                                                        // [0x1702300] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioTileView.SetAllowPartialItems
	// void SetAllowPartialItems(bool bAllowPartialItems);                                                                      // [0x1702270] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioTreeView
/// Size: 0x0000 (0 bytes) (0x0003C0 - 0x0003C0) align 8 pad: 0x0000
class UModioTreeView : public UTreeView
{ 
public:
};

/// Class /Script/ModioUI.ModioUI4Subsystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class UModioUI4Subsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UModioUIStyleSet*                            LoadedDefaultStyleSet;                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UWidget*                                     CurrentFocusTarget;                                         // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0068   (0x0028)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioUI4Subsystem.SetCurrentFocusTarget
	// void SetCurrentFocusTarget(class UWidget* CurrentTarget);                                                                // [0x1702390] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUI4Subsystem.HandleInputModeChanged
	// void HandleInputModeChanged(EModioUIInputMode NewDevice);                                                                // [0x1702040] Final|Native|Public  
	// Function /Script/ModioUI.ModioUI4Subsystem.GetLocalizedTag
	// FText GetLocalizedTag(FString InTag);                                                                                    // [0x1701db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUI4Subsystem.GetInputGlyphMaterialForInputType
	// class UMaterialInterface* GetInputGlyphMaterialForInputType(FKey VirtualInput, EModioUIInputMode InputType);             // [0x1701c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUI4Subsystem.GetDefaultStyleSet
	// class UModioUIStyleSet* GetDefaultStyleSet();                                                                            // [0x1701c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUI4Subsystem.GetCurrentFocusTarget
	// class UWidget* GetCurrentFocusTarget();                                                                                  // [0x1701c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioUI4Subsystem.GetAllNamedStyleNames
	// TArray<FName> GetAllNamedStyleNames();                                                                                   // [0x1701b90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioUIAsyncLoader
/// Size: 0x0078 (120 bytes) (0x000108 - 0x000180) align 8 pad: 0x0000
class UModioUIAsyncLoader : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	EModioUIAsyncOperationWidgetState                  CurrentState;                                               // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0119   (0x0017)  MISSED
	SDK_UNDEFINED(80,1882) /* TMap<FName, UWidget*> */ __um(NamedWidgets);                                         // 0x0130   (0x0050)  


	/// Functions
	// Function /Script/ModioUI.ModioUIAsyncLoader.OnRetryRequested
	// void OnRetryRequested();                                                                                                 // [0x1702250] Final|Native|Protected 
	// Function /Script/ModioUI.ModioUIAsyncLoader.NativeHandleAsyncOperationStateChange
	// void NativeHandleAsyncOperationStateChange(EModioUIAsyncOperationWidgetState NewState);                                  // [0x17020e0] Native|Protected     
};

/// Class /Script/ModioUI.ModioUIAsyncLoadingOverlay
/// Size: 0x0028 (40 bytes) (0x000278 - 0x0002A0) align 8 pad: 0x0000
class UModioUIAsyncLoadingOverlay : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0278   (0x0008)  MISSED
	FModioUIStyleRef                                   DialogStyle;                                                // 0x0280   (0x0008)  
	class UModioRichTextButton*                        CancelButton;                                               // 0x0288   (0x0008)  
	class UModioRichTextBlock*                         LoadingText;                                                // 0x0290   (0x0008)  
	class UImage*                                      BackgroundImage;                                            // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioUIAsyncLoadingOverlay.Close
	// void Close();                                                                                                            // [0x1701ad0] Final|Native|Protected 
};

/// Class /Script/ModioUI.ModioUIDefaultAuthProvider
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UModioUIDefaultAuthProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/ModioUI.ModioInputMapping
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioInputMapping
{ 
	FKey                                               VirtualKey;                                                 // 0x0000   (0x0018)  
	TArray<FName>                                      MappedProjectInputs;                                        // 0x0018   (0x0010)  
};

/// Class /Script/ModioUI.ModioUISettings
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x000120) align 8 pad: 0x0000
class UModioUISettings : public UObject
{ 
public:
	TArray<FModioInputMapping>                         ModioToProjectInputMappings;                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(40,1883) /* TWeakObjectPtr<UModioUIStyleSet*> */ __um(DefaultStyleSet);                          // 0x0038   (0x0028)  
	SDK_UNDEFINED(40,1884) /* TWeakObjectPtr<UModioNavigationConfigFactoryBase*> */ __um(NavigationConfigOverride); // 0x0060   (0x0028)  
	class UClass*                                      AuthenticationDataProvider;                                 // 0x0088   (0x0008)  
	class UClass*                                      InputHintGlyphProvider;                                     // 0x0090   (0x0008)  
	SDK_UNDEFINED(40,1885) /* TWeakObjectPtr<UModioModBrowserParams*> */ __um(BrowserCategoryConfiguration);       // 0x0098   (0x0028)  
	EModioUIInputMode                                  InputDevicesForTesting;                                     // 0x00C0   (0x0001)  
	bool                                               bOverridePlatformMaterials;                                 // 0x00C1   (0x0001)  
	bool                                               bEnableCenteredUI;                                          // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00C3   (0x0001)  MISSED
	float                                              MaxMenuWidth;                                               // 0x00C4   (0x0004)  
	bool                                               bDisableInputGlyphsCompletely;                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	SDK_UNDEFINED(80,1886) /* TMap<FString, FText> */  __um(LocalizedTags);                                        // 0x00D0   (0x0050)  
};

/// Struct /Script/ModioUI.ModioComboBoxStyle
/// Size: 0x0CB8 (3256 bytes) (0x000008 - 0x000CC0) align 8 pad: 0x0000
struct FModioComboBoxStyle : FSlateWidgetStyle
{ 
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0008   (0x03F0)  
	FModioWidgetBorderStyle                            MenuBorderStyle;                                            // 0x03F8   (0x0080)  
	FModioWidgetBorderStyle                            ButtonBorderStyle;                                          // 0x0478   (0x0080)  
	FTableRowStyle                                     DropdownItemStyle;                                          // 0x04F8   (0x07C8)  
};

/// Class /Script/ModioUI.ModioUIStyleSet
/// Size: 0x0F48 (3912 bytes) (0x000030 - 0x000F78) align 8 pad: 0x0000
class UModioUIStyleSet : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0030   (0x0018)  MISSED
	class UMaterialInterface*                          DefaultBackgroundMaterial;                                  // 0x0048   (0x0008)  
	class UClass*                                      HideCursorWidgetClass;                                      // 0x0050   (0x0008)  
	class UModioColorPresets*                          ColorPresetsData;                                           // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0060   (0x0050)  MISSED
	SDK_UNDEFINED(80,1887) /* TMap<FName, FModioUIColorRef> */ __um(SerializedColors);                             // 0x00B0   (0x0050)  
	SDK_UNDEFINED(80,1888) /* TMap<FName, FModioUIMaterialRef> */ __um(SerializedMaterials);                       // 0x0100   (0x0050)  
	SDK_UNDEFINED(80,1889) /* TMap<FString, FName> */  __um(PropertyPathToColorPresetMap);                         // 0x0150   (0x0050)  
	TArray<class UModioWidgetStyleData*>               WidgetStyleAssets;                                          // 0x01A0   (0x0010)  
	SDK_UNDEFINED(80,1890) /* TMap<FName, FSlateBrush> */ __um(NamedBrushes);                                      // 0x01B0   (0x0050)  
	class UModioNamedGlyphsDataAsset*                  NamedGlyphsAsset;                                           // 0x0200   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0208   (0x0050)  MISSED
	SDK_UNDEFINED(80,1891) /* TMap<FName, UMaterialInterface*> */ __um(MaterialInstanceCache);                     // 0x0258   (0x0050)  
	FModioComboBoxStyle                                DefaultComboBoxStyle;                                       // 0x02A8   (0x0CC0)  
	class UModioMaterialData*                          MaterialData;                                               // 0x0F68   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0F70   (0x0008)  MISSED
};

/// Class /Script/ModioUI.ModioUniformGridPanel
/// Size: 0x0000 (0 bytes) (0x000148 - 0x000148) align 8 pad: 0x0000
class UModioUniformGridPanel : public UUniformGridPanel
{ 
public:
};

/// Class /Script/ModioUI.ModioUserButton
/// Size: 0x0008 (8 bytes) (0x000278 - 0x000280) align 8 pad: 0x0000
class UModioUserButton : public UModioUserWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Class /Script/ModioUI.ModioUserProfileButton
/// Size: 0x00A0 (160 bytes) (0x0002A0 - 0x000340) align 8 pad: 0x0000
class UModioUserProfileButton : public UModioModManagementWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x02A0   (0x0068)  MISSED
	class UModioCircularProgressBar*                   DownloadProgressIndicator;                                  // 0x0308   (0x0008)  
	class UModioButton*                                ProfileButton;                                              // 0x0310   (0x0008)  
	class UModioImage*                                 ProfileImage;                                               // 0x0318   (0x0008)  
	class UMaterialInterface*                          GCMaterial;                                                 // 0x0320   (0x0008)  
	class UMaterialInterface*                          UserBrushMaterial;                                          // 0x0328   (0x0008)  
	class UMaterialInterface*                          NoUserBrushMaterial;                                        // 0x0330   (0x0008)  
	FName                                              ProfileTextureParameterName;                                // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/ModioUI.ModioUserProfileButton.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0x16efb90] Native|Protected     
};

/// Class /Script/ModioUI.ModioUserWidgetNamedSlotBase
/// Size: 0x0060 (96 bytes) (0x000278 - 0x0002D8) align 8 pad: 0x0000
class UModioUserWidgetNamedSlotBase : public UModioUserWidgetBase
{ 
public:
	SDK_UNDEFINED(80,1892) /* TMap<FName, UWidget*> */ __um(NamedWidgets);                                         // 0x0278   (0x0050)  
	TArray<FName>                                      DesignerSpecifiedSlotNames;                                 // 0x02C8   (0x0010)  
};

/// Class /Script/ModioUI.ModioRoundedBorderStyle
/// Size: 0x0080 (128 bytes) (0x0000D0 - 0x000150) align 8 pad: 0x0000
class UModioRoundedBorderStyle : public UModioUIWidgetStyleContainer
{ 
public:
	FModioWidgetBorderStyle                            Style;                                                      // 0x00D0   (0x0080)  
};

/// Class /Script/ModioUI.ModioWidgetCarouselEntryWrapper
/// Size: 0x0000 (0 bytes) (0x000108 - 0x000108) align 8 pad: 0x0000
class UModioWidgetCarouselEntryWrapper : public UWidget
{ 
public:
};

/// Class /Script/ModioUI.ModioWidgetCarousel
/// Size: 0x0078 (120 bytes) (0x000108 - 0x000180) align 8 pad: 0x0000
class UModioWidgetCarousel : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0108   (0x0020)  MISSED
	class UClass*                                      EntryWidgetClass;                                           // 0x0128   (0x0008)  
	class UModioWidgetCarouselEntryWrapper*            LeftCarouselWidget;                                         // 0x0130   (0x0008)  
	class UModioWidgetCarouselEntryWrapper*            CenterCarouselWidget;                                       // 0x0138   (0x0008)  
	class UModioWidgetCarouselEntryWrapper*            RightCarouselWidget;                                        // 0x0140   (0x0008)  
	class UModioWidgetCarouselEntryWrapper*            IncomingWidget;                                             // 0x0148   (0x0008)  
	float                                              RelativeWidgetSpacing;                                      // 0x0150   (0x0004)  
	EWidgetClipping                                    EntryWidgetClipping;                                        // 0x0154   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0155   (0x0003)  MISSED
	EModioWidgetCarouselSizeOverrideType               EntryWidgetSizeOverride;                                    // 0x0158   (0x0004)  
	bool                                               bOverrideAbsoluteWidth;                                     // 0x015C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	float                                              EntryWidgetWidthOverride;                                   // 0x0160   (0x0004)  
	bool                                               bOverrideAbsoluteHeight;                                    // 0x0164   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              EntryWidgetHeightOverride;                                  // 0x0168   (0x0004)  
	bool                                               bOverrideRelativeLayoutWidth;                               // 0x016C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x016D   (0x0003)  MISSED
	float                                              EntryWidgetRelativeWidthOverride;                           // 0x0170   (0x0004)  
	bool                                               bOverrideRelativeLayoutHeight;                              // 0x0174   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0175   (0x0003)  MISSED
	float                                              EntryWidgetRelativeHeightOverride;                          // 0x0178   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x017C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ModioUI.ModioWidgetCarousel.SetItems
	// void SetItems(TArray<UObject*> Items);                                                                                   // [0x1703e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioWidgetCarousel.SetFocusToCurrentElement
	// void SetFocusToCurrentElement();                                                                                         // [0x1703e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioWidgetCarousel.ScrollRight
	// void ScrollRight();                                                                                                      // [0x1703e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUI.ModioWidgetCarousel.ScrollLeft
	// void ScrollLeft();                                                                                                       // [0x1703e00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUI.ModioWidgetStyleData
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UModioWidgetStyleData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,1893) /* TMap<FName, USlateWidgetStyleContainerBase*> */ __um(WidgetStyles);                  // 0x0030   (0x0050)  
};

/// Class /Script/ModioUI.ModioWidgetSwitcher
/// Size: 0x0020 (32 bytes) (0x000138 - 0x000158) align 8 pad: 0x0000
class UModioWidgetSwitcher : public UWidgetSwitcher
{ 
public:
	SDK_UNDEFINED(16,1894) /* FMulticastInlineDelegate */ __um(OnActiveWidgetChanged);                             // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0148   (0x0010)  MISSED
};

/// Struct /Script/ModioUI.ModioInputMappingGlyph
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FModioInputMappingGlyph
{ 
	SDK_UNDEFINED(40,1895) /* TWeakObjectPtr<UTexture2D*> */ __um(MouseGlyph);                                     // 0x0000   (0x0028)  
	SDK_UNDEFINED(40,1896) /* TWeakObjectPtr<UTexture2D*> */ __um(KeyboardGlyph);                                  // 0x0028   (0x0028)  
	SDK_UNDEFINED(40,1897) /* TWeakObjectPtr<UTexture2D*> */ __um(XBoxControllerGlyph);                            // 0x0050   (0x0028)  
	SDK_UNDEFINED(40,1898) /* TWeakObjectPtr<UTexture2D*> */ __um(PSControllerGlyph);                              // 0x0078   (0x0028)  
	SDK_UNDEFINED(40,1899) /* TWeakObjectPtr<UTexture2D*> */ __um(FallbackControllerGlyph);                        // 0x00A0   (0x0028)  
};

/// Struct /Script/ModioUI.ModioTextBlockStyleOverride
/// Size: 0x02C0 (704 bytes) (0x000008 - 0x0002C8) align 8 pad: 0x0000
struct FModioTextBlockStyleOverride : FSlateWidgetStyle
{ 
	FTextBlockStyle                                    StyleProperties;                                            // 0x0008   (0x0270)  
	SDK_UNDEFINED(80,1900) /* TMap<FName, bool> */     __um(OverriddenProperties);                                 // 0x0278   (0x0050)  
};

/// Struct /Script/ModioUI.ModioSlateMaterialBrush
/// Size: 0x0000 (0 bytes) (0x000088 - 0x000088) align 8 pad: 0x0000
struct FModioSlateMaterialBrush : FSlateBrush
{ 
};

/// Struct /Script/ModioUI.ModioUIAction
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FModioUIAction
{ 
	SDK_UNDEFINED(16,1901) /* FDelegateProperty */     __um(ExecuteAction);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1902) /* FDelegateProperty */     __um(CanExecuteAction);                                     // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1903) /* FDelegateProperty */     __um(IsActionVisible);                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ModioUI.ModioUIColor
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioUIColor
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/ModioUI.ModioUIMenuEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FModioUIMenuEntry
{ 
	FText                                              MenuEntryLabel;                                             // 0x0000   (0x0018)  
};

/// Struct /Script/ModioUI.ModioLinearColor
/// Size: 0x0000 (0 bytes) (0x000010 - 0x000010) align 4 pad: 0x0000
struct FModioLinearColor : FLinearColor
{ 
};

/// Struct /Script/ModioUI.ModioSlateColorInspector
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
struct FModioSlateColorInspector : FSlateColor
{ 
};

static_assert(sizeof(UFxWidget) == 0x0160); // 352 bytes (0x000108 - 0x000160)
static_assert(sizeof(UModioAuthenticationContextUIDetails) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioMenuBackgroundProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIAsyncHandlerWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIAsyncOperationWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIAsyncRetryWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIAuthenticationDataProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIBusyStateWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIClickableWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUICommand) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIDataSourceWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIDialogButtonWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIDownloadQueueWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIErrorDisplayWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIImageDisplay) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIInputDeviceChangedReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIInputHintDisplayWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIInputHintGlyphProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIModDetailsDisplay) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIPopupMenuContentWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIRefineSearchWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIStringInputWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIStyleRefSerializer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIInputValidationLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUITextValidator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIUserStringListEntry) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioAsyncOpWrapperWidget) == 0x02A0); // 672 bytes (0x000270 - 0x0002A0)
static_assert(sizeof(FModioUIAuthenticationProviderInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UModioAuthenticationContextUI) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UModioAuthenticationMethodSelector) == 0x0168); // 360 bytes (0x000108 - 0x000168)
static_assert(sizeof(FModioUIStyleRef) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioUIColorRef) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioWidgetBorderStyle) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(UModioButton) == 0x04E0); // 1248 bytes (0x000428 - 0x0004E0)
static_assert(sizeof(UModioUIWidgetStyleContainer) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(FModioButtonStyle) == 0x02A0); // 672 bytes (0x000008 - 0x0002A0)
static_assert(sizeof(UModioButtonStyleContainer) == 0x0370); // 880 bytes (0x0000D0 - 0x000370)
static_assert(sizeof(UModioCheckBox) == 0x07A0); // 1952 bytes (0x000770 - 0x0007A0)
static_assert(sizeof(UModioProceduralBrushParams) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioCheckBoxMaterialParams) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FModioCheckBoxStyle) == 0x08C0); // 2240 bytes (0x000008 - 0x0008C0)
static_assert(sizeof(UModioCheckBoxStyleContainer) == 0x0990); // 2448 bytes (0x0000D0 - 0x000990)
static_assert(sizeof(UModioCircle) == 0x0158); // 344 bytes (0x000108 - 0x000158)
static_assert(sizeof(UModioCircularProgressBar) == 0x0160); // 352 bytes (0x000108 - 0x000160)
static_assert(sizeof(FModioUIMaterialRef) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioCodeInputStyle) == 0x0320); // 800 bytes (0x000270 - 0x000320)
static_assert(sizeof(UModioCodeInputStyleContainer) == 0x03F0); // 1008 bytes (0x0000D0 - 0x0003F0)
static_assert(sizeof(FModioTextValidationRule) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UModioCodeInputWidget) == 0x0178); // 376 bytes (0x000108 - 0x000178)
static_assert(sizeof(UModioUserWidgetBase) == 0x0278); // 632 bytes (0x000260 - 0x000278)
static_assert(sizeof(UModioModManagementWidgetBase) == 0x02A0); // 672 bytes (0x000278 - 0x0002A0)
static_assert(sizeof(UModioCollectionTileStatus) == 0x0378); // 888 bytes (0x0002A0 - 0x000378)
static_assert(sizeof(UModioMenuView) == 0x02A8); // 680 bytes (0x000278 - 0x0002A8)
static_assert(sizeof(UModioCollectionView) == 0x0418); // 1048 bytes (0x0002A8 - 0x000418)
static_assert(sizeof(UModioColorPresets) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UModioComboBox) == 0x0148); // 328 bytes (0x000140 - 0x000148)
static_assert(sizeof(UModioComboBoxString) == 0x0E78); // 3704 bytes (0x000E00 - 0x000E78)
static_assert(sizeof(UModioUICommandInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FModioCustomComboBoxStyle) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(UModioCustomComboBoxStyleContainer) == 0x0128); // 296 bytes (0x0000D0 - 0x000128)
static_assert(sizeof(UModioDefaultInputGlyphProvider) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UModioDefaultPopupMenuContent) == 0x0350); // 848 bytes (0x000260 - 0x000350)
static_assert(sizeof(UModioDialogBase) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(UModioDialogBaseInternal) == 0x0230); // 560 bytes (0x000108 - 0x000230)
static_assert(sizeof(UModioWidgetBase) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UModioDialogController) == 0x0340); // 832 bytes (0x000108 - 0x000340)
static_assert(sizeof(FModioDialogButtonInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UModioDialogInfo) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FModioDialogStyle) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(UModioDialogStyleContainer) == 0x0188); // 392 bytes (0x0000D0 - 0x000188)
static_assert(sizeof(UModioDownloadListWidgetBase) == 0x02A8); // 680 bytes (0x000278 - 0x0002A8)
static_assert(sizeof(UModioDownloadQueueDrawer) == 0x0368); // 872 bytes (0x000278 - 0x000368)
static_assert(sizeof(UModioDownloadQueueEntry) == 0x0300); // 768 bytes (0x000278 - 0x000300)
static_assert(sizeof(FModioDownloadQueueEntryStyle) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(UModioDownloadQueueEntryStyleContainer) == 0x01A0); // 416 bytes (0x0000D0 - 0x0001A0)
static_assert(sizeof(UModioDownloadQueueOpProgress) == 0x0320); // 800 bytes (0x0002A0 - 0x000320)
static_assert(sizeof(UModioDrawer) == 0x0200); // 512 bytes (0x000108 - 0x000200)
static_assert(sizeof(UModioDrawerContentBase) == 0x02D8); // 728 bytes (0x000278 - 0x0002D8)
static_assert(sizeof(UModioOverlay) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(UModioDrawerController) == 0x0158); // 344 bytes (0x000130 - 0x000158)
static_assert(sizeof(UModioDrawerControllerSlot) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(FModioDrawerWidgetStyle) == 0x01A0); // 416 bytes (0x000008 - 0x0001A0)
static_assert(sizeof(UModioDrawerWidgetStyleContainer) == 0x0270); // 624 bytes (0x0000D0 - 0x000270)
static_assert(sizeof(FModioDynamicImageStyle) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(UModioDynamicImageStyleContainer) == 0x0200); // 512 bytes (0x0000D0 - 0x000200)
static_assert(sizeof(UModioEditableText) == 0x0480); // 1152 bytes (0x000460 - 0x000480)
static_assert(sizeof(UModioEditableTextBox) == 0x0AE0); // 2784 bytes (0x000A38 - 0x000AE0)
static_assert(sizeof(FModioEditableTextBoxStyle) == 0x0A20); // 2592 bytes (0x0007F8 - 0x000A20)
static_assert(sizeof(UModioEditableTextBoxStyleContainer) == 0x0AF0); // 2800 bytes (0x0000D0 - 0x000AF0)
static_assert(sizeof(UModioErrorRetryWidget) == 0x02B0); // 688 bytes (0x000278 - 0x0002B0)
static_assert(sizeof(UModioFeaturedCategory) == 0x03D8); // 984 bytes (0x000278 - 0x0003D8)
static_assert(sizeof(UModioModTileBase) == 0x03B0); // 944 bytes (0x000278 - 0x0003B0)
static_assert(sizeof(UModioFeaturedMod) == 0x03D8); // 984 bytes (0x0003B0 - 0x0003D8)
static_assert(sizeof(UModioFeaturedModCarousel) == 0x02F0); // 752 bytes (0x000278 - 0x0002F0)
static_assert(sizeof(UModioFeaturedView) == 0x0330); // 816 bytes (0x0002A8 - 0x000330)
static_assert(sizeof(UModioGridPanel) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UModioImage) == 0x0218); // 536 bytes (0x000210 - 0x000218)
static_assert(sizeof(UModioImageGalleryBase) == 0x0188); // 392 bytes (0x000108 - 0x000188)
static_assert(sizeof(UModioInputBindingImage) == 0x0258); // 600 bytes (0x000218 - 0x000258)
static_assert(sizeof(UModioInputGlyphSet) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UModioInputMappingGlyphLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioListView) == 0x0368); // 872 bytes (0x000368 - 0x000368)
static_assert(sizeof(UModioListViewInteger) == 0x0310); // 784 bytes (0x000218 - 0x000310)
static_assert(sizeof(UModioListViewString) == 0x0310); // 784 bytes (0x000218 - 0x000310)
static_assert(sizeof(UModioLoadingSpinner) == 0x0168); // 360 bytes (0x000108 - 0x000168)
static_assert(sizeof(UModioLogoWidget) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(UModioMaterialData) == 0x0140); // 320 bytes (0x000030 - 0x000140)
static_assert(sizeof(UModioMenu) == 0x0350); // 848 bytes (0x000278 - 0x000350)
static_assert(sizeof(UModioMenuBar) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(UModioMenuDefaultBackgroundProvider) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UModioModBrowser) == 0x0278); // 632 bytes (0x000278 - 0x000278)
static_assert(sizeof(UModioModBrowserParams) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UModioCarousel) == 0x0140); // 320 bytes (0x000108 - 0x000140)
static_assert(sizeof(UModioModCarouselTile) == 0x03B0); // 944 bytes (0x0003B0 - 0x0003B0)
static_assert(sizeof(UModioModCollectionTile) == 0x0430); // 1072 bytes (0x0003B0 - 0x000430)
static_assert(sizeof(UModioModDetailsImage) == 0x0298); // 664 bytes (0x000278 - 0x000298)
static_assert(sizeof(FModioModDetailsGalleryImageInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UModioModDetailsImageGallery) == 0x02D0); // 720 bytes (0x000278 - 0x0002D0)
static_assert(sizeof(UModioModDetailsImageGalleryNavButtonBase) == 0x0300); // 768 bytes (0x000278 - 0x000300)
static_assert(sizeof(UModioModDetailsOpProgress) == 0x0300); // 768 bytes (0x0002A0 - 0x000300)
static_assert(sizeof(FModioModInfoPropertyDescriptor) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UModioModPropertyInspectorBase) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(UModioModDetailsPropertyInspector) == 0x02F8); // 760 bytes (0x000290 - 0x0002F8)
static_assert(sizeof(UModioModDetailsView) == 0x0428); // 1064 bytes (0x0002A8 - 0x000428)
static_assert(sizeof(UModioModNameWidget) == 0x0130); // 304 bytes (0x000108 - 0x000130)
static_assert(sizeof(UModioModTile) == 0x0400); // 1024 bytes (0x0003B0 - 0x000400)
static_assert(sizeof(FModioModTileStyle) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(UModioModTileStyleContainer) == 0x0108); // 264 bytes (0x0000D0 - 0x000108)
static_assert(sizeof(UModioModUninstallHeaderWidget) == 0x0150); // 336 bytes (0x000108 - 0x000150)
static_assert(sizeof(UModioMoreOptionsDialog) == 0x0288); // 648 bytes (0x000280 - 0x000288)
static_assert(sizeof(UModioMultiLineEditableTextBox) == 0x0D08); // 3336 bytes (0x000C98 - 0x000D08)
static_assert(sizeof(FModioMultiLineEditableTextBoxStyle) == 0x0800); // 2048 bytes (0x0007F8 - 0x000800)
static_assert(sizeof(UModioMultiLineEditableTextBoxStyleContainer) == 0x08D0); // 2256 bytes (0x0000D0 - 0x0008D0)
static_assert(sizeof(UModioNamedGlyphMaterialParams) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UModioNamedGlyphsDataAsset) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UModioNavigationConfigFactoryBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UModioNavigationConfigFactory) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UModioNotificationControllerBase) == 0x0298); // 664 bytes (0x000278 - 0x000298)
static_assert(sizeof(UModioNotificationControllerSlot) == 0x0080); // 128 bytes (0x000058 - 0x000080)
static_assert(sizeof(FModioNotificationStyle) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(UModioNotificationStyleContainer) == 0x0128); // 296 bytes (0x0000D0 - 0x000128)
static_assert(sizeof(UModioNotificationWidgetBase) == 0x02A8); // 680 bytes (0x000278 - 0x0002A8)
static_assert(sizeof(UModioNotificationErrorWidgetBase) == 0x02D8); // 728 bytes (0x0002A8 - 0x0002D8)
static_assert(sizeof(FModioUIMenuCommandList) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UModioPopupComboBox) == 0x0228); // 552 bytes (0x000108 - 0x000228)
static_assert(sizeof(UModioPopupMenu) == 0x0220); // 544 bytes (0x000170 - 0x000220)
static_assert(sizeof(FModioPopupMenuStyle) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(UModioPopupMenuStyleContainer) == 0x0108); // 264 bytes (0x0000D0 - 0x000108)
static_assert(sizeof(UModioProgressBar) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(FModioProgressBarStyle) == 0x01A0); // 416 bytes (0x0001A0 - 0x0001A0)
static_assert(sizeof(UModioProgressBarStyleContainer) == 0x0270); // 624 bytes (0x0000D0 - 0x000270)
static_assert(sizeof(UModioRefineSearchDrawer) == 0x02F8); // 760 bytes (0x000278 - 0x0002F8)
static_assert(sizeof(UModioRemoveModDialog) == 0x02A0); // 672 bytes (0x000280 - 0x0002A0)
static_assert(sizeof(UModioReportButtonGroupWidget) == 0x0150); // 336 bytes (0x000108 - 0x000150)
static_assert(sizeof(UModioReportModDialog) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UModioReportSummaryWidget) == 0x0D18); // 3352 bytes (0x000D08 - 0x000D18)
static_assert(sizeof(UModioRetainerBox) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UModioRichTextBlock) == 0x0698); // 1688 bytes (0x000678 - 0x000698)
static_assert(sizeof(UModioRichTextBlockDecorator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioRichTextButton) == 0x0558); // 1368 bytes (0x0004E0 - 0x000558)
static_assert(sizeof(FModioRichTextStyle) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(UModioRichTextStyleContainer) == 0x0178); // 376 bytes (0x0000D0 - 0x000178)
static_assert(sizeof(UModioRoundedBorder) == 0x0180); // 384 bytes (0x000150 - 0x000180)
static_assert(sizeof(UModioRoundedImage) == 0x0238); // 568 bytes (0x000218 - 0x000238)
static_assert(sizeof(UModioRoundedRectangleMaterialParams) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UModioScrollBox) == 0x08B0); // 2224 bytes (0x000880 - 0x0008B0)
static_assert(sizeof(UModioSearchOptionsDialog) == 0x02A0); // 672 bytes (0x000280 - 0x0002A0)
static_assert(sizeof(UModioSearchResultsView) == 0x0440); // 1088 bytes (0x0002A8 - 0x000440)
static_assert(sizeof(UModioSelectableTag) == 0x02D8); // 728 bytes (0x000278 - 0x0002D8)
static_assert(sizeof(UModioSizeBox) == 0x0160); // 352 bytes (0x000158 - 0x000160)
static_assert(sizeof(UModioSpecifiedMaterialParams) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UModioSubscriptionBadge) == 0x0328); // 808 bytes (0x0002A0 - 0x000328)
static_assert(sizeof(FModioSubscriptionBadgeStyle) == 0x0308); // 776 bytes (0x000008 - 0x000308)
static_assert(sizeof(UModioSubscriptionBadgeStyleContainer) == 0x03D8); // 984 bytes (0x0000D0 - 0x0003D8)
static_assert(sizeof(UModioTabBar) == 0x0A10); // 2576 bytes (0x000108 - 0x000A10)
static_assert(sizeof(UModioTabButton) == 0x0288); // 648 bytes (0x000278 - 0x000288)
static_assert(sizeof(UModioTabController) == 0x02A8); // 680 bytes (0x000278 - 0x0002A8)
static_assert(sizeof(FModioTableRowStyle) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(UModioTableRowStyleContainer) == 0x0108); // 264 bytes (0x0000D0 - 0x000108)
static_assert(sizeof(UModioWrapBox) == 0x0148); // 328 bytes (0x000148 - 0x000148)
static_assert(sizeof(UModioTagList) == 0x01B0); // 432 bytes (0x000148 - 0x0001B0)
static_assert(sizeof(UModioTagListWidgetBase) == 0x0298); // 664 bytes (0x000278 - 0x000298)
static_assert(sizeof(UModioTagSelectorWidgetBase) == 0x02C0); // 704 bytes (0x000278 - 0x0002C0)
static_assert(sizeof(UModioTagWidgetBase) == 0x02B8); // 696 bytes (0x000278 - 0x0002B8)
static_assert(sizeof(FModioTagWidgetStyle) == 0x01D0); // 464 bytes (0x000008 - 0x0001D0)
static_assert(sizeof(UModioTagWidgetStyleContainer) == 0x02A0); // 672 bytes (0x0000D0 - 0x0002A0)
static_assert(sizeof(UModioTextBlock) == 0x02D0); // 720 bytes (0x0002C0 - 0x0002D0)
static_assert(sizeof(UModioTextWidgetStyleContainer) == 0x0340); // 832 bytes (0x0000D0 - 0x000340)
static_assert(sizeof(UModioTileView) == 0x03A0); // 928 bytes (0x000388 - 0x0003A0)
static_assert(sizeof(UModioTreeView) == 0x03C0); // 960 bytes (0x0003C0 - 0x0003C0)
static_assert(sizeof(UModioUI4Subsystem) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UModioUIAsyncLoader) == 0x0180); // 384 bytes (0x000108 - 0x000180)
static_assert(sizeof(UModioUIAsyncLoadingOverlay) == 0x02A0); // 672 bytes (0x000278 - 0x0002A0)
static_assert(sizeof(UModioUIDefaultAuthProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FModioInputMapping) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UModioUISettings) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(FModioComboBoxStyle) == 0x0CC0); // 3264 bytes (0x000008 - 0x000CC0)
static_assert(sizeof(UModioUIStyleSet) == 0x0F78); // 3960 bytes (0x000030 - 0x000F78)
static_assert(sizeof(UModioUniformGridPanel) == 0x0148); // 328 bytes (0x000148 - 0x000148)
static_assert(sizeof(UModioUserButton) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(UModioUserProfileButton) == 0x0340); // 832 bytes (0x0002A0 - 0x000340)
static_assert(sizeof(UModioUserWidgetNamedSlotBase) == 0x02D8); // 728 bytes (0x000278 - 0x0002D8)
static_assert(sizeof(UModioRoundedBorderStyle) == 0x0150); // 336 bytes (0x0000D0 - 0x000150)
static_assert(sizeof(UModioWidgetCarouselEntryWrapper) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UModioWidgetCarousel) == 0x0180); // 384 bytes (0x000108 - 0x000180)
static_assert(sizeof(UModioWidgetStyleData) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UModioWidgetSwitcher) == 0x0158); // 344 bytes (0x000138 - 0x000158)
static_assert(sizeof(FModioInputMappingGlyph) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FModioTextBlockStyleOverride) == 0x02C8); // 712 bytes (0x000008 - 0x0002C8)
static_assert(sizeof(FModioSlateMaterialBrush) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(FModioUIAction) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FModioUIColor) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FModioUIMenuEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModioLinearColor) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FModioSlateColorInspector) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UFxWidget, RenderScaleOrigin) == 0x012C);
static_assert(offsetof(UFxWidget, VisualOffset) == 0x0138);
static_assert(offsetof(UFxWidget, ContentClass) == 0x0148);
static_assert(offsetof(FModioUIAuthenticationProviderInfo, ProviderID) == 0x0001);
static_assert(offsetof(FModioUIAuthenticationProviderInfo, ProviderUILabel) == 0x0008);
static_assert(offsetof(UModioAuthenticationContextUI, Terms) == 0x0030);
static_assert(offsetof(UModioAuthenticationContextUI, ProviderInfo) == 0x0100);
static_assert(offsetof(UModioAuthenticationMethodSelector, CancelButton) == 0x0160);
static_assert(offsetof(FModioUIStyleRef, StyleName) == 0x0000);
static_assert(offsetof(FModioUIColorRef, ColorName) == 0x0000);
static_assert(offsetof(FModioWidgetBorderStyle, BorderColor) == 0x0044);
static_assert(offsetof(FModioWidgetBorderStyle, HoverColor) == 0x004C);
static_assert(offsetof(FModioWidgetBorderStyle, ActiveColor) == 0x0054);
static_assert(offsetof(FModioWidgetBorderStyle, NewInnerColor) == 0x005C);
static_assert(offsetof(FModioWidgetBorderStyle, InnerColor) == 0x0070);
static_assert(offsetof(UModioButton, ButtonStyle) == 0x0440);
static_assert(offsetof(UModioButton, BorderStyle) == 0x0448);
static_assert(offsetof(FModioButtonStyle, ButtonStyle) == 0x0008);
static_assert(offsetof(FModioButtonStyle, RichTextStyle) == 0x0280);
static_assert(offsetof(FModioButtonStyle, BorderStyle) == 0x0288);
static_assert(offsetof(FModioButtonStyle, ContentPadding) == 0x0290);
static_assert(offsetof(UModioButtonStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioCheckBox, LabelText) == 0x0780);
static_assert(offsetof(UModioCheckBox, CheckBoxStyle) == 0x0798);
static_assert(offsetof(UModioCheckBoxMaterialParams, InnerColor) == 0x0028);
static_assert(offsetof(UModioCheckBoxMaterialParams, TickColor) == 0x0030);
static_assert(offsetof(UModioCheckBoxMaterialParams, BorderColor) == 0x0038);
static_assert(offsetof(FModioCheckBoxStyle, CheckBoxStyle) == 0x0008);
static_assert(offsetof(FModioCheckBoxStyle, ContentPadding) == 0x0588);
static_assert(offsetof(FModioCheckBoxStyle, TextStyle) == 0x0598);
static_assert(offsetof(FModioCheckBoxStyle, TextStyleNew) == 0x0808);
static_assert(offsetof(FModioCheckBoxStyle, CheckBoxBorderStyle) == 0x0810);
static_assert(offsetof(FModioCheckBoxStyle, PressedSlateSound) == 0x0890);
static_assert(offsetof(FModioCheckBoxStyle, HoveredSlateSound) == 0x08A8);
static_assert(offsetof(UModioCheckBoxStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioCircle, ColorAndOpacity) == 0x0130);
static_assert(offsetof(UModioCircularProgressBar, BackgroundColor) == 0x012C);
static_assert(offsetof(UModioCircularProgressBar, ForegroundColor) == 0x013C);
static_assert(offsetof(FModioUIMaterialRef, MaterialName) == 0x0000);
static_assert(offsetof(FModioCodeInputStyle, CharacterBrush) == 0x0270);
static_assert(offsetof(FModioCodeInputStyle, ColorWhenFocused) == 0x02F8);
static_assert(offsetof(FModioCodeInputStyle, FakeCaretMaterial) == 0x0300);
static_assert(offsetof(FModioCodeInputStyle, CharacterSpacing) == 0x0308);
static_assert(offsetof(FModioCodeInputStyle, MinimumCharacterSize) == 0x0318);
static_assert(offsetof(UModioCodeInputStyleContainer, Style) == 0x00D0);
static_assert(offsetof(FModioTextValidationRule, RuleToUse) == 0x0000);
static_assert(offsetof(FModioTextValidationRule, ValidationMessage) == 0x0008);
static_assert(offsetof(UModioCodeInputWidget, Style) == 0x012C);
static_assert(offsetof(UModioCodeInputWidget, ValidationRules) == 0x0138);
static_assert(offsetof(UModioCodeInputWidget, TextStyle) == 0x014C);
static_assert(offsetof(UModioUserWidgetBase, DataSource) == 0x0270);
static_assert(offsetof(UModioCollectionTileStatus, PendingLabelText) == 0x02B0);
static_assert(offsetof(UModioCollectionTileStatus, UpdatePendingLabelText) == 0x02C8);
static_assert(offsetof(UModioCollectionTileStatus, UninstallPendingLabelText) == 0x02E0);
static_assert(offsetof(UModioCollectionTileStatus, DownloadingLabelText) == 0x02F8);
static_assert(offsetof(UModioCollectionTileStatus, ExtractingLabelText) == 0x0310);
static_assert(offsetof(UModioCollectionTileStatus, SubscribedLabelText) == 0x0328);
static_assert(offsetof(UModioCollectionTileStatus, InstalledLabelText) == 0x0340);
static_assert(offsetof(UModioCollectionTileStatus, StatusText) == 0x0358);
static_assert(offsetof(UModioCollectionTileStatus, StatusPercent) == 0x0360);
static_assert(offsetof(UModioCollectionTileStatus, ProgressBar) == 0x0368);
static_assert(offsetof(UModioCollectionTileStatus, ProgressBarSizeBox) == 0x0370);
static_assert(offsetof(UModioMenuView, CachedMenuTitleContentWidget) == 0x0278);
static_assert(offsetof(UModioMenuView, MenuName) == 0x0280);
static_assert(offsetof(UModioMenuView, TitleContentClass) == 0x0298);
static_assert(offsetof(UModioCollectionView, CollectionTitle) == 0x02C8);
static_assert(offsetof(UModioCollectionView, SearchInput) == 0x02D0);
static_assert(offsetof(UModioCollectionView, ShowUserSubscriptionsText) == 0x02D8);
static_assert(offsetof(UModioCollectionView, ShowSystemCollectionText) == 0x02F0);
static_assert(offsetof(UModioCollectionView, FetchButton) == 0x0308);
static_assert(offsetof(UModioCollectionView, ModGroupSelection) == 0x0310);
static_assert(offsetof(UModioCollectionView, SortBy) == 0x0318);
static_assert(offsetof(UModioCollectionView, CollectionList) == 0x0320);
static_assert(offsetof(UModioCollectionView, CollectionCount) == 0x0328);
static_assert(offsetof(UModioCollectionView, InfoRichTextBlock) == 0x0330);
static_assert(offsetof(UModioCollectionView, CachedCollection) == 0x0338);
static_assert(offsetof(UModioCollectionView, FilteredCollection) == 0x0348);
static_assert(offsetof(UModioCollectionView, CurrentTile) == 0x0398);
static_assert(offsetof(UModioCollectionView, DefaultButtonLabel) == 0x03A0);
static_assert(offsetof(UModioCollectionView, SearchingButtonLabel) == 0x03B8);
static_assert(offsetof(UModioCollectionView, NoSubscribedModsText) == 0x03D0);
static_assert(offsetof(UModioCollectionView, NoModsFoundText) == 0x03E8);
static_assert(offsetof(UModioComboBox, MenuPlacement) == 0x0140);
static_assert(offsetof(UModioComboBoxString, Placement) == 0x0E10);
static_assert(offsetof(UModioComboBoxString, BorderColor) == 0x0E44);
static_assert(offsetof(FModioCustomComboBoxStyle, BorderStyle) == 0x0008);
static_assert(offsetof(FModioCustomComboBoxStyle, RowStyle) == 0x0010);
static_assert(offsetof(FModioCustomComboBoxStyle, TextStyle) == 0x0018);
static_assert(offsetof(FModioCustomComboBoxStyle, BackgroundColor) == 0x0020);
static_assert(offsetof(FModioCustomComboBoxStyle, PressedSound) == 0x0028);
static_assert(offsetof(FModioCustomComboBoxStyle, HoveredSound) == 0x0040);
static_assert(offsetof(UModioCustomComboBoxStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioDefaultPopupMenuContent, TextStyle) == 0x0300);
static_assert(offsetof(UModioDefaultPopupMenuContent, BorderStyle) == 0x0308);
static_assert(offsetof(UModioDefaultPopupMenuContent, RetainerMaterial) == 0x0310);
static_assert(offsetof(UModioDialogBase, DialogStyle) == 0x0278);
static_assert(offsetof(UModioDialogBaseInternal, LoadingSpinner) == 0x01B8);
static_assert(offsetof(UModioDialogBaseInternal, DataSource) == 0x01C0);
static_assert(offsetof(UModioDialogBaseInternal, DialogStyle) == 0x01C8);
static_assert(offsetof(UModioDialogBaseInternal, ButtonSpacing) == 0x01D0);
static_assert(offsetof(UModioDialogBaseInternal, SubHeaderWidget) == 0x01E0);
static_assert(offsetof(UModioDialogBaseInternal, InputWidget) == 0x0200);
static_assert(offsetof(UModioDialogBaseInternal, ButtonWidget) == 0x0208);
static_assert(offsetof(UModioDialogController, ActualDialog) == 0x0108);
static_assert(offsetof(UModioDialogController, InvisibleButtonStyleRef) == 0x0154);
static_assert(offsetof(UModioDialogController, DialogInputValues) == 0x0160);
static_assert(offsetof(UModioDialogController, BlurCurve) == 0x0170);
static_assert(offsetof(UModioDialogController, LoadingOverlay) == 0x0318);
static_assert(offsetof(UModioDialogController, DialogStack) == 0x0330);
static_assert(offsetof(FModioDialogButtonInfo, ButtonLabel) == 0x0000);
static_assert(offsetof(FModioDialogButtonInfo, ButtonCommand) == 0x0018);
static_assert(offsetof(FModioDialogButtonInfo, AsyncCallType) == 0x0019);
static_assert(offsetof(FModioDialogButtonInfo, OperationCallType) == 0x001A);
static_assert(offsetof(FModioDialogButtonInfo, Destination) == 0x0020);
static_assert(offsetof(UModioDialogInfo, TitleText) == 0x0028);
static_assert(offsetof(UModioDialogInfo, SubHeaderWidget) == 0x0040);
static_assert(offsetof(UModioDialogInfo, SubHeaderWidgetHAlign) == 0x0048);
static_assert(offsetof(UModioDialogInfo, SubHeaderWidgetVAlign) == 0x0049);
static_assert(offsetof(UModioDialogInfo, DialogText) == 0x0050);
static_assert(offsetof(UModioDialogInfo, InputWidget) == 0x0068);
static_assert(offsetof(UModioDialogInfo, InputWidgetHAlign) == 0x0070);
static_assert(offsetof(UModioDialogInfo, InputWidgetVAlign) == 0x0071);
static_assert(offsetof(UModioDialogInfo, InputWidgetScalingType) == 0x0072);
static_assert(offsetof(UModioDialogInfo, InputWidgetHintText) == 0x0078);
static_assert(offsetof(UModioDialogInfo, ButtonAreaWidget) == 0x0090);
static_assert(offsetof(UModioDialogInfo, ButtonAreaWidgetHAlign) == 0x0098);
static_assert(offsetof(UModioDialogInfo, ButtonAreaWidgetVAlign) == 0x0099);
static_assert(offsetof(UModioDialogInfo, Buttons) == 0x00A0);
static_assert(offsetof(FModioDialogStyle, ContentPadding) == 0x0008);
static_assert(offsetof(FModioDialogStyle, BackgroundBrush) == 0x0018);
static_assert(offsetof(FModioDialogStyle, TitleTextStyle) == 0x00A0);
static_assert(offsetof(FModioDialogStyle, ContentTextStyle) == 0x00A8);
static_assert(offsetof(FModioDialogStyle, ButtonStyle) == 0x00B0);
static_assert(offsetof(UModioDialogStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioDownloadListWidgetBase, QueueList) == 0x0280);
static_assert(offsetof(UModioDownloadListWidgetBase, QueueTypeLabel) == 0x0288);
static_assert(offsetof(UModioDownloadListWidgetBase, StatusString) == 0x0290);
static_assert(offsetof(UModioDownloadQueueDrawer, ProfileIcon) == 0x02B0);
static_assert(offsetof(UModioDownloadQueueDrawer, UserLabel) == 0x02B8);
static_assert(offsetof(UModioDownloadQueueDrawer, ActivityText) == 0x02C0);
static_assert(offsetof(UModioDownloadQueueDrawer, StatusText) == 0x02C8);
static_assert(offsetof(UModioDownloadQueueDrawer, LogOutButton) == 0x02D0);
static_assert(offsetof(UModioDownloadQueueDrawer, CurrentOpProgress) == 0x02D8);
static_assert(offsetof(UModioDownloadQueueDrawer, OperationQueue) == 0x02E0);
static_assert(offsetof(UModioDownloadQueueDrawer, CompletedQueue) == 0x02E8);
static_assert(offsetof(UModioDownloadQueueDrawer, DownloadingActionText) == 0x02F0);
static_assert(offsetof(UModioDownloadQueueDrawer, ExtractingActionText) == 0x0308);
static_assert(offsetof(UModioDownloadQueueDrawer, InitializingActionText) == 0x0320);
static_assert(offsetof(UModioDownloadQueueDrawer, NoDownloadText) == 0x0338);
static_assert(offsetof(UModioDownloadQueueEntry, ModThumbnail) == 0x0290);
static_assert(offsetof(UModioDownloadQueueEntry, ModNameLabel) == 0x0298);
static_assert(offsetof(UModioDownloadQueueEntry, ModSizeLabel) == 0x02A0);
static_assert(offsetof(UModioDownloadQueueEntry, UnsubscribeButton) == 0x02A8);
static_assert(offsetof(UModioDownloadQueueEntry, ModStatusLabel) == 0x02B0);
static_assert(offsetof(UModioDownloadQueueEntry, EntryStyle) == 0x02B8);
static_assert(offsetof(UModioDownloadQueueEntry, EntryBorder) == 0x02F8);
static_assert(offsetof(FModioDownloadQueueEntryStyle, HighlightedBorderBrush) == 0x0008);
static_assert(offsetof(FModioDownloadQueueEntryStyle, UnsubscribeButtonStyle) == 0x0090);
static_assert(offsetof(FModioDownloadQueueEntryStyle, TextStyle) == 0x0098);
static_assert(offsetof(FModioDownloadQueueEntryStyle, HoveredSound) == 0x00A0);
static_assert(offsetof(FModioDownloadQueueEntryStyle, PressedSound) == 0x00B8);
static_assert(offsetof(UModioDownloadQueueEntryStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioDownloadQueueOpProgress, UnsubscribeButton) == 0x02A0);
static_assert(offsetof(UModioDownloadQueueOpProgress, ProgressBar) == 0x02C0);
static_assert(offsetof(UModioDownloadQueueOpProgress, ModNameLabel) == 0x02C8);
static_assert(offsetof(UModioDownloadQueueOpProgress, OperationSpeedText) == 0x02D0);
static_assert(offsetof(UModioDownloadQueueOpProgress, OperationProgressText) == 0x02D8);
static_assert(offsetof(UModioDownloadQueueOpProgress, SpeedFormatText) == 0x02E0);
static_assert(offsetof(UModioDownloadQueueOpProgress, ProgressFormatText) == 0x02F8);
static_assert(offsetof(UModioDrawer, DrawerStyle) == 0x0190);
static_assert(offsetof(UModioDrawer, HeaderBorder) == 0x0198);
static_assert(offsetof(UModioDrawer, ContentBorder) == 0x01A0);
static_assert(offsetof(UModioDrawer, FooterBorder) == 0x01A8);
static_assert(offsetof(UModioDrawer, HeaderPadding) == 0x01BC);
static_assert(offsetof(UModioDrawer, HeaderHorizontalAlignment) == 0x01CC);
static_assert(offsetof(UModioDrawer, HeaderVerticalAlignment) == 0x01CD);
static_assert(offsetof(UModioDrawer, ContentPadding) == 0x01D0);
static_assert(offsetof(UModioDrawer, ContentHorizontalAlignment) == 0x01E0);
static_assert(offsetof(UModioDrawer, ContentVerticalAlignment) == 0x01E1);
static_assert(offsetof(UModioDrawer, FooterPadding) == 0x01E4);
static_assert(offsetof(UModioDrawer, FooterHorizontalAlignment) == 0x01F4);
static_assert(offsetof(UModioDrawer, FooterVerticalAlignment) == 0x01F5);
static_assert(offsetof(UModioDrawerContentBase, HeaderSlot) == 0x02C0);
static_assert(offsetof(UModioDrawerContentBase, ContentSlot) == 0x02C8);
static_assert(offsetof(UModioDrawerContentBase, OptionalContentSlot) == 0x02D0);
static_assert(offsetof(UModioDrawerControllerSlot, Edge) == 0x0070);
static_assert(offsetof(UModioDrawerControllerSlot, DrawerHorizontalAlignment) == 0x0071);
static_assert(offsetof(UModioDrawerControllerSlot, DrawerVerticalAlignment) == 0x0072);
static_assert(offsetof(FModioDrawerWidgetStyle, HeadingBackgroundBrush) == 0x0008);
static_assert(offsetof(FModioDrawerWidgetStyle, ContentBackgroundBrush) == 0x0090);
static_assert(offsetof(FModioDrawerWidgetStyle, FooterBackgroundBrush) == 0x0118);
static_assert(offsetof(UModioDrawerWidgetStyleContainer, Style) == 0x00D0);
static_assert(offsetof(FModioDynamicImageStyle, ImageLoadingBrush) == 0x0008);
static_assert(offsetof(FModioDynamicImageStyle, ImageUnavailableBrush) == 0x0090);
static_assert(offsetof(FModioDynamicImageStyle, HoveredSound) == 0x0118);
static_assert(offsetof(UModioDynamicImageStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioEditableText, TextStyle) == 0x0470);
static_assert(offsetof(UModioEditableText, DefaultStyleName) == 0x0478);
static_assert(offsetof(UModioEditableTextBox, ValidationRules) == 0x0A98);
static_assert(offsetof(UModioEditableTextBox, TextBoxStyle) == 0x0AAC);
static_assert(offsetof(UModioEditableTextBox, TextStyle) == 0x0AB4);
static_assert(offsetof(FModioEditableTextBoxStyle, HintIcon) == 0x0800);
static_assert(offsetof(FModioEditableTextBoxStyle, NormalBorderBrush) == 0x0888);
static_assert(offsetof(FModioEditableTextBoxStyle, HoveredBorderBrush) == 0x0910);
static_assert(offsetof(FModioEditableTextBoxStyle, ErrorBorderBrush) == 0x0998);
static_assert(offsetof(UModioEditableTextBoxStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioErrorRetryWidget, ErrorText) == 0x0290);
static_assert(offsetof(UModioErrorRetryWidget, ErrorTextValue) == 0x0298);
static_assert(offsetof(UModioErrorRetryWidget, RetryButton) == 0x02A8);
static_assert(offsetof(UModioFeaturedCategory, NavLeftHoverAnim) == 0x02C8);
static_assert(offsetof(UModioFeaturedCategory, NavRightHoverAnim) == 0x02D0);
static_assert(offsetof(UModioFeaturedCategory, Title) == 0x02D8);
static_assert(offsetof(UModioFeaturedCategory, ItemList) == 0x02E0);
static_assert(offsetof(UModioFeaturedCategory, TileLoader) == 0x02E8);
static_assert(offsetof(UModioFeaturedCategory, ModioErrorWithRetryWidget) == 0x02F0);
static_assert(offsetof(UModioFeaturedCategory, SeeAllButton) == 0x02F8);
static_assert(offsetof(UModioFeaturedCategory, NavLeftButton) == 0x0300);
static_assert(offsetof(UModioFeaturedCategory, NavRightButton) == 0x0308);
static_assert(offsetof(UModioFeaturedCategory, CategoryViewContent) == 0x0310);
static_assert(offsetof(UModioFeaturedCategory, Filter) == 0x0318);
static_assert(offsetof(UModioModTileBase, LoadingMaterial) == 0x02D0);
static_assert(offsetof(UModioModTileBase, ErrorMaterial) == 0x02D8);
static_assert(offsetof(UModioModTileBase, Thumbnail) == 0x02E0);
static_assert(offsetof(UModioModTileBase, SubscriptionIndicator) == 0x02E8);
static_assert(offsetof(UModioModTileBase, ModName) == 0x02F0);
static_assert(offsetof(UModioModTileBase, FocusTransition) == 0x02F8);
static_assert(offsetof(UModioModTileBase, TileBorder) == 0x0300);
static_assert(offsetof(UModioModTileBase, TileFrame) == 0x0308);
static_assert(offsetof(UModioModTileBase, SubscribeButton) == 0x0310);
static_assert(offsetof(UModioModTileBase, Style) == 0x0318);
static_assert(offsetof(UModioModTileBase, UISubsystem) == 0x0320);
static_assert(offsetof(UModioModTileBase, SubscribeLabel) == 0x0370);
static_assert(offsetof(UModioModTileBase, UnsubscribeLabel) == 0x0388);
static_assert(offsetof(UModioFeaturedMod, MoreOptionsMenu) == 0x03C8);
static_assert(offsetof(UModioFeaturedMod, TileActiveFrame) == 0x03D0);
static_assert(offsetof(UModioFeaturedModCarousel, CarouselCanvasPanel) == 0x0278);
static_assert(offsetof(UModioFeaturedModCarousel, ModTileTemplate) == 0x0280);
static_assert(offsetof(UModioFeaturedModCarousel, GeneratedWidgetSize) == 0x0294);
static_assert(offsetof(UModioFeaturedModCarousel, AnimationCurve) == 0x02A0);
static_assert(offsetof(UModioFeaturedModCarousel, CachedWidgetData) == 0x02E0);
static_assert(offsetof(UModioFeaturedView, ModioErrorWithRetryWidget) == 0x02F0);
static_assert(offsetof(UModioFeaturedView, PrimaryFeaturedCategoryLoader) == 0x02F8);
static_assert(offsetof(UModioFeaturedView, AdditionalCategories) == 0x0300);
static_assert(offsetof(UModioFeaturedView, FeaturedViewContent) == 0x0308);
static_assert(offsetof(UModioFeaturedView, PrimaryCategoryGridPanel) == 0x0310);
static_assert(offsetof(UModioFeaturedView, FeaturedModCarousel) == 0x0318);
static_assert(offsetof(UModioFeaturedView, CachedFeaturedItems) == 0x0320);
static_assert(offsetof(UModioImage, CachedMaterial) == 0x0210);
static_assert(offsetof(UModioImageGalleryBase, ForegroundContent) == 0x0138);
static_assert(offsetof(UModioImageGalleryBase, BackgroundContent) == 0x0140);
static_assert(offsetof(UModioImageGalleryBase, ImageWidgetClass) == 0x0178);
static_assert(offsetof(UModioInputBindingImage, KeyToShow) == 0x0228);
static_assert(offsetof(UModioListViewInteger, Orientation) == 0x02E8);
static_assert(offsetof(UModioListViewInteger, ScrollbarVisibility) == 0x02E9);
static_assert(offsetof(UModioListViewInteger, ItemSize) == 0x02F4);
static_assert(offsetof(UModioListViewString, Orientation) == 0x02E8);
static_assert(offsetof(UModioListViewString, ScrollbarVisibility) == 0x02E9);
static_assert(offsetof(UModioListViewString, ItemSize) == 0x02F4);
static_assert(offsetof(UModioLoadingSpinner, LoadingImage) == 0x0138);
static_assert(offsetof(UModioLoadingSpinner, ImageBrushSize) == 0x0140);
static_assert(offsetof(UModioLoadingSpinner, Stretch) == 0x0148);
static_assert(offsetof(UModioLoadingSpinner, StretchDirection) == 0x0149);
static_assert(offsetof(UModioLoadingSpinner, CachedReferencedMaterial) == 0x0160);
static_assert(offsetof(UModioLogoWidget, DataSource) == 0x0108);
static_assert(offsetof(UModioLogoWidget, StyleRef) == 0x0120);
static_assert(offsetof(UModioMaterialData, DefaultRoundedRectangleMaterial) == 0x0120);
static_assert(offsetof(UModioMaterialData, DefaultCheckboxMaterial) == 0x0128);
static_assert(offsetof(UModioMaterialData, PngGlyphMaterial) == 0x0130);
static_assert(offsetof(UModioMaterialData, DefaultGlyphMaterial) == 0x0138);
static_assert(offsetof(UModioMenu, ViewChangedAnim) == 0x02A8);
static_assert(offsetof(UModioMenu, DialogAnim) == 0x02B0);
static_assert(offsetof(UModioMenu, ViewController) == 0x02B8);
static_assert(offsetof(UModioMenu, MenuBar) == 0x02C0);
static_assert(offsetof(UModioMenu, Background) == 0x02C8);
static_assert(offsetof(UModioMenu, DrawerController) == 0x02D0);
static_assert(offsetof(UModioMenu, DialogController) == 0x02D8);
static_assert(offsetof(UModioMenu, HideCursorWidget) == 0x02E0);
static_assert(offsetof(UModioMenu, NotificationController) == 0x02E8);
static_assert(offsetof(UModioMenu, ModioMenuBarWidget) == 0x02F0);
static_assert(offsetof(UModioMenu, MenuSizeBox) == 0x02F8);
static_assert(offsetof(UModioMenu, LeftBlurBorder) == 0x0300);
static_assert(offsetof(UModioMenu, RightBlurBorder) == 0x0308);
static_assert(offsetof(UModioMenu, FeaturedView) == 0x0310);
static_assert(offsetof(UModioMenu, CollectionView) == 0x0318);
static_assert(offsetof(UModioMenu, SearchResultsView) == 0x0320);
static_assert(offsetof(UModioMenu, ModDetailsView) == 0x0328);
static_assert(offsetof(UModioMenu, DownloadProgressDrawer) == 0x0330);
static_assert(offsetof(UModioMenu, RefineSearchDrawer) == 0x0338);
static_assert(offsetof(UModioMenuBar, SearchButton) == 0x0278);
static_assert(offsetof(UModioMenuBar, BackButton) == 0x0280);
static_assert(offsetof(UModioMenuBar, UserProfileButton) == 0x0288);
static_assert(offsetof(UModioModBrowserParams, PrimaryCategoryParams) == 0x0030);
static_assert(offsetof(UModioModBrowserParams, AdditionalCategoryParams) == 0x0038);
static_assert(offsetof(UModioCarousel, EntryWidgets) == 0x0118);
static_assert(offsetof(UModioCarousel, ModsToDisplay) == 0x0128);
static_assert(offsetof(UModioCarousel, EntryWidgetClass) == 0x0138);
static_assert(offsetof(UModioModCollectionTile, SizeOnDiskLabel) == 0x03D0);
static_assert(offsetof(UModioModCollectionTile, StatusWidget) == 0x03D8);
static_assert(offsetof(UModioModCollectionTile, StatusLine) == 0x03E0);
static_assert(offsetof(UModioModCollectionTile, TileButton) == 0x03E8);
static_assert(offsetof(UModioModCollectionTile, SubscribedStatusText) == 0x03F0);
static_assert(offsetof(UModioModCollectionTile, InstalledStatusText) == 0x0408);
static_assert(offsetof(UModioModCollectionTile, MoreOptionsMenu) == 0x0420);
static_assert(offsetof(UModioModDetailsImage, Image) == 0x0280);
static_assert(offsetof(UModioModDetailsImage, FrameMaterial) == 0x0288);
static_assert(offsetof(UModioModDetailsImage, TextureParameterName) == 0x0290);
static_assert(offsetof(FModioModDetailsGalleryImageInfo, LoadedImage) == 0x0028);
static_assert(offsetof(UModioModDetailsImageGallery, ImageInfo) == 0x0290);
static_assert(offsetof(UModioModDetailsImageGallery, ImageGallery) == 0x02A0);
static_assert(offsetof(UModioModDetailsImageGallery, NavButtons) == 0x02A8);
static_assert(offsetof(UModioModDetailsImageGallery, Style) == 0x02B0);
static_assert(offsetof(UModioModDetailsImageGallery, ActiveBackground) == 0x02B8);
static_assert(offsetof(UModioModDetailsImageGallery, NavButtonGridPanel) == 0x02C0);
static_assert(offsetof(UModioModDetailsImageGalleryNavButtonBase, Image) == 0x0280);
static_assert(offsetof(UModioModDetailsImageGalleryNavButtonBase, UnselectedColor) == 0x02B0);
static_assert(offsetof(UModioModDetailsImageGalleryNavButtonBase, SelectedColor) == 0x02D8);
static_assert(offsetof(UModioModDetailsOpProgress, ProgressBar) == 0x02B0);
static_assert(offsetof(UModioModDetailsOpProgress, TimeRemainingText) == 0x02B8);
static_assert(offsetof(UModioModDetailsOpProgress, TimeRemainingTextFormat) == 0x02C0);
static_assert(offsetof(UModioModDetailsOpProgress, SpeedTextFormat) == 0x02D8);
static_assert(offsetof(UModioModDetailsOpProgress, OperationSpeedText) == 0x02F0);
static_assert(offsetof(UModioModDetailsOpProgress, OperationProgressText) == 0x02F8);
static_assert(offsetof(FModioModInfoPropertyDescriptor, Label) == 0x0000);
static_assert(offsetof(FModioModInfoPropertyDescriptor, Property) == 0x0018);
static_assert(offsetof(UModioModPropertyInspectorBase, PropertiesToDisplay) == 0x0278);
static_assert(offsetof(UModioModDetailsPropertyInspector, PropertyGrid) == 0x0290);
static_assert(offsetof(UModioModDetailsPropertyInspector, LastUpdatedFormat) == 0x0298);
static_assert(offsetof(UModioModDetailsPropertyInspector, PropertyNameTextStyle) == 0x02B0);
static_assert(offsetof(UModioModDetailsPropertyInspector, DefaultPropertyNameStyleName) == 0x02B8);
static_assert(offsetof(UModioModDetailsPropertyInspector, PropertyValueTextStyle) == 0x02C0);
static_assert(offsetof(UModioModDetailsPropertyInspector, DefaultPropertyValueStyleName) == 0x02C8);
static_assert(offsetof(UModioModDetailsPropertyInspector, FillerTextStyle) == 0x02D0);
static_assert(offsetof(UModioModDetailsPropertyInspector, FillerStyleName) == 0x02D8);
static_assert(offsetof(UModioModDetailsView, DetailsLoader) == 0x02F0);
static_assert(offsetof(UModioModDetailsView, DetailsViewContent) == 0x02F8);
static_assert(offsetof(UModioModDetailsView, SubscribeButton) == 0x0300);
static_assert(offsetof(UModioModDetailsView, RateUpButton) == 0x0308);
static_assert(offsetof(UModioModDetailsView, RateDownButton) == 0x0310);
static_assert(offsetof(UModioModDetailsView, ReportButton) == 0x0318);
static_assert(offsetof(UModioModDetailsView, ModPropertiesInspector) == 0x0320);
static_assert(offsetof(UModioModDetailsView, ProgressWidget) == 0x0328);
static_assert(offsetof(UModioModDetailsView, SubscribeButtonFormat) == 0x0330);
static_assert(offsetof(UModioModDetailsView, RateUpTextFormat) == 0x0348);
static_assert(offsetof(UModioModDetailsView, RateDownTextFormat) == 0x0360);
static_assert(offsetof(UModioModDetailsView, ReportTextFormat) == 0x0378);
static_assert(offsetof(UModioModDetailsView, ModTitleTextBlock) == 0x0390);
static_assert(offsetof(UModioModDetailsView, ModSummaryTextBlock) == 0x0398);
static_assert(offsetof(UModioModDetailsView, ModFullDescriptionTextBlock) == 0x03A0);
static_assert(offsetof(UModioModDetailsView, ModioErrorWithRetryWidget) == 0x03A8);
static_assert(offsetof(UModioModDetailsView, ModTags) == 0x03B0);
static_assert(offsetof(UModioModDetailsView, ModChangelog) == 0x03B8);
static_assert(offsetof(UModioModDetailsView, SubscribeLabel) == 0x03C0);
static_assert(offsetof(UModioModDetailsView, UnsubscribeLabel) == 0x03D8);
static_assert(offsetof(UModioModDetailsView, ImageGallery) == 0x03F0);
static_assert(offsetof(UModioModDetailsView, SubscriptionBadge) == 0x03F8);
static_assert(offsetof(UModioModDetailsView, ScrollBox) == 0x0400);
static_assert(offsetof(UModioModNameWidget, DataSource) == 0x0110);
static_assert(offsetof(UModioModNameWidget, Style) == 0x0128);
static_assert(offsetof(UModioModTile, MoreOptionsMenu) == 0x03B0);
static_assert(offsetof(UModioModTile, MoreOptionsLabel) == 0x03B8);
static_assert(offsetof(UModioModTile, TileActiveFrame) == 0x03D0);
static_assert(offsetof(FModioModTileStyle, HoveredSound) == 0x0008);
static_assert(offsetof(FModioModTileStyle, PressedSound) == 0x0020);
static_assert(offsetof(UModioModTileStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioModUninstallHeaderWidget, DataSource) == 0x0110);
static_assert(offsetof(UModioModUninstallHeaderWidget, Style) == 0x0148);
static_assert(offsetof(UModioMoreOptionsDialog, OptionsList) == 0x0280);
static_assert(offsetof(UModioMultiLineEditableTextBox, ValidationRules) == 0x0CC0);
static_assert(offsetof(UModioMultiLineEditableTextBox, ErrorTextStyle) == 0x0CD4);
static_assert(offsetof(UModioMultiLineEditableTextBox, TextBoxStyle) == 0x0D00);
static_assert(offsetof(FModioMultiLineEditableTextBoxStyle, ModioTextStyle) == 0x07F8);
static_assert(offsetof(UModioMultiLineEditableTextBoxStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioNamedGlyphMaterialParams, GlyphName) == 0x0028);
static_assert(offsetof(UModioNotificationControllerBase, ErrorNotificationClass) == 0x0288);
static_assert(offsetof(UModioNotificationControllerBase, NotificationList) == 0x0290);
static_assert(offsetof(UModioNotificationControllerSlot, Edge) == 0x0068);
static_assert(offsetof(UModioNotificationControllerSlot, NotificationHorizontalAlignment) == 0x0069);
static_assert(offsetof(UModioNotificationControllerSlot, NotificationVerticalAlignment) == 0x006A);
static_assert(offsetof(FModioNotificationStyle, TextStyleSet) == 0x0008);
static_assert(offsetof(FModioNotificationStyle, PrimaryTextStyleName) == 0x0010);
static_assert(offsetof(FModioNotificationStyle, SecondaryTextStyleName) == 0x0018);
static_assert(offsetof(FModioNotificationStyle, ErrorSuccessGlyph) == 0x0020);
static_assert(offsetof(FModioNotificationStyle, ErrorFailureGlyph) == 0x0028);
static_assert(offsetof(FModioNotificationStyle, BackgroundMaterial) == 0x0030);
static_assert(offsetof(FModioNotificationStyle, SuccessColor) == 0x0038);
static_assert(offsetof(FModioNotificationStyle, ErrorColor) == 0x0040);
static_assert(offsetof(FModioNotificationStyle, ContentPadding) == 0x0048);
static_assert(offsetof(UModioNotificationStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioNotificationWidgetBase, NotificationStyle) == 0x0288);
static_assert(offsetof(UModioNotificationErrorWidgetBase, StatusColorBackground) == 0x02A8);
static_assert(offsetof(UModioNotificationErrorWidgetBase, StatusIndicator) == 0x02B0);
static_assert(offsetof(UModioNotificationErrorWidgetBase, NotificationTitle) == 0x02B8);
static_assert(offsetof(UModioNotificationErrorWidgetBase, NotificationMessage) == 0x02C0);
static_assert(offsetof(UModioPopupComboBox, CurrentEntries) == 0x0108);
static_assert(offsetof(UModioPopupComboBox, Description) == 0x0168);
static_assert(offsetof(UModioPopupComboBox, LabelFormatText) == 0x0180);
static_assert(offsetof(UModioPopupComboBox, ValueFormatText) == 0x0198);
static_assert(offsetof(UModioPopupComboBox, RoundedCornerStyle) == 0x01B4);
static_assert(offsetof(UModioPopupComboBox, ComboBoxStyle) == 0x01BC);
static_assert(offsetof(UModioPopupComboBox, TextStyle) == 0x01C4);
static_assert(offsetof(UModioPopupComboBox, ContentPadding) == 0x01CC);
static_assert(offsetof(UModioPopupComboBox, OptionValues) == 0x01E0);
static_assert(offsetof(UModioPopupComboBox, PopupPlacement) == 0x0220);
static_assert(offsetof(UModioPopupMenu, ButtonLabel) == 0x01C0);
static_assert(offsetof(UModioPopupMenu, ButtonLabelJustification) == 0x01D8);
static_assert(offsetof(UModioPopupMenu, CurrentContent) == 0x01E0);
static_assert(offsetof(UModioPopupMenu, MenuButton) == 0x01E8);
static_assert(offsetof(UModioPopupMenu, ButtonStyle) == 0x01F0);
static_assert(offsetof(UModioPopupMenu, PopupMenuStyle) == 0x01F8);
static_assert(offsetof(UModioPopupMenu, MenuContentWidgetClass) == 0x0200);
static_assert(offsetof(UModioPopupMenu, KeyForInputHint) == 0x0208);
static_assert(offsetof(FModioPopupMenuStyle, HoveredSound) == 0x0008);
static_assert(offsetof(FModioPopupMenuStyle, PressedSound) == 0x0020);
static_assert(offsetof(UModioPopupMenuStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioProgressBar, StyleRef) == 0x0318);
static_assert(offsetof(UModioProgressBarStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioRefineSearchDrawer, SearchInput) == 0x0290);
static_assert(offsetof(UModioRefineSearchDrawer, TagSelector) == 0x0298);
static_assert(offsetof(UModioRefineSearchDrawer, ApplyButton) == 0x02A0);
static_assert(offsetof(UModioRefineSearchDrawer, ClearButton) == 0x02A8);
static_assert(offsetof(UModioRefineSearchDrawer, CancelButton) == 0x02B0);
static_assert(offsetof(UModioRefineSearchDrawer, TagOptions) == 0x02C8);
static_assert(offsetof(UModioRefineSearchDrawer, NavigationPath) == 0x02D0);
static_assert(offsetof(UModioRefineSearchDrawer, UISubsystem) == 0x02E0);
static_assert(offsetof(UModioRefineSearchDrawer, CurrentActiveTagSelector) == 0x02E8);
static_assert(offsetof(UModioRemoveModDialog, ModName) == 0x0280);
static_assert(offsetof(UModioRemoveModDialog, PromptMessage) == 0x0288);
static_assert(offsetof(UModioRemoveModDialog, BackButton) == 0x0290);
static_assert(offsetof(UModioRemoveModDialog, ConfirmButton) == 0x0298);
static_assert(offsetof(UModioReportButtonGroupWidget, DataSource) == 0x0128);
static_assert(offsetof(UModioReportButtonGroupWidget, ButtonStyle) == 0x0138);
static_assert(offsetof(UModioReportSummaryWidget, DataSource) == 0x0D10);
static_assert(offsetof(UModioRichTextBlock, TextStyle) == 0x0688);
static_assert(offsetof(UModioRichTextBlock, DefaultStyleName) == 0x0690);
static_assert(offsetof(UModioRichTextButton, ButtonContent) == 0x0508);
static_assert(offsetof(UModioRichTextButton, InputHintImage) == 0x0510);
static_assert(offsetof(UModioRichTextButton, ButtonLabel) == 0x0518);
static_assert(offsetof(UModioRichTextButton, DefaultStyleName) == 0x0530);
static_assert(offsetof(UModioRichTextButton, Justification) == 0x0538);
static_assert(offsetof(UModioRichTextButton, KeyForInputHint) == 0x0540);
static_assert(offsetof(UModioRichTextStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioRoundedBorder, BorderStyle) == 0x0178);
static_assert(offsetof(UModioRoundedImage, MaterialToUse) == 0x0218);
static_assert(offsetof(UModioRoundedImage, CachedReferencedMaterial) == 0x0220);
static_assert(offsetof(UModioRoundedImage, ImageMaterial) == 0x0228);
static_assert(offsetof(UModioRoundedImage, TextureParameterName) == 0x0230);
static_assert(offsetof(UModioRoundedRectangleMaterialParams, NormalBorderColor) == 0x0028);
static_assert(offsetof(UModioRoundedRectangleMaterialParams, FocusedBorderColor) == 0x0030);
static_assert(offsetof(UModioRoundedRectangleMaterialParams, InnerColor) == 0x0038);
static_assert(offsetof(UModioRoundedRectangleMaterialParams, BorderGradientColor) == 0x0050);
static_assert(offsetof(UModioRoundedRectangleMaterialParams, InnerGradientColor) == 0x0058);
static_assert(offsetof(UModioScrollBox, ScrollBarAlignment) == 0x08A8);
static_assert(offsetof(UModioSearchOptionsDialog, TagCategorySelector) == 0x0280);
static_assert(offsetof(UModioSearchOptionsDialog, TagList) == 0x0288);
static_assert(offsetof(UModioSearchOptionsDialog, ApplyButton) == 0x0290);
static_assert(offsetof(UModioSearchOptionsDialog, MoreOptionsButton) == 0x0298);
static_assert(offsetof(UModioSearchResultsView, SearchResults) == 0x02F0);
static_assert(offsetof(UModioSearchResultsView, ResultsTileView) == 0x0300);
static_assert(offsetof(UModioSearchResultsView, FirstTile) == 0x0308);
static_assert(offsetof(UModioSearchResultsView, ResultLoader) == 0x0310);
static_assert(offsetof(UModioSearchResultsView, NoResultsDialog) == 0x0318);
static_assert(offsetof(UModioSearchResultsView, SearchTags) == 0x0320);
static_assert(offsetof(UModioSearchResultsView, RefineSearchButton) == 0x0328);
static_assert(offsetof(UModioSearchResultsView, NoResultsRefineSearchButton) == 0x0330);
static_assert(offsetof(UModioSearchResultsView, SortBy) == 0x0338);
static_assert(offsetof(UModioSearchResultsView, ModioErrorWithRetryWidget) == 0x0340);
static_assert(offsetof(UModioSearchResultsView, SearchResultsCount) == 0x0348);
static_assert(offsetof(UModioSearchResultsView, TitleTextStyle) == 0x0350);
static_assert(offsetof(UModioSearchResultsView, PageTitle) == 0x0358);
static_assert(offsetof(UModioSearchResultsView, ModQueryFormatText) == 0x0370);
static_assert(offsetof(UModioSearchResultsView, DefaultTagText) == 0x0388);
static_assert(offsetof(UModioSearchResultsView, SearchInputTagFormatText) == 0x0398);
static_assert(offsetof(UModioSelectableTag, RadioCheckboxStyle) == 0x0288);
static_assert(offsetof(UModioSelectableTag, RadioCheckboxFocusedStyle) == 0x0290);
static_assert(offsetof(UModioSelectableTag, TagSelectedCheckbox) == 0x0298);
static_assert(offsetof(UModioSelectableTag, NormalStyle) == 0x02A0);
static_assert(offsetof(UModioSelectableTag, FocusedStyle) == 0x02A8);
static_assert(offsetof(UModioSelectableTag, SearchString) == 0x02B0);
static_assert(offsetof(UModioSizeBox, HAlign) == 0x0158);
static_assert(offsetof(UModioSizeBox, VAlign) == 0x0159);
static_assert(offsetof(UModioSpecifiedMaterialParams, SpecifiedMaterial) == 0x0028);
static_assert(offsetof(UModioSubscriptionBadge, ProgressBar) == 0x02B0);
static_assert(offsetof(UModioSubscriptionBadge, Label) == 0x02B8);
static_assert(offsetof(UModioSubscriptionBadge, BadgeStyle) == 0x02C0);
static_assert(offsetof(UModioSubscriptionBadge, PendingLabelText) == 0x02C8);
static_assert(offsetof(UModioSubscriptionBadge, DownloadingLabelText) == 0x02E0);
static_assert(offsetof(UModioSubscriptionBadge, ExtractingLabelText) == 0x02F8);
static_assert(offsetof(UModioSubscriptionBadge, SubscribedLabelText) == 0x0310);
static_assert(offsetof(FModioSubscriptionBadgeStyle, LabelStyle) == 0x0008);
static_assert(offsetof(FModioSubscriptionBadgeStyle, LabelStyleNew) == 0x0278);
static_assert(offsetof(FModioSubscriptionBadgeStyle, ProgressBarStyle) == 0x0280);
static_assert(offsetof(FModioSubscriptionBadgeStyle, BadgeBorderStyle) == 0x0288);
static_assert(offsetof(UModioSubscriptionBadgeStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioTabBar, TabNames) == 0x0138);
static_assert(offsetof(UModioTabBar, TEMP_TableRowStyle) == 0x0158);
static_assert(offsetof(UModioTabBar, TabButtonStyle) == 0x0920);
static_assert(offsetof(UModioTabBar, InactiveTabButtonStyle) == 0x0928);
static_assert(offsetof(UModioTabBar, SelectedButtonBrush) == 0x0930);
static_assert(offsetof(UModioTabBar, ItemSize) == 0x0A08);
static_assert(offsetof(UModioTabButton, ClickableRegion) == 0x0280);
static_assert(offsetof(UModioTabController, NavigatePreviousHint) == 0x0280);
static_assert(offsetof(UModioTabController, TabButtons) == 0x0288);
static_assert(offsetof(UModioTabController, NavigateNextHint) == 0x0290);
static_assert(offsetof(FModioTableRowStyle, BackgroundHoverColor) == 0x0008);
static_assert(offsetof(FModioTableRowStyle, BackgroundSelectedColor) == 0x0010);
static_assert(offsetof(FModioTableRowStyle, BackgroundColor) == 0x0018);
static_assert(offsetof(FModioTableRowStyle, TextHoverColor) == 0x0020);
static_assert(offsetof(FModioTableRowStyle, TextSelectedColor) == 0x0028);
static_assert(offsetof(FModioTableRowStyle, TextColor) == 0x0030);
static_assert(offsetof(UModioTableRowStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioTagList, Tags) == 0x0150);
static_assert(offsetof(UModioTagList, ExcessTagCountText) == 0x0160);
static_assert(offsetof(UModioTagList, TagWidgetClass) == 0x0178);
static_assert(offsetof(UModioTagListWidgetBase, CategoryTextBlock) == 0x0280);
static_assert(offsetof(UModioTagListWidgetBase, SelectorListScrollBox) == 0x0288);
static_assert(offsetof(UModioTagListWidgetBase, TagSelectorListTemplate) == 0x0290);
static_assert(offsetof(UModioTagSelectorWidgetBase, CachedTagInfo) == 0x0288);
static_assert(offsetof(UModioTagSelectorWidgetBase, TagCategoryLabel) == 0x0290);
static_assert(offsetof(UModioTagSelectorWidgetBase, TagCategoryCollapseButton) == 0x0298);
static_assert(offsetof(UModioTagSelectorWidgetBase, TagCategoryCollapseImage) == 0x02A0);
static_assert(offsetof(UModioTagSelectorWidgetBase, TagCategoryInputHint) == 0x02A8);
static_assert(offsetof(UModioTagSelectorWidgetBase, CategoryVerticalBox) == 0x02B0);
static_assert(offsetof(UModioTagSelectorWidgetBase, TagWidgetTemplate) == 0x02B8);
static_assert(offsetof(UModioTagWidgetBase, TagTextFormat) == 0x0278);
static_assert(offsetof(UModioTagWidgetBase, TagValue) == 0x0290);
static_assert(offsetof(UModioTagWidgetBase, TagText) == 0x02A0);
static_assert(offsetof(UModioTagWidgetBase, TagBackground) == 0x02A8);
static_assert(offsetof(UModioTagWidgetBase, TagStyle) == 0x02B0);
static_assert(offsetof(FModioTagWidgetStyle, TextStyleNew) == 0x0008);
static_assert(offsetof(FModioTagWidgetStyle, TagBackgroundBrush) == 0x0010);
static_assert(offsetof(FModioTagWidgetStyle, TextStyle) == 0x0098);
static_assert(offsetof(FModioTagWidgetStyle, TagBackgroundStyle) == 0x0140);
static_assert(offsetof(FModioTagWidgetStyle, ContentPadding) == 0x01C0);
static_assert(offsetof(UModioTagWidgetStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioTextBlock, StyleRef) == 0x02C0);
static_assert(offsetof(UModioTextWidgetStyleContainer, Style) == 0x00D0);
static_assert(offsetof(UModioTileView, ScrollbarVisibility) == 0x039B);
static_assert(offsetof(UModioUI4Subsystem, LoadedDefaultStyleSet) == 0x0050);
static_assert(offsetof(UModioUI4Subsystem, CurrentFocusTarget) == 0x0060);
static_assert(offsetof(UModioUIAsyncLoader, CurrentState) == 0x0118);
static_assert(offsetof(UModioUIAsyncLoadingOverlay, DialogStyle) == 0x0280);
static_assert(offsetof(UModioUIAsyncLoadingOverlay, CancelButton) == 0x0288);
static_assert(offsetof(UModioUIAsyncLoadingOverlay, LoadingText) == 0x0290);
static_assert(offsetof(UModioUIAsyncLoadingOverlay, BackgroundImage) == 0x0298);
static_assert(offsetof(FModioInputMapping, VirtualKey) == 0x0000);
static_assert(offsetof(FModioInputMapping, MappedProjectInputs) == 0x0018);
static_assert(offsetof(UModioUISettings, ModioToProjectInputMappings) == 0x0028);
static_assert(offsetof(UModioUISettings, AuthenticationDataProvider) == 0x0088);
static_assert(offsetof(UModioUISettings, InputHintGlyphProvider) == 0x0090);
static_assert(offsetof(UModioUISettings, InputDevicesForTesting) == 0x00C0);
static_assert(offsetof(FModioComboBoxStyle, ComboBoxStyle) == 0x0008);
static_assert(offsetof(FModioComboBoxStyle, MenuBorderStyle) == 0x03F8);
static_assert(offsetof(FModioComboBoxStyle, ButtonBorderStyle) == 0x0478);
static_assert(offsetof(FModioComboBoxStyle, DropdownItemStyle) == 0x04F8);
static_assert(offsetof(UModioUIStyleSet, DefaultBackgroundMaterial) == 0x0048);
static_assert(offsetof(UModioUIStyleSet, HideCursorWidgetClass) == 0x0050);
static_assert(offsetof(UModioUIStyleSet, ColorPresetsData) == 0x0058);
static_assert(offsetof(UModioUIStyleSet, WidgetStyleAssets) == 0x01A0);
static_assert(offsetof(UModioUIStyleSet, NamedGlyphsAsset) == 0x0200);
static_assert(offsetof(UModioUIStyleSet, DefaultComboBoxStyle) == 0x02A8);
static_assert(offsetof(UModioUIStyleSet, MaterialData) == 0x0F68);
static_assert(offsetof(UModioUserProfileButton, DownloadProgressIndicator) == 0x0308);
static_assert(offsetof(UModioUserProfileButton, ProfileButton) == 0x0310);
static_assert(offsetof(UModioUserProfileButton, ProfileImage) == 0x0318);
static_assert(offsetof(UModioUserProfileButton, GCMaterial) == 0x0320);
static_assert(offsetof(UModioUserProfileButton, UserBrushMaterial) == 0x0328);
static_assert(offsetof(UModioUserProfileButton, NoUserBrushMaterial) == 0x0330);
static_assert(offsetof(UModioUserProfileButton, ProfileTextureParameterName) == 0x0338);
static_assert(offsetof(UModioUserWidgetNamedSlotBase, DesignerSpecifiedSlotNames) == 0x02C8);
static_assert(offsetof(UModioRoundedBorderStyle, Style) == 0x00D0);
static_assert(offsetof(UModioWidgetCarousel, EntryWidgetClass) == 0x0128);
static_assert(offsetof(UModioWidgetCarousel, LeftCarouselWidget) == 0x0130);
static_assert(offsetof(UModioWidgetCarousel, CenterCarouselWidget) == 0x0138);
static_assert(offsetof(UModioWidgetCarousel, RightCarouselWidget) == 0x0140);
static_assert(offsetof(UModioWidgetCarousel, IncomingWidget) == 0x0148);
static_assert(offsetof(UModioWidgetCarousel, EntryWidgetClipping) == 0x0154);
static_assert(offsetof(UModioWidgetCarousel, EntryWidgetSizeOverride) == 0x0158);
static_assert(offsetof(FModioTextBlockStyleOverride, StyleProperties) == 0x0008);
static_assert(offsetof(FModioUIMenuEntry, MenuEntryLabel) == 0x0000);
