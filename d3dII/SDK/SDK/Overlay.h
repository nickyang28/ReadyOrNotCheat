
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Overlay.Overlays
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UOverlays : public UObject
{ 
public:
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FOverlayItem
{ 
	FTimespan                                          StartTime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          EndTime;                                                    // 0x0008   (0x0008)  
	FString                                            Text;                                                       // 0x0010   (0x0010)  
	FVector2D                                          position;                                                   // 0x0020   (0x0008)  
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UBasicOverlays : public UOverlays
{ 
public:
	TArray<FOverlayItem>                               Overlays;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000080) align 8 pad: 0x0000
class ULocalizedOverlays : public UOverlays
{ 
public:
	class UBasicOverlays*                              DefaultOverlays;                                            // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,1924) /* TMap<FString, UBasicOverlays*> */ __um(LocaleToOverlaysMap);                         // 0x0030   (0x0050)  
};

static_assert(sizeof(UOverlays) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOverlayItem) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UBasicOverlays) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULocalizedOverlays) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(FOverlayItem, StartTime) == 0x0000);
static_assert(offsetof(FOverlayItem, EndTime) == 0x0008);
static_assert(offsetof(FOverlayItem, Text) == 0x0010);
static_assert(offsetof(FOverlayItem, position) == 0x0020);
static_assert(offsetof(UBasicOverlays, Overlays) == 0x0028);
static_assert(offsetof(ULocalizedOverlays, DefaultOverlays) == 0x0028);
