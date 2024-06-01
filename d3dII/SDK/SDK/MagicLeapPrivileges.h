
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MagicLeapPrivileges.EMagicLeapPrivilege
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPrivilege : uint8_t
{
	EMagicLeapPrivilege__Invalid                                                     = 0,
	EMagicLeapPrivilege__BatteryInfo                                                 = 1,
	EMagicLeapPrivilege__CameraCapture                                               = 2,
	EMagicLeapPrivilege__ComputerVision                                              = 3,
	EMagicLeapPrivilege__WorldReconstruction                                         = 4,
	EMagicLeapPrivilege__InAppPurchase                                               = 5,
	EMagicLeapPrivilege__AudioCaptureMic                                             = 6,
	EMagicLeapPrivilege__DrmCertificates                                             = 7,
	EMagicLeapPrivilege__Occlusion                                                   = 8,
	EMagicLeapPrivilege__LowLatencyLightwear                                         = 9,
	EMagicLeapPrivilege__Internet                                                    = 10,
	EMagicLeapPrivilege__IdentityRead                                                = 11,
	EMagicLeapPrivilege__BackgroundDownload                                          = 12,
	EMagicLeapPrivilege__BackgroundUpload                                            = 13,
	EMagicLeapPrivilege__MediaDrm                                                    = 14,
	EMagicLeapPrivilege__Media                                                       = 15,
	EMagicLeapPrivilege__MediaMetadata                                               = 16,
	EMagicLeapPrivilege__PowerInfo                                                   = 17,
	EMagicLeapPrivilege__LocalAreaNetwork                                            = 18,
	EMagicLeapPrivilege__VoiceInput                                                  = 19,
	EMagicLeapPrivilege__Documents                                                   = 20,
	EMagicLeapPrivilege__ConnectBackgroundMusicService                               = 21,
	EMagicLeapPrivilege__RegisterBackgroundMusicService                              = 22,
	EMagicLeapPrivilege__PcfRead                                                     = 23,
	EMagicLeapPrivilege__PwFoundObjRead                                              = 23,
	EMagicLeapPrivilege__NormalNotificationsUsage                                    = 24,
	EMagicLeapPrivilege__MusicService                                                = 25,
	EMagicLeapPrivilege__ControllerPose                                              = 26,
	EMagicLeapPrivilege__GesturesSubscribe                                           = 27,
	EMagicLeapPrivilege__GesturesConfig                                              = 28,
	EMagicLeapPrivilege__AddressBookRead                                             = 29,
	EMagicLeapPrivilege__AddressBookWrite                                            = 30,
	EMagicLeapPrivilege__AddressBookBasicAccess                                      = 31,
	EMagicLeapPrivilege__CoarseLocation                                              = 32,
	EMagicLeapPrivilege__FineLocation                                                = 33,
	EMagicLeapPrivilege__HandMesh                                                    = 34,
	EMagicLeapPrivilege__WifiStatusRead                                              = 35,
	EMagicLeapPrivilege__SocialConnectionsInvitesAccess                              = 36,
	EMagicLeapPrivilege__SecureBrowserWindow                                         = 37
};

/// Class /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
	// bool RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, FDelegateProperty& ResultDelegate);                            // [0x1a393b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
	// bool RequestPrivilege(EMagicLeapPrivilege Privilege);                                                                    // [0x1a39330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
	// bool CheckPrivilege(EMagicLeapPrivilege Privilege);                                                                      // [0x1a39330] Final|Native|Static|Public|BlueprintCallable 
};

static_assert(sizeof(UMagicLeapPrivilegesFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
