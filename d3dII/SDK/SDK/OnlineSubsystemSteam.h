
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: PacketHandler

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x0008 (8 bytes) (0x001C48 - 0x001C50) align 8 pad: 0x0000
class USteamNetConnection : public UIpConnection
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x1C48   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x1C49   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x0008 (8 bytes) (0x0007D0 - 0x0007D8) align 8 pad: 0x0000
class USteamNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x07D0   (0x0008)  MISSED
};

static_assert(sizeof(USteamAuthComponentModuleInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamNetConnection) == 0x1C50); // 7248 bytes (0x001C48 - 0x001C50)
static_assert(sizeof(USteamNetDriver) == 0x07D8); // 2008 bytes (0x0007D0 - 0x0007D8)
