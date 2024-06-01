
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/ZeuzModule.ZeuzConfig
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UZeuzConfig : public UObject
{ 
public:
	FString                                            ProjectID;                                                  // 0x0028   (0x0010)  
	FString                                            EnvironmentId;                                              // 0x0038   (0x0010)  
	FString                                            DevEnvironmentId;                                           // 0x0048   (0x0010)  
	FString                                            ApiKey;                                                     // 0x0058   (0x0010)  
	FString                                            ApiPassword;                                                // 0x0068   (0x0010)  
};

static_assert(sizeof(UZeuzConfig) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(UZeuzConfig, ProjectID) == 0x0028);
static_assert(offsetof(UZeuzConfig, EnvironmentId) == 0x0038);
static_assert(offsetof(UZeuzConfig, DevEnvironmentId) == 0x0048);
static_assert(offsetof(UZeuzConfig, ApiKey) == 0x0058);
static_assert(offsetof(UZeuzConfig, ApiPassword) == 0x0068);
