
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
class UTcpMessagingSettings : public UObject
{ 
public:
	bool                                               EnableTransport;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            ListenEndpoint;                                             // 0x0030   (0x0010)  
	TArray<FString>                                    ConnectToEndpoints;                                         // 0x0040   (0x0010)  
	int32_t                                            ConnectionRetryDelay;                                       // 0x0050   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

static_assert(sizeof(UTcpMessagingSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(offsetof(UTcpMessagingSettings, ListenEndpoint) == 0x0030);
static_assert(offsetof(UTcpMessagingSettings, ConnectToEndpoints) == 0x0040);
