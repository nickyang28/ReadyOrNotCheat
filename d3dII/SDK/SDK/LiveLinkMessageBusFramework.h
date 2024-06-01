
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLinkInterface

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FLiveLinkSubjectFrameMessage
{ 
	FName                                              SubjectName;                                                // 0x0000   (0x0008)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)  
	TArray<FLiveLinkCurveElement>                      Curves;                                                     // 0x0018   (0x0010)  
	FLiveLinkMetaData                                  MetaData;                                                   // 0x0028   (0x0060)  
	double                                             Time;                                                       // 0x0088   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FLiveLinkSubjectDataMessage
{ 
	FLiveLinkRefSkeleton                               RefSkeleton;                                                // 0x0000   (0x0020)  
	FName                                              SubjectName;                                                // 0x0020   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkClearSubject
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FLiveLinkClearSubject
{ 
	FName                                              SubjectName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FLiveLinkHeartbeatMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkConnectMessage
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FLiveLinkConnectMessage
{ 
	int32_t                                            LiveLinkVersion;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FLiveLinkPongMessage
{ 
	FString                                            ProviderName;                                               // 0x0000   (0x0010)  
	FString                                            MachineName;                                                // 0x0010   (0x0010)  
	FGuid                                              PollRequest;                                                // 0x0020   (0x0010)  
	int32_t                                            LiveLinkVersion;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	double                                             CreationPlatformTime;                                       // 0x0038   (0x0008)  
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FLiveLinkPingMessage
{ 
	FGuid                                              PollRequest;                                                // 0x0000   (0x0010)  
	int32_t                                            LiveLinkVersion;                                            // 0x0010   (0x0004)  
};

static_assert(sizeof(FLiveLinkSubjectFrameMessage) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLiveLinkSubjectDataMessage) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLiveLinkClearSubject) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLiveLinkHeartbeatMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLiveLinkConnectMessage) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLiveLinkPongMessage) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FLiveLinkPingMessage) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(FLiveLinkSubjectFrameMessage, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Transforms) == 0x0008);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Curves) == 0x0018);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, MetaData) == 0x0028);
static_assert(offsetof(FLiveLinkSubjectDataMessage, RefSkeleton) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectDataMessage, SubjectName) == 0x0020);
static_assert(offsetof(FLiveLinkClearSubject, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkPongMessage, ProviderName) == 0x0000);
static_assert(offsetof(FLiveLinkPongMessage, MachineName) == 0x0010);
static_assert(offsetof(FLiveLinkPongMessage, PollRequest) == 0x0020);
static_assert(offsetof(FLiveLinkPingMessage, PollRequest) == 0x0000);
