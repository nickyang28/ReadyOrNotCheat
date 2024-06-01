
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AdvancedSessions
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AdvancedSteamSessions.FBPWorkshopFileType
/// Size: 0x01 (1 bytes)
enum class FBPWorkshopFileType : uint8_t
{
	FBPWorkshopFileType__k_EWorkshopFileTypeCommunity                                = 0,
	FBPWorkshopFileType__k_EWorkshopFileTypeMicrotransaction                         = 1,
	FBPWorkshopFileType__k_EWorkshopFileTypeCollection                               = 2,
	FBPWorkshopFileType__k_EWorkshopFileTypeArt                                      = 3,
	FBPWorkshopFileType__k_EWorkshopFileTypeVideo                                    = 4,
	FBPWorkshopFileType__k_EWorkshopFileTypeScreenshot                               = 5,
	FBPWorkshopFileType__k_EWorkshopFileTypeGame                                     = 6,
	FBPWorkshopFileType__k_EWorkshopFileTypeSoftware                                 = 7,
	FBPWorkshopFileType__k_EWorkshopFileTypeConcept                                  = 8,
	FBPWorkshopFileType__k_EWorkshopFileTypeWebGuide                                 = 9,
	FBPWorkshopFileType__k_EWorkshopFileTypeIntegratedGuide                          = 10,
	FBPWorkshopFileType__k_EWorkshopFileTypeMerch                                    = 11,
	FBPWorkshopFileType__k_EWorkshopFileTypeControllerBinding                        = 12,
	FBPWorkshopFileType__k_EWorkshopFileTypeSteamworksAccessInvite                   = 13,
	FBPWorkshopFileType__k_EWorkshopFileTypeSteamVideo                               = 14,
	FBPWorkshopFileType__k_EWorkshopFileTypeMax                                      = 15
};

/// Enum /Script/AdvancedSteamSessions.FBPSteamResult
/// Size: 0x01 (1 bytes)
enum class FBPSteamResult : uint8_t
{
	FBPSteamResult__K_EResultInvalid                                                 = 0,
	FBPSteamResult__k_EResultOK                                                      = 1,
	FBPSteamResult__k_EResultFail                                                    = 2,
	FBPSteamResult__k_EResultNoConnection                                            = 3,
	FBPSteamResult__k_EResultInvalidPassword                                         = 5,
	FBPSteamResult__k_EResultLoggedInElsewhere                                       = 6,
	FBPSteamResult__k_EResultInvalidProtocolVer                                      = 7,
	FBPSteamResult__k_EResultInvalidParam                                            = 8,
	FBPSteamResult__k_EResultFileNotFound                                            = 9,
	FBPSteamResult__k_EResultBusy                                                    = 10,
	FBPSteamResult__k_EResultInvalidState                                            = 11,
	FBPSteamResult__k_EResultInvalidName                                             = 12,
	FBPSteamResult__k_EResultInvalidEmail                                            = 13,
	FBPSteamResult__k_EResultDuplicateName                                           = 14,
	FBPSteamResult__k_EResultAccessDenied                                            = 15,
	FBPSteamResult__k_EResultTimeout                                                 = 16,
	FBPSteamResult__k_EResultBanned                                                  = 17,
	FBPSteamResult__k_EResultAccountNotFound                                         = 18,
	FBPSteamResult__k_EResultInvalidSteamID                                          = 19,
	FBPSteamResult__k_EResultServiceUnavailable                                      = 20,
	FBPSteamResult__k_EResultNotLoggedOn                                             = 21,
	FBPSteamResult__k_EResultPending                                                 = 22,
	FBPSteamResult__k_EResultEncryptionFailure                                       = 23,
	FBPSteamResult__k_EResultInsufficientPrivilege                                   = 24,
	FBPSteamResult__k_EResultLimitExceeded                                           = 25,
	FBPSteamResult__k_EResultRevoked                                                 = 26,
	FBPSteamResult__k_EResultExpired                                                 = 27,
	FBPSteamResult__k_EResultAlreadyRedeemed                                         = 28,
	FBPSteamResult__k_EResultDuplicateRequest                                        = 29,
	FBPSteamResult__k_EResultAlreadyOwned                                            = 30,
	FBPSteamResult__k_EResultIPNotFound                                              = 31,
	FBPSteamResult__k_EResultPersistFailed                                           = 32,
	FBPSteamResult__k_EResultLockingFailed                                           = 33,
	FBPSteamResult__k_EResultLogonSessionReplaced                                    = 34,
	FBPSteamResult__k_EResultConnectFailed                                           = 35,
	FBPSteamResult__k_EResultHandshakeFailed                                         = 36,
	FBPSteamResult__k_EResultIOFailure                                               = 37,
	FBPSteamResult__k_EResultRemoteDisconnect                                        = 38,
	FBPSteamResult__k_EResultShoppingCartNotFound                                    = 39,
	FBPSteamResult__k_EResultBlocked                                                 = 40,
	FBPSteamResult__k_EResultIgnored                                                 = 41,
	FBPSteamResult__k_EResultNoMatch                                                 = 42,
	FBPSteamResult__k_EResultAccountDisabled                                         = 43,
	FBPSteamResult__k_EResultServiceReadOnly                                         = 44,
	FBPSteamResult__k_EResultAccountNotFeatured                                      = 45,
	FBPSteamResult__k_EResultAdministratorOK                                         = 46,
	FBPSteamResult__k_EResultContentVersion                                          = 47,
	FBPSteamResult__k_EResultTryAnotherCM                                            = 48,
	FBPSteamResult__k_EResultPasswordRequiredToKickSession                           = 49,
	FBPSteamResult__k_EResultAlreadyLoggedInElsewhere                                = 50,
	FBPSteamResult__k_EResultSuspended                                               = 51,
	FBPSteamResult__k_EResultCancelled                                               = 52,
	FBPSteamResult__k_EResultDataCorruption                                          = 53,
	FBPSteamResult__k_EResultDiskFull                                                = 54,
	FBPSteamResult__k_EResultRemoteCallFailed                                        = 55,
	FBPSteamResult__k_EResultPasswordUnset                                           = 56,
	FBPSteamResult__k_EResultExternalAccountUnlinked                                 = 57,
	FBPSteamResult__k_EResultPSNTicketInvalid                                        = 58,
	FBPSteamResult__k_EResultExternalAccountAlreadyLinked                            = 59,
	FBPSteamResult__k_EResultRemoteFileConflict                                      = 60,
	FBPSteamResult__k_EResultIllegalPassword                                         = 61,
	FBPSteamResult__k_EResultSameAsPreviousValue                                     = 62,
	FBPSteamResult__k_EResultAccountLogonDenied                                      = 63,
	FBPSteamResult__k_EResultCannotUseOldPassword                                    = 64,
	FBPSteamResult__k_EResultInvalidLoginAuthCode                                    = 65,
	FBPSteamResult__k_EResultAccountLogonDeniedNoMail                                = 66,
	FBPSteamResult__k_EResultHardwareNotCapableOfIPT                                 = 67,
	FBPSteamResult__k_EResultIPTInitError                                            = 68,
	FBPSteamResult__k_EResultParentalControlRestricted                               = 69,
	FBPSteamResult__k_EResultFacebookQueryError                                      = 70,
	FBPSteamResult__k_EResultExpiredLoginAuthCode                                    = 71,
	FBPSteamResult__k_EResultIPLoginRestrictionFailed                                = 72,
	FBPSteamResult__k_EResultAccountLockedDown                                       = 73,
	FBPSteamResult__k_EResultAccountLogonDeniedVerifiedEmailRequired                 = 74,
	FBPSteamResult__k_EResultNoMatchingURL                                           = 75,
	FBPSteamResult__k_EResultBadResponse                                             = 76,
	FBPSteamResult__k_EResultRequirePasswordReEntry                                  = 77,
	FBPSteamResult__k_EResultValueOutOfRange                                         = 78,
	FBPSteamResult__k_EResultUnexpectedError                                         = 79,
	FBPSteamResult__k_EResultDisabled                                                = 80,
	FBPSteamResult__k_EResultInvalidCEGSubmission                                    = 81,
	FBPSteamResult__k_EResultRestrictedDevice                                        = 82,
	FBPSteamResult__k_EResultRegionLocked                                            = 83,
	FBPSteamResult__k_EResultRateLimitExceeded                                       = 84,
	FBPSteamResult__k_EResultAccountLoginDeniedNeedTwoFactor                         = 85,
	FBPSteamResult__k_EResultItemDeleted                                             = 86,
	FBPSteamResult__k_EResultAccountLoginDeniedThrottle                              = 87,
	FBPSteamResult__k_EResultTwoFactorCodeMismatch                                   = 88,
	FBPSteamResult__k_EResultTwoFactorActivationCodeMismatch                         = 89,
	FBPSteamResult__k_EResultAccountAssociatedToMultiplePartners                     = 90,
	FBPSteamResult__k_EResultNotModified                                             = 91
};

/// Enum /Script/AdvancedSteamSessions.EBPTextFilteringContext
/// Size: 0x01 (1 bytes)
enum class EBPTextFilteringContext : uint8_t
{
	EBPTextFilteringContext__FContext_Unknown                                        = 0,
	EBPTextFilteringContext__FContext_GameContent                                    = 1,
	EBPTextFilteringContext__FContext_Chat                                           = 2,
	EBPTextFilteringContext__FContext_Name                                           = 3
};

/// Enum /Script/AdvancedSteamSessions.ESteamUserOverlayType
/// Size: 0x01 (1 bytes)
enum class ESteamUserOverlayType : uint8_t
{
	ESteamUserOverlayType__steamid                                                   = 0,
	ESteamUserOverlayType__chat                                                      = 1,
	ESteamUserOverlayType__jointrade                                                 = 2,
	ESteamUserOverlayType__stats                                                     = 3,
	ESteamUserOverlayType__achievements                                              = 4,
	ESteamUserOverlayType__friendadd                                                 = 5,
	ESteamUserOverlayType__friendremove                                              = 6,
	ESteamUserOverlayType__friendrequestaccept                                       = 7,
	ESteamUserOverlayType__friendrequestignore                                       = 8
};

/// Enum /Script/AdvancedSteamSessions.SteamAvatarSize
/// Size: 0x01 (1 bytes)
enum class SteamAvatarSize : uint8_t
{
	SteamAvatarSize__SteamAvatar_INVALID                                             = 0,
	SteamAvatarSize__SteamAvatar_Small                                               = 1,
	SteamAvatarSize__SteamAvatar_Medium                                              = 2,
	SteamAvatarSize__SteamAvatar_Large                                               = 3
};

/// Class /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
	// bool RequestSteamFriendInfo(FBPUniqueNetId UniqueNetId, bool bRequireNameOnly);                                          // [0x913f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
	// bool OpenSteamUserOverlay(FBPUniqueNetId UniqueNetId, ESteamUserOverlayType DialogType);                                 // [0x913dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
	// bool IsSteamInBigPictureMode();                                                                                          // [0x913da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
	// bool IsOverlayEnabled();                                                                                                 // [0x913d70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
	// bool InitTextFiltering();                                                                                                // [0x913d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
	// FString GetSteamPersonaName(FBPUniqueNetId UniqueNetId);                                                                 // [0x913a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
	// void GetSteamGroups(TArray<FBPSteamGroupInfo>& SteamGroups);                                                             // [0x913960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
	// void GetSteamFriendGamePlayed(FBPUniqueNetId UniqueNetId, EBlueprintResultSwitch& Result, int32_t& AppId);               // [0x913680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
	// class UTexture2D* GetSteamFriendAvatar(FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize); // [0x9134e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
	// FBPUniqueNetId GetLocalSteamIDFromSteam();                                                                               // [0x9133f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
	// int32_t GetFriendSteamLevel(FBPUniqueNetId UniqueNetId);                                                                 // [0x913300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
	// bool FilterText(FString TextToFilter, EBPTextFilteringContext Context, FBPUniqueNetId TextSourceID, FString& FilteredText); // [0x9130d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
	// FBPUniqueNetId CreateSteamIDFromString(FString SteamID64);                                                               // [0x912fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
	// TArray<FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32_t& NumberOfItems);                                           // [0x913ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
	// void GetNumSubscribedWorkshopItems(int32_t& NumberOfItems);                                                              // [0x913460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
/// Size: 0x0070 (112 bytes) (0x000030 - 0x0000A0) align 8 pad: 0x0000
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0050   (0x0050)  MISSED


	/// Functions
	// Function /Script/AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
	// class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, FBPUniqueNetId GroupUniqueNetID); // [0x913820] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000088) align 8 pad: 0x0000
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,423) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
	// class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, FBPSteamWorkshopID WorkShopID); // [0x913c70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AdvancedSteamSessions.BPSteamGroupOfficer
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FBPSteamGroupOfficer
{ 
	FBPUniqueNetId                                     OfficerUniqueNetID;                                         // 0x0000   (0x0020)  
	bool                                               bIsOwner;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/AdvancedSteamSessions.BPSteamWorkshopItemDetails
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FBPSteamWorkshopItemDetails
{ 
	FBPSteamResult                                     ResultOfRequest;                                            // 0x0000   (0x0001)  
	FBPWorkshopFileType                                FileType;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            CreatorAppID;                                               // 0x0004   (0x0004)  
	int32_t                                            ConsumerAppID;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            ItemUrl;                                                    // 0x0030   (0x0010)  
	int32_t                                            VotesUp;                                                    // 0x0040   (0x0004)  
	int32_t                                            VotesDown;                                                  // 0x0044   (0x0004)  
	float                                              CalculatedScore;                                            // 0x0048   (0x0004)  
	bool                                               bBanned;                                                    // 0x004C   (0x0001)  
	bool                                               bAcceptedForUse;                                            // 0x004D   (0x0001)  
	bool                                               bTagsTruncated;                                             // 0x004E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x004F   (0x0001)  MISSED
	FString                                            CreatorSteamID;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/AdvancedSteamSessions.BPSteamGroupInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FBPSteamGroupInfo
{ 
	FBPUniqueNetId                                     GroupID;                                                    // 0x0000   (0x0020)  
	FString                                            GroupName;                                                  // 0x0020   (0x0010)  
	FString                                            GroupTag;                                                   // 0x0030   (0x0010)  
	int32_t                                            numOnline;                                                  // 0x0040   (0x0004)  
	int32_t                                            numInGame;                                                  // 0x0044   (0x0004)  
	int32_t                                            numChatting;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/AdvancedSteamSessions.BPSteamWorkshopID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FBPSteamWorkshopID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

static_assert(sizeof(UAdvancedSteamFriendsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAdvancedSteamWorkshopLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamRequestGroupOfficersCallbackProxy) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(USteamWSRequestUGCDetailsCallbackProxy) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FBPSteamGroupOfficer) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBPSteamWorkshopItemDetails) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FBPSteamGroupInfo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBPSteamWorkshopID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FBPSteamGroupOfficer, OfficerUniqueNetID) == 0x0000);
static_assert(offsetof(FBPSteamWorkshopItemDetails, ResultOfRequest) == 0x0000);
static_assert(offsetof(FBPSteamWorkshopItemDetails, FileType) == 0x0001);
static_assert(offsetof(FBPSteamWorkshopItemDetails, Title) == 0x0010);
static_assert(offsetof(FBPSteamWorkshopItemDetails, Description) == 0x0020);
static_assert(offsetof(FBPSteamWorkshopItemDetails, ItemUrl) == 0x0030);
static_assert(offsetof(FBPSteamWorkshopItemDetails, CreatorSteamID) == 0x0050);
static_assert(offsetof(FBPSteamGroupInfo, GroupID) == 0x0000);
static_assert(offsetof(FBPSteamGroupInfo, GroupName) == 0x0020);
static_assert(offsetof(FBPSteamGroupInfo, GroupTag) == 0x0030);
