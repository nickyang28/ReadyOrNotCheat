
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Modio
/// dependency: UMG

/// Enum /Script/ModioUICore.EModioUIMediaDownloadEventType
/// Size: 0x01 (1 bytes)
enum class EModioUIMediaDownloadEventType : uint8_t
{
	EModioUIMediaDownloadEventType__ModGalleryImages                                 = 0,
	EModioUIMediaDownloadEventType__ModCreatorAvatarImage                            = 1,
	EModioUIMediaDownloadEventType__ModLogo                                          = 2
};

/// Enum /Script/ModioUICore.EModioUIModInfoEventType
/// Size: 0x01 (1 bytes)
enum class EModioUIModInfoEventType : uint8_t
{
	EModioUIModInfoEventType__ListAllMods                                            = 0,
	EModioUIModInfoEventType__GetModInfo                                             = 1
};

/// Class /Script/ModioUICore.ModioExtendedModInfoUIDetails
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioExtendedModInfoUIDetails : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.IsModSubscribed
	// bool IsModSubscribed();                                                                                                  // [0x1716660] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.IsModInstalled
	// bool IsModInstalled();                                                                                                   // [0x1716630] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.IsModInQueue
	// bool IsModInQueue();                                                                                                     // [0x16d9410] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.IsModExtracting
	// bool IsModExtracting();                                                                                                  // [0x16da1d0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.IsModEnabled
	// bool IsModEnabled();                                                                                                     // [0x1716600] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.IsModDownloading
	// bool IsModDownloading();                                                                                                 // [0x17165d0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/ModioUICore.ModioExtendedModInfoUIDetails.HasModErrors
	// bool HasModErrors();                                                                                                     // [0x1716550] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/ModioUICore.ModioModBrowserInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModBrowserInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioModBrowserInterface.ShowUserAuth
	// void ShowUserAuth();                                                                                                     // [0x17189a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.ShowSearchResults
	// void ShowSearchResults(FModioFilterParams& FilterParams);                                                                // [0x1718360] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.ShowReportMod
	// void ShowReportMod(class UObject* DialogDataSource);                                                                     // [0x17182d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.ShowModUnsubscribeDialog
	// void ShowModUnsubscribeDialog(class UObject* DialogDataSource);                                                          // [0x1718240] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.ShowDialog
	// void ShowDialog(FModioModInfo ModInfo);                                                                                  // [0x1718060] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.ShowDetailsForMod
	// void ShowDetailsForMod(FModioModID ID);                                                                                  // [0x1717f50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.RequestExternalAuthentication
	// void RequestExternalAuthentication(EModioAuthenticationProvider Provider);                                               // [0x1716840] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.LogOut
	// void LogOut();                                                                                                           // [0x1716690] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModBrowserInterface.IsDownloadDrawerOpen
	// bool IsDownloadDrawerOpen();                                                                                             // [0x17165a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioModInfoUIDetails
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModInfoUIDetails : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioModInfoUIDetails.GetModID
	// FModioModID GetModID();                                                                                                  // [0x1715f30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioModInfoUIDetails.GetFullModInfo
	// FModioModInfo GetFullModInfo();                                                                                          // [0x1715ee0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIAuthenticationChangedReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIAuthenticationChangedReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIAuthenticationChangedReceiver.OnAuthenticationChanged
	// void OnAuthenticationChanged(FModioOptionalUser User);                                                                   // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIMediaDownloadCompletedReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIMediaDownloadCompletedReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModLogoDownloadCompleted
	// void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image, EModioLogoSize LogoSize); // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModGalleryImageDownloadCompleted
	// void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ec, int32_t ImageIndex, FModioOptionalImage Image); // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModCreatorAvatarDownloadCompleted
	// void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image);              // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIModEnableWidget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIModEnableWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIModEnableWidget.OnModEnabledStateChanged
	// void OnModEnabledStateChanged(FModioModID ModId, bool bNewSubscriptionState);                                            // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIModInfoReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIModInfoReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIModInfoReceiver.OnModInfoRequestCompleted
	// void OnModInfoRequestCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalModInfo Info);                       // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUIModInfoReceiver.OnListAllModsRequestCompleted
	// void OnListAllModsRequestCompleted(FString RequestIdentifier, FModioErrorCode ec, FModioOptionalModInfoList List);       // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIModManagementEventReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIModManagementEventReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIModManagementEventReceiver.OnModManagementEvent
	// void OnModManagementEvent(FModioModManagementEvent Event);                                                               // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioNotificationParamsLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioNotificationParamsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.SetTextArg
	// FModioNotificationParams SetTextArg(FModioNotificationParams& NotificationParams, FString Name, FText& Text);            // [0x1717c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.SetStringArg
	// FModioNotificationParams SetStringArg(FModioNotificationParams& NotificationParams, FString Name, FString Value);        // [0x17178c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.SetIntegerArg
	// FModioNotificationParams SetIntegerArg(FModioNotificationParams& NotificationParams, FString Name, int32_t Value);       // [0x1717530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.SetFloatArg
	// FModioNotificationParams SetFloatArg(FModioNotificationParams& NotificationParams, FString Name, float Value);           // [0x1717250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.CreateUninstallNotification
	// FModioNotificationParams CreateUninstallNotification(FModioErrorCode StatusCode, TScriptInterface<Class>& ModInfo);      // [0x1715740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.CreateSubscriptionNotification
	// FModioNotificationParams CreateSubscriptionNotification(FModioErrorCode StatusCode, TScriptInterface<Class>& ModInfo);   // [0x1715600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.CreateRatingNotification
	// FModioNotificationParams CreateRatingNotification(FModioErrorCode StatusCode, TScriptInterface<Class>& ModInfo);         // [0x17154c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.CreateNotificationParams
	// FModioNotificationParams CreateNotificationParams(FModioErrorCode StatusCode, FText& TitleText, FText& SuccessText, FText& ErrorText); // [0x1715220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.CreateInstallationNotification
	// FModioNotificationParams CreateInstallationNotification(FModioErrorCode StatusCode, TScriptInterface<Class>& ModInfo);   // [0x17150e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioNotificationParamsLibrary.AddFormatText
	// FModioNotificationParams AddFormatText(FModioNotificationParams& NotificationParams, FName& Name, FText& Text);          // [0x1714aa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModioUICore.ModioUINotification
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUINotification : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUINotification.SetNotificationExpireHandler
	// void SetNotificationExpireHandler(FDelegateProperty& InDelegate);                                                        // [0x1717810] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotification.GetAsWidget
	// class UWidget* GetAsWidget();                                                                                            // [0x1715e80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotification.Display
	// void Display();                                                                                                          // [0x16d86e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotification.ConfigureManual
	// void ConfigureManual(FText& Title, FText& Message, bool bIsError);                                                       // [0x1714f30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotification.Configure
	// void Configure(FModioNotificationParams& Params);                                                                        // [0x1714d90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUINotificationController
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUINotificationController : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUINotificationController.RegisterUserWidget
	// void RegisterUserWidget(TScriptInterface<Class>& ControllerWidget);                                                      // [0x17166b0] Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotificationController.HandleDisplayNotificationWidget
	// void HandleDisplayNotificationWidget(TScriptInterface<Class>& Notification);                                             // [0x17164b0] Native|Protected|HasOutParms 
	// Function /Script/ModioUICore.ModioUINotificationController.HandleDisplayNotificationParams
	// void HandleDisplayNotificationParams(FModioNotificationParams& Params);                                                  // [0x1716310] Native|Protected|HasOutParms 
	// Function /Script/ModioUICore.ModioUINotificationController.HandleDisplayManual
	// void HandleDisplayManual(FText& Title, FText& Message, bool bIsError);                                                   // [0x1716160] Native|Protected|HasOutParms 
	// Function /Script/ModioUICore.ModioUINotificationController.DisplayNotificationParams
	// void DisplayNotificationParams(FModioNotificationParams& Params);                                                        // [0x1714d90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotificationController.DisplayNotificationManual
	// void DisplayNotificationManual(FText& Title, FText& Message, bool bIsError);                                             // [0x1714f30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/ModioUICore.ModioUINotificationController.DisplayNotification
	// void DisplayNotification(TScriptInterface<Class>& Notification);                                                         // [0x16d9440] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUISubscriptionsChangedReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUISubscriptionsChangedReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUISubscriptionsChangedReceiver.OnSubscriptionsChanged
	// void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);                                              // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIUserAvatarDownloadCompletedReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver.OnUserAvatarDownloadCompleted
	// void OnUserAvatarDownloadCompleted(FModioErrorCode ec, FModioOptionalImage Image);                                       // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioUIUserChangedReceiver
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUIUserChangedReceiver : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModioUICore.ModioUIUserChangedReceiver.OnUserChanged
	// void OnUserChanged(FModioOptionalUser NewUser);                                                                          // [0x24710f0] Event|Protected|BlueprintEvent 
};

/// Class /Script/ModioUICore.ModioFeaturedCategoryParams
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000070) align 8 pad: 0x0000
class UModioFeaturedCategoryParams : public UObject
{ 
public:
	FText                                              CategoryName;                                               // 0x0028   (0x0018)  
	TArray<FString>                                    Tags;                                                       // 0x0040   (0x0010)  
	TArray<FString>                                    ExcludedTags;                                               // 0x0050   (0x0010)  
	EModioSortDirection                                Direction;                                                  // 0x0060   (0x0001)  
	EModioSortFieldType                                SortField;                                                  // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	int64_t                                            Count;                                                      // 0x0068   (0x0008)  
};

/// Class /Script/ModioUICore.ModioFilterParamsUI
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000D0) align 8 pad: 0x0000
class UModioFilterParamsUI : public UObject
{ 
public:
	FModioFilterParams                                 Underlying;                                                 // 0x0028   (0x00A8)  
};

/// Class /Script/ModioUICore.ModioModCollectionEntryUI
/// Size: 0x0218 (536 bytes) (0x000028 - 0x000240) align 8 pad: 0x0000
class UModioModCollectionEntryUI : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FModioModCollectionEntry                           Underlying;                                                 // 0x0030   (0x0208)  
	bool                                               bCachedSubscriptionStatus;                                  // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/ModioUICore.ModioModInfoUI
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x000208) align 8 pad: 0x0000
class UModioModInfoUI : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FModioModInfo                                      Underlying;                                                 // 0x0030   (0x01D8)  
};

/// Class /Script/ModioUICore.ModioReportInfoUI
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000090) align 8 pad: 0x0000
class UModioReportInfoUI : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FModioReportParams                                 ReportData;                                                 // 0x0030   (0x0058)  
	class UObject*                                     ModInfo;                                                    // 0x0088   (0x0008)  
};

/// Class /Script/ModioUICore.ModioTagInfoUI
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UModioTagInfoUI : public UObject
{ 
public:
	FModioModTagInfo                                   Underlying;                                                 // 0x0028   (0x0028)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/ModioUICore.ModioTagOptionsUI
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UModioTagOptionsUI : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0028   (0x0010)  MISSED
	FModioModTagOptions                                Underlying;                                                 // 0x0038   (0x0028)  


	/// Functions
	// Function /Script/ModioUICore.ModioTagOptionsUI.GetTagCategoriesForUI
	// TArray<UModioTagInfoUI*> GetTagCategoriesForUI();                                                                        // [0x1715fb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModioUICore.ModioUISubsystem
/// Size: 0x0208 (520 bytes) (0x000030 - 0x000238) align 8 pad: 0x0000
class UModioUISubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x1A0];                                     // 0x0030   (0x01A0)  MISSED
	class UUserWidget*                                 ModBrowserInstance;                                         // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x01D8   (0x0030)  MISSED
	SDK_UNDEFINED(16,1837) /* FMulticastInlineDelegate */ __um(OnModEnabledChanged);                               // 0x0208   (0x0010)  
	SDK_UNDEFINED(16,1838) /* FDelegateProperty */     __um(GetModEnabledDelegate);                                // 0x0218   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0228   (0x0010)  MISSED


	/// Functions
	// Function /Script/ModioUICore.ModioUISubsystem.UnsubscribeHandler
	// void UnsubscribeHandler(FModioErrorCode ErrorCode, FModioModID ID);                                                      // [0x1718ba0] Final|Native|Protected 
	// Function /Script/ModioUICore.ModioUISubsystem.UninstallHandler
	// void UninstallHandler(FModioErrorCode ErrorCode, FModioModID ID);                                                        // [0x1718ab0] Final|Native|Protected 
	// Function /Script/ModioUICore.ModioUISubsystem.SubscriptionHandler
	// void SubscriptionHandler(FModioErrorCode ErrorCode, FModioModID ID);                                                     // [0x17189c0] Final|Native|Protected 
	// Function /Script/ModioUICore.ModioUISubsystem.ShowSearchResults
	// bool ShowSearchResults(FModioFilterParams SearchParameters);                                                             // [0x1718530] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.ShowModBrowserUIForPlayer
	// class UUserWidget* ShowModBrowserUIForPlayer(class UClass* MenuClass, class APlayerController* Controller, FDelegateProperty BrowserClosedDelegate); // [0x1718110] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.ShowDetailsForMod
	// void ShowDetailsForMod(FModioModID ID);                                                                                  // [0x1717fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestUserAvatar
	// void RequestUserAvatar();                                                                                                // [0x1717230] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestSubscriptionForModID
	// void RequestSubscriptionForModID(FModioModID ID);                                                                        // [0x17171b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModID
	// void RequestRemoveSubscriptionForModID(FModioModID ID);                                                                  // [0x1717130] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestModInfoForModIDs
	// void RequestModInfoForModIDs(TArray<FModioModID> IDs);                                                                   // [0x1717040] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestLogoDownloadForModID
	// void RequestLogoDownloadForModID(FModioModID ID, EModioLogoSize LogoSize);                                               // [0x1716f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestListAllMods
	// void RequestListAllMods(FModioFilterParams Params, FString RequestIdentifier);                                           // [0x1716a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestGalleryImageDownloadForModID
	// void RequestGalleryImageDownloadForModID(FModioModID ID, int32_t Index, EModioGallerySize ImageSize);                    // [0x1716940] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestExternalAuthentication
	// void RequestExternalAuthentication(EModioAuthenticationProvider Provider);                                               // [0x17168c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.RequestEmailAuthentication
	// void RequestEmailAuthentication(FModioEmailAuthCode Code);                                                               // [0x1716750] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.HideModBrowserUI
	// void HideModBrowserUI();                                                                                                 // [0x1716580] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.GetOnModEnabled
	// FDelegateProperty GetOnModEnabled();                                                                                     // [0x1715f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.GetCurrentDPIScaleValue
	// float GetCurrentDPIScaleValue();                                                                                         // [0x1715eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.FormatText
	// FText FormatText(FText Input);                                                                                           // [0x1715d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.DisplayNotificationParams
	// void DisplayNotificationParams(FModioNotificationParams& Params);                                                        // [0x1715b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.DisplayNotificationManual
	// void DisplayNotificationManual(FText Title, FText Message, bool bIsError);                                               // [0x17159c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.DisplayNotification
	// void DisplayNotification(TScriptInterface<Class>& Notification);                                                         // [0x1715920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.DisplayErrorDialog
	// void DisplayErrorDialog(FModioErrorCode ErrorCode);                                                                      // [0x1715880] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModioUICore.ModioUISubsystem.CloseModBrowserUI
	// void CloseModBrowserUI();                                                                                                // [0x1714d70] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ModioUICore.ModioNotificationParams
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 pad: 0x0000
struct FModioNotificationParams
{ 
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x0000   (0x00A0)  MISSED
	FModioErrorCode                                    ErrorCode;                                                  // 0x00A0   (0x0008)  
	class UObject*                                     NotificationContextObject;                                  // 0x00A8   (0x0008)  
	float                                              Duration;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

static_assert(sizeof(UModioExtendedModInfoUIDetails) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModBrowserInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModInfoUIDetails) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIAuthenticationChangedReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIMediaDownloadCompletedReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIModEnableWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIModInfoReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIModManagementEventReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioNotificationParamsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUINotification) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUINotificationController) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUISubscriptionsChangedReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIUserAvatarDownloadCompletedReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioUIUserChangedReceiver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioFeaturedCategoryParams) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UModioFilterParamsUI) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UModioModCollectionEntryUI) == 0x0240); // 576 bytes (0x000028 - 0x000240)
static_assert(sizeof(UModioModInfoUI) == 0x0208); // 520 bytes (0x000028 - 0x000208)
static_assert(sizeof(UModioReportInfoUI) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UModioTagInfoUI) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UModioTagOptionsUI) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UModioUISubsystem) == 0x0238); // 568 bytes (0x000030 - 0x000238)
static_assert(sizeof(FModioNotificationParams) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(offsetof(UModioFeaturedCategoryParams, CategoryName) == 0x0028);
static_assert(offsetof(UModioFeaturedCategoryParams, Tags) == 0x0040);
static_assert(offsetof(UModioFeaturedCategoryParams, ExcludedTags) == 0x0050);
static_assert(offsetof(UModioFeaturedCategoryParams, Direction) == 0x0060);
static_assert(offsetof(UModioFeaturedCategoryParams, SortField) == 0x0061);
static_assert(offsetof(UModioFilterParamsUI, Underlying) == 0x0028);
static_assert(offsetof(UModioModCollectionEntryUI, Underlying) == 0x0030);
static_assert(offsetof(UModioModInfoUI, Underlying) == 0x0030);
static_assert(offsetof(UModioReportInfoUI, ReportData) == 0x0030);
static_assert(offsetof(UModioReportInfoUI, ModInfo) == 0x0088);
static_assert(offsetof(UModioTagInfoUI, Underlying) == 0x0028);
static_assert(offsetof(UModioTagOptionsUI, Underlying) == 0x0038);
static_assert(offsetof(UModioUISubsystem, ModBrowserInstance) == 0x01D0);
static_assert(offsetof(FModioNotificationParams, ErrorCode) == 0x00A0);
static_assert(offsetof(FModioNotificationParams, NotificationContextObject) == 0x00A8);
