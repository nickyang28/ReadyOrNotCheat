
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Enum /Script/Modio.EModioModServerSideStatus
/// Size: 0x01 (1 bytes)
enum class EModioModServerSideStatus : uint8_t
{
	EModioModServerSideStatus__NotAccepted                                           = 0,
	EModioModServerSideStatus__Accepted                                              = 1,
	EModioModServerSideStatus__Deleted                                               = 3
};

/// Enum /Script/Modio.EModioVirusStatus
/// Size: 0x01 (1 bytes)
enum class EModioVirusStatus : uint8_t
{
	EModioVirusStatus__NoThreat                                                      = 0,
	EModioVirusStatus__Malicious                                                     = 1
};

/// Enum /Script/Modio.EModioVirusScanStatus
/// Size: 0x01 (1 bytes)
enum class EModioVirusScanStatus : uint8_t
{
	EModioVirusScanStatus__NotScanned                                                = 0,
	EModioVirusScanStatus__ScanComplete                                              = 1,
	EModioVirusScanStatus__InProgress                                                = 2,
	EModioVirusScanStatus__TooLargeToScan                                            = 3,
	EModioVirusScanStatus__FileNotFound                                              = 4,
	EModioVirusScanStatus__ErrorScanning                                             = 5
};

/// Enum /Script/Modio.EModioObjectVisibilityFlags
/// Size: 0x01 (1 bytes)
enum class EModioObjectVisibilityFlags : uint8_t
{
	EModioObjectVisibilityFlags__Hidden                                              = 0,
	EModioObjectVisibilityFlags__Public                                              = 1
};

/// Enum /Script/Modio.EModioMaturityFlags
/// Size: 0x01 (1 bytes)
enum class EModioMaturityFlags : uint8_t
{
	EModioMaturityFlags__None                                                        = 0,
	EModioMaturityFlags__Alcohol                                                     = 1,
	EModioMaturityFlags__Drugs                                                       = 2,
	EModioMaturityFlags__Violence                                                    = 4,
	EModioMaturityFlags__Explicit                                                    = 8
};

/// Enum /Script/Modio.EModioModManagementEventType
/// Size: 0x01 (1 bytes)
enum class EModioModManagementEventType : uint8_t
{
	EModioModManagementEventType__Installed                                          = 0,
	EModioModManagementEventType__Uninstalled                                        = 1,
	EModioModManagementEventType__Updated                                            = 2,
	EModioModManagementEventType__Uploaded                                           = 3,
	EModioModManagementEventType__BeginInstall                                       = 4,
	EModioModManagementEventType__BeginUninstall                                     = 5,
	EModioModManagementEventType__BeginUpdate                                        = 6,
	EModioModManagementEventType__BeginUpload                                        = 7
};

/// Enum /Script/Modio.EModioAuthenticationProvider
/// Size: 0x01 (1 bytes)
enum class EModioAuthenticationProvider : uint8_t
{
	EModioAuthenticationProvider__XboxLive                                           = 0,
	EModioAuthenticationProvider__Steam                                              = 1,
	EModioAuthenticationProvider__GoG                                                = 2,
	EModioAuthenticationProvider__Itch                                               = 3,
	EModioAuthenticationProvider__Switch                                             = 4,
	EModioAuthenticationProvider__Discord                                            = 5,
	EModioAuthenticationProvider__PSN                                                = 6,
	EModioAuthenticationProvider__Epic                                               = 7,
	EModioAuthenticationProvider__Oculus                                             = 8,
	EModioAuthenticationProvider__OpenID                                             = 9
};

/// Enum /Script/Modio.EModioLanguage
/// Size: 0x01 (1 bytes)
enum class EModioLanguage : uint8_t
{
	EModioLanguage__English                                                          = 0,
	EModioLanguage__Bulgarian                                                        = 1,
	EModioLanguage__French                                                           = 2,
	EModioLanguage__German                                                           = 3,
	EModioLanguage__Italian                                                          = 4,
	EModioLanguage__Polish                                                           = 5,
	EModioLanguage__Portuguese                                                       = 6,
	EModioLanguage__Hungarian                                                        = 7,
	EModioLanguage__Japanese                                                         = 8,
	EModioLanguage__Korean                                                           = 9,
	EModioLanguage__Russian                                                          = 10,
	EModioLanguage__Spanish                                                          = 11,
	EModioLanguage__Thai                                                             = 12,
	EModioLanguage__ChineseSimplified                                                = 13,
	EModioLanguage__ChineseTraditional                                               = 14
};

/// Enum /Script/Modio.EModioLogLevel
/// Size: 0x01 (1 bytes)
enum class EModioLogLevel : uint8_t
{
	EModioLogLevel__Trace                                                            = 0,
	EModioLogLevel__Info                                                             = 1,
	EModioLogLevel__Warning                                                          = 2,
	EModioLogLevel__Error                                                            = 3
};

/// Enum /Script/Modio.EModioGallerySize
/// Size: 0x01 (1 bytes)
enum class EModioGallerySize : uint8_t
{
	EModioGallerySize__Original                                                      = 0,
	EModioGallerySize__Thumb320                                                      = 1
};

/// Enum /Script/Modio.EModioAvatarSize
/// Size: 0x01 (1 bytes)
enum class EModioAvatarSize : uint8_t
{
	EModioAvatarSize__Original                                                       = 0,
	EModioAvatarSize__Thumb50                                                        = 1,
	EModioAvatarSize__Thumb100                                                       = 2
};

/// Enum /Script/Modio.EModioLogoSize
/// Size: 0x01 (1 bytes)
enum class EModioLogoSize : uint8_t
{
	EModioLogoSize__Thumb320                                                         = 0,
	EModioLogoSize__Thumb640                                                         = 1,
	EModioLogoSize__Thumb1280                                                        = 2,
	EModioLogoSize__Original                                                         = 3
};

/// Enum /Script/Modio.EModioModfilePlatform
/// Size: 0x01 (1 bytes)
enum class EModioModfilePlatform : uint8_t
{
	EModioModfilePlatform__Windows                                                   = 0,
	EModioModfilePlatform__Mac                                                       = 1,
	EModioModfilePlatform__Linux                                                     = 2,
	EModioModfilePlatform__Android                                                   = 3,
	EModioModfilePlatform__iOS                                                       = 4,
	EModioModfilePlatform__XboxOne                                                   = 5,
	EModioModfilePlatform__XboxSeriesX                                               = 6,
	EModioModfilePlatform__PS4                                                       = 7,
	EModioModfilePlatform__PS5                                                       = 8,
	EModioModfilePlatform__Switch                                                    = 9,
	EModioModfilePlatform__Oculus                                                    = 10,
	EModioModfilePlatform__Source                                                    = 11
};

/// Enum /Script/Modio.EModioPortal
/// Size: 0x01 (1 bytes)
enum class EModioPortal : uint8_t
{
	EModioPortal__None                                                               = 0,
	EModioPortal__Apple                                                              = 1,
	EModioPortal__EpicGamesStore                                                     = 2,
	EModioPortal__GOG                                                                = 3,
	EModioPortal__Google                                                             = 4,
	EModioPortal__Itchio                                                             = 5,
	EModioPortal__Nintendo                                                           = 6,
	EModioPortal__PSN                                                                = 7,
	EModioPortal__Steam                                                              = 8,
	EModioPortal__XboxLive                                                           = 9
};

/// Enum /Script/Modio.EModioEnvironment
/// Size: 0x01 (1 bytes)
enum class EModioEnvironment : uint8_t
{
	EModioEnvironment__Test                                                          = 0,
	EModioEnvironment__Live                                                          = 1
};

/// Enum /Script/Modio.EModioErrorCondition
/// Size: 0x01 (1 bytes)
enum class EModioErrorCondition : uint8_t
{
	EModioErrorCondition__NoError                                                    = 0,
	EModioErrorCondition__NetworkError                                               = 2,
	EModioErrorCondition__ConfigurationError                                         = 3,
	EModioErrorCondition__InvalidArgsError                                           = 4,
	EModioErrorCondition__FilesystemError                                            = 5,
	EModioErrorCondition__InternalError                                              = 6,
	EModioErrorCondition__EntityNotFoundError                                        = 12,
	EModioErrorCondition__UserTermsOfUseError                                        = 13,
	EModioErrorCondition__SubmitReportError                                          = 14,
	EModioErrorCondition__UserNotAuthenticatedError                                  = 15,
	EModioErrorCondition__SDKNotInitialized                                          = 16,
	EModioErrorCondition__UserAlreadyAuthenticatedError                              = 17,
	EModioErrorCondition__SystemError                                                = 18,
	EModioErrorCondition__OperationCanceled                                          = 19,
	EModioErrorCondition__ModManagementDisabled                                      = 20
};

/// Enum /Script/Modio.EModioSortDirection
/// Size: 0x01 (1 bytes)
enum class EModioSortDirection : uint8_t
{
	EModioSortDirection__Ascending                                                   = 0,
	EModioSortDirection__Descending                                                  = 1
};

/// Enum /Script/Modio.EModioSortFieldType
/// Size: 0x01 (1 bytes)
enum class EModioSortFieldType : uint8_t
{
	EModioSortFieldType__ID                                                          = 0,
	EModioSortFieldType__DownloadsToday                                              = 1,
	EModioSortFieldType__SubscriberCount                                             = 2,
	EModioSortFieldType__Rating                                                      = 3,
	EModioSortFieldType__DateMarkedLive                                              = 4,
	EModioSortFieldType__DateUpdated                                                 = 5,
	EModioSortFieldType__DownloadsTotal                                              = 6
};

/// Enum /Script/Modio.EModioImageState
/// Size: 0x01 (1 bytes)
enum class EModioImageState : uint8_t
{
	EModioImageState__OnDisc                                                         = 0,
	EModioImageState__LoadingIntoMemory                                              = 1,
	EModioImageState__InMemory                                                       = 2,
	EModioImageState__Corrupted                                                      = 3
};

/// Enum /Script/Modio.EModioModState
/// Size: 0x01 (1 bytes)
enum class EModioModState : uint8_t
{
	EModioModState__InstallationPending                                              = 0,
	EModioModState__Installed                                                        = 1,
	EModioModState__UpdatePending                                                    = 2,
	EModioModState__Downloading                                                      = 3,
	EModioModState__Extracting                                                       = 4,
	EModioModState__UninstallPending                                                 = 5
};

/// Enum /Script/Modio.EModioModProgressState
/// Size: 0x01 (1 bytes)
enum class EModioModProgressState : uint8_t
{
	EModioModProgressState__Initializing                                             = 0,
	EModioModProgressState__Downloading                                              = 1,
	EModioModProgressState__Extracting                                               = 2,
	EModioModProgressState__Compressing                                              = 3,
	EModioModProgressState__Uploading                                                = 4
};

/// Enum /Script/Modio.EModioRating
/// Size: 0x01 (1 bytes)
enum class EModioRating : uint8_t
{
	EModioRating__Neutral                                                            = 0,
	EModioRating__Positive                                                           = 1,
	EModioRating__Negative                                                           = 2
};

/// Enum /Script/Modio.EModioReportType
/// Size: 0x01 (1 bytes)
enum class EModioReportType : uint8_t
{
	EModioReportType__Generic                                                        = 0,
	EModioReportType__DMCA                                                           = 1,
	EModioReportType__NotWorking                                                     = 2,
	EModioReportType__RudeContent                                                    = 3,
	EModioReportType__IllegalContent                                                 = 4,
	EModioReportType__StolenContent                                                  = 5,
	EModioReportType__FalseInformation                                               = 6,
	EModioReportType__Other                                                          = 7
};

/// Enum /Script/Modio.EFileSizeUnit
/// Size: 0x04 (4 bytes)
enum class EFileSizeUnit : uint32_t
{
	Largest                                                                          = 0,
	B                                                                                = 1,
	KB                                                                               = 1024,
	MB                                                                               = 1048576,
	GB                                                                               = 1073741824
};

/// Class /Script/Modio.ModioCommonTypesLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioCommonTypesLibrary.SetSessionIdentifier
	// FModioInitializeOptions SetSessionIdentifier(FModioInitializeOptions& Options, FString SessionIdentifier);               // [0x15e2690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.SetPortal
	// FModioInitializeOptions SetPortal(FModioInitializeOptions& Options, EModioPortal PortalToUse);                           // [0x15e2470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.NotEqualTo
	// bool NotEqualTo(FModioModID& A, FModioModID& B);                                                                         // [0x15dfdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeInitializeOptions
	// FModioInitializeOptions MakeInitializeOptions(int64_t GameId, FString ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse); // [0x15dee30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeGameId
	// FModioGameID MakeGameId(int64_t GameId);                                                                                 // [0x15deda0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeAuthParams
	// FModioAuthenticationParams MakeAuthParams(FString AuthToken, FString EmailAddress, bool bHasAcceptedTOS);                // [0x15deab0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeApiKey
	// FModioApiKey MakeApiKey(FString ApiKey);                                                                                 // [0x15de980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.GetRawValueFromModID
	// int64_t GetRawValueFromModID(FModioModID& In);                                                                           // [0x15de310] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.EqualTo
	// bool EqualTo(FModioModID& A, FModioModID& B);                                                                            // [0x15dddf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_UserIDToString
	// FString Conv_UserIDToString(FModioUserID UserID);                                                                        // [0x15ddd20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
	// FModioEmailAuthCode Conv_StringToEmailAuthCode(FString AuthCode);                                                        // [0x15ddc40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
	// FModioEmailAddress Conv_StringToEmailAddress(FString EMail);                                                             // [0x15ddc40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_ModIDToString
	// FString Conv_ModIDToString(FModioModID ModId);                                                                           // [0x15ddb70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_GameIDToString
	// FString Conv_GameIDToString(FModioGameID GameId);                                                                        // [0x15ddaa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
	// FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);                                                // [0x15dd9d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
	// FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);                                                   // [0x15dd8a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
	// FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);                                                      // [0x15dd770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
	// FString Conv_ApiKeyToString(FModioApiKey ApiKey);                                                                        // [0x15dd640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioCreateModLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioCreateModLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioCreateModLibrary.SetVersionString
	// void SetVersionString(FModioCreateModFileParams& In, FString Version);                                                   // [0x15e3000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetTags
	// void SetTags(FModioCreateModParams& In, TArray<FString>& Tags);                                                          // [0x15e2b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetModfilePlatforms
	// void SetModfilePlatforms(FModioCreateModFileParams& In, TArray<EModioModfilePlatform>& Platforms);                       // [0x15e1dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetModFileMetadataBlob
	// void SetModFileMetadataBlob(FModioCreateModFileParams& In, FString MetadataBlob);                                        // [0x15e1c00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetMetadataBlob
	// void SetMetadataBlob(FModioCreateModParams& In, FString MetadataBlob);                                                   // [0x15e1710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
	// void SetMarkAsActiveRelease(FModioCreateModFileParams& In, bool bMarkAsActiveRelease);                                   // [0x15e1360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetInitialVisibility_DEPRECATED
	// void SetInitialVisibility_DEPRECATED(FModioCreateModParams& In, bool InitialVisibility);                                 // [0x15e0ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetInitialVisibility
	// void SetInitialVisibility(FModioCreateModParams& In, EModioObjectVisibilityFlags InitialVisibility);                     // [0x15e0cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetHomepageURL
	// void SetHomepageURL(FModioCreateModParams& In, FString HomepageURL);                                                     // [0x15e07c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetDescription
	// void SetDescription(FModioCreateModParams& In, FString Description);                                                     // [0x15e02d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetChangelogString
	// void SetChangelogString(FModioCreateModFileParams& In, FString Changelog);                                               // [0x15e0100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Modio.ModioEditModLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioEditModLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioEditModLibrary.SetVisibility_DEPRECATED
	// void SetVisibility_DEPRECATED(FModioEditModParams& In, bool Visibility);                                                 // [0x15e33f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetVisibility
	// void SetVisibility(FModioEditModParams& In, EModioObjectVisibilityFlags Visibility);                                     // [0x15e31d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetTags
	// void SetTags(FModioEditModParams& In, TArray<FString>& Tags);                                                            // [0x15e2d90] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetSummary
	// void SetSummary(FModioEditModParams& In, FString Summary);                                                               // [0x15e28c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetNamePath
	// void SetNamePath(FModioEditModParams& In, FString NamePath);                                                             // [0x15e21f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetName
	// void SetName(FModioEditModParams& In, FString Name);                                                                     // [0x15e1f70] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetMetadataBlob
	// void SetMetadataBlob(FModioEditModParams& In, FString MetadataBlob);                                                     // [0x15e1980] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetMaturityFlags
	// void SetMaturityFlags(FModioEditModParams& In, EModioMaturityFlags MaturityFlags);                                       // [0x15e14f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetLogoPath
	// void SetLogoPath(FModioEditModParams& In, FString LogoPath);                                                             // [0x15e10e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetHomepageURL
	// void SetHomepageURL(FModioEditModParams& In, FString HomepageURL);                                                       // [0x15e0a30] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetDescription
	// void SetDescription(FModioEditModParams& In, FString Description);                                                       // [0x15e0540] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Modio.ModioErrorCodeLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioErrorCodeLibrary.IsError
	// bool IsError(FModioErrorCode& Error);                                                                                    // [0x15de6b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioErrorCodeLibrary.GetValue
	// int32_t GetValue(FModioErrorCode& Error);                                                                                // [0x15de3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioErrorCodeLibrary.GetMessage
	// FString GetMessage(FModioErrorCode& Error);                                                                              // [0x15de230] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioErrorConditionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioErrorConditionLibrary.ErrorCodeMatches
	// bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);                                        // [0x15ddee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioExampleLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioExampleLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioExampleLibrary.ListUserSubscriptionAsync
	// void ListUserSubscriptionAsync(FModioFilterParams& FilterParams, FDelegateProperty Callback);                            // [0x15de750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioExampleLibrary.GetLogoThumbnailSize
	// EModioLogoSize GetLogoThumbnailSize();                                                                                   // [0x15de200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioExampleLibrary.GetLogoFullSize
	// EModioLogoSize GetLogoFullSize();                                                                                        // [0x15de200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioExampleLibrary.GetAvatarThumbnailSize
	// EModioAvatarSize GetAvatarThumbnailSize();                                                                               // [0x946d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioFilterParamsLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioFilterParamsLibrary.WithTags
	// FModioFilterParams WithTags(FModioFilterParams& Filter, TArray<FString>& NewTags);                                       // [0x15e3ab0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.WithTag
	// FModioFilterParams WithTag(FModioFilterParams& Filter, FString Tag);                                                     // [0x15e3880] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.WithoutTags
	// FModioFilterParams WithoutTags(FModioFilterParams& Filter, TArray<FString>& NewTags);                                    // [0x15e3f40] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.WithoutTag
	// FModioFilterParams WithoutTag(FModioFilterParams& Filter, FString Tag);                                                  // [0x15e3d10] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.SortBy
	// FModioFilterParams SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);     // [0x15e3620] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.PagedResults
	// FModioFilterParams PagedResults(FModioFilterParams& Filter, int64_t PageNumber, int64_t PageSize);                       // [0x15dfea0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.NameContainsStrings
	// FModioFilterParams NameContainsStrings(FModioFilterParams& Filter, TArray<FString>& SearchStrings);                      // [0x15dfb50] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.NameContains
	// FModioFilterParams NameContains(FModioFilterParams& Filter, FString SearchString);                                       // [0x15df920] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MetadataLike
	// FModioFilterParams MetadataLike(FModioFilterParams& Filter, FString SearchString);                                       // [0x15df6a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MatchingIDs
	// FModioFilterParams MatchingIDs(FModioFilterParams& Filter, TArray<FModioModID>& IDs);                                    // [0x15df460] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MarkedLiveBefore
	// FModioFilterParams MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore);                                   // [0x15df240] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MarkedLiveAfter
	// FModioFilterParams MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter);                                     // [0x15df020] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.IndexedResults
	// FModioFilterParams IndexedResults(FModioFilterParams& Filter, int64_t StartIndex, int64_t ResultCount);                  // [0x15de450] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.ExcludingIDs
	// FModioFilterParams ExcludingIDs(FModioFilterParams& Filter, TArray<FModioModID>& IDs);                                   // [0x15ddfc0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioImageLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioImageLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioImageLibrary.LoadAsync
	// void LoadAsync(FModioImageWrapper& Image, FDelegateProperty OnImageLoaded);                                              // [0x15e9360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioImageLibrary.GetTexture
	// class UTexture2DDynamic* GetTexture(FModioImageWrapper& Image);                                                          // [0x15e9180] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetState
	// EModioImageState GetState(FModioImageWrapper& Image);                                                                    // [0x15e90d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetLogoSize
	// FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);                                                    // [0x15e86c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetGallerySize
	// FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);                                   // [0x15e84f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetAvatarSize
	// FVector2D GetAvatarSize(class UTexture* Avatar, EModioAvatarSize AvatarSize);                                            // [0x15e8170] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioInstallationOverride
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioInstallationOverride : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioInstallationOverride.OverrideModInstallationDirectory
	// bool OverrideModInstallationDirectory(FString NewInstallPath, FModioInitializeOptions InitParams);                       // [0x15e9460] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioModCollectionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioModCollectionLibrary.GetPath
	// FString GetPath(FModioModCollectionEntry& Entry);                                                                        // [0x15e8fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModCollectionLibrary.GetModState
	// EModioModState GetModState(FModioModCollectionEntry& Entry);                                                             // [0x15e8890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModCollectionLibrary.GetModProfile
	// FModioModInfo GetModProfile(FModioModCollectionEntry& Entry);                                                            // [0x15e8790] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModCollectionLibrary.GetId
	// FModioModID GetId(FModioModCollectionEntry& Entry);                                                                      // [0x15e85c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModDependenciesLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioModDependenciesLibrary.GetPagedResult
	// FModioPagedResult GetPagedResult(FModioModDependencyList& ModTags);                                                      // [0x15e8c30] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModDependenciesLibrary.GetDependencies
	// TArray<FModioModDependency> GetDependencies(FModioModDependencyList& ModTags);                                           // [0x15e8410] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModInfoListLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioModInfoListLibrary.GetPagedResult
	// FModioPagedResult GetPagedResult(FModioModInfoList& ModInfoList);                                                        // [0x15e8d10] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModInfoListLibrary.GetMods
	// TArray<FModioModInfo> GetMods(FModioModInfoList& ModInfoList);                                                           // [0x15e8990] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModProgressInfoLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModProgressInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioModProgressInfoLibrary.GetTotalProgress
	// FModioUnsigned64 GetTotalProgress(FModioModProgressInfo& Info, EModioModProgressState State);                            // [0x15e9230] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModProgressInfoLibrary.GetCurrentState
	// EModioModProgressState GetCurrentState(FModioModProgressInfo& Info);                                                     // [0x15e8370] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModProgressInfoLibrary.GetCurrentProgress
	// FModioUnsigned64 GetCurrentProgress(FModioModProgressInfo& Info, EModioModProgressState State);                          // [0x15e8240] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModTagOptionsLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioModTagOptionsLibrary.GetTags
	// TArray<FModioModTagInfo> GetTags(FModioModTagOptions& ModTags);                                                          // [0x15ec8d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModTagOptionsLibrary.GetPagedResult
	// FModioPagedResult GetPagedResult(FModioModTagOptions& ModTags);                                                          // [0x15ec460] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioOptionalLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
	// bool IsSet_ModioOptionalUser(FModioOptionalUser& OptionalUser);                                                          // [0x15ee200] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
	// bool IsSet_ModioOptionalTerms(FModioOptionalTerms& OptionalTerms);                                                       // [0x15ee120] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
	// bool IsSet_ModioOptionalModTagOptions(FModioOptionalModTagOptions& OptionalModTagOptions);                               // [0x15ee050] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
	// bool IsSet_ModioOptionalModProgressInfo(FModioOptionalModProgressInfo& OptionalModProgressInfo);                         // [0x15edf90] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
	// bool IsSet_ModioOptionalModInfoList(FModioOptionalModInfoList& OptionalModInfoList);                                     // [0x15edec0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
	// bool IsSet_ModioOptionalModInfo(FModioOptionalModInfo& OptionalModInfo);                                                 // [0x15edde0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
	// bool IsSet_ModioOptionalModID(FModioOptionalModID& OptionalID);                                                          // [0x15edd30] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
	// bool IsSet_ModioOptionalModDependencyList(FModioOptionalModDependencyList& OptionalDependencyList);                      // [0x15edc60] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
	// bool IsSet_ModioOptionalImage(FModioOptionalImage& OptionalImage);                                                       // [0x15edb90] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalGameInfo
	// bool IsSet_ModioOptionalGameInfo(FModioOptionalGameInfo& OptionalGameInfo);                                              // [0x15edab0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
	// bool GetValue_ModioOptionalUser(FModioOptionalUser& OptionalUser, FModioUser& User);                                     // [0x15ed900] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
	// bool GetValue_ModioOptionalTerms(FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);                                // [0x15ed6c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
	// bool GetValue_ModioOptionalModTagOptions(FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions); // [0x15ed510] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
	// bool GetValue_ModioOptionalModProgressInfo(FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo); // [0x15ed400] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
	// bool GetValue_ModioOptionalModInfoList(FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);  // [0x15ed0d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
	// bool GetValue_ModioOptionalModInfo(FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);                      // [0x15ecf80] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
	// bool GetValue_ModioOptionalModID(FModioOptionalModID& OptionalID, FModioModID& ID);                                      // [0x15ece80] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
	// bool GetValue_ModioOptionalModDependencyList(FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList); // [0x15ecd20] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
	// bool GetValue_ModioOptionalImage(FModioOptionalImage& OptionalImage, FModioImageWrapper& Image);                         // [0x15ecbf0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalGameInfo
	// bool GetValue_ModioOptionalGameInfo(FModioOptionalGameInfo& OptionalGameInfo, FModioGameInfo& GameInfo);                 // [0x15ecaa0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioPopupBase
/// Size: 0x0000 (0 bytes) (0x000260 - 0x000260) align 8 pad: 0x0000
class UModioPopupBase : public UUserWidget
{ 
public:
};

/// Class /Script/Modio.ModioPopupContainer
/// Size: 0x0020 (32 bytes) (0x000260 - 0x000280) align 8 pad: 0x0000
class UModioPopupContainer : public UUserWidget
{ 
public:
	TArray<class UModioPopupBase*>                     PopupStack;                                                 // 0x0260   (0x0010)  
	TArray<class UModioPopupBase*>                     PopupCache;                                                 // 0x0270   (0x0010)  


	/// Functions
	// Function /Script/Modio.ModioPopupContainer.PushPopup
	// class UModioPopupBase* PushPopup(class UClass* PopupClass);                                                              // [0x15f1980] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Modio.ModioPopupContainer.PopPopup
	// class UModioPopupBase* PopPopup(class UClass* PopupClass);                                                               // [0x15f1830] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioReportLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioReportLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioReportLibrary.MakeReportForUser
	// FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact); // [0x15f1460] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioReportLibrary.MakeReportForMod
	// FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact); // [0x15f1160] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioReportLibrary.MakeReportForGame
	// FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact); // [0x15f0e60] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioSDKLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioSDKLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioSDKLibrary.RoundNumberString
	// FText RoundNumberString(FText inputText);                                                                                // [0x15f1bf0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Pct_Int64Int64
	// float Pct_Int64Int64(int64_t Dividend, int64_t Divisor);                                                                 // [0x15f1760] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
	// bool IsValidSecurityCodeFormat(FString String);                                                                          // [0x15ee3c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.IsValidEmailAddressFormat
	// bool IsValidEmailAddressFormat(FString String);                                                                          // [0x15ee320] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
	// FModioInitializeOptions GetProjectInitializeOptionsForSessionId(FString SessionID);                                      // [0x15ec760] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectInitializeOptions
	// FModioInitializeOptions GetProjectInitializeOptions();                                                                   // [0x15ec680] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectGameId
	// FModioGameID GetProjectGameId();                                                                                         // [0x15ec640] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectEnvironment
	// EModioEnvironment GetProjectEnvironment();                                                                               // [0x15ec610] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectApiKey
	// FModioApiKey GetProjectApiKey();                                                                                         // [0x15ec590] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetDesiredFileSizeUnit
	// TEnumAsByte<EFileSizeUnit> GetDesiredFileSizeUnit(int64_t Filesize);                                                     // [0x15ec2d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Filesize_ToString
	// FText Filesize_ToString(int64_t Filesize, int32_t MinDecimals, int32_t MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName); // [0x15ec0c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Conv_Int64ToText
	// FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // [0x15ebe80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Conv_Int64ToString
	// FString Conv_Int64ToString(int64_t inInt);                                                                               // [0x15ebdb0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioSettings
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UModioSettings : public UObject
{ 
public:
	int64_t                                            GameId;                                                     // 0x0028   (0x0008)  
	FString                                            ApiKey;                                                     // 0x0030   (0x0010)  
	EModioEnvironment                                  ENVIRONMENT;                                                // 0x0040   (0x0001)  
	EModioLogLevel                                     LogLevel;                                                   // 0x0041   (0x0001)  
	EModioPortal                                       DefaultPortal;                                              // 0x0042   (0x0001)  
	bool                                               bUseBackgroundThread;                                       // 0x0043   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Modio.ModioSubsystem
/// Size: 0x0300 (768 bytes) (0x000030 - 0x000330) align 8 pad: 0x0000
class UModioSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x110];                                     // 0x0030   (0x0110)  MISSED
	SDK_UNDEFINED(80,1833) /* TMap<FModioModID, FModioModCollectionEntry> */ __um(UserSubscriptionsDefaultValue);  // 0x0140   (0x0050)  
	SDK_UNDEFINED(80,1834) /* TMap<FModioModID, FModioModCollectionEntry> */ __um(QueryUserInstallationsDefaultValue); // 0x0190   (0x0050)  
	unsigned char                                      UnknownData01_7[0x150];                                     // 0x01E0   (0x0150)  MISSED


	/// Functions
	// Function /Script/Modio.ModioSubsystem.SetLogLevel
	// void SetLogLevel(EModioLogLevel UnrealLogLevel);                                                                         // [0x15f1d50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.RunPendingHandlers
	// void RunPendingHandlers();                                                                                               // [0x15f1d30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.QueryUserSubscriptions
	// TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();                                                    // [0x15f1bb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.QueryUserInstallations
	// TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);                           // [0x15f1b10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.QuerySystemInstallations
	// TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();                                                  // [0x15f1a20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.PrioritizeTransferForMod
	// FModioErrorCode PrioritizeTransferForMod(FModioModID ModToPrioritize);                                                   // [0x15f18d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.KillBackgroundThread
	// void KillBackgroundThread();                                                                                             // [0x15f0e40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
	// void K2_VerifyUserAuthenticationAsync(FDelegateProperty Callback);                                                       // [0x15f0da0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
	// void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FDelegateProperty OnUnsubscribeComplete);              // [0x15f0cb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_UnmuteUserAsync
	// void K2_UnmuteUserAsync(FModioUserID UserID, FDelegateProperty Callback);                                                // [0x15f0bc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubscribeToModAsync
	// void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FDelegateProperty OnSubscribeComplete);                        // [0x15f0ad0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitNewModFileForMod
	// void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);                                       // [0x15f0850] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitNewModAsync
	// void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FDelegateProperty Callback);     // [0x15f05b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitModRatingAsync
	// void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FDelegateProperty Callback);                          // [0x15f0480] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitModChangesAsync
	// void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FDelegateProperty Callback);                  // [0x15f01c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ShutdownAsync
	// void K2_ShutdownAsync(FDelegateProperty OnShutdownComplete);                                                             // [0x15f0120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
	// void K2_RequestEmailAuthCodeAsync(FModioEmailAddress& EmailAddress, FDelegateProperty Callback);                         // [0x15f0010] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ReportContentAsync
	// void K2_ReportContentAsync(FModioReportParams Report, FDelegateProperty Callback);                                       // [0x15efe70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_QueryUserProfile
	// FModioOptionalUser K2_QueryUserProfile();                                                                                // [0x15efd30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.K2_QueryCurrentModUpdate
	// FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();                                                                // [0x15efca0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.K2_MuteUserAsync
	// void K2_MuteUserAsync(FModioUserID UserID, FDelegateProperty Callback);                                                  // [0x15efbb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ListUserCreatedModsAsync
	// void K2_ListUserCreatedModsAsync(FModioFilterParams& Filter, FDelegateProperty Callback);                                // [0x15ef980] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ListAllModsAsync
	// void K2_ListAllModsAsync(FModioFilterParams& Filter, FDelegateProperty Callback);                                        // [0x15ef750] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_InitializeAsync
	// void K2_InitializeAsync(FModioInitializeOptions& InitializeOptions, FDelegateProperty OnInitComplete);                   // [0x15ef5a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
	// void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FDelegateProperty Callback);                                // [0x15ef4b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetTermsOfUseAsync
	// void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, FDelegateProperty Callback);    // [0x15ef380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetMutedUsersAsync
	// void K2_GetMutedUsersAsync(FDelegateProperty Callback);                                                                  // [0x15ef2e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModTagOptionsAsync
	// void K2_GetModTagOptionsAsync(FDelegateProperty Callback);                                                               // [0x15ef240] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModMediaLogoAsync
	// void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FDelegateProperty Callback);                    // [0x15ef110] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
	// void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32_t Index, FDelegateProperty Callback); // [0x15eef80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
	// void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FDelegateProperty Callback);              // [0x15eee50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModInfoAsync
	// void K2_GetModInfoAsync(FModioModID ModId, FDelegateProperty Callback);                                                  // [0x15eed60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModDependenciesAsync
	// void K2_GetModDependenciesAsync(FModioModID ModId, FDelegateProperty Callback);                                          // [0x15eec70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModCreationHandle
	// FModioModCreationHandle K2_GetModCreationHandle();                                                                       // [0x15eec30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetGameInfoAsync
	// void K2_GetGameInfoAsync(FModioGameID GameId, FDelegateProperty Callback);                                               // [0x15eeb40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ForceUninstallModAsync
	// void K2_ForceUninstallModAsync(FModioModID ModToRemove, FDelegateProperty Callback);                                     // [0x15eea50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
	// void K2_FetchExternalUpdatesAsync(FDelegateProperty OnFetchDone);                                                        // [0x15ee9b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_EnableModManagement
	// FModioErrorCode K2_EnableModManagement(FDelegateProperty Callback);                                                      // [0x15ee8e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ClearUserDataAsync
	// void K2_ClearUserDataAsync(FDelegateProperty Callback);                                                                  // [0x15ee840] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
	// void K2_AuthenticateUserExternalAsync(FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FDelegateProperty Callback); // [0x15ee660] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
	// void K2_AuthenticateUserEmailAsync(FModioEmailAuthCode& AuthenticationCode, FDelegateProperty Callback);                 // [0x15ee550] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ArchiveModAsync
	// void K2_ArchiveModAsync(FModioModID Mod, FDelegateProperty Callback);                                                    // [0x15ee460] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.IsUsingBackgroundThread
	// bool IsUsingBackgroundThread();                                                                                          // [0x15ee2f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.IsModManagementBusy
	// bool IsModManagementBusy();                                                                                              // [0x15eda80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.GetLastValidationError
	// TArray<FModioValidationError> GetLastValidationError();                                                                  // [0x15ec360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.DisableModManagement
	// void DisableModManagement();                                                                                             // [0x15ec0a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioUnsigned64Library
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioUnsigned64Library : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Modio.ModioUnsigned64Library.Subtract
	// FModioUnsigned64 Subtract(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                 // [0x15f4050] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Percentage_Unsigned64
	// float Percentage_Unsigned64(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                               // [0x15f3f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.NotEqualTo
	// bool NotEqualTo(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                           // [0x15f3e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.MakeFromComponents
	// FModioUnsigned64 MakeFromComponents(int32_t& High, int32_t& Low);                                                        // [0x15f3d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.LessThan
	// bool LessThan(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                             // [0x15f3c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.GreaterThan
	// bool GreaterThan(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                          // [0x15f3b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.EqualTo
	// bool EqualTo(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                              // [0x15f3aa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.DivideToFloat
	// float DivideToFloat(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                       // [0x15f3970] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.DivideFloat
	// float DivideFloat(FModioUnsigned64& LHS, float RHS);                                                                     // [0x15f3860] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Divide
	// FModioUnsigned64 Divide(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                   // [0x15f3770] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
	// float Conv_FModioUnsigned64ToFloat(FModioUnsigned64& In);                                                                // [0x15f36b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.BreakToComponents
	// void BreakToComponents(FModioUnsigned64& In, int32_t& High, int32_t& Low);                                               // [0x15f3580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Add
	// FModioUnsigned64 Add(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                      // [0x15f3490] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Modio.ModioYoutubeURLList
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FModioYoutubeURLList
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Modio.ModioSketchfabURLList
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FModioSketchfabURLList
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Modio.ModioPagedResult
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FModioPagedResult
{ 
	int32_t                                            PageIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            PageSize;                                                   // 0x0004   (0x0004)  
	int32_t                                            PageCount;                                                  // 0x0008   (0x0004)  
	int32_t                                            TotalResultCount;                                           // 0x000C   (0x0004)  
	int32_t                                            ResultCount;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/Modio.ModioModID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioModID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Modio.ModioUserID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioUserID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Modio.ModioUser
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FModioUser
{ 
	FModioUserID                                       UserID;                                                     // 0x0000   (0x0008)  
	FString                                            Username;                                                   // 0x0008   (0x0010)  
	FDateTime                                          DateOnline;                                                 // 0x0018   (0x0008)  
	FString                                            ProfileUrl;                                                 // 0x0020   (0x0010)  
	FString                                            DisplayNamePortal;                                          // 0x0030   (0x0010)  
};

/// Struct /Script/Modio.ModioFileMetadataID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioFileMetadataID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Modio.ModioFileMetadata
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FModioFileMetadata
{ 
	FModioFileMetadataID                               MetadataId;                                                 // 0x0000   (0x0008)  
	FModioModID                                        ModId;                                                      // 0x0008   (0x0008)  
	FDateTime                                          DateAdded;                                                  // 0x0010   (0x0008)  
	EModioVirusScanStatus                              CurrentVirusScanStatus;                                     // 0x0018   (0x0001)  
	EModioVirusStatus                                  CurrentVirusStatus;                                         // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	int64_t                                            Filesize;                                                   // 0x0020   (0x0008)  
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	FString                                            Version;                                                    // 0x0038   (0x0010)  
	FString                                            Changelog;                                                  // 0x0048   (0x0010)  
	FString                                            MetadataBlob;                                               // 0x0058   (0x0010)  
};

/// Struct /Script/Modio.ModioMetadata
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioMetadata
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Modio.ModioModTag
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FModioModTag
{ 
	FString                                            Tag;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/Modio.ModioModStats
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FModioModStats
{ 
	int64_t                                            PopularityRankPosition;                                     // 0x0000   (0x0008)  
	int64_t                                            PopularityRankTotalMods;                                    // 0x0008   (0x0008)  
	int64_t                                            DownloadsTotal;                                             // 0x0010   (0x0008)  
	int64_t                                            SubscribersTotal;                                           // 0x0018   (0x0008)  
	int64_t                                            RatingTotal;                                                // 0x0020   (0x0008)  
	int64_t                                            RatingPositive;                                             // 0x0028   (0x0008)  
	int64_t                                            RatingNegative;                                             // 0x0030   (0x0008)  
	int64_t                                            RatingPercentagePositive;                                   // 0x0038   (0x0008)  
	float                                              RatingWeightedAggregate;                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            RatingDisplayText;                                          // 0x0048   (0x0010)  
};

/// Struct /Script/Modio.ModioModInfo
/// Size: 0x01D8 (472 bytes) (0x000000 - 0x0001D8) align 8 pad: 0x0000
struct FModioModInfo
{ 
	FModioModID                                        ModId;                                                      // 0x0000   (0x0008)  
	FString                                            ProfileName;                                                // 0x0008   (0x0010)  
	FString                                            ProfileSummary;                                             // 0x0018   (0x0010)  
	FString                                            ProfileDescription;                                         // 0x0028   (0x0010)  
	FString                                            ProfileDescriptionPlaintext;                                // 0x0038   (0x0010)  
	FString                                            ProfileUrl;                                                 // 0x0048   (0x0010)  
	FModioUser                                         ProfileSubmittedBy;                                         // 0x0058   (0x0040)  
	FDateTime                                          ProfileDateAdded;                                           // 0x0098   (0x0008)  
	FDateTime                                          ProfileDateUpdated;                                         // 0x00A0   (0x0008)  
	FDateTime                                          ProfileDateLive;                                            // 0x00A8   (0x0008)  
	EModioMaturityFlags                                ProfileMaturityOption;                                      // 0x00B0   (0x0001)  
	bool                                               bVisible;                                                   // 0x00B1   (0x0001)  
	EModioObjectVisibilityFlags                        Visibility;                                                 // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00B3   (0x0005)  MISSED
	FString                                            MetadataBlob;                                               // 0x00B8   (0x0010)  
	FModioFileMetadata                                 FileInfo;                                                   // 0x00C8   (0x0068)  
	TArray<FModioMetadata>                             MetadataKvp;                                                // 0x0130   (0x0010)  
	TArray<FModioModTag>                               Tags;                                                       // 0x0140   (0x0010)  
	int32_t                                            NumGalleryImages;                                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FModioYoutubeURLList                               YoutubeURLs;                                                // 0x0158   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0159   (0x000F)  MISSED
	FModioSketchfabURLList                             SketchfabURLs;                                              // 0x0168   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0169   (0x000F)  MISSED
	FModioModStats                                     Stats;                                                      // 0x0178   (0x0058)  
	EModioModServerSideStatus                          ModStatus;                                                  // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x01D1   (0x0007)  MISSED
};

/// Struct /Script/Modio.ModioModInfoList
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioModInfoList
{ 
	FModioPagedResult                                  PagedResult;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FModioModInfo>                              InternalList;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/Modio.ModioModTagInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioModTagInfo
{ 
	FString                                            TagGroupName;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    TagGroupValues;                                             // 0x0010   (0x0010)  
	bool                                               bAllowMultipleSelection;                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Modio.ModioModTagOptions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioModTagOptions
{ 
	FModioPagedResult                                  PagedResult;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FModioModTagInfo>                           InternalList;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/Modio.ModioErrorCode
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioErrorCode
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Modio.ModioModManagementEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FModioModManagementEvent
{ 
	FModioModID                                        ID;                                                         // 0x0000   (0x0008)  
	EModioModManagementEventType                       Event;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FModioErrorCode                                    Status;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/Modio.ModioOptionalModInfoList
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FModioOptionalModInfoList
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/Modio.ModioOptionalModInfo
/// Size: 0x01E0 (480 bytes) (0x000000 - 0x0001E0) align 8 pad: 0x0000
struct FModioOptionalModInfo
{ 
	unsigned char                                      UnknownData00_2[0x1E0];                                     // 0x0000   (0x01E0)  MISSED
};

/// Struct /Script/Modio.ModioOptionalGameInfo
/// Size: 0x0200 (512 bytes) (0x000000 - 0x000200) align 8 pad: 0x0000
struct FModioOptionalGameInfo
{ 
	unsigned char                                      UnknownData00_2[0x200];                                     // 0x0000   (0x0200)  MISSED
};

/// Struct /Script/Modio.ModioOptionalImage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FModioOptionalImage
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/Modio.ModioOptionalModTagOptions
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FModioOptionalModTagOptions
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/Modio.ModioOptionalTerms
/// Size: 0x00D8 (216 bytes) (0x000000 - 0x0000D8) align 8 pad: 0x0000
struct FModioOptionalTerms
{ 
	unsigned char                                      UnknownData00_2[0xD8];                                      // 0x0000   (0x00D8)  MISSED
};

/// Struct /Script/Modio.ModioOptionalModDependencyList
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FModioOptionalModDependencyList
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/Modio.ModioOptionalModID
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FModioOptionalModID
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/Modio.ModioOptionalUserList
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FModioOptionalUserList
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/Modio.ModioFilterParams
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 pad: 0x0000
struct FModioFilterParams
{ 
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/Modio.ModioAuthenticationParams
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FModioAuthenticationParams
{ 
	FString                                            AuthToken;                                                  // 0x0000   (0x0010)  
	FString                                            UserEmail;                                                  // 0x0010   (0x0010)  
	bool                                               bUserHasAcceptedTerms;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	SDK_UNDEFINED(80,1835) /* TMap<FString, FString> */ __um(ExtendedParameters);                                  // 0x0028   (0x0050)  
};

/// Struct /Script/Modio.ModioEmailAuthCode
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FModioEmailAuthCode
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/Modio.ModioEmailAddress
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FModioEmailAddress
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/Modio.ModioApiKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FModioApiKey
{ 
	FString                                            ApiKey;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Modio.ModioGameID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioGameID
{ 
	int64_t                                            GameId;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/Modio.ModioCreateModFileParams
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FModioCreateModFileParams
{ 
	FString                                            PathToModRootDirectory;                                     // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0010   (0x0068)  MISSED
};

/// Struct /Script/Modio.ModioCreateModParams
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FModioCreateModParams
{ 
	FString                                            PathToLogoFile;                                             // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Summary;                                                    // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x98];                                      // 0x0030   (0x0098)  MISSED
};

/// Struct /Script/Modio.ModioEditModParams
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FModioEditModParams
{ 
	unsigned char                                      UnknownData00_2[0xD0];                                      // 0x0000   (0x00D0)  MISSED
};

/// Struct /Script/Modio.ModioIcon
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FModioIcon
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            Original;                                                   // 0x0010   (0x0010)  
	FString                                            Thumb64x64;                                                 // 0x0020   (0x0010)  
	FString                                            Thumb128x128;                                               // 0x0030   (0x0010)  
	FString                                            Thumb256x256;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/Modio.ModioLogo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FModioLogo
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            Original;                                                   // 0x0010   (0x0010)  
	FString                                            Thumb320x180;                                               // 0x0020   (0x0010)  
	FString                                            Thumb640x360;                                               // 0x0030   (0x0010)  
	FString                                            Thumb1280x720;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/Modio.ModioHeaderImage
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioHeaderImage
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            Original;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/Modio.ModioTheme
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FModioTheme
{ 
	FString                                            Primary;                                                    // 0x0000   (0x0010)  
	FString                                            Dark;                                                       // 0x0010   (0x0010)  
	FString                                            Light;                                                      // 0x0020   (0x0010)  
	FString                                            Success;                                                    // 0x0030   (0x0010)  
	FString                                            Warning;                                                    // 0x0040   (0x0010)  
	FString                                            Danger;                                                     // 0x0050   (0x0010)  
};

/// Struct /Script/Modio.ModioGameStats
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FModioGameStats
{ 
	FModioGameID                                       GameId;                                                     // 0x0000   (0x0008)  
	int64_t                                            ModCountTotal;                                              // 0x0008   (0x0008)  
	int64_t                                            ModDownloadsToday;                                          // 0x0010   (0x0008)  
	int64_t                                            ModDownloadsTotal;                                          // 0x0018   (0x0008)  
	int64_t                                            ModDownloadsDailyAverage;                                   // 0x0020   (0x0008)  
	int64_t                                            ModSubscribersTotal;                                        // 0x0028   (0x0008)  
	int64_t                                            DateExpires;                                                // 0x0030   (0x0008)  
};

/// Struct /Script/Modio.ModioOtherUrl
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioOtherUrl
{ 
	FString                                            Label;                                                      // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/Modio.ModioGameInfo
/// Size: 0x01F8 (504 bytes) (0x000000 - 0x0001F8) align 8 pad: 0x0000
struct FModioGameInfo
{ 
	FModioGameID                                       GameId;                                                     // 0x0000   (0x0008)  
	FDateTime                                          DateAdded;                                                  // 0x0008   (0x0008)  
	FDateTime                                          DateUpdated;                                                // 0x0010   (0x0008)  
	FDateTime                                          DateLive;                                                   // 0x0018   (0x0008)  
	FString                                            UgcName;                                                    // 0x0020   (0x0010)  
	FModioIcon                                         Icon;                                                       // 0x0030   (0x0050)  
	FModioLogo                                         Logo;                                                       // 0x0080   (0x0050)  
	FModioHeaderImage                                  HeaderImage;                                                // 0x00D0   (0x0020)  
	FString                                            Name;                                                       // 0x00F0   (0x0010)  
	FString                                            Summary;                                                    // 0x0100   (0x0010)  
	FString                                            Instructions;                                               // 0x0110   (0x0010)  
	FString                                            InstructionsUrl;                                            // 0x0120   (0x0010)  
	FString                                            ProfileUrl;                                                 // 0x0130   (0x0010)  
	FModioTheme                                        Theme;                                                      // 0x0140   (0x0060)  
	FModioGameStats                                    Stats;                                                      // 0x01A0   (0x0038)  
	TArray<FModioOtherUrl>                             OtherUrls;                                                  // 0x01D8   (0x0010)  
	TArray<EModioModfilePlatform>                      Platforms;                                                  // 0x01E8   (0x0010)  
};

/// Struct /Script/Modio.ModioImageWrapper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FModioImageWrapper
{ 
	FString                                            ImagePath;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Modio.ModioInitializeOptions
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FModioInitializeOptions
{ 
	FModioGameID                                       GameId;                                                     // 0x0000   (0x0008)  
	FModioApiKey                                       ApiKey;                                                     // 0x0008   (0x0010)  
	EModioEnvironment                                  GameEnvironment;                                            // 0x0018   (0x0001)  
	EModioPortal                                       PortalInUse;                                                // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	SDK_UNDEFINED(80,1836) /* TMap<FString, FString> */ __um(ExtendedInitializationParameters);                    // 0x0020   (0x0050)  
	bool                                               bUseBackgroundThread;                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0071   (0x001F)  MISSED
};

/// Struct /Script/Modio.ModioModCollectionEntry
/// Size: 0x0208 (520 bytes) (0x000000 - 0x000208) align 8 pad: 0x0000
struct FModioModCollectionEntry
{ 
	unsigned char                                      UnknownData00_2[0x208];                                     // 0x0000   (0x0208)  MISSED
};

/// Struct /Script/Modio.ModioModCreationHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioModCreationHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Modio.ModioModDependency
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FModioModDependency
{ 
	FModioModID                                        ModId;                                                      // 0x0000   (0x0008)  
	FString                                            ModName;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/Modio.ModioModDependencyList
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioModDependencyList
{ 
	FModioPagedResult                                  PagedResult;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FModioModDependency>                        InternalList;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/Modio.ModioOptionalModProgressInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FModioOptionalModProgressInfo
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/Modio.ModioModProgressInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FModioModProgressInfo
{ 
	FModioModID                                        ID;                                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0008   (0x0048)  MISSED
};

/// Struct /Script/Modio.ModioReportParams
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FModioReportParams
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/Modio.ModioLink
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioLink
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
	bool                                               bRequired;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Modio.ModioTerms
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FModioTerms
{ 
	FString                                            AgreeButtonText;                                            // 0x0000   (0x0010)  
	FString                                            DisagreeButtonText;                                         // 0x0010   (0x0010)  
	FModioLink                                         WebsiteLink;                                                // 0x0020   (0x0028)  
	FModioLink                                         TermsLink;                                                  // 0x0048   (0x0028)  
	FModioLink                                         PrivacyLink;                                                // 0x0070   (0x0028)  
	FModioLink                                         ManageLink;                                                 // 0x0098   (0x0028)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Struct /Script/Modio.ModioUnsigned64
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FModioUnsigned64
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Modio.ModioOptionalUser
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FModioOptionalUser
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/Modio.ModioUserList
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FModioUserList
{ 
	FModioPagedResult                                  PagedResult;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FModioUser>                                 InternalList;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/Modio.ModioValidationError
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FModioValidationError
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
	FString                                            ValidationFailureDescription;                               // 0x0010   (0x0010)  
};

static_assert(sizeof(UModioCommonTypesLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioCreateModLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioEditModLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioErrorCodeLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioErrorConditionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioExampleLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioFilterParamsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioImageLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioInstallationOverride) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModCollectionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModDependenciesLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModInfoListLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModProgressInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioModTagOptionsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioOptionalLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioPopupBase) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UModioPopupContainer) == 0x0280); // 640 bytes (0x000260 - 0x000280)
static_assert(sizeof(UModioReportLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioSDKLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModioSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UModioSubsystem) == 0x0330); // 816 bytes (0x000030 - 0x000330)
static_assert(sizeof(UModioUnsigned64Library) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FModioYoutubeURLList) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FModioSketchfabURLList) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FModioPagedResult) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FModioModID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioUserID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioUser) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FModioFileMetadataID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioFileMetadata) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FModioMetadata) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FModioModTag) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModioModStats) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FModioModInfo) == 0x01D8); // 472 bytes (0x000000 - 0x0001D8)
static_assert(sizeof(FModioModInfoList) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FModioModTagInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FModioModTagOptions) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FModioErrorCode) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioModManagementEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModioOptionalModInfoList) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FModioOptionalModInfo) == 0x01E0); // 480 bytes (0x000000 - 0x0001E0)
static_assert(sizeof(FModioOptionalGameInfo) == 0x0200); // 512 bytes (0x000000 - 0x000200)
static_assert(sizeof(FModioOptionalImage) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModioOptionalModTagOptions) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FModioOptionalTerms) == 0x00D8); // 216 bytes (0x000000 - 0x0000D8)
static_assert(sizeof(FModioOptionalModDependencyList) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FModioOptionalModID) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModioOptionalUserList) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FModioFilterParams) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FModioAuthenticationParams) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FModioEmailAuthCode) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModioEmailAddress) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModioApiKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModioGameID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioCreateModFileParams) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FModioCreateModParams) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FModioEditModParams) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FModioIcon) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FModioLogo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FModioHeaderImage) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FModioTheme) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FModioGameStats) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FModioOtherUrl) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FModioGameInfo) == 0x01F8); // 504 bytes (0x000000 - 0x0001F8)
static_assert(sizeof(FModioImageWrapper) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModioInitializeOptions) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FModioModCollectionEntry) == 0x0208); // 520 bytes (0x000000 - 0x000208)
static_assert(sizeof(FModioModCreationHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioModDependency) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModioModDependencyList) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FModioOptionalModProgressInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FModioModProgressInfo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FModioReportParams) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FModioLink) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FModioTerms) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FModioUnsigned64) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FModioOptionalUser) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FModioUserList) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FModioValidationError) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UModioPopupContainer, PopupStack) == 0x0260);
static_assert(offsetof(UModioPopupContainer, PopupCache) == 0x0270);
static_assert(offsetof(UModioSettings, ApiKey) == 0x0030);
static_assert(offsetof(UModioSettings, ENVIRONMENT) == 0x0040);
static_assert(offsetof(UModioSettings, LogLevel) == 0x0041);
static_assert(offsetof(UModioSettings, DefaultPortal) == 0x0042);
static_assert(offsetof(FModioUser, UserID) == 0x0000);
static_assert(offsetof(FModioUser, Username) == 0x0008);
static_assert(offsetof(FModioUser, DateOnline) == 0x0018);
static_assert(offsetof(FModioUser, ProfileUrl) == 0x0020);
static_assert(offsetof(FModioUser, DisplayNamePortal) == 0x0030);
static_assert(offsetof(FModioFileMetadata, MetadataId) == 0x0000);
static_assert(offsetof(FModioFileMetadata, ModId) == 0x0008);
static_assert(offsetof(FModioFileMetadata, DateAdded) == 0x0010);
static_assert(offsetof(FModioFileMetadata, CurrentVirusScanStatus) == 0x0018);
static_assert(offsetof(FModioFileMetadata, CurrentVirusStatus) == 0x0019);
static_assert(offsetof(FModioFileMetadata, Filename) == 0x0028);
static_assert(offsetof(FModioFileMetadata, Version) == 0x0038);
static_assert(offsetof(FModioFileMetadata, Changelog) == 0x0048);
static_assert(offsetof(FModioFileMetadata, MetadataBlob) == 0x0058);
static_assert(offsetof(FModioMetadata, Key) == 0x0000);
static_assert(offsetof(FModioMetadata, Value) == 0x0010);
static_assert(offsetof(FModioModTag, Tag) == 0x0000);
static_assert(offsetof(FModioModStats, RatingDisplayText) == 0x0048);
static_assert(offsetof(FModioModInfo, ModId) == 0x0000);
static_assert(offsetof(FModioModInfo, ProfileName) == 0x0008);
static_assert(offsetof(FModioModInfo, ProfileSummary) == 0x0018);
static_assert(offsetof(FModioModInfo, ProfileDescription) == 0x0028);
static_assert(offsetof(FModioModInfo, ProfileDescriptionPlaintext) == 0x0038);
static_assert(offsetof(FModioModInfo, ProfileUrl) == 0x0048);
static_assert(offsetof(FModioModInfo, ProfileSubmittedBy) == 0x0058);
static_assert(offsetof(FModioModInfo, ProfileDateAdded) == 0x0098);
static_assert(offsetof(FModioModInfo, ProfileDateUpdated) == 0x00A0);
static_assert(offsetof(FModioModInfo, ProfileDateLive) == 0x00A8);
static_assert(offsetof(FModioModInfo, ProfileMaturityOption) == 0x00B0);
static_assert(offsetof(FModioModInfo, Visibility) == 0x00B2);
static_assert(offsetof(FModioModInfo, MetadataBlob) == 0x00B8);
static_assert(offsetof(FModioModInfo, FileInfo) == 0x00C8);
static_assert(offsetof(FModioModInfo, MetadataKvp) == 0x0130);
static_assert(offsetof(FModioModInfo, Tags) == 0x0140);
static_assert(offsetof(FModioModInfo, YoutubeURLs) == 0x0158);
static_assert(offsetof(FModioModInfo, SketchfabURLs) == 0x0168);
static_assert(offsetof(FModioModInfo, Stats) == 0x0178);
static_assert(offsetof(FModioModInfo, ModStatus) == 0x01D0);
static_assert(offsetof(FModioModInfoList, PagedResult) == 0x0000);
static_assert(offsetof(FModioModInfoList, InternalList) == 0x0018);
static_assert(offsetof(FModioModTagInfo, TagGroupName) == 0x0000);
static_assert(offsetof(FModioModTagInfo, TagGroupValues) == 0x0010);
static_assert(offsetof(FModioModTagOptions, PagedResult) == 0x0000);
static_assert(offsetof(FModioModTagOptions, InternalList) == 0x0018);
static_assert(offsetof(FModioModManagementEvent, ID) == 0x0000);
static_assert(offsetof(FModioModManagementEvent, Event) == 0x0008);
static_assert(offsetof(FModioModManagementEvent, Status) == 0x0010);
static_assert(offsetof(FModioAuthenticationParams, AuthToken) == 0x0000);
static_assert(offsetof(FModioAuthenticationParams, UserEmail) == 0x0010);
static_assert(offsetof(FModioApiKey, ApiKey) == 0x0000);
static_assert(offsetof(FModioCreateModFileParams, PathToModRootDirectory) == 0x0000);
static_assert(offsetof(FModioCreateModParams, PathToLogoFile) == 0x0000);
static_assert(offsetof(FModioCreateModParams, Name) == 0x0010);
static_assert(offsetof(FModioCreateModParams, Summary) == 0x0020);
static_assert(offsetof(FModioIcon, Filename) == 0x0000);
static_assert(offsetof(FModioIcon, Original) == 0x0010);
static_assert(offsetof(FModioIcon, Thumb64x64) == 0x0020);
static_assert(offsetof(FModioIcon, Thumb128x128) == 0x0030);
static_assert(offsetof(FModioIcon, Thumb256x256) == 0x0040);
static_assert(offsetof(FModioLogo, Filename) == 0x0000);
static_assert(offsetof(FModioLogo, Original) == 0x0010);
static_assert(offsetof(FModioLogo, Thumb320x180) == 0x0020);
static_assert(offsetof(FModioLogo, Thumb640x360) == 0x0030);
static_assert(offsetof(FModioLogo, Thumb1280x720) == 0x0040);
static_assert(offsetof(FModioHeaderImage, Filename) == 0x0000);
static_assert(offsetof(FModioHeaderImage, Original) == 0x0010);
static_assert(offsetof(FModioTheme, Primary) == 0x0000);
static_assert(offsetof(FModioTheme, Dark) == 0x0010);
static_assert(offsetof(FModioTheme, Light) == 0x0020);
static_assert(offsetof(FModioTheme, Success) == 0x0030);
static_assert(offsetof(FModioTheme, Warning) == 0x0040);
static_assert(offsetof(FModioTheme, Danger) == 0x0050);
static_assert(offsetof(FModioGameStats, GameId) == 0x0000);
static_assert(offsetof(FModioOtherUrl, Label) == 0x0000);
static_assert(offsetof(FModioOtherUrl, URL) == 0x0010);
static_assert(offsetof(FModioGameInfo, GameId) == 0x0000);
static_assert(offsetof(FModioGameInfo, DateAdded) == 0x0008);
static_assert(offsetof(FModioGameInfo, DateUpdated) == 0x0010);
static_assert(offsetof(FModioGameInfo, DateLive) == 0x0018);
static_assert(offsetof(FModioGameInfo, UgcName) == 0x0020);
static_assert(offsetof(FModioGameInfo, Icon) == 0x0030);
static_assert(offsetof(FModioGameInfo, Logo) == 0x0080);
static_assert(offsetof(FModioGameInfo, HeaderImage) == 0x00D0);
static_assert(offsetof(FModioGameInfo, Name) == 0x00F0);
static_assert(offsetof(FModioGameInfo, Summary) == 0x0100);
static_assert(offsetof(FModioGameInfo, Instructions) == 0x0110);
static_assert(offsetof(FModioGameInfo, InstructionsUrl) == 0x0120);
static_assert(offsetof(FModioGameInfo, ProfileUrl) == 0x0130);
static_assert(offsetof(FModioGameInfo, Theme) == 0x0140);
static_assert(offsetof(FModioGameInfo, Stats) == 0x01A0);
static_assert(offsetof(FModioGameInfo, OtherUrls) == 0x01D8);
static_assert(offsetof(FModioGameInfo, Platforms) == 0x01E8);
static_assert(offsetof(FModioImageWrapper, ImagePath) == 0x0000);
static_assert(offsetof(FModioInitializeOptions, GameId) == 0x0000);
static_assert(offsetof(FModioInitializeOptions, ApiKey) == 0x0008);
static_assert(offsetof(FModioInitializeOptions, GameEnvironment) == 0x0018);
static_assert(offsetof(FModioInitializeOptions, PortalInUse) == 0x0019);
static_assert(offsetof(FModioModDependency, ModId) == 0x0000);
static_assert(offsetof(FModioModDependency, ModName) == 0x0008);
static_assert(offsetof(FModioModDependencyList, PagedResult) == 0x0000);
static_assert(offsetof(FModioModDependencyList, InternalList) == 0x0018);
static_assert(offsetof(FModioModProgressInfo, ID) == 0x0000);
static_assert(offsetof(FModioLink, Text) == 0x0000);
static_assert(offsetof(FModioLink, URL) == 0x0010);
static_assert(offsetof(FModioTerms, AgreeButtonText) == 0x0000);
static_assert(offsetof(FModioTerms, DisagreeButtonText) == 0x0010);
static_assert(offsetof(FModioTerms, WebsiteLink) == 0x0020);
static_assert(offsetof(FModioTerms, TermsLink) == 0x0048);
static_assert(offsetof(FModioTerms, PrivacyLink) == 0x0070);
static_assert(offsetof(FModioTerms, ManageLink) == 0x0098);
static_assert(offsetof(FModioUserList, PagedResult) == 0x0000);
static_assert(offsetof(FModioUserList, InternalList) == 0x0018);
static_assert(offsetof(FModioValidationError, FieldName) == 0x0000);
static_assert(offsetof(FModioValidationError, ValidationFailureDescription) == 0x0010);
