
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: SlateCore

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
/// Size: 0x07F0 (2032 bytes) (0x000008 - 0x0007F8) align 8 pad: 0x0000
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HighlightBrush;                                             // 0x0008   (0x0088)  
	FButtonStyle                                       LeftButtonStyle;                                            // 0x0090   (0x0278)  
	FButtonStyle                                       CenterButtonStyle;                                          // 0x0308   (0x0278)  
	FButtonStyle                                       RightButtonStyle;                                           // 0x0580   (0x0278)  
};

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
/// Size: 0x0388 (904 bytes) (0x000008 - 0x000390) align 8 pad: 0x0000
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       InnerButtonStyle;                                           // 0x0008   (0x0278)  
	FSlateBrush                                        NavigationButtonLeftImage;                                  // 0x0280   (0x0088)  
	FSlateBrush                                        NavigationButtonRightImage;                                 // 0x0308   (0x0088)  
};

static_assert(sizeof(FWidgetCarouselNavigationBarStyle) == 0x07F8); // 2040 bytes (0x000008 - 0x0007F8)
static_assert(sizeof(FWidgetCarouselNavigationButtonStyle) == 0x0390); // 912 bytes (0x000008 - 0x000390)
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, HighlightBrush) == 0x0008);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, LeftButtonStyle) == 0x0090);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, CenterButtonStyle) == 0x0308);
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, RightButtonStyle) == 0x0580);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle) == 0x0008);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage) == 0x0280);
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage) == 0x0308);
