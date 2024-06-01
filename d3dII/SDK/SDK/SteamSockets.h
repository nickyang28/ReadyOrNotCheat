
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SteamSockets.SteamSocketsNetConnection
/// Size: 0x0010 (16 bytes) (0x001BA8 - 0x001BB8) align 8 pad: 0x0000
class USteamSocketsNetConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1BA8   (0x0010)  MISSED
};

/// Class /Script/SteamSockets.SteamSocketsNetDriver
/// Size: 0x0010 (16 bytes) (0x000760 - 0x000770) align 8 pad: 0x0000
class USteamSocketsNetDriver : public UNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0760   (0x0010)  MISSED
};

static_assert(sizeof(USteamSocketsNetConnection) == 0x1BB8); // 7096 bytes (0x001BA8 - 0x001BB8)
static_assert(sizeof(USteamSocketsNetDriver) == 0x0770); // 1904 bytes (0x000760 - 0x000770)
