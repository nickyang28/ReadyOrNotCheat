
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Enum /Script/AdvancedSessions.EBPOnlinePresenceState
/// Size: 0x01 (1 bytes)
enum class EBPOnlinePresenceState : uint8_t
{
	EBPOnlinePresenceState__Online                                                   = 0,
	EBPOnlinePresenceState__Offline                                                  = 1,
	EBPOnlinePresenceState__Away                                                     = 2,
	EBPOnlinePresenceState__ExtendedAway                                             = 3,
	EBPOnlinePresenceState__DoNotDisturb                                             = 4,
	EBPOnlinePresenceState__Chat                                                     = 5
};

/// Enum /Script/AdvancedSessions.EBPUserPrivileges
/// Size: 0x01 (1 bytes)
enum class EBPUserPrivileges : uint8_t
{
	EBPUserPrivileges__CanPlay                                                       = 0,
	EBPUserPrivileges__CanPlayOnline                                                 = 1,
	EBPUserPrivileges__CanCommunicateOnline                                          = 2,
	EBPUserPrivileges__CanUseUserGeneratedContent                                    = 3
};

/// Enum /Script/AdvancedSessions.EOnlineComparisonOpRedux
/// Size: 0x01 (1 bytes)
enum class EOnlineComparisonOpRedux : uint8_t
{
	EOnlineComparisonOpRedux__Equals                                                 = 0,
	EOnlineComparisonOpRedux__NotEquals                                              = 1,
	EOnlineComparisonOpRedux__GreaterThan                                            = 2,
	EOnlineComparisonOpRedux__GreaterThanEquals                                      = 3,
	EOnlineComparisonOpRedux__LessThan                                               = 4,
	EOnlineComparisonOpRedux__LessThanEquals                                         = 5
};

/// Enum /Script/AdvancedSessions.EBPOnlineSessionState
/// Size: 0x01 (1 bytes)
enum class EBPOnlineSessionState : uint8_t
{
	EBPOnlineSessionState__NoSession                                                 = 0,
	EBPOnlineSessionState__Creating                                                  = 1,
	EBPOnlineSessionState__Pending                                                   = 2,
	EBPOnlineSessionState__Starting                                                  = 3,
	EBPOnlineSessionState__InProgress                                                = 4,
	EBPOnlineSessionState__Ending                                                    = 5,
	EBPOnlineSessionState__Ended                                                     = 6,
	EBPOnlineSessionState__Destroying                                                = 7
};

/// Enum /Script/AdvancedSessions.EBPServerPresenceSearchType
/// Size: 0x01 (1 bytes)
enum class EBPServerPresenceSearchType : uint8_t
{
	EBPServerPresenceSearchType__AllServers                                          = 0,
	EBPServerPresenceSearchType__ClientServersOnly                                   = 1,
	EBPServerPresenceSearchType__DedicatedServersOnly                                = 2
};

/// Enum /Script/AdvancedSessions.EBlueprintAsyncResultSwitch
/// Size: 0x01 (1 bytes)
enum class EBlueprintAsyncResultSwitch : uint8_t
{
	EBlueprintAsyncResultSwitch__OnSuccess                                           = 0,
	EBlueprintAsyncResultSwitch__AsyncLoading                                        = 1,
	EBlueprintAsyncResultSwitch__OnFailure                                           = 2
};

/// Enum /Script/AdvancedSessions.EBlueprintResultSwitch
/// Size: 0x01 (1 bytes)
enum class EBlueprintResultSwitch : uint8_t
{
	EBlueprintResultSwitch__OnSuccess                                                = 0,
	EBlueprintResultSwitch__OnFailure                                                = 1
};

/// Enum /Script/AdvancedSessions.ESessionSettingSearchResult
/// Size: 0x01 (1 bytes)
enum class ESessionSettingSearchResult : uint8_t
{
	ESessionSettingSearchResult__Found                                               = 0,
	ESessionSettingSearchResult__NotFound                                            = 1,
	ESessionSettingSearchResult__WrongType                                           = 2
};

/// Enum /Script/AdvancedSessions.EBPLoginStatus
/// Size: 0x01 (1 bytes)
enum class EBPLoginStatus : uint8_t
{
	EBPLoginStatus__NotLoggedIn                                                      = 0,
	EBPLoginStatus__UsingLocalProfile                                                = 1,
	EBPLoginStatus__LoggedIn                                                         = 2
};

/// Class /Script/AdvancedSessions.AdvancedExternalUILibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
	// void ShowWebURLUI(FString URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY); // [0x9087e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
	// void ShowProfileUI(FBPUniqueNetId PlayerViewingProfile, FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result); // [0x908610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
	// void ShowLeaderBoardUI(FString LeaderboardName, EBlueprintResultSwitch& Result);                                         // [0x9084e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
	// void ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch& Result);                            // [0x908410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
	// void ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch& Result);                           // [0x908340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
	// void ShowAccountUpgradeUI(FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);              // [0x908210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
	// void CloseWebURLUI();                                                                                                    // [0x903810] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedFriendsGameInstance
/// Size: 0x0080 (128 bytes) (0x0001A8 - 0x000228) align 8 pad: 0x0000
class UAdvancedFriendsGameInstance : public UGameInstance
{ 
public:
	bool                                               bCallFriendInterfaceEventsOnPlayerControllers;              // 0x01A8   (0x0001)  
	bool                                               bCallIdentityInterfaceEventsOnPlayerControllers;            // 0x01A9   (0x0001)  
	bool                                               bCallVoiceInterfaceEventsOnPlayerControllers;               // 0x01AA   (0x0001)  
	bool                                               bEnableTalkingStatusDelegate;                               // 0x01AB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7C];                                      // 0x01AC   (0x007C)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
	// void OnSessionInviteReceived(int32_t LocalPlayerNum, FBPUniqueNetId PersonInviting, FString AppId, FBlueprintSessionResult& SessionToJoin); // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
	// void OnSessionInviteAccepted(int32_t LocalPlayerNum, FBPUniqueNetId PersonInvited, FBlueprintSessionResult& SessionToJoin); // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
	// void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);                                              // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
	// void OnPlayerLoginStatusChanged(int32_t PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID); // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
	// void OnPlayerLoginChanged(int32_t PlayerNum);                                                                            // [0x24710f0] Event|Public|BlueprintEvent 
};

/// Class /Script/AdvancedSessions.AdvancedFriendsInterface
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedFriendsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
	// void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, FBlueprintSessionResult& SearchResult);                      // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
	// void OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, FBlueprintSessionResult& SearchResult);                       // [0x24710f0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
	// void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);                                                // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
	// void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID); // [0x24710f0] Event|Public|BlueprintEvent 
	// Function /Script/AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
	// void OnPlayerLoginChanged(int32_t PlayerNum);                                                                            // [0x24710f0] Event|Public|BlueprintEvent 
};

/// Class /Script/AdvancedSessions.AdvancedFriendsLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
	// void SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result); // [0x907db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
	// void SendSessionInviteToFriend(class APlayerController* PlayerController, FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result); // [0x907c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
	// void IsAFriend(class APlayerController* PlayerController, FBPUniqueNetId UniqueNetId, bool& IsFriend);                   // [0x906ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
	// void GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList);                 // [0x905d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
	// void GetStoredFriendsList(class APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList);                // [0x905bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedFriendsLibrary.GetFriend
	// void GetFriend(class APlayerController* PlayerController, FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend);      // [0x904330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedGameSession
/// Size: 0x0050 (80 bytes) (0x000238 - 0x000288) align 8 pad: 0x0000
class AAdvancedGameSession : public AGameSession
{ 
public:
	SDK_UNDEFINED(80,391) /* TMap<FUniqueNetIdRepl, FText> */ __um(BanList);                                       // 0x0238   (0x0050)  
};

/// Class /Script/AdvancedSessions.AdvancedIdentityLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
	// void SetUserAccountAttribute(FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString NewAttributeValue, EBlueprintResultSwitch& Result); // [0x908050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserID
	// void GetUserID(FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId);                                          // [0x906ce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
	// void GetUserAccountRealName(FBPUserOnlineAccount& AccountInfo, FString& Username);                                       // [0x906bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
	// void GetUserAccountDisplayName(FBPUserOnlineAccount& AccountInfo, FString& DisplayName);                                 // [0x906aa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
	// void GetUserAccountAuthAttribute(FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result); // [0x9068c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
	// void GetUserAccountAttribute(FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result); // [0x9066e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
	// void GetUserAccountAccessToken(FBPUserOnlineAccount& AccountInfo, FString& AccessToken);                                 // [0x9065c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
	// void GetUserAccount(FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);     // [0x906420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
	// void GetPlayerNickname(FBPUniqueNetId& UniqueNetId, FString& PlayerNickname);                                            // [0x904a50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
	// void GetPlayerAuthToken(class APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result);  // [0x904830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
	// void GetLoginStatus(FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);           // [0x904530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
	// void GetAllUserAccounts(TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);                     // [0x903cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedSessionsLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
	// void UniqueNetIdToString(FBPUniqueNetId& UniqueNetId, FString& String);                                                  // [0x908b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
	// void SetPlayerName(class APlayerController* PlayerController, FString PlayerName);                                       // [0x907f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	// FSessionsSearchSetting MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp); // [0x907b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyString(FName Key, FString Value);                                      // [0x9079c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(FName Key, int32_t Value);                                         // [0x9078d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(FName Key, float Value);                                         // [0x9077e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(FName Key, char Value);                                           // [0x9076f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	// FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(FName Key, bool Value);                                           // [0x907600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
	// bool KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, FText KickReason);             // [0x907490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
	// bool IsValidUniqueNetID(FBPUniqueNetId& UniqueNetId);                                                                    // [0x9073c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
	// bool IsValidSession(FBlueprintSessionResult& SessionResult);                                                             // [0x9071a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
	// void IsPlayerInSession(class UObject* WorldContextObject, FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);            // [0x907040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
	// bool HasOnlineSubsystem(FName SubSystemName);                                                                            // [0x906e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	// void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);                        // [0x906320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
	// void GetUniqueNetID(class APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);                             // [0x906220] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
	// void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32_t& UniqueBuildId);                                    // [0x905ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
	// void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState& SessionState);                            // [0x905af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
	// void GetSessionSettings(class UObject* WorldContextObject, int32_t& NumConnections, int32_t& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32_t& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result); // [0x905700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
	// void GetSessionPropertyString(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue); // [0x905540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
	// FName GetSessionPropertyKey(FSessionPropertyKeyPair& SessionProperty);                                                   // [0x905490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
	// void GetSessionPropertyInt(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32_t& SettingValue); // [0x9052f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
	// void GetSessionPropertyFloat(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue); // [0x905140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
	// void GetSessionPropertyByte(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, char& SettingValue); // [0x904fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
	// void GetSessionPropertyBool(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue); // [0x904e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
	// void GetSessionID_AsString(FBlueprintSessionResult& SessionResult, FString& SessionID);                                  // [0x904b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
	// void GetPlayerName(class APlayerController* PlayerController, FString& PlayerName);                                      // [0x904970] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	// void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t& NumNetPlayers);                               // [0x904760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
	// void GetNetPlayerIndex(class APlayerController* PlayerController, int32_t& NetPlayerIndex);                              // [0x904690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
	// void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);            // [0x903f90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	// void GetCurrentUniqueBuildID(int32_t& UniqueBuildId);                                                                    // [0x903f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
	// void GetCurrentSessionID_AsString(class UObject* WorldContextObject, FString& SessionID);                                // [0x903e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	// void FindSessionPropertyIndexByName(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, EBlueprintResultSwitch& Result, int32_t& OutIndex); // [0x903b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
	// void FindSessionPropertyByName(TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingsName, EBlueprintResultSwitch& Result, FSessionPropertyKeyPair& OutProperty); // [0x903990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	// bool EqualEqual_UNetIDUnetID(FBPUniqueNetId& A, FBPUniqueNetId& B);                                                      // [0x903830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
	// bool BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, FText BanReason);                // [0x9036a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	// void AddOrModifyExtraSettings(TArray<FSessionPropertyKeyPair>& SettingsArray, TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray); // [0x9034d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.AdvancedVoiceLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
	// bool UnRegisterRemoteTalker(FBPUniqueNetId& UniqueNetId);                                                                // [0x90db20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
	// void UnRegisterLocalTalker(char LocalPlayerNum);                                                                         // [0x90dab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
	// void UnRegisterAllLocalTalkers();                                                                                        // [0x90da90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
	// bool UnMuteRemoteTalker(char LocalUserNum, FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);                             // [0x90d930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
	// void StopNetworkedVoice(char LocalPlayerNum);                                                                            // [0x90d8c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
	// void StartNetworkedVoice(char LocalPlayerNum);                                                                           // [0x90d850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
	// void RemoveAllRemoteTalkers();                                                                                           // [0x90d6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
	// bool RegisterRemoteTalker(FBPUniqueNetId& UniqueNetId);                                                                  // [0x90d600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
	// bool RegisterLocalTalker(char LocalPlayerNum);                                                                           // [0x90d580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
	// void RegisterAllLocalTalkers();                                                                                          // [0x90d560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
	// bool MuteRemoteTalker(char LocalUserNum, FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);                               // [0x90d400] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
	// bool IsRemotePlayerTalking(FBPUniqueNetId& UniqueNetId);                                                                 // [0x90cf20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
	// bool IsPlayerMuted(char LocalUserNumChecking, FBPUniqueNetId& UniqueNetId);                                              // [0x90ce10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
	// bool IsLocalPlayerTalking(char LocalPlayerNum);                                                                          // [0x90cd90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
	// void IsHeadsetPresent(bool& bHasHeadset, char LocalPlayerNum);                                                           // [0x90ccc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
	// void GetNumLocalTalkers(int32_t& NumLocalTalkers);                                                                       // [0x90cae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AdvancedSessions.CancelFindSessionsCallbackProxy
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,393) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
	// class UCancelFindSessionsCallbackProxy* CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x90bb10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced
/// Size: 0x0088 (136 bytes) (0x000030 - 0x0000B8) align 8 pad: 0x0000
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0050   (0x0068)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
	// class UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(class UObject* WorldContextObject, TArray<FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise); // [0x90bbe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.DestroySessionCallbackProxyAdvanced
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession
	// class UDestroySessionCallbackProxyAdvanced* DestroySession(class UWorld* WorldContextObject, class APlayerController* PlayerController); // [0x90c0a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.EndSessionCallbackProxy
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.EndSessionCallbackProxy.EndSession
	// class UEndSessionCallbackProxy* EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x90c170] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.FindFriendSessionCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
	// class UFindFriendSessionCallbackProxy* FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBPUniqueNetId& FriendUniqueNetId); // [0x90c410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000D0) align 8 pad: 0x0000
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x80];                                      // 0x0050   (0x0080)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
	// class UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32_t MinSlotsAvailable); // [0x90c570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
	// void FilterSessionResults(TArray<FBlueprintSessionResult>& SessionResults, TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults); // [0x90c240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.GetFriendsCallbackProxy
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000070) align 8 pad: 0x0000
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
	// class UGetFriendsCallbackProxy* GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x90c900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.GetRecentPlayersCallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,406) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,407) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
	// class UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(class UObject* WorldContextObject, FBPUniqueNetId& UniqueNetId); // [0x90c9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.GetUserPrivilegeCallbackProxy
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 8 pad: 0x0000
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,408) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,409) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
	// class UGetUserPrivilegeCallbackProxy* GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges& PrivilegeToCheck, FBPUniqueNetId& PlayerUniqueNetID); // [0x90cb60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.JoinSessionCallbackProxyAdvanced
/// Size: 0x0150 (336 bytes) (0x000030 - 0x000180) align 8 pad: 0x0000
class UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x130];                                     // 0x0050   (0x0130)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession
	// class UJoinSessionCallbackProxyAdvanced* JoinSession(class UWorld* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x90cff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.LoginUserCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,412) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,413) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.LoginUserCallbackProxy.LoginUser
	// class ULoginUserCallbackProxy* LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, FString UserID, FString UserToken); // [0x90d140] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.LogoutUserCallbackProxy
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000078) align 8 pad: 0x0000
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
	// class ULogoutUserCallbackProxy* LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x90d330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.SendFriendInviteCallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000090) align 8 pad: 0x0000
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
	// class USendFriendInviteCallbackProxy* SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, FBPUniqueNetId& UniqueNetIDInvited); // [0x90d6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
	// class UUpdateSessionCallbackProxyAdvanced* UpdateSession(class UObject* WorldContextObject, TArray<FSessionPropertyKeyPair>& ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer); // [0x90dbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AdvancedSessions.BPUniqueNetId
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FBPUniqueNetId
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/AdvancedSessions.BPFriendPresenceInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FBPFriendPresenceInfo
{ 
	bool                                               bIsOnline;                                                  // 0x0000   (0x0001)  
	bool                                               bIsPlaying;                                                 // 0x0001   (0x0001)  
	bool                                               bIsPlayingThisGame;                                         // 0x0002   (0x0001)  
	bool                                               bIsJoinable;                                                // 0x0003   (0x0001)  
	bool                                               bHasVoiceSupport;                                           // 0x0004   (0x0001)  
	EBPOnlinePresenceState                             PresenceState;                                              // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FString                                            StatusString;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/AdvancedSessions.BPFriendInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FBPFriendInfo
{ 
	FString                                            DisplayName;                                                // 0x0000   (0x0010)  
	FString                                            RealName;                                                   // 0x0010   (0x0010)  
	EBPOnlinePresenceState                             OnlineState;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FBPUniqueNetId                                     UniqueNetId;                                                // 0x0028   (0x0020)  
	bool                                               bIsPlayingSameGame;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FBPFriendPresenceInfo                              PresenceInfo;                                               // 0x0050   (0x0018)  
};

/// Struct /Script/AdvancedSessions.BPOnlineUser
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FBPOnlineUser
{ 
	FBPUniqueNetId                                     UniqueNetId;                                                // 0x0000   (0x0020)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            RealName;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/AdvancedSessions.BPOnlineRecentPlayer
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
struct FBPOnlineRecentPlayer : FBPOnlineUser
{ 
	FString                                            LastSeen;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/AdvancedSessions.SessionsSearchSetting
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FSessionsSearchSetting
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AdvancedSessions.SessionPropertyKeyPair
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FSessionPropertyKeyPair
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/AdvancedSessions.BPUserOnlineAccount
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FBPUserOnlineAccount
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

static_assert(sizeof(UAdvancedExternalUILibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAdvancedFriendsGameInstance) == 0x0228); // 552 bytes (0x0001A8 - 0x000228)
static_assert(sizeof(UAdvancedFriendsInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAdvancedFriendsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AAdvancedGameSession) == 0x0288); // 648 bytes (0x000238 - 0x000288)
static_assert(sizeof(UAdvancedIdentityLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAdvancedSessionsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAdvancedVoiceLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCancelFindSessionsCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UCreateSessionCallbackProxyAdvanced) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UDestroySessionCallbackProxyAdvanced) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UEndSessionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFindFriendSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UFindSessionsCallbackProxyAdvanced) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UGetFriendsCallbackProxy) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UGetRecentPlayersCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UGetUserPrivilegeCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UJoinSessionCallbackProxyAdvanced) == 0x0180); // 384 bytes (0x000030 - 0x000180)
static_assert(sizeof(ULoginUserCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(ULogoutUserCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(USendFriendInviteCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UUpdateSessionCallbackProxyAdvanced) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FBPUniqueNetId) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBPFriendPresenceInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBPFriendInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FBPOnlineUser) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBPOnlineRecentPlayer) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FSessionsSearchSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSessionPropertyKeyPair) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBPUserOnlineAccount) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FBPFriendPresenceInfo, PresenceState) == 0x0005);
static_assert(offsetof(FBPFriendPresenceInfo, StatusString) == 0x0008);
static_assert(offsetof(FBPFriendInfo, DisplayName) == 0x0000);
static_assert(offsetof(FBPFriendInfo, RealName) == 0x0010);
static_assert(offsetof(FBPFriendInfo, OnlineState) == 0x0020);
static_assert(offsetof(FBPFriendInfo, UniqueNetId) == 0x0028);
static_assert(offsetof(FBPFriendInfo, PresenceInfo) == 0x0050);
static_assert(offsetof(FBPOnlineUser, UniqueNetId) == 0x0000);
static_assert(offsetof(FBPOnlineUser, DisplayName) == 0x0020);
static_assert(offsetof(FBPOnlineUser, RealName) == 0x0030);
static_assert(offsetof(FBPOnlineRecentPlayer, LastSeen) == 0x0040);
