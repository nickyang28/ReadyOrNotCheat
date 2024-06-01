
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class ULiveLinkControllerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x00A8 (168 bytes) (0x0000B0 - 0x000158) align 8 pad: 0x0000
class ULiveLinkComponentController : public UActorComponent
{ 
public:
	FLiveLinkSubjectRepresentation                     SubjectRepresentation;                                      // 0x00B0   (0x0010)  
	SDK_UNDEFINED(80,1786) /* TMap<UClass*, ULiveLinkControllerBase*> */ __um(ControllerMap);                      // 0x00C0   (0x0050)  
	bool                                               bUpdateInEditor;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	SDK_UNDEFINED(16,1787) /* FMulticastInlineDelegate */ __um(OnLiveLinkUpdated);                                 // 0x0118   (0x0010)  
	FComponentReference                                ComponentToControl;                                         // 0x0128   (0x0028)  
	bool                                               bDisableEvaluateLiveLinkWhenSpawnable;                      // 0x0150   (0x0001)  
	bool                                               bEvaluateLiveLink;                                          // 0x0151   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0152   (0x0006)  MISSED
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class ULiveLinkComponentSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,1788) /* TMap<UClass*, UClass*> */ __um(DefaultControllerForRole);                            // 0x0028   (0x0050)  
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0000 (0 bytes) (0x000040 - 0x000040) align 8 pad: 0x0000
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
public:
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 pad: 0x0000
struct FLiveLinkTransformControllerData
{ 
	bool                                               bWorldTransform;                                            // 0x0000   (0x0001)  
	bool                                               bUseLocation;                                               // 0x0001   (0x0001)  
	bool                                               bUseRotation;                                               // 0x0002   (0x0001)  
	bool                                               bUseScale;                                                  // 0x0003   (0x0001)  
	bool                                               bSweep;                                                     // 0x0004   (0x0001)  
	bool                                               bTeleport;                                                  // 0x0005   (0x0001)  
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
public:
	FLiveLinkTransformControllerData                   TransformData;                                              // 0x0040   (0x0006)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0046   (0x0002)  MISSED
};

static_assert(sizeof(ULiveLinkControllerBase) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkComponentController) == 0x0158); // 344 bytes (0x0000B0 - 0x000158)
static_assert(sizeof(ULiveLinkComponentSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(ULiveLinkLightController) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FLiveLinkTransformControllerData) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(ULiveLinkTransformController) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 0x00B0);
static_assert(offsetof(ULiveLinkComponentController, ComponentToControl) == 0x0128);
static_assert(offsetof(ULiveLinkTransformController, TransformData) == 0x0040);
