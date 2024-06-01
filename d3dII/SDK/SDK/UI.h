
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
/// dependency: ModioUI
/// dependency: SlateCore
/// dependency: UMG

/// Class /modio/UI/Browser/Components/ModioHideCursorWidget.ModioHideCursorWidget_C
/// Size: 0x0000 (0 bytes) (0x000260 - 0x000260) align 8 pad: 0x0000
class UModioHideCursorWidget_C : public UUserWidget
{ 
public:
};

/// Class /Modio/UI/Browser/Views/Collection/ModioModCollectionTileStatusWidget.ModioModCollectionTileStatusWidget_C
/// Size: 0x0000 (0 bytes) (0x000378 - 0x000378) align 8 pad: 0x0000
class UModioModCollectionTileStatusWidget_C : public UModioCollectionTileStatus
{ 
public:
};

/// Class /Modio/UI/Browser/Views/Collection/ModioModCollectionTileWidget.ModioModCollectionTileWidget_C
/// Size: 0x0000 (0 bytes) (0x000430 - 0x000430) align 8 pad: 0x0000
class UModioModCollectionTileWidget_C : public UModioModCollectionTile
{ 
public:
};

/// Class /Modio/UI/Browser/Drawers/DownloadQueue/ModioDownloadQueueEntryWidget.ModioDownloadQueueEntryWidget_C
/// Size: 0x0000 (0 bytes) (0x000300 - 0x000300) align 8 pad: 0x0000
class UModioDownloadQueueEntryWidget_C : public UModioDownloadQueueEntry
{ 
public:
};

/// Class /Modio/UI/Browser/Drawers/DownloadQueue/ModioDownloadQueueOpProgressWidget.ModioDownloadQueueOpProgressWidget_C
/// Size: 0x0000 (0 bytes) (0x000320 - 0x000320) align 8 pad: 0x0000
class UModioDownloadQueueOpProgressWidget_C : public UModioDownloadQueueOpProgress
{ 
public:
};

/// Class /modio/UI/Browser/Drawers/DownloadQueue/ModioDownloadQueueList.ModioDownloadQueueList_C
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class UModioDownloadQueueList_C : public UModioDownloadListWidgetBase
{ 
public:
};

/// Class /modio/UI/Browser/Drawers/DownloadQueue/ModioCompletedQueueList.ModioCompletedQueueList_C
/// Size: 0x0000 (0 bytes) (0x0002A8 - 0x0002A8) align 8 pad: 0x0000
class UModioCompletedQueueList_C : public UModioDownloadListWidgetBase
{ 
public:
};

/// Class /Modio/UI/Browser/Views/CategoryBrowser/FeaturedCarouselModWidget.FeaturedCarouselModWidget_C
/// Size: 0x0008 (8 bytes) (0x0003D8 - 0x0003E0) align 8 pad: 0x0000
class UFeaturedCarouselModWidget_C : public UModioFeaturedMod
{ 
public:
	class UModioRoundedImage*                          TileActiveFrame;                                            // 0x03D8   (0x0008)  
};

/// Class /Modio/UI/Browser/ModioFeaturedCategoryWidget.ModioFeaturedCategoryWidget_C
/// Size: 0x0018 (24 bytes) (0x0003D8 - 0x0003F0) align 8 pad: 0x0000
class UModioFeaturedCategoryWidget_C : public UModioFeaturedCategory
{ 
public:
	class UModioLoadingSpinner*                        ModioLoadingSpinner;                                        // 0x03D8   (0x0008)  
	class UModioRichTextBlock*                         ModioRichTextBlock;                                         // 0x03E0   (0x0008)  
	class UModioRichTextBlock*                         ModioRichTextBlock0;                                        // 0x03E8   (0x0008)  
};

/// Class /modio/UI/Browser/Views/CategoryBrowser/FeaturedModCarousel.FeaturedModCarousel_C
/// Size: 0x0000 (0 bytes) (0x0002F0 - 0x0002F0) align 8 pad: 0x0000
class UFeaturedModCarousel_C : public UModioFeaturedModCarousel
{ 
public:
};

/// Class /Modio/UI/Browser/Components/ModioProfileButtonWidget.ModioProfileButtonWidget_C
/// Size: 0x0000 (0 bytes) (0x000340 - 0x000340) align 8 pad: 0x0000
class UModioProfileButtonWidget_C : public UModioUserProfileButton
{ 
public:
};

/// Class /Modio/UI/Browser/Views/ModDetails/ModioModDetailsImageWidget.ModioModDetailsImageWidget_C
/// Size: 0x0008 (8 bytes) (0x000298 - 0x0002A0) align 8 pad: 0x0000
class UModioModDetailsImageWidget_C : public UModioModDetailsImage
{ 
public:
	class UModioRoundedImage*                          Background;                                                 // 0x0298   (0x0008)  
};

/// Class /Modio/UI/Browser/Views/ModDetails/ModioModDetailsImageGalleryNavButtonWidget.ModioModDetailsImageGalleryNavButtonWidget_C
/// Size: 0x0000 (0 bytes) (0x000300 - 0x000300) align 8 pad: 0x0000
class UModioModDetailsImageGalleryNavButtonWidget_C : public UModioModDetailsImageGalleryNavButtonBase
{ 
public:
};

/// Class /Modio/UI/Browser/Views/ModDetails/ModioModDetailsPropertyInspectorWidget.ModioModDetailsPropertyInspectorWidget_C
/// Size: 0x0000 (0 bytes) (0x0002F8 - 0x0002F8) align 8 pad: 0x0000
class UModioModDetailsPropertyInspectorWidget_C : public UModioModDetailsPropertyInspector
{ 
public:
};

/// Class /Modio/UI/Browser/Views/ModDetails/ModioModDetailsOpProgressWidget.ModioModDetailsOpProgressWidget_C
/// Size: 0x0008 (8 bytes) (0x000300 - 0x000308) align 8 pad: 0x0000
class UModioModDetailsOpProgressWidget_C : public UModioModDetailsOpProgress
{ 
public:
	class UModioImage*                                 ModioImage;                                                 // 0x0300   (0x0008)  
};

/// Class /Modio/UI/Browser/Views/ModDetails/ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C
/// Size: 0x0018 (24 bytes) (0x0002D0 - 0x0002E8) align 8 pad: 0x0000
class UModioModDetailsImageGalleryWidget_C : public UModioModDetailsImageGallery
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	class UModioInputBindingImage*                     ModioInputBindingImage;                                     // 0x02D8   (0x0008)  
	class UModioInputBindingImage*                     ModioInputBindingImage0;                                    // 0x02E0   (0x0008)  


	/// Functions
	// Function /Modio/UI/Browser/Views/ModDetails/ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x24710f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Modio/UI/Browser/Views/ModDetails/ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x24710f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Modio/UI/Browser/Views/ModDetails/ModioModDetailsImageGalleryWidget.ModioModDetailsImageGalleryWidget_C.ExecuteUbergraph_ModioModDetailsImageGalleryWidget
	// void ExecuteUbergraph_ModioModDetailsImageGalleryWidget(int32_t EntryPoint);                                             // [0x24710f0] Final|HasDefaults    
};

/// Class /Modio/UI/Browser/Components/ModioTagSelectorWidget.ModioTagSelectorWidget_C
/// Size: 0x0020 (32 bytes) (0x0002C0 - 0x0002E0) align 8 pad: 0x0000
class UModioTagSelectorWidget_C : public UModioTagSelectorWidgetBase
{ 
public:
	class UModioSelectableTagWidget_C*                 ModioSelectableTagWidget;                                   // 0x02C0   (0x0008)  
	class UModioSelectableTagWidget_C*                 ModioSelectableTagWidget0;                                  // 0x02C8   (0x0008)  
	class UModioSelectableTagWidget_C*                 ModioSelectableTagWidget1;                                  // 0x02D0   (0x0008)  
	class UModioSelectableTagWidget_C*                 ModioSelectableTagWidget2;                                  // 0x02D8   (0x0008)  
};

/// Class /Modio/UI/Browser/Components/ModioSelectableTagWidget.ModioSelectableTagWidget_C
/// Size: 0x0000 (0 bytes) (0x0002D8 - 0x0002D8) align 8 pad: 0x0000
class UModioSelectableTagWidget_C : public UModioSelectableTag
{ 
public:
};

/// Class /Modio/UI/Browser/Components/ModioTagListWidget.ModioTagListWidget_C
/// Size: 0x0028 (40 bytes) (0x000298 - 0x0002C0) align 8 pad: 0x0000
class UModioTagListWidget_C : public UModioTagListWidgetBase
{ 
public:
	class UModioInputBindingImage*                     ModioInputBindingImage;                                     // 0x0298   (0x0008)  
	class UModioInputBindingImage*                     ModioInputBindingImage0;                                    // 0x02A0   (0x0008)  
	class UModioSelectableTagWidget_C*                 ModioSelectableTagWidget;                                   // 0x02A8   (0x0008)  
	class UModioTagSelectorWidget_C*                   ModioTagSelectorWidget;                                     // 0x02B0   (0x0008)  
	class UModioTagSelectorWidget_C*                   ModioTagSelectorWidget1;                                    // 0x02B8   (0x0008)  


	/// Functions
	// Function /Modio/UI/Browser/Components/ModioTagListWidget.ModioTagListWidget_C.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                        // [0x24710f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Modio/UI/Browser/Components/ModioSubscriptionBadgeWidget.ModioSubscriptionBadgeWidget_C
/// Size: 0x0000 (0 bytes) (0x000328 - 0x000328) align 8 pad: 0x0000
class UModioSubscriptionBadgeWidget_C : public UModioSubscriptionBadge
{ 
public:
};

/// Class /Modio/UI/Browser/Components/ModioTagWidget.ModioTagWidget_C
/// Size: 0x0000 (0 bytes) (0x0002B8 - 0x0002B8) align 8 pad: 0x0000
class UModioTagWidget_C : public UModioTagWidgetBase
{ 
public:
};

/// Class /Modio/UI/Browser/ModioModTileWidget.ModioModTileWidget_C
/// Size: 0x0010 (16 bytes) (0x000400 - 0x000410) align 8 pad: 0x0000
class UModioModTileWidget_C : public UModioModTile
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0400   (0x0008)  
	class UModioRoundedImage*                          ModioRoundedImage;                                          // 0x0408   (0x0008)  


	/// Functions
	// Function /Modio/UI/Browser/ModioModTileWidget.ModioModTileWidget_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x24710f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Modio/UI/Browser/ModioModTileWidget.ModioModTileWidget_C.ExecuteUbergraph_ModioModTileWidget
	// void ExecuteUbergraph_ModioModTileWidget(int32_t EntryPoint);                                                            // [0x24710f0] Final|HasDefaults    
};

/// Class /modio/UI/Browser/Components/ModioErrorWithRetryWidget.ModioErrorWithRetryWidget_C
/// Size: 0x0008 (8 bytes) (0x0002B0 - 0x0002B8) align 8 pad: 0x0000
class UModioErrorWithRetryWidget_C : public UModioErrorRetryWidget
{ 
public:
	class UModioRoundedImage*                          ModioRoundedImage;                                          // 0x02B0   (0x0008)  
};

/// Class /Modio/UI/Browser/Views/SearchResults/ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C
/// Size: 0x0029 (41 bytes) (0x000440 - 0x000469) align 8 pad: 0x0001
#pragma pack(push, 0x1)
class UModioSearchResultsViewWidget_C : public UModioSearchResultsView
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UModioOverlay*                               ModioOverlay;                                               // 0x0448   (0x0008)  
	class UModioRoundedImage*                          ModioRoundedImage;                                          // 0x0450   (0x0008)  
	class UModioRichTextBlock*                         NoResultsHeading;                                           // 0x0458   (0x0008)  
	class UModioRichTextBlock*                         SearchResultsTitle;                                         // 0x0460   (0x0008)  
	bool                                               bHasFocus;                                                  // 0x0468   (0x0001)  


	/// Functions
	// Function /Modio/UI/Browser/Views/SearchResults/ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C.BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
	// void BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget); // [0x24710f0] BlueprintEvent       
	// Function /Modio/UI/Browser/Views/SearchResults/ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C.ExecuteUbergraph_ModioSearchResultsViewWidget
	// void ExecuteUbergraph_ModioSearchResultsViewWidget(int32_t EntryPoint);                                                  // [0x24710f0] Final                
};
#pragma pack(pop)

/// Class /Modio/UI/Browser/Drawers/RefineSearch/ModioRefineSearchDrawer.ModioRefineSearchDrawer_C
/// Size: 0x0008 (8 bytes) (0x0002F8 - 0x000300) align 8 pad: 0x0000
class UModioRefineSearchDrawer_C : public UModioRefineSearchDrawer
{ 
public:
	class UModioDrawer*                                ModioDrawer;                                                // 0x02F8   (0x0008)  
};

/// Class /modio/UI/Browser/Notifications/ModioNotificationControllerWidget.ModioNotificationControllerWidget_C
/// Size: 0x0000 (0 bytes) (0x000298 - 0x000298) align 8 pad: 0x0000
class UModioNotificationControllerWidget_C : public UModioNotificationControllerBase
{ 
public:
};

/// Class /Modio/UI/Browser/Views/ModDetails/ModioModDetailsViewWidget.ModioModDetailsViewWidget_C
/// Size: 0x0028 (40 bytes) (0x000428 - 0x000450) align 8 pad: 0x0000
class UModioModDetailsViewWidget_C : public UModioModDetailsView
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0428   (0x0008)  
	class UModioLoadingSpinner*                        ModioLoadingSpinner;                                        // 0x0430   (0x0008)  
	class UModioRichTextBlock*                         ModioRichTextBlock;                                         // 0x0438   (0x0008)  
	class UModioRichTextBlock*                         ModioRichTextBlock0;                                        // 0x0440   (0x0008)  
	class UModioRichTextBlock*                         ModioRichTextBlock1;                                        // 0x0448   (0x0008)  


	/// Functions
	// Function /Modio/UI/Browser/Views/ModDetails/ModioModDetailsViewWidget.ModioModDetailsViewWidget_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x24710f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Modio/UI/Browser/Views/ModDetails/ModioModDetailsViewWidget.ModioModDetailsViewWidget_C.ExecuteUbergraph_ModioModDetailsViewWidget
	// void ExecuteUbergraph_ModioModDetailsViewWidget(int32_t EntryPoint);                                                     // [0x24710f0] Final|HasDefaults    
};

/// Class /Modio/UI/Browser/Views/ModioModBrowserMenuBarWidget.ModioModBrowserMenuBarWidget_C
/// Size: 0x0008 (8 bytes) (0x000290 - 0x000298) align 8 pad: 0x0000
class UModioModBrowserMenuBarWidget_C : public UModioMenuBar
{ 
public:
	class UModioInputBindingImage*                     ProfileDownloadQueueInputHint;                              // 0x0290   (0x0008)  
};

/// Class /Modio/UI/Browser/Components/ModioMenuBarWidget.ModioMenuBarWidget_C
/// Size: 0x0018 (24 bytes) (0x000278 - 0x000290) align 8 pad: 0x0000
class UModioMenuBarWidget_C : public UModioUserWidgetBase
{ 
public:
	class UModioInputBindingImage*                     ModioInputBindingImage;                                     // 0x0278   (0x0008)  
	class UModioInputBindingImage*                     ModioInputBindingImage0;                                    // 0x0280   (0x0008)  
	class UModioTabBar*                                ModioTabBar;                                                // 0x0288   (0x0008)  
};

/// Class /Modio/UI/Browser/ModioFeaturedViewWidget.ModioFeaturedViewWidget_C
/// Size: 0x0010 (16 bytes) (0x000330 - 0x000340) align 8 pad: 0x0000
class UModioFeaturedViewWidget_C : public UModioFeaturedView
{ 
public:
	class UModioLoadingSpinner*                        ModioLoadingSpinner;                                        // 0x0330   (0x0008)  
	class UModioRichTextBlock*                         ModioRichTextBlock;                                         // 0x0338   (0x0008)  


	/// Functions
	// Function /Modio/UI/Browser/ModioFeaturedViewWidget.ModioFeaturedViewWidget_C.DoCustomNavigation
	// class UWidget* DoCustomNavigation(EUINavigation Navigation);                                                             // [0x24710f0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Modio/UI/Browser/Notifications/ModioErrorNotificationWidget.ModioErrorNotificationWidget_C
/// Size: 0x0008 (8 bytes) (0x0002D8 - 0x0002E0) align 8 pad: 0x0000
class UModioErrorNotificationWidget_C : public UModioNotificationErrorWidgetBase
{ 
public:
	class UModioImage*                                 textcolorbackground;                                        // 0x02D8   (0x0008)  
};

/// Class /Modio/UI/Browser/Drawers/DownloadQueue/ModioDownloadQueue.ModioDownloadQueue_C
/// Size: 0x0008 (8 bytes) (0x000368 - 0x000370) align 8 pad: 0x0000
class UModioDownloadQueue_C : public UModioDownloadQueueDrawer
{ 
public:
	class UModioDrawer*                                ModioDrawer;                                                // 0x0368   (0x0008)  
};

/// Class /Modio/UI/Browser/Views/Collection/ModioCollectionViewWidget.ModioCollectionViewWidget_C
/// Size: 0x0018 (24 bytes) (0x000418 - 0x000430) align 8 pad: 0x0000
class UModioCollectionViewWidget_C : public UModioCollectionView
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0418   (0x0008)  
	TArray<FModioModID>                                ModEnabledStatuses;                                         // 0x0420   (0x0010)  


	/// Functions
	// Function /Modio/UI/Browser/Views/Collection/ModioCollectionViewWidget.ModioCollectionViewWidget_C.Construct
	// void Construct();                                                                                                        // [0x24710f0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Modio/UI/Browser/Views/Collection/ModioCollectionViewWidget.ModioCollectionViewWidget_C.ExecuteUbergraph_ModioCollectionViewWidget
	// void ExecuteUbergraph_ModioCollectionViewWidget(int32_t EntryPoint);                                                     // [0x24710f0] Final                
};

/// Class /modio/UI/Browser/Components/ModioAsyncLoadingOverlay.ModioAsyncLoadingOverlay_C
/// Size: 0x0008 (8 bytes) (0x0002A0 - 0x0002A8) align 8 pad: 0x0000
class UModioAsyncLoadingOverlay_C : public UModioUIAsyncLoadingOverlay
{ 
public:
	class UModioLoadingSpinner*                        ModioLoadingSpinner;                                        // 0x02A0   (0x0008)  
};

/// Class /modio/UI/Browser/Views/ModioModBrowserWidget.ModioModBrowserWidget_C
/// Size: 0x0010 (16 bytes) (0x000350 - 0x000360) align 8 pad: 0x0000
class UModioModBrowserWidget_C : public UModioMenu
{ 
public:
	class UModioDownloadQueue_C*                       ModioDownloadQueue;                                         // 0x0350   (0x0008)  
	class UModioRefineSearchDrawer_C*                  ModioRefineSearchDrawer;                                    // 0x0358   (0x0008)  
};

static_assert(sizeof(UModioHideCursorWidget_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UModioModCollectionTileStatusWidget_C) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(UModioModCollectionTileWidget_C) == 0x0430); // 1072 bytes (0x000430 - 0x000430)
static_assert(sizeof(UModioDownloadQueueEntryWidget_C) == 0x0300); // 768 bytes (0x000300 - 0x000300)
static_assert(sizeof(UModioDownloadQueueOpProgressWidget_C) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UModioDownloadQueueList_C) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UModioCompletedQueueList_C) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UFeaturedCarouselModWidget_C) == 0x03E0); // 992 bytes (0x0003D8 - 0x0003E0)
static_assert(sizeof(UModioFeaturedCategoryWidget_C) == 0x03F0); // 1008 bytes (0x0003D8 - 0x0003F0)
static_assert(sizeof(UFeaturedModCarousel_C) == 0x02F0); // 752 bytes (0x0002F0 - 0x0002F0)
static_assert(sizeof(UModioProfileButtonWidget_C) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(UModioModDetailsImageWidget_C) == 0x02A0); // 672 bytes (0x000298 - 0x0002A0)
static_assert(sizeof(UModioModDetailsImageGalleryNavButtonWidget_C) == 0x0300); // 768 bytes (0x000300 - 0x000300)
static_assert(sizeof(UModioModDetailsPropertyInspectorWidget_C) == 0x02F8); // 760 bytes (0x0002F8 - 0x0002F8)
static_assert(sizeof(UModioModDetailsOpProgressWidget_C) == 0x0308); // 776 bytes (0x000300 - 0x000308)
static_assert(sizeof(UModioModDetailsImageGalleryWidget_C) == 0x02E8); // 744 bytes (0x0002D0 - 0x0002E8)
static_assert(sizeof(UModioTagSelectorWidget_C) == 0x02E0); // 736 bytes (0x0002C0 - 0x0002E0)
static_assert(sizeof(UModioSelectableTagWidget_C) == 0x02D8); // 728 bytes (0x0002D8 - 0x0002D8)
static_assert(sizeof(UModioTagListWidget_C) == 0x02C0); // 704 bytes (0x000298 - 0x0002C0)
static_assert(sizeof(UModioSubscriptionBadgeWidget_C) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UModioTagWidget_C) == 0x02B8); // 696 bytes (0x0002B8 - 0x0002B8)
static_assert(sizeof(UModioModTileWidget_C) == 0x0410); // 1040 bytes (0x000400 - 0x000410)
static_assert(sizeof(UModioErrorWithRetryWidget_C) == 0x02B8); // 696 bytes (0x0002B0 - 0x0002B8)
static_assert(sizeof(UModioSearchResultsViewWidget_C) == 0x0469); // 1129 bytes (0x000440 - 0x000469)
static_assert(sizeof(UModioRefineSearchDrawer_C) == 0x0300); // 768 bytes (0x0002F8 - 0x000300)
static_assert(sizeof(UModioNotificationControllerWidget_C) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(UModioModDetailsViewWidget_C) == 0x0450); // 1104 bytes (0x000428 - 0x000450)
static_assert(sizeof(UModioModBrowserMenuBarWidget_C) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UModioMenuBarWidget_C) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(UModioFeaturedViewWidget_C) == 0x0340); // 832 bytes (0x000330 - 0x000340)
static_assert(sizeof(UModioErrorNotificationWidget_C) == 0x02E0); // 736 bytes (0x0002D8 - 0x0002E0)
static_assert(sizeof(UModioDownloadQueue_C) == 0x0370); // 880 bytes (0x000368 - 0x000370)
static_assert(sizeof(UModioCollectionViewWidget_C) == 0x0430); // 1072 bytes (0x000418 - 0x000430)
static_assert(sizeof(UModioAsyncLoadingOverlay_C) == 0x02A8); // 680 bytes (0x0002A0 - 0x0002A8)
static_assert(sizeof(UModioModBrowserWidget_C) == 0x0360); // 864 bytes (0x000350 - 0x000360)
static_assert(offsetof(UFeaturedCarouselModWidget_C, TileActiveFrame) == 0x03D8);
static_assert(offsetof(UModioFeaturedCategoryWidget_C, ModioLoadingSpinner) == 0x03D8);
static_assert(offsetof(UModioFeaturedCategoryWidget_C, ModioRichTextBlock) == 0x03E0);
static_assert(offsetof(UModioFeaturedCategoryWidget_C, ModioRichTextBlock0) == 0x03E8);
static_assert(offsetof(UModioModDetailsImageWidget_C, Background) == 0x0298);
static_assert(offsetof(UModioModDetailsOpProgressWidget_C, ModioImage) == 0x0300);
static_assert(offsetof(UModioModDetailsImageGalleryWidget_C, UberGraphFrame) == 0x02D0);
static_assert(offsetof(UModioModDetailsImageGalleryWidget_C, ModioInputBindingImage) == 0x02D8);
static_assert(offsetof(UModioModDetailsImageGalleryWidget_C, ModioInputBindingImage0) == 0x02E0);
static_assert(offsetof(UModioTagSelectorWidget_C, ModioSelectableTagWidget) == 0x02C0);
static_assert(offsetof(UModioTagSelectorWidget_C, ModioSelectableTagWidget0) == 0x02C8);
static_assert(offsetof(UModioTagSelectorWidget_C, ModioSelectableTagWidget1) == 0x02D0);
static_assert(offsetof(UModioTagSelectorWidget_C, ModioSelectableTagWidget2) == 0x02D8);
static_assert(offsetof(UModioTagListWidget_C, ModioInputBindingImage) == 0x0298);
static_assert(offsetof(UModioTagListWidget_C, ModioInputBindingImage0) == 0x02A0);
static_assert(offsetof(UModioTagListWidget_C, ModioSelectableTagWidget) == 0x02A8);
static_assert(offsetof(UModioTagListWidget_C, ModioTagSelectorWidget) == 0x02B0);
static_assert(offsetof(UModioTagListWidget_C, ModioTagSelectorWidget1) == 0x02B8);
static_assert(offsetof(UModioModTileWidget_C, UberGraphFrame) == 0x0400);
static_assert(offsetof(UModioModTileWidget_C, ModioRoundedImage) == 0x0408);
static_assert(offsetof(UModioErrorWithRetryWidget_C, ModioRoundedImage) == 0x02B0);
static_assert(offsetof(UModioSearchResultsViewWidget_C, UberGraphFrame) == 0x0440);
static_assert(offsetof(UModioSearchResultsViewWidget_C, ModioOverlay) == 0x0448);
static_assert(offsetof(UModioSearchResultsViewWidget_C, ModioRoundedImage) == 0x0450);
static_assert(offsetof(UModioSearchResultsViewWidget_C, NoResultsHeading) == 0x0458);
static_assert(offsetof(UModioSearchResultsViewWidget_C, SearchResultsTitle) == 0x0460);
static_assert(offsetof(UModioRefineSearchDrawer_C, ModioDrawer) == 0x02F8);
static_assert(offsetof(UModioModDetailsViewWidget_C, UberGraphFrame) == 0x0428);
static_assert(offsetof(UModioModDetailsViewWidget_C, ModioLoadingSpinner) == 0x0430);
static_assert(offsetof(UModioModDetailsViewWidget_C, ModioRichTextBlock) == 0x0438);
static_assert(offsetof(UModioModDetailsViewWidget_C, ModioRichTextBlock0) == 0x0440);
static_assert(offsetof(UModioModDetailsViewWidget_C, ModioRichTextBlock1) == 0x0448);
static_assert(offsetof(UModioModBrowserMenuBarWidget_C, ProfileDownloadQueueInputHint) == 0x0290);
static_assert(offsetof(UModioMenuBarWidget_C, ModioInputBindingImage) == 0x0278);
static_assert(offsetof(UModioMenuBarWidget_C, ModioInputBindingImage0) == 0x0280);
static_assert(offsetof(UModioMenuBarWidget_C, ModioTabBar) == 0x0288);
static_assert(offsetof(UModioFeaturedViewWidget_C, ModioLoadingSpinner) == 0x0330);
static_assert(offsetof(UModioFeaturedViewWidget_C, ModioRichTextBlock) == 0x0338);
static_assert(offsetof(UModioErrorNotificationWidget_C, textcolorbackground) == 0x02D8);
static_assert(offsetof(UModioDownloadQueue_C, ModioDrawer) == 0x0368);
static_assert(offsetof(UModioCollectionViewWidget_C, UberGraphFrame) == 0x0418);
static_assert(offsetof(UModioCollectionViewWidget_C, ModEnabledStatuses) == 0x0420);
static_assert(offsetof(UModioAsyncLoadingOverlay_C, ModioLoadingSpinner) == 0x02A0);
static_assert(offsetof(UModioModBrowserWidget_C, ModioDownloadQueue) == 0x0350);
static_assert(offsetof(UModioModBrowserWidget_C, ModioRefineSearchDrawer) == 0x0358);
