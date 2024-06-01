
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0028   (0x0010)  
};

static_assert(sizeof(FNetAnalyticsDataConfig) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x0000);
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x0028);
