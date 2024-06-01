
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/StatsIntegration.EAchievementDisplayAttributeUE4
/// Size: 0x01 (1 bytes)
enum class EAchievementDisplayAttributeUE4 : uint8_t
{
	EAchievementDisplayAttributeUE4__ADA_EAttributeName                              = 0,
	EAchievementDisplayAttributeUE4__ADA_EAttributeDescription                       = 1,
	EAchievementDisplayAttributeUE4__ADA_EAttributeHidden                            = 2
};

/// Enum /Script/StatsIntegration.ESteamStatType
/// Size: 0x01 (1 bytes)
enum class ESteamStatType : uint8_t
{
	ESteamStatType__STAT_INT                                                         = 0,
	ESteamStatType__STAT_FLOAT                                                       = 1,
	ESteamStatType__STAT_AVGRATE                                                     = 2
};

/// Class /Script/StatsIntegration.GetAchievementData
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGetAchievementData : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StatsIntegration.GetAchievementData.GetNumAchievements
	// int32_t GetNumAchievements();                                                                                            // [0x983ad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StatsIntegration.GetAchievementData.GetGlobalAchievementAchievedPercent
	// float GetGlobalAchievementAchievedPercent(FString AchievementAPIName);                                                   // [0x9839e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StatsIntegration.GetAchievementData.GetAchievementUnlockStatusAndUnlockTime
	// void GetAchievementUnlockStatusAndUnlockTime(FString AchievementAPIName, bool& AchievementUnlocked, FDateTime& UnlockTime); // [0x983860] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/StatsIntegration.GetAchievementData.GetAchievementIcon
	// class UTexture2D* GetAchievementIcon(FString AchievementAPIName);                                                        // [0x983770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StatsIntegration.GetAchievementData.GetAchievementDisplayAttribute
	// FString GetAchievementDisplayAttribute(FString AchievementAPIName, EAchievementDisplayAttributeUE4 Attribute);           // [0x983600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StatsIntegration.GetAchievementData.GetAchievementAPIName
	// FString GetAchievementAPIName(int32_t AchievementIndex);                                                                 // [0x983530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StatsIntegration.GetStoredStats
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGetStoredStats : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StatsIntegration.GetStoredStats.GetUserStoredStats
	// void GetUserStoredStats(TArray<FSteamStat> StatsToGet, TArray<FSteamStat>& StatsOut);                                    // [0x983cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StatsIntegration.GetStoredStats.GetUserStoredStat
	// void GetUserStoredStat(FString APIStatName, ESteamStatType StatType, int32_t& IntegerValue, float& FloatValue);          // [0x983b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StatsIntegration.IndicateAchievementProgress
/// Size: 0x0088 (136 bytes) (0x000030 - 0x0000B8) align 8 pad: 0x0000
class UIndicateAchievementProgress : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,597) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,598) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	FString                                            AchievementAPIName;                                         // 0x0050   (0x0010)  
	int32_t                                            CurrentProgress;                                            // 0x0060   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0064   (0x0004)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0068   (0x0050)  MISSED


	/// Functions
	// Function /Script/StatsIntegration.IndicateAchievementProgress.IndicateUserAchievementProgress
	// class UIndicateAchievementProgress* IndicateUserAchievementProgress(FString AchievementAPIName, int32_t CurrentProgress, int32_t MaxProgress); // [0x983f20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/StatsIntegration.RequestStatsAndAchievements
/// Size: 0x0078 (120 bytes) (0x000030 - 0x0000A8) align 8 pad: 0x0000
class URequestStatsAndAchievements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,599) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,600) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0050   (0x0058)  MISSED


	/// Functions
	// Function /Script/StatsIntegration.RequestStatsAndAchievements.RequestUserStatsAndAchievements
	// class URequestStatsAndAchievements* RequestUserStatsAndAchievements();                                                   // [0x984080] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/StatsIntegration.ResetAllStatsAndAchievements
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000E8) align 8 pad: 0x0000
class UResetAllStatsAndAchievements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,601) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,602) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	bool                                               bresetAchievementsToo;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x97];                                      // 0x0051   (0x0097)  MISSED


	/// Functions
	// Function /Script/StatsIntegration.ResetAllStatsAndAchievements.ResetUserStatsAndAchievements
	// class UResetAllStatsAndAchievements* ResetUserStatsAndAchievements(bool bAchievementsToo);                               // [0x9840b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/StatsIntegration.SetAchievementData
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USetAchievementData : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StatsIntegration.SetAchievementData.SetAchievement
	// bool SetAchievement(FString AchievementAPIName);                                                                         // [0x984140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/StatsIntegration.SetAchievementData.ClearAchievement
	// bool ClearAchievement(FString AchievementAPIName);                                                                       // [0x983440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/StatsIntegration.SetStoredStats
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USetStoredStats : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StatsIntegration.SetStoredStats.SetStoredStats
	// bool SetStoredStats(TArray<FSteamStat> SteamStatsIn, float SessionLength);                                               // [0x984400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/StatsIntegration.SetStoredStats.SetStoredStat
	// bool SetStoredStat(FString APIStatName, ESteamStatType StatType, float FloatValue, int32_t IntegerValue, float SessionLength); // [0x984230] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/StatsIntegration.SteamRequests
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USteamRequests : public UObject
{ 
public:
};

/// Class /Script/StatsIntegration.StoreStatsAndAchievements
/// Size: 0x0070 (112 bytes) (0x000030 - 0x0000A0) align 8 pad: 0x0000
class UStoreStatsAndAchievements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,603) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,604) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0050   (0x0050)  MISSED


	/// Functions
	// Function /Script/StatsIntegration.StoreStatsAndAchievements.StoreUserStatsAndAchievements
	// class UStoreStatsAndAchievements* StoreUserStatsAndAchievements();                                                       // [0x984630] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/StatsIntegration.SteamStat
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FSteamStat
{ 
	FString                                            FriendlyStatName;                                           // 0x0000   (0x0010)  
	FString                                            APIStatName;                                                // 0x0010   (0x0010)  
	ESteamStatType                                     StatType;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            IntegerValue;                                               // 0x0024   (0x0004)  
	float                                              FloatValue;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

static_assert(sizeof(UGetAchievementData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGetStoredStats) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UIndicateAchievementProgress) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(URequestStatsAndAchievements) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UResetAllStatsAndAchievements) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(USetAchievementData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USetStoredStats) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamRequests) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStoreStatsAndAchievements) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(FSteamStat) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UIndicateAchievementProgress, AchievementAPIName) == 0x0050);
static_assert(offsetof(FSteamStat, FriendlyStatName) == 0x0000);
static_assert(offsetof(FSteamStat, APIStatName) == 0x0010);
static_assert(offsetof(FSteamStat, StatType) == 0x0020);
