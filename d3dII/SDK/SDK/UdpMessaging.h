
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x01 (1 bytes)
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4
};

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0080 (128 bytes) (0x000028 - 0x0000A8) align 8 pad: 0x0000
class UUdpMessagingSettings : public UObject
{ 
public:
	bool                                               EnabledByDefault;                                           // 0x0028   (0x0001)  
	bool                                               EnableTransport;                                            // 0x0029   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              MaxSendRate;                                                // 0x002C   (0x0004)  
	uint32_t                                           AutoRepairAttemptLimit;                                     // 0x0030   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            UnicastEndpoint;                                            // 0x0038   (0x0010)  
	FString                                            MulticastEndpoint;                                          // 0x0048   (0x0010)  
	EUdpMessageFormat                                  MessageFormat;                                              // 0x0058   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	TArray<FString>                                    StaticEndpoints;                                            // 0x0060   (0x0010)  
	bool                                               EnableTunnel;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FString                                            TunnelUnicastEndpoint;                                      // 0x0078   (0x0010)  
	FString                                            TunnelMulticastEndpoint;                                    // 0x0088   (0x0010)  
	TArray<FString>                                    RemoteTunnelEndpoints;                                      // 0x0098   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

static_assert(sizeof(UUdpMessagingSettings) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FUdpMockMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x0038);
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x0048);
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x0058);
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x0060);
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x0078);
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x0088);
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0098);
static_assert(offsetof(FUdpMockMessage, Data) == 0x0000);
