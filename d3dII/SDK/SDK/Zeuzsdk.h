
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Zeuzsdk.EZeuzSessionType
/// Size: 0x01 (1 bytes)
enum class EZeuzSessionType : uint8_t
{
	EZeuzSessionType__ST_Developer                                                   = 0,
	EZeuzSessionType__ST_ApiKey                                                      = 1,
	EZeuzSessionType__ST_User                                                        = 2
};

/// Enum /Script/Zeuzsdk.ZeuzIDType
/// Size: 0x01 (1 bytes)
enum class ZeuzIDType : uint8_t
{
	ZeuzIDType__Invalid                                                              = 0,
	ZeuzIDType__Account                                                              = 1,
	ZeuzIDType__Proj                                                                 = 16,
	ZeuzIDType__Env                                                                  = 17,
	ZeuzIDType__User                                                                 = 18,
	ZeuzIDType__Developer                                                            = 19,
	ZeuzIDType__Team                                                                 = 20,
	ZeuzIDType__Session                                                              = 32,
	ZeuzIDType__TempFile                                                             = 49,
	ZeuzIDType__Lobby                                                                = 50,
	ZeuzIDType__MatchMaking                                                          = 51,
	ZeuzIDType__Message                                                              = 52,
	ZeuzIDType__Inbox                                                                = 53,
	ZeuzIDType__ConfigRule                                                           = 64,
	ZeuzIDType__APIKey                                                               = 99
};

/// Class /Script/Zeuzsdk.ZeuzApiAccount
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiAccount : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPS__DelegateSignature
	// void DelegateAccountTeamupdateBPS__DelegateSignature();                                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPF__DelegateSignature
	// void DelegateAccountTeamupdateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBP__DelegateSignature
	// void DelegateAccountTeamupdateBP__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPS__DelegateSignature
	// void DelegateAccountTeamgetBPS__DelegateSignature(FZeuzTeam Result);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPF__DelegateSignature
	// void DelegateAccountTeamgetBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBP__DelegateSignature
	// void DelegateAccountTeamgetBP__DelegateSignature(FZeuzTeam Result, FString Error);                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPS__DelegateSignature
	// void DelegateAccountTeamdeleteBPS__DelegateSignature();                                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPF__DelegateSignature
	// void DelegateAccountTeamdeleteBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBP__DelegateSignature
	// void DelegateAccountTeamdeleteBP__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPS__DelegateSignature
	// void DelegateAccountTeamcreateBPS__DelegateSignature(FString Result);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPF__DelegateSignature
	// void DelegateAccountTeamcreateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBP__DelegateSignature
	// void DelegateAccountTeamcreateBP__DelegateSignature(FString Result, FString Error);                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPS__DelegateSignature
	// void DelegateAccountQuotasetBPS__DelegateSignature(FZeuzAccountQuotaInfo& Result);                                       // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPF__DelegateSignature
	// void DelegateAccountQuotasetBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBP__DelegateSignature
	// void DelegateAccountQuotasetBP__DelegateSignature(FZeuzAccountQuotaInfo& Result, FString Error);                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPS__DelegateSignature
	// void DelegateAccountQuotagetBPS__DelegateSignature(FZeuzAccountQuotaInfo& Result);                                       // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPF__DelegateSignature
	// void DelegateAccountQuotagetBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBP__DelegateSignature
	// void DelegateAccountQuotagetBP__DelegateSignature(FZeuzAccountQuotaInfo& Result, FString Error);                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPS__DelegateSignature
	// void DelegateAccountProjectupdateBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPF__DelegateSignature
	// void DelegateAccountProjectupdateBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBP__DelegateSignature
	// void DelegateAccountProjectupdateBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPS__DelegateSignature
	// void DelegateAccountProjectsgetBPS__DelegateSignature(TArray<FZeuzProj>& Result);                                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPF__DelegateSignature
	// void DelegateAccountProjectsgetBPF__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBP__DelegateSignature
	// void DelegateAccountProjectsgetBP__DelegateSignature(TArray<FZeuzProj>& Result, FString Error);                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPS__DelegateSignature
	// void DelegateAccountProjectgetBPS__DelegateSignature(FZeuzProj Result);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPF__DelegateSignature
	// void DelegateAccountProjectgetBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBP__DelegateSignature
	// void DelegateAccountProjectgetBP__DelegateSignature(FZeuzProj Result, FString Error);                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPS__DelegateSignature
	// void DelegateAccountProjectdeleteBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPF__DelegateSignature
	// void DelegateAccountProjectdeleteBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBP__DelegateSignature
	// void DelegateAccountProjectdeleteBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPS__DelegateSignature
	// void DelegateAccountProjectcreateBPS__DelegateSignature(FString Result);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPF__DelegateSignature
	// void DelegateAccountProjectcreateBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBP__DelegateSignature
	// void DelegateAccountProjectcreateBP__DelegateSignature(FString Result, FString Error);                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPS__DelegateSignature
	// void DelegateAccountEnvupdateBPS__DelegateSignature();                                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPF__DelegateSignature
	// void DelegateAccountEnvupdateBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBP__DelegateSignature
	// void DelegateAccountEnvupdateBP__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPS__DelegateSignature
	// void DelegateAccountEnvsgetBPS__DelegateSignature(TArray<FZeuzEnv>& Result);                                             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPF__DelegateSignature
	// void DelegateAccountEnvsgetBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBP__DelegateSignature
	// void DelegateAccountEnvsgetBP__DelegateSignature(TArray<FZeuzEnv>& Result, FString Error);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPS__DelegateSignature
	// void DelegateAccountEnvserviceupdateBPS__DelegateSignature();                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPF__DelegateSignature
	// void DelegateAccountEnvserviceupdateBPF__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBP__DelegateSignature
	// void DelegateAccountEnvserviceupdateBP__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPS__DelegateSignature
	// void DelegateAccountEnvservicedeleteBPS__DelegateSignature();                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPF__DelegateSignature
	// void DelegateAccountEnvservicedeleteBPF__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBP__DelegateSignature
	// void DelegateAccountEnvservicedeleteBP__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPS__DelegateSignature
	// void DelegateAccountEnvgetBPS__DelegateSignature(FZeuzEnv Result);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPF__DelegateSignature
	// void DelegateAccountEnvgetBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBP__DelegateSignature
	// void DelegateAccountEnvgetBP__DelegateSignature(FZeuzEnv Result, FString Error);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPS__DelegateSignature
	// void DelegateAccountEnvdeleteBPS__DelegateSignature();                                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPF__DelegateSignature
	// void DelegateAccountEnvdeleteBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBP__DelegateSignature
	// void DelegateAccountEnvdeleteBP__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPS__DelegateSignature
	// void DelegateAccountEnvcreateBPS__DelegateSignature(FString Result);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPF__DelegateSignature
	// void DelegateAccountEnvcreateBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBP__DelegateSignature
	// void DelegateAccountEnvcreateBP__DelegateSignature(FString Result, FString Error);                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPS__DelegateSignature
	// void DelegateAccountDevquicksetupBPS__DelegateSignature(FZeuzAccountDevQuickSetupOut& Result);                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPF__DelegateSignature
	// void DelegateAccountDevquicksetupBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBP__DelegateSignature
	// void DelegateAccountDevquicksetupBP__DelegateSignature(FZeuzAccountDevQuickSetupOut& Result, FString Error);             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPS__DelegateSignature
	// void DelegateAccountDeveloperupdateBPS__DelegateSignature();                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPF__DelegateSignature
	// void DelegateAccountDeveloperupdateBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBP__DelegateSignature
	// void DelegateAccountDeveloperupdateBP__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPS__DelegateSignature
	// void DelegateAccountDevelopersgetBPS__DelegateSignature(TArray<FZeuzDeveloper>& Result);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPF__DelegateSignature
	// void DelegateAccountDevelopersgetBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBP__DelegateSignature
	// void DelegateAccountDevelopersgetBP__DelegateSignature(TArray<FZeuzDeveloper>& Result, FString Error);                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPS__DelegateSignature
	// void DelegateAccountDevelopersetpwhashBPS__DelegateSignature(FZeuzDeveloper Result);                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPF__DelegateSignature
	// void DelegateAccountDevelopersetpwhashBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBP__DelegateSignature
	// void DelegateAccountDevelopersetpwhashBP__DelegateSignature(FZeuzDeveloper Result, FString Error);                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPS__DelegateSignature
	// void DelegateAccountDeveloperrevokeBPS__DelegateSignature();                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPF__DelegateSignature
	// void DelegateAccountDeveloperrevokeBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBP__DelegateSignature
	// void DelegateAccountDeveloperrevokeBP__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature
	// void DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature();                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature
	// void DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature(FString Error);                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature
	// void DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature(FString Error);                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPS__DelegateSignature
	// void DelegateAccountDeveloperpasswordresetBPS__DelegateSignature();                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPF__DelegateSignature
	// void DelegateAccountDeveloperpasswordresetBPF__DelegateSignature(FString Error);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBP__DelegateSignature
	// void DelegateAccountDeveloperpasswordresetBP__DelegateSignature(FString Error);                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature
	// void DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature(bool Result);                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature
	// void DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature(FString Error);                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature
	// void DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature(bool Result, FString Error);                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPS__DelegateSignature
	// void DelegateAccountDeveloperinviteBPS__DelegateSignature(FString Result);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPF__DelegateSignature
	// void DelegateAccountDeveloperinviteBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBP__DelegateSignature
	// void DelegateAccountDeveloperinviteBP__DelegateSignature(FString Result, FString Error);                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPS__DelegateSignature
	// void DelegateAccountDevelopergetBPS__DelegateSignature(FZeuzDeveloper Result);                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPF__DelegateSignature
	// void DelegateAccountDevelopergetBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBP__DelegateSignature
	// void DelegateAccountDevelopergetBP__DelegateSignature(FZeuzDeveloper Result, FString Error);                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPS__DelegateSignature
	// void DelegateAccountDevelopercreatepwhashBPS__DelegateSignature(FZeuzDeveloper Result);                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPF__DelegateSignature
	// void DelegateAccountDevelopercreatepwhashBPF__DelegateSignature(FString Error);                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBP__DelegateSignature
	// void DelegateAccountDevelopercreatepwhashBP__DelegateSignature(FZeuzDeveloper Result, FString Error);                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPS__DelegateSignature
	// void DelegateAccountDevelopercreateBPS__DelegateSignature(FString Result);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPF__DelegateSignature
	// void DelegateAccountDevelopercreateBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBP__DelegateSignature
	// void DelegateAccountDevelopercreateBP__DelegateSignature(FString Result, FString Error);                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPS__DelegateSignature
	// void DelegateAccountAccountupdateBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPF__DelegateSignature
	// void DelegateAccountAccountupdateBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBP__DelegateSignature
	// void DelegateAccountAccountupdateBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPS__DelegateSignature
	// void DelegateAccountAccountgetBPS__DelegateSignature(FZeuzAccount Result);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPF__DelegateSignature
	// void DelegateAccountAccountgetBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBP__DelegateSignature
	// void DelegateAccountAccountgetBP__DelegateSignature(FZeuzAccount Result, FString Error);                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPS__DelegateSignature
	// void DelegateAccountAccountcreateBPS__DelegateSignature(FString Result);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPF__DelegateSignature
	// void DelegateAccountAccountcreateBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBP__DelegateSignature
	// void DelegateAccountAccountcreateBP__DelegateSignature(FString Result, FString Error);                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountTeamupdateBP
	// void AccountTeamupdateBP(FZeuzTeam In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xade4f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountTeamgetBP
	// void AccountTeamgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xade1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountTeamdeleteBP
	// void AccountTeamdeleteBP(FZeuzAccountTeamDeleteIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadded0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountTeamcreateBP
	// void AccountTeamcreateBP(FZeuzAccountTeamCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaddb00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountQuotasetBP
	// void AccountQuotasetBP(FZeuzAccountQuotaInfo& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadd810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountQuotagetBP
	// void AccountQuotagetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadd4f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountProjectupdateBP
	// void AccountProjectupdateBP(FZeuzProj In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadcc90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountProjectsgetBP
	// void AccountProjectsgetBP(TArray<FString>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadc980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountProjectgetBP
	// void AccountProjectgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadc660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountProjectdeleteBP
	// void AccountProjectdeleteBP(FZeuzAccountProjectDeleteIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadc360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountProjectcreateBP
	// void AccountProjectcreateBP(FZeuzAccountProjectCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadbfd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvupdateBP
	// void AccountEnvupdateBP(FZeuzEnv In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadb6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvsgetBP
	// void AccountEnvsgetBP(TArray<FString>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadb3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvserviceupdateBP
	// void AccountEnvserviceupdateBP(FZeuzServiceCfg In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadb010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvservicedeleteBP
	// void AccountEnvservicedeleteBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xadacf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvgetBP
	// void AccountEnvgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xada9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvdeleteBP
	// void AccountEnvdeleteBP(FZeuzAccountEnvDeleteIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xada6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountEnvcreateBP
	// void AccountEnvcreateBP(FZeuzAccountEnvCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xada340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDevquicksetupBP
	// void AccountDevquicksetupBP(FZeuzAccountDevQuickSetupIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xada020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDeveloperupdateBP
	// void AccountDeveloperupdateBP(FZeuzDeveloper In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad9630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDevelopersgetBP
	// void AccountDevelopersgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad9310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDevelopersetpwhashBP
	// void AccountDevelopersetpwhashBP(FZeuzAccountDeveloperSetPwHashIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad9010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDeveloperrevokeBP
	// void AccountDeveloperrevokeBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad8cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetrequestBP
	// void AccountDeveloperpasswordresetrequestBP(FZeuzAccountDeveloperPasswordResetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad89f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetBP
	// void AccountDeveloperpasswordresetBP(FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad86c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDeveloperispasswordresethashexpiredBP
	// void AccountDeveloperispasswordresethashexpiredBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad83a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDeveloperinviteBP
	// void AccountDeveloperinviteBP(FZeuzAccountDeveloperCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad7fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDevelopergetBP
	// void AccountDevelopergetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad7cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDevelopercreatepwhashBP
	// void AccountDevelopercreatepwhashBP(FZeuzAccountDeveloperCreatePwHashIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad7990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountDevelopercreateBP
	// void AccountDevelopercreateBP(FZeuzAccountDeveloperCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad75d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountAccountupdateBP
	// void AccountAccountupdateBP(FZeuzAccount In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad72e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountAccountgetBP
	// void AccountAccountgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad6fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAccount.AccountAccountcreateBP
	// void AccountAccountcreateBP(FZeuzAccountCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xad6ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiAdmin
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiAdmin : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPS__DelegateSignature
	// void DelegateAdminStatsBPS__DelegateSignature(FZeuzAdminStatsOut& Result);                                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPF__DelegateSignature
	// void DelegateAdminStatsBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBP__DelegateSignature
	// void DelegateAdminStatsBP__DelegateSignature(FZeuzAdminStatsOut& Result, FString Error);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPS__DelegateSignature
	// void DelegateAdminProjectsBPS__DelegateSignature(TArray<FZeuzProj>& Result);                                             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPF__DelegateSignature
	// void DelegateAdminProjectsBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBP__DelegateSignature
	// void DelegateAdminProjectsBP__DelegateSignature(TArray<FZeuzProj>& Result, FString Error);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPS__DelegateSignature
	// void DelegateAdminLogsBPS__DelegateSignature(FZeuzLogsearchOut Result);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPF__DelegateSignature
	// void DelegateAdminLogsBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBP__DelegateSignature
	// void DelegateAdminLogsBP__DelegateSignature(FZeuzLogsearchOut Result, FString Error);                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPS__DelegateSignature
	// void DelegateAdminItemsBPS__DelegateSignature(FZeuzAdminItemsOut& Result);                                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPF__DelegateSignature
	// void DelegateAdminItemsBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBP__DelegateSignature
	// void DelegateAdminItemsBP__DelegateSignature(FZeuzAdminItemsOut& Result, FString Error);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPS__DelegateSignature
	// void DelegateAdminGetquotaBPS__DelegateSignature(int32_t Result);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPF__DelegateSignature
	// void DelegateAdminGetquotaBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBP__DelegateSignature
	// void DelegateAdminGetquotaBP__DelegateSignature(int32_t Result, FString Error);                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPS__DelegateSignature
	// void DelegateAdminEnvironmentsBPS__DelegateSignature(TArray<FZeuzEnv>& Result);                                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPF__DelegateSignature
	// void DelegateAdminEnvironmentsBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBP__DelegateSignature
	// void DelegateAdminEnvironmentsBP__DelegateSignature(TArray<FZeuzEnv>& Result, FString Error);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPS__DelegateSignature
	// void DelegateAdminDevelopersBPS__DelegateSignature(TArray<FZeuzDeveloper>& Result);                                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPF__DelegateSignature
	// void DelegateAdminDevelopersBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBP__DelegateSignature
	// void DelegateAdminDevelopersBP__DelegateSignature(TArray<FZeuzDeveloper>& Result, FString Error);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPS__DelegateSignature
	// void DelegateAdminCountresourcesperaccBPS__DelegateSignature(TArray<FZeuzAdminCountResoucesPerAccountOut>& Result);      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPF__DelegateSignature
	// void DelegateAdminCountresourcesperaccBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBP__DelegateSignature
	// void DelegateAdminCountresourcesperaccBP__DelegateSignature(TArray<FZeuzAdminCountResoucesPerAccountOut>& Result, FString Error); // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPS__DelegateSignature
	// void DelegateAdminCountresourcesBPS__DelegateSignature(int32_t Result);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPF__DelegateSignature
	// void DelegateAdminCountresourcesBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBP__DelegateSignature
	// void DelegateAdminCountresourcesBP__DelegateSignature(int32_t Result, FString Error);                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPS__DelegateSignature
	// void DelegateAdminAccountsBPS__DelegateSignature(TArray<FZeuzAccount>& Result);                                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPF__DelegateSignature
	// void DelegateAdminAccountsBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBP__DelegateSignature
	// void DelegateAdminAccountsBP__DelegateSignature(TArray<FZeuzAccount>& Result, FString Error);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminStatsBP
	// void AdminStatsBP(FZeuzAdminStatsIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae3a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminProjectsBP
	// void AdminProjectsBP(FZeuzAdminAccountIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae3790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminLogsBP
	// void AdminLogsBP(FZeuzAdminLogsIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae3460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminItemsBP
	// void AdminItemsBP(FZeuzAdminItemsIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae3160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminGetquotaBP
	// void AdminGetquotaBP(FZeuzAdminTestpoolIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae2e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminEnvironmentsBP
	// void AdminEnvironmentsBP(FZeuzAdminEnvIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae2b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminDevelopersBP
	// void AdminDevelopersBP(FZeuzAdminAccountIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae2890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesperaccBP
	// void AdminCountresourcesperaccBP(FZeuzAdminTestpoolIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae25a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesBP
	// void AdminCountresourcesBP(FZeuzAdminCountResoucesIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae22b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAdmin.AdminAccountsBP
	// void AdminAccountsBP(FZeuzAdminAccountsIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae1fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiAllocation
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiAllocation : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPS__DelegateSignature
	// void DelegateAllocationUpdateBPS__DelegateSignature(FZeuzAllocationInfo& Result);                                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPF__DelegateSignature
	// void DelegateAllocationUpdateBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBP__DelegateSignature
	// void DelegateAllocationUpdateBP__DelegateSignature(FZeuzAllocationInfo& Result, FString Error);                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPS__DelegateSignature
	// void DelegateAllocationRequestServicesBPS__DelegateSignature(TArray<FZeuzAllocationPayloadInfo>& Result);                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPF__DelegateSignature
	// void DelegateAllocationRequestServicesBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBP__DelegateSignature
	// void DelegateAllocationRequestServicesBP__DelegateSignature(TArray<FZeuzAllocationPayloadInfo>& Result, FString Error);  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPS__DelegateSignature
	// void DelegateAllocationGetBPS__DelegateSignature(FZeuzAllocationGetOut& Result);                                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPF__DelegateSignature
	// void DelegateAllocationGetBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBP__DelegateSignature
	// void DelegateAllocationGetBP__DelegateSignature(FZeuzAllocationGetOut& Result, FString Error);                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPS__DelegateSignature
	// void DelegateAllocationCreateBPS__DelegateSignature(FZeuzAllocationInfo& Result);                                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPF__DelegateSignature
	// void DelegateAllocationCreateBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBP__DelegateSignature
	// void DelegateAllocationCreateBP__DelegateSignature(FZeuzAllocationInfo& Result, FString Error);                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.AllocationUpdateBP
	// void AllocationUpdateBP(FZeuzAllocationUpdateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae83a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.AllocationRequestServicesBP
	// void AllocationRequestServicesBP(FZeuzAllocationRequestServiceIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae8070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.AllocationGetBP
	// void AllocationGetBP(FZeuzAllocationGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae7d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAllocation.AllocationCreateBP
	// void AllocationCreateBP(FZeuzAllocationCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae79e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiApikey
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiApikey : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPS__DelegateSignature
	// void DelegateApikeyUpdateBPS__DelegateSignature(FZeuzAPIKey Result);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPF__DelegateSignature
	// void DelegateApikeyUpdateBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBP__DelegateSignature
	// void DelegateApikeyUpdateBP__DelegateSignature(FZeuzAPIKey Result, FString Error);                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPS__DelegateSignature
	// void DelegateApikeySetpwhashBPS__DelegateSignature(FZeuzAPIKey Result);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPF__DelegateSignature
	// void DelegateApikeySetpwhashBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBP__DelegateSignature
	// void DelegateApikeySetpwhashBP__DelegateSignature(FZeuzAPIKey Result, FString Error);                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPS__DelegateSignature
	// void DelegateApikeyRevokeBPS__DelegateSignature();                                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPF__DelegateSignature
	// void DelegateApikeyRevokeBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBP__DelegateSignature
	// void DelegateApikeyRevokeBP__DelegateSignature(FString Error);                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPS__DelegateSignature
	// void DelegateApikeyGetBPS__DelegateSignature(TArray<FZeuzAPIKey>& Result);                                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPF__DelegateSignature
	// void DelegateApikeyGetBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBP__DelegateSignature
	// void DelegateApikeyGetBP__DelegateSignature(TArray<FZeuzAPIKey>& Result, FString Error);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPS__DelegateSignature
	// void DelegateApikeyGetallBPS__DelegateSignature(TArray<FZeuzAPIKey>& Result);                                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPF__DelegateSignature
	// void DelegateApikeyGetallBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBP__DelegateSignature
	// void DelegateApikeyGetallBP__DelegateSignature(TArray<FZeuzAPIKey>& Result, FString Error);                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPS__DelegateSignature
	// void DelegateApikeyGenerateBPS__DelegateSignature(FZeuzAPIKey Result);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPF__DelegateSignature
	// void DelegateApikeyGenerateBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBP__DelegateSignature
	// void DelegateApikeyGenerateBP__DelegateSignature(FZeuzAPIKey Result, FString Error);                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPS__DelegateSignature
	// void DelegateApikeyDeleteBPS__DelegateSignature();                                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPF__DelegateSignature
	// void DelegateApikeyDeleteBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBP__DelegateSignature
	// void DelegateApikeyDeleteBP__DelegateSignature(FString Error);                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPS__DelegateSignature
	// void DelegateApikeyCreateBPS__DelegateSignature(FZeuzAPIKey Result);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPF__DelegateSignature
	// void DelegateApikeyCreateBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBP__DelegateSignature
	// void DelegateApikeyCreateBP__DelegateSignature(FZeuzAPIKey Result, FString Error);                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyUpdateBP
	// void ApikeyUpdateBP(FZeuzAPIKey In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaea0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeySetpwhashBP
	// void ApikeySetpwhashBP(FZeuzAPIKeyPwHashIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae9db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyRevokeBP
	// void ApikeyRevokeBP(FZeuzAPIKeyDeleteIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae9ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyGetBP
	// void ApikeyGetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae9480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyGetallBP
	// void ApikeyGetallBP(FZeuzAPIKeyGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae97a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyGenerateBP
	// void ApikeyGenerateBP(FZeuzAPIKeyGenerateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae9180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyDeleteBP
	// void ApikeyDeleteBP(FZeuzAPIKeyDeleteIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae8e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiApikey.ApikeyCreateBP
	// void ApikeyCreateBP(FZeuzAPIKey In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xae86b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiAuth
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiAuth : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPS__DelegateSignature
	// void DelegateAuthSessiondelBPS__DelegateSignature();                                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPF__DelegateSignature
	// void DelegateAuthSessiondelBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBP__DelegateSignature
	// void DelegateAuthSessiondelBP__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPS__DelegateSignature
	// void DelegateAuthLogoutBPS__DelegateSignature();                                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPF__DelegateSignature
	// void DelegateAuthLogoutBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBP__DelegateSignature
	// void DelegateAuthLogoutBP__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPS__DelegateSignature
	// void DelegateAuthLoginBPS__DelegateSignature(FZeuzAuthLoginResult Result);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPF__DelegateSignature
	// void DelegateAuthLoginBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBP__DelegateSignature
	// void DelegateAuthLoginBP__DelegateSignature(FZeuzAuthLoginResult Result, FString Error);                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPS__DelegateSignature
	// void DelegateAuthCheckBPS__DelegateSignature(FZeuzTimestamp Result);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPF__DelegateSignature
	// void DelegateAuthCheckBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBP__DelegateSignature
	// void DelegateAuthCheckBP__DelegateSignature(FZeuzTimestamp Result, FString Error);                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPS__DelegateSignature
	// void DelegateAuthActivesessionsgetBPS__DelegateSignature(TArray<FZeuzSession>& Result);                                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPF__DelegateSignature
	// void DelegateAuthActivesessionsgetBPF__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBP__DelegateSignature
	// void DelegateAuthActivesessionsgetBP__DelegateSignature(TArray<FZeuzSession>& Result, FString Error);                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiAuth.AuthSessiondelBP
	// void AuthSessiondelBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaee070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAuth.AuthLogoutBP
	// void AuthLogoutBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaedd50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAuth.AuthLoginBP
	// void AuthLoginBP(FZeuzAuthLoginIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaeda30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAuth.AuthCheckBP
	// void AuthCheckBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaed710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiAuth.AuthActivesessionsgetBP
	// void AuthActivesessionsgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaed3f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiEcho
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiEcho : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiEcho.Echo4BP
	// void Echo4BP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaeec40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.Echo3BP
	// void Echo3BP(FZeuzEcho3In& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaee970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.Echo2BP
	// void Echo2BP(FZeuzEcho2In& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaee680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.Echo1BP
	// void Echo1BP(FZeuzEchoIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaee390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPS__DelegateSignature
	// void DelegateEcho4BPS__DelegateSignature(FString Result);                                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPF__DelegateSignature
	// void DelegateEcho4BPF__DelegateSignature(FString Error);                                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho4BP__DelegateSignature
	// void DelegateEcho4BP__DelegateSignature(FString Result, FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPS__DelegateSignature
	// void DelegateEcho3BPS__DelegateSignature(FZeuzEchoOut& Result);                                                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPF__DelegateSignature
	// void DelegateEcho3BPF__DelegateSignature(FString Error);                                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho3BP__DelegateSignature
	// void DelegateEcho3BP__DelegateSignature(FZeuzEchoOut& Result, FString Error);                                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPS__DelegateSignature
	// void DelegateEcho2BPS__DelegateSignature(FZeuzEcho2Out& Result);                                                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPF__DelegateSignature
	// void DelegateEcho2BPF__DelegateSignature(FString Error);                                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho2BP__DelegateSignature
	// void DelegateEcho2BP__DelegateSignature(FZeuzEcho2Out& Result, FString Error);                                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPS__DelegateSignature
	// void DelegateEcho1BPS__DelegateSignature(FZeuzEchoOut& Result);                                                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPF__DelegateSignature
	// void DelegateEcho1BPF__DelegateSignature(FString Error);                                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiEcho.DelegateEcho1BP__DelegateSignature
	// void DelegateEcho1BP__DelegateSignature(FZeuzEchoOut& Result, FString Error);                                            // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Class /Script/Zeuzsdk.ZeuzApiImagemanager
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiImagemanager : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushFileUrlBP
	// void ImagemanagerPushFileUrlBP(FZeuzImageManagerPresignedFileUrlIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf03f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushBP
	// void ImagemanagerPushBP(FZeuzImageManagerManifest& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf0070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullFileUrlBP
	// void ImagemanagerPullFileUrlBP(FZeuzImageManagerPresignedFileUrlIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaefd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullBP
	// void ImagemanagerPullBP(FZeuzImageManagerPullInput& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaefa80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPublishBP
	// void ImagemanagerPublishBP(FZeuzImageManagerPublishInput& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaef780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerListBP
	// void ImagemanagerListBP(FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaef500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerGetpublishstateBP
	// void ImagemanagerGetpublishstateBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaef1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.ImagemanagerDiscardBP
	// void ImagemanagerDiscardBP(FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaeef60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPS__DelegateSignature
	// void DelegateImagemanagerPushFileUrlBPS__DelegateSignature(FString Result);                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPF__DelegateSignature
	// void DelegateImagemanagerPushFileUrlBPF__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBP__DelegateSignature
	// void DelegateImagemanagerPushFileUrlBP__DelegateSignature(FString Result, FString Error);                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPS__DelegateSignature
	// void DelegateImagemanagerPushBPS__DelegateSignature(FZeuzImageManagerPushPullOutput& Result);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPF__DelegateSignature
	// void DelegateImagemanagerPushBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBP__DelegateSignature
	// void DelegateImagemanagerPushBP__DelegateSignature(FZeuzImageManagerPushPullOutput& Result, FString Error);              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPS__DelegateSignature
	// void DelegateImagemanagerPullFileUrlBPS__DelegateSignature(FString Result);                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPF__DelegateSignature
	// void DelegateImagemanagerPullFileUrlBPF__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBP__DelegateSignature
	// void DelegateImagemanagerPullFileUrlBP__DelegateSignature(FString Result, FString Error);                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPS__DelegateSignature
	// void DelegateImagemanagerPullBPS__DelegateSignature(FZeuzImageManagerPushPullOutput& Result);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPF__DelegateSignature
	// void DelegateImagemanagerPullBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBP__DelegateSignature
	// void DelegateImagemanagerPullBP__DelegateSignature(FZeuzImageManagerPushPullOutput& Result, FString Error);              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPS__DelegateSignature
	// void DelegateImagemanagerPublishBPS__DelegateSignature(FZeuzImagemanagerPublishState& Result);                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPF__DelegateSignature
	// void DelegateImagemanagerPublishBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBP__DelegateSignature
	// void DelegateImagemanagerPublishBP__DelegateSignature(FZeuzImagemanagerPublishState& Result, FString Error);             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPS__DelegateSignature
	// void DelegateImagemanagerListBPS__DelegateSignature(TArray<FZeuzImageManagerListEntry>& Result);                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPF__DelegateSignature
	// void DelegateImagemanagerListBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBP__DelegateSignature
	// void DelegateImagemanagerListBP__DelegateSignature(TArray<FZeuzImageManagerListEntry>& Result, FString Error);           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPS__DelegateSignature
	// void DelegateImagemanagerGetpublishstateBPS__DelegateSignature(FZeuzImagemanagerPublishState& Result);                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPF__DelegateSignature
	// void DelegateImagemanagerGetpublishstateBPF__DelegateSignature(FString Error);                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBP__DelegateSignature
	// void DelegateImagemanagerGetpublishstateBP__DelegateSignature(FZeuzImagemanagerPublishState& Result, FString Error);     // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPS__DelegateSignature
	// void DelegateImagemanagerDiscardBPS__DelegateSignature();                                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPF__DelegateSignature
	// void DelegateImagemanagerDiscardBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBP__DelegateSignature
	// void DelegateImagemanagerDiscardBP__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiKVStore
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiKVStore : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.KVStorePutBP
	// void KVStorePutBP(FZeuzKVStorePutIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf5290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.KVStoreGetBP
	// void KVStoreGetBP(FZeuzKVStoreKey& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf4f90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.KVStoreDelBP
	// void KVStoreDelBP(FZeuzKVStoreDelIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf4c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPS__DelegateSignature
	// void DelegateKVStorePutBPS__DelegateSignature();                                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPF__DelegateSignature
	// void DelegateKVStorePutBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBP__DelegateSignature
	// void DelegateKVStorePutBP__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPS__DelegateSignature
	// void DelegateKVStoreGetBPS__DelegateSignature(FZeuzKVStoreKVEntry& Result);                                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPF__DelegateSignature
	// void DelegateKVStoreGetBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBP__DelegateSignature
	// void DelegateKVStoreGetBP__DelegateSignature(FZeuzKVStoreKVEntry& Result, FString Error);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPS__DelegateSignature
	// void DelegateKVStoreDelBPS__DelegateSignature();                                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPF__DelegateSignature
	// void DelegateKVStoreDelBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBP__DelegateSignature
	// void DelegateKVStoreDelBP__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiLobby
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiLobby : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyUserBP
	// void LobbyUserBP(FZeuzLobbyUserIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf7250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyUpdateBP
	// void LobbyUpdateBP(FZeuzLobbyStateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf6ee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyStartBP
	// void LobbyStartBP(FZeuzLobbyStartDestroy& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf6be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyRefreshBP
	// void LobbyRefreshBP(FZeuzLobbyRefresh& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf68d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyQueryBP
	// void LobbyQueryBP(FZeuzLobbyQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf6590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyLeaveBP
	// void LobbyLeaveBP(FZeuzLobbyJoin& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf6270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyKickBP
	// void LobbyKickBP(FZeuzLobbyKick& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf5f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyJoinBP
	// void LobbyJoinBP(FZeuzLobbyJoin& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf5c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyDestroyBP
	// void LobbyDestroyBP(FZeuzLobbyStartDestroy& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf5920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.LobbyCreateBP
	// void LobbyCreateBP(FZeuzLobbyStateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf55b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPS__DelegateSignature
	// void DelegateLobbyUserBPS__DelegateSignature(FZeuzLobbyUsersOut& Result);                                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPF__DelegateSignature
	// void DelegateLobbyUserBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBP__DelegateSignature
	// void DelegateLobbyUserBP__DelegateSignature(FZeuzLobbyUsersOut& Result, FString Error);                                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPS__DelegateSignature
	// void DelegateLobbyUpdateBPS__DelegateSignature(FZeuzLobbyUsersOut& Result);                                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPF__DelegateSignature
	// void DelegateLobbyUpdateBPF__DelegateSignature(FString Error);                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBP__DelegateSignature
	// void DelegateLobbyUpdateBP__DelegateSignature(FZeuzLobbyUsersOut& Result, FString Error);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPS__DelegateSignature
	// void DelegateLobbyStartBPS__DelegateSignature(FZeuzLobbyServerConnect& Result);                                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPF__DelegateSignature
	// void DelegateLobbyStartBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBP__DelegateSignature
	// void DelegateLobbyStartBP__DelegateSignature(FZeuzLobbyServerConnect& Result, FString Error);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPS__DelegateSignature
	// void DelegateLobbyRefreshBPS__DelegateSignature(FZeuzLobbyUsersOut& Result);                                             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPF__DelegateSignature
	// void DelegateLobbyRefreshBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBP__DelegateSignature
	// void DelegateLobbyRefreshBP__DelegateSignature(FZeuzLobbyUsersOut& Result, FString Error);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPS__DelegateSignature
	// void DelegateLobbyQueryBPS__DelegateSignature(FZeuzLobbyQueryOut& Result);                                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPF__DelegateSignature
	// void DelegateLobbyQueryBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBP__DelegateSignature
	// void DelegateLobbyQueryBP__DelegateSignature(FZeuzLobbyQueryOut& Result, FString Error);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPS__DelegateSignature
	// void DelegateLobbyLeaveBPS__DelegateSignature();                                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPF__DelegateSignature
	// void DelegateLobbyLeaveBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBP__DelegateSignature
	// void DelegateLobbyLeaveBP__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPS__DelegateSignature
	// void DelegateLobbyKickBPS__DelegateSignature();                                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPF__DelegateSignature
	// void DelegateLobbyKickBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBP__DelegateSignature
	// void DelegateLobbyKickBP__DelegateSignature(FString Error);                                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPS__DelegateSignature
	// void DelegateLobbyJoinBPS__DelegateSignature(FZeuzLobbyUsersOut& Result);                                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPF__DelegateSignature
	// void DelegateLobbyJoinBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBP__DelegateSignature
	// void DelegateLobbyJoinBP__DelegateSignature(FZeuzLobbyUsersOut& Result, FString Error);                                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPS__DelegateSignature
	// void DelegateLobbyDestroyBPS__DelegateSignature();                                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPF__DelegateSignature
	// void DelegateLobbyDestroyBPF__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBP__DelegateSignature
	// void DelegateLobbyDestroyBP__DelegateSignature(FString Error);                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPS__DelegateSignature
	// void DelegateLobbyCreateBPS__DelegateSignature(FZeuzLobbyUsersOut& Result);                                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPF__DelegateSignature
	// void DelegateLobbyCreateBPF__DelegateSignature(FString Error);                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBP__DelegateSignature
	// void DelegateLobbyCreateBP__DelegateSignature(FZeuzLobbyUsersOut& Result, FString Error);                                // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Class /Script/Zeuzsdk.ZeuzApiLocality
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiLocality : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityRegionUpdateBP
	// void LocalityRegionUpdateBP(FZeuzRegion In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafa4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityRegionRemoveBP
	// void LocalityRegionRemoveBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafa1c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityRegionGetBP
	// void LocalityRegionGetBP(FZeuzLocalityRegionGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf9e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityRegionCreateBP
	// void LocalityRegionCreateBP(FZeuzRegion In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf9760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityProviderUpdateBP
	// void LocalityProviderUpdateBP(FZeuzProvider In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf9080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityProviderRemoveBP
	// void LocalityProviderRemoveBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf8d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityProviderGetBP
	// void LocalityProviderGetBP(FZeuzLocalityProviderGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf8a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityProviderCreateBP
	// void LocalityProviderCreateBP(FZeuzProvider In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf8330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityLocationUpdateBP
	// void LocalityLocationUpdateBP(FZeuzLocation In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf8020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityLocationRemoveBP
	// void LocalityLocationRemoveBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf7d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityLocationGetBP
	// void LocalityLocationGetBP(FZeuzLocalityLocationGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf7920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.LocalityLocationCreateBP
	// void LocalityLocationCreateBP(FZeuzLocation In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaf7610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPS__DelegateSignature
	// void DelegateLocalityRegionUpdateBPS__DelegateSignature(FZeuzRegion Result);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPF__DelegateSignature
	// void DelegateLocalityRegionUpdateBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBP__DelegateSignature
	// void DelegateLocalityRegionUpdateBP__DelegateSignature(FZeuzRegion Result, FString Error);                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPS__DelegateSignature
	// void DelegateLocalityRegionRemoveBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPF__DelegateSignature
	// void DelegateLocalityRegionRemoveBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBP__DelegateSignature
	// void DelegateLocalityRegionRemoveBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPS__DelegateSignature
	// void DelegateLocalityRegionGetBPS__DelegateSignature(TArray<FZeuzRegion>& Result);                                       // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPF__DelegateSignature
	// void DelegateLocalityRegionGetBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBP__DelegateSignature
	// void DelegateLocalityRegionGetBP__DelegateSignature(TArray<FZeuzRegion>& Result, FString Error);                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPS__DelegateSignature
	// void DelegateLocalityRegionCreateBPS__DelegateSignature(FZeuzRegion Result);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPF__DelegateSignature
	// void DelegateLocalityRegionCreateBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBP__DelegateSignature
	// void DelegateLocalityRegionCreateBP__DelegateSignature(FZeuzRegion Result, FString Error);                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPS__DelegateSignature
	// void DelegateLocalityProviderUpdateBPS__DelegateSignature(FZeuzProvider Result);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPF__DelegateSignature
	// void DelegateLocalityProviderUpdateBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBP__DelegateSignature
	// void DelegateLocalityProviderUpdateBP__DelegateSignature(FZeuzProvider Result, FString Error);                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPS__DelegateSignature
	// void DelegateLocalityProviderRemoveBPS__DelegateSignature();                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPF__DelegateSignature
	// void DelegateLocalityProviderRemoveBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBP__DelegateSignature
	// void DelegateLocalityProviderRemoveBP__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPS__DelegateSignature
	// void DelegateLocalityProviderGetBPS__DelegateSignature(TArray<FZeuzProvider>& Result);                                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPF__DelegateSignature
	// void DelegateLocalityProviderGetBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBP__DelegateSignature
	// void DelegateLocalityProviderGetBP__DelegateSignature(TArray<FZeuzProvider>& Result, FString Error);                     // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPS__DelegateSignature
	// void DelegateLocalityProviderCreateBPS__DelegateSignature(FZeuzProvider Result);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPF__DelegateSignature
	// void DelegateLocalityProviderCreateBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBP__DelegateSignature
	// void DelegateLocalityProviderCreateBP__DelegateSignature(FZeuzProvider Result, FString Error);                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPS__DelegateSignature
	// void DelegateLocalityLocationUpdateBPS__DelegateSignature(FZeuzLocation Result);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPF__DelegateSignature
	// void DelegateLocalityLocationUpdateBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBP__DelegateSignature
	// void DelegateLocalityLocationUpdateBP__DelegateSignature(FZeuzLocation Result, FString Error);                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPS__DelegateSignature
	// void DelegateLocalityLocationRemoveBPS__DelegateSignature();                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPF__DelegateSignature
	// void DelegateLocalityLocationRemoveBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBP__DelegateSignature
	// void DelegateLocalityLocationRemoveBP__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPS__DelegateSignature
	// void DelegateLocalityLocationGetBPS__DelegateSignature(TArray<FZeuzLocation>& Result);                                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPF__DelegateSignature
	// void DelegateLocalityLocationGetBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBP__DelegateSignature
	// void DelegateLocalityLocationGetBP__DelegateSignature(TArray<FZeuzLocation>& Result, FString Error);                     // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPS__DelegateSignature
	// void DelegateLocalityLocationCreateBPS__DelegateSignature(FZeuzLocation Result);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPF__DelegateSignature
	// void DelegateLocalityLocationCreateBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBP__DelegateSignature
	// void DelegateLocalityLocationCreateBP__DelegateSignature(FZeuzLocation Result, FString Error);                           // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiLogsearch
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiLogsearch : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.LogsearchStartexportBP
	// void LogsearchStartexportBP(FZeuzLogsearchAccountIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafeac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.LogsearchDownloadexportBP
	// void LogsearchDownloadexportBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafe7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.LogsearchCheckexportBP
	// void LogsearchCheckexportBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafe480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.LogsearchAccountBP
	// void LogsearchAccountBP(FZeuzLogsearchAccountIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafe120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPS__DelegateSignature
	// void DelegateLogsearchStartexportBPS__DelegateSignature(FString Result);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPF__DelegateSignature
	// void DelegateLogsearchStartexportBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBP__DelegateSignature
	// void DelegateLogsearchStartexportBP__DelegateSignature(FString Result, FString Error);                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPS__DelegateSignature
	// void DelegateLogsearchDownloadexportBPS__DelegateSignature(FString Result);                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPF__DelegateSignature
	// void DelegateLogsearchDownloadexportBPF__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBP__DelegateSignature
	// void DelegateLogsearchDownloadexportBP__DelegateSignature(FString Result, FString Error);                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPS__DelegateSignature
	// void DelegateLogsearchCheckexportBPS__DelegateSignature(FZeuzLogsearchLogsStatus& Result);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPF__DelegateSignature
	// void DelegateLogsearchCheckexportBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBP__DelegateSignature
	// void DelegateLogsearchCheckexportBP__DelegateSignature(FZeuzLogsearchLogsStatus& Result, FString Error);                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPS__DelegateSignature
	// void DelegateLogsearchAccountBPS__DelegateSignature(FZeuzLogsearchAccountOut& Result);                                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPF__DelegateSignature
	// void DelegateLogsearchAccountBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBP__DelegateSignature
	// void DelegateLogsearchAccountBP__DelegateSignature(FZeuzLogsearchAccountOut& Result, FString Error);                     // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Class /Script/Zeuzsdk.ZeuzApiMachine
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiMachine : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineUpdateresourceBP
	// void MachineUpdateresourceBP(FZeuzMachineResourceUpdateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb00ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineSettagsBP
	// void MachineSettagsBP(TArray<FZeuzMachineTagsSetIn>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb00ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineResourcedeprovisionBP
	// void MachineResourcedeprovisionBP(FZeuzMachineResourceDeprovisionIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb00970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineGettagsBP
	// void MachineGettagsBP(TArray<FString>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb00660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineGetresourcesBP
	// void MachineGetresourcesBP(FZeuzMachineResourceGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb00220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineGetinfoBP
	// void MachineGetinfoBP(TArray<FString>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafff10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineGetBP
	// void MachineGetBP(FZeuzMachineGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaffb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineDeallocateBP
	// void MachineDeallocateBP(FZeuzMachineResourceDeallocateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaff840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineCountresourcesBP
	// void MachineCountresourcesBP(FZeuzMachineResourcesCountIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaff540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineAllocateBP
	// void MachineAllocateBP(FZeuzMachineResourceAllocateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xaff210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.MachineAddresourceBP
	// void MachineAddresourceBP(FZeuzMachineResourceDataIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xafee20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPS__DelegateSignature
	// void DelegateMachineUpdateresourceBPS__DelegateSignature(FZeuzMachineResourceInfo& Result);                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPF__DelegateSignature
	// void DelegateMachineUpdateresourceBPF__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBP__DelegateSignature
	// void DelegateMachineUpdateresourceBP__DelegateSignature(FZeuzMachineResourceInfo& Result, FString Error);                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPS__DelegateSignature
	// void DelegateMachineSettagsBPS__DelegateSignature(TArray<FZeuzMachineTagsSetIn>& Result);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPF__DelegateSignature
	// void DelegateMachineSettagsBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBP__DelegateSignature
	// void DelegateMachineSettagsBP__DelegateSignature(TArray<FZeuzMachineTagsSetIn>& Result, FString Error);                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPS__DelegateSignature
	// void DelegateMachineResourcedeprovisionBPS__DelegateSignature();                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPF__DelegateSignature
	// void DelegateMachineResourcedeprovisionBPF__DelegateSignature(FString Error);                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBP__DelegateSignature
	// void DelegateMachineResourcedeprovisionBP__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPS__DelegateSignature
	// void DelegateMachineGettagsBPS__DelegateSignature(TArray<FZeuzMachineTagsSetIn>& Result);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPF__DelegateSignature
	// void DelegateMachineGettagsBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBP__DelegateSignature
	// void DelegateMachineGettagsBP__DelegateSignature(TArray<FZeuzMachineTagsSetIn>& Result, FString Error);                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPS__DelegateSignature
	// void DelegateMachineGetresourcesBPS__DelegateSignature(TArray<FZeuzMachineResourceInfo>& Result);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPF__DelegateSignature
	// void DelegateMachineGetresourcesBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBP__DelegateSignature
	// void DelegateMachineGetresourcesBP__DelegateSignature(TArray<FZeuzMachineResourceInfo>& Result, FString Error);          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPS__DelegateSignature
	// void DelegateMachineGetinfoBPS__DelegateSignature(TArray<FZeuzMachineInfo>& Result);                                     // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPF__DelegateSignature
	// void DelegateMachineGetinfoBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBP__DelegateSignature
	// void DelegateMachineGetinfoBP__DelegateSignature(TArray<FZeuzMachineInfo>& Result, FString Error);                       // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPS__DelegateSignature
	// void DelegateMachineGetBPS__DelegateSignature(FZeuzMachineGetOut& Result);                                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPF__DelegateSignature
	// void DelegateMachineGetBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBP__DelegateSignature
	// void DelegateMachineGetBP__DelegateSignature(FZeuzMachineGetOut& Result, FString Error);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPS__DelegateSignature
	// void DelegateMachineDeallocateBPS__DelegateSignature(TArray<FString>& Result);                                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPF__DelegateSignature
	// void DelegateMachineDeallocateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBP__DelegateSignature
	// void DelegateMachineDeallocateBP__DelegateSignature(TArray<FString>& Result, FString Error);                             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPS__DelegateSignature
	// void DelegateMachineCountresourcesBPS__DelegateSignature(int32_t Result);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPF__DelegateSignature
	// void DelegateMachineCountresourcesBPF__DelegateSignature(FString Error);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBP__DelegateSignature
	// void DelegateMachineCountresourcesBP__DelegateSignature(int32_t Result, FString Error);                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPS__DelegateSignature
	// void DelegateMachineAllocateBPS__DelegateSignature(TArray<FZeuzMachineInfo>& Result);                                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPF__DelegateSignature
	// void DelegateMachineAllocateBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBP__DelegateSignature
	// void DelegateMachineAllocateBP__DelegateSignature(TArray<FZeuzMachineInfo>& Result, FString Error);                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPS__DelegateSignature
	// void DelegateMachineAddresourceBPS__DelegateSignature(FZeuzMachineResourceInfo& Result);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPF__DelegateSignature
	// void DelegateMachineAddresourceBPF__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBP__DelegateSignature
	// void DelegateMachineAddresourceBP__DelegateSignature(FZeuzMachineResourceInfo& Result, FString Error);                   // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Class /Script/Zeuzsdk.ZeuzApiMatchmaking
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiMatchmaking : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingUpdateBP
	// void MatchmakingUpdateBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb049a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingStatsBP
	// void MatchmakingStatsBP(FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb04720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerrefreshBP
	// void MatchmakingServerrefreshBP(FZeuzMatchMakingServerInfo& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb04380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerdestroyBP
	// void MatchmakingServerdestroyBP(FZeuzMatchMakingServerInfo& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb03fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreatepartyBP
	// void MatchmakingCreatepartyBP(FZeuzMatchMakingPartyInit& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb03b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreateBP
	// void MatchmakingCreateBP(FZeuzMatchMakingInit& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb037d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCloseBP
	// void MatchmakingCloseBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb034b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPS__DelegateSignature
	// void DelegateMatchmakingUpdateBPS__DelegateSignature(FZeuzMatchMakingStatus& Result);                                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPF__DelegateSignature
	// void DelegateMatchmakingUpdateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBP__DelegateSignature
	// void DelegateMatchmakingUpdateBP__DelegateSignature(FZeuzMatchMakingStatus& Result, FString Error);                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPS__DelegateSignature
	// void DelegateMatchmakingStatsBPS__DelegateSignature(FZeuzMatchMakingStats& Result);                                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPF__DelegateSignature
	// void DelegateMatchmakingStatsBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBP__DelegateSignature
	// void DelegateMatchmakingStatsBP__DelegateSignature(FZeuzMatchMakingStats& Result, FString Error);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPS__DelegateSignature
	// void DelegateMatchmakingServerrefreshBPS__DelegateSignature();                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPF__DelegateSignature
	// void DelegateMatchmakingServerrefreshBPF__DelegateSignature(FString Error);                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBP__DelegateSignature
	// void DelegateMatchmakingServerrefreshBP__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPS__DelegateSignature
	// void DelegateMatchmakingServerdestroyBPS__DelegateSignature();                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPF__DelegateSignature
	// void DelegateMatchmakingServerdestroyBPF__DelegateSignature(FString Error);                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBP__DelegateSignature
	// void DelegateMatchmakingServerdestroyBP__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPS__DelegateSignature
	// void DelegateMatchmakingCreatepartyBPS__DelegateSignature(FZeuzMatchMakingStatus& Result);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPF__DelegateSignature
	// void DelegateMatchmakingCreatepartyBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBP__DelegateSignature
	// void DelegateMatchmakingCreatepartyBP__DelegateSignature(FZeuzMatchMakingStatus& Result, FString Error);                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPS__DelegateSignature
	// void DelegateMatchmakingCreateBPS__DelegateSignature(FZeuzMatchMakingStatus& Result);                                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPF__DelegateSignature
	// void DelegateMatchmakingCreateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBP__DelegateSignature
	// void DelegateMatchmakingCreateBP__DelegateSignature(FZeuzMatchMakingStatus& Result, FString Error);                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPS__DelegateSignature
	// void DelegateMatchmakingCloseBPS__DelegateSignature();                                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPF__DelegateSignature
	// void DelegateMatchmakingCloseBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBP__DelegateSignature
	// void DelegateMatchmakingCloseBP__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiMetrics
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiMetrics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworksentBP
	// void MetricsPayloadnetworksentBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb06a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworkreceivedBP
	// void MetricsPayloadnetworkreceivedBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb06690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsPayloadmemoryusageBP
	// void MetricsPayloadmemoryusageBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb062e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcpuusageBP
	// void MetricsPayloadcpuusageBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb05f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcountBP
	// void MetricsPayloadcountBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb05b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworksentBP
	// void MetricsMachinenetworksentBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb057d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworkreceivedBP
	// void MetricsMachinenetworkreceivedBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb05420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsMachinememoryusageBP
	// void MetricsMachinememoryusageBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb05070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.MetricsMachinecpuusageBP
	// void MetricsMachinecpuusageBP(FZeuzMetricsQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb04cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPS__DelegateSignature
	// void DelegateMetricsPayloadnetworksentBPS__DelegateSignature(FZeuzVariant& Result);                                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPF__DelegateSignature
	// void DelegateMetricsPayloadnetworksentBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBP__DelegateSignature
	// void DelegateMetricsPayloadnetworksentBP__DelegateSignature(FZeuzVariant& Result, FString Error);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature
	// void DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature(FZeuzVariant& Result);                                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature
	// void DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature(FString Error);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature
	// void DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature(FZeuzVariant& Result, FString Error);                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPS__DelegateSignature
	// void DelegateMetricsPayloadmemoryusageBPS__DelegateSignature(FZeuzVariant& Result);                                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPF__DelegateSignature
	// void DelegateMetricsPayloadmemoryusageBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBP__DelegateSignature
	// void DelegateMetricsPayloadmemoryusageBP__DelegateSignature(FZeuzVariant& Result, FString Error);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPS__DelegateSignature
	// void DelegateMetricsPayloadcpuusageBPS__DelegateSignature(FZeuzVariant& Result);                                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPF__DelegateSignature
	// void DelegateMetricsPayloadcpuusageBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBP__DelegateSignature
	// void DelegateMetricsPayloadcpuusageBP__DelegateSignature(FZeuzVariant& Result, FString Error);                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPS__DelegateSignature
	// void DelegateMetricsPayloadcountBPS__DelegateSignature(FZeuzVariant& Result);                                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPF__DelegateSignature
	// void DelegateMetricsPayloadcountBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBP__DelegateSignature
	// void DelegateMetricsPayloadcountBP__DelegateSignature(FZeuzVariant& Result, FString Error);                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPS__DelegateSignature
	// void DelegateMetricsMachinenetworksentBPS__DelegateSignature(FZeuzVariant& Result);                                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPF__DelegateSignature
	// void DelegateMetricsMachinenetworksentBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBP__DelegateSignature
	// void DelegateMetricsMachinenetworksentBP__DelegateSignature(FZeuzVariant& Result, FString Error);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature
	// void DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature(FZeuzVariant& Result);                                  // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature
	// void DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature(FString Error);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBP__DelegateSignature
	// void DelegateMetricsMachinenetworkreceivedBP__DelegateSignature(FZeuzVariant& Result, FString Error);                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPS__DelegateSignature
	// void DelegateMetricsMachinememoryusageBPS__DelegateSignature(FZeuzVariant& Result);                                      // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPF__DelegateSignature
	// void DelegateMetricsMachinememoryusageBPF__DelegateSignature(FString Error);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBP__DelegateSignature
	// void DelegateMetricsMachinememoryusageBP__DelegateSignature(FZeuzVariant& Result, FString Error);                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPS__DelegateSignature
	// void DelegateMetricsMachinecpuusageBPS__DelegateSignature(FZeuzVariant& Result);                                         // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPF__DelegateSignature
	// void DelegateMetricsMachinecpuusageBPF__DelegateSignature(FString Error);                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBP__DelegateSignature
	// void DelegateMetricsMachinecpuusageBP__DelegateSignature(FZeuzVariant& Result, FString Error);                           // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Class /Script/Zeuzsdk.ZeuzApiPayload
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiPayload : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadUpdateBP
	// void PayloadUpdateBP(FZeuzPayloadUpdateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0e050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadUnreserveBP
	// void PayloadUnreserveBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0dd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadStateupdateBP
	// void PayloadStateupdateBP(FZeuzPayloadStateGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0d9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadStateinfoBP
	// void PayloadStateinfoBP(FZeuzPayloadStateGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0d610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadResumeBP
	// void PayloadResumeBP(FZeuzPayloadResumeIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0d220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadRestartBP
	// void PayloadRestartBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0cf00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadReserveBP
	// void PayloadReserveBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0cbe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadRemoveBP
	// void PayloadRemoveBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0c8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadGetBP
	// void PayloadGetBP(FZeuzPayloadGetIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0c4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadCreateBP
	// void PayloadCreateBP(FZeuzPayloadCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0c110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.PayloadAllocateBP
	// void PayloadAllocateBP(FZeuzPayloadAllocateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0be00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPS__DelegateSignature
	// void DelegatePayloadUpdateBPS__DelegateSignature(FZeuzPayloadInfo& Result);                                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPF__DelegateSignature
	// void DelegatePayloadUpdateBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBP__DelegateSignature
	// void DelegatePayloadUpdateBP__DelegateSignature(FZeuzPayloadInfo& Result, FString Error);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPS__DelegateSignature
	// void DelegatePayloadUnreserveBPS__DelegateSignature(bool Result);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPF__DelegateSignature
	// void DelegatePayloadUnreserveBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBP__DelegateSignature
	// void DelegatePayloadUnreserveBP__DelegateSignature(bool Result, FString Error);                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPS__DelegateSignature
	// void DelegatePayloadStateupdateBPS__DelegateSignature(TArray<FZeuzPayloadStateInfo>& Result);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPF__DelegateSignature
	// void DelegatePayloadStateupdateBPF__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBP__DelegateSignature
	// void DelegatePayloadStateupdateBP__DelegateSignature(TArray<FZeuzPayloadStateInfo>& Result, FString Error);              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPS__DelegateSignature
	// void DelegatePayloadStateinfoBPS__DelegateSignature(TArray<FZeuzPayloadStateInfo>& Result);                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPF__DelegateSignature
	// void DelegatePayloadStateinfoBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBP__DelegateSignature
	// void DelegatePayloadStateinfoBP__DelegateSignature(TArray<FZeuzPayloadStateInfo>& Result, FString Error);                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPS__DelegateSignature
	// void DelegatePayloadResumeBPS__DelegateSignature(FZeuzPayloadInfo& Result);                                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPF__DelegateSignature
	// void DelegatePayloadResumeBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBP__DelegateSignature
	// void DelegatePayloadResumeBP__DelegateSignature(FZeuzPayloadInfo& Result, FString Error);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPS__DelegateSignature
	// void DelegatePayloadRestartBPS__DelegateSignature(FZeuzPayloadInfo& Result);                                             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPF__DelegateSignature
	// void DelegatePayloadRestartBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBP__DelegateSignature
	// void DelegatePayloadRestartBP__DelegateSignature(FZeuzPayloadInfo& Result, FString Error);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPS__DelegateSignature
	// void DelegatePayloadReserveBPS__DelegateSignature(bool Result);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPF__DelegateSignature
	// void DelegatePayloadReserveBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBP__DelegateSignature
	// void DelegatePayloadReserveBP__DelegateSignature(bool Result, FString Error);                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPS__DelegateSignature
	// void DelegatePayloadRemoveBPS__DelegateSignature();                                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPF__DelegateSignature
	// void DelegatePayloadRemoveBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBP__DelegateSignature
	// void DelegatePayloadRemoveBP__DelegateSignature(FString Error);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPS__DelegateSignature
	// void DelegatePayloadGetBPS__DelegateSignature(FZeuzPayloadGetOut& Result);                                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPF__DelegateSignature
	// void DelegatePayloadGetBPF__DelegateSignature(FString Error);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBP__DelegateSignature
	// void DelegatePayloadGetBP__DelegateSignature(FZeuzPayloadGetOut& Result, FString Error);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPS__DelegateSignature
	// void DelegatePayloadCreateBPS__DelegateSignature(FZeuzPayloadInfo& Result);                                              // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPF__DelegateSignature
	// void DelegatePayloadCreateBPF__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBP__DelegateSignature
	// void DelegatePayloadCreateBP__DelegateSignature(FZeuzPayloadInfo& Result, FString Error);                                // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPS__DelegateSignature
	// void DelegatePayloadAllocateBPS__DelegateSignature(TArray<FZeuzPayloadInfo>& Result);                                    // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPF__DelegateSignature
	// void DelegatePayloadAllocateBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBP__DelegateSignature
	// void DelegatePayloadAllocateBP__DelegateSignature(TArray<FZeuzPayloadInfo>& Result, FString Error);                      // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Class /Script/Zeuzsdk.ZeuzApiProfile
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiProfile : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUserslookupBP
	// void ProfileUserslookupBP(TArray<FZeuzProfileUserLookupIn>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb14210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUserslistBP
	// void ProfileUserslistBP(FZeuzProfileUsersListIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb13f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUsersgetBP
	// void ProfileUsersgetBP(TArray<FString>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb13c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUsersetpwhashBP
	// void ProfileUsersetpwhashBP(FZeuzProfileUserPwHashIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb13910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUsersetBP
	// void ProfileUsersetBP(FZeuzUser In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb13110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUserlookupBP
	// void ProfileUserlookupBP(FZeuzProfileUserLookupIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb12e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUsergetpwhashBP
	// void ProfileUsergetpwhashBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb12af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUsergetBP
	// void ProfileUsergetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb127d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUserdeleteBP
	// void ProfileUserdeleteBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb124b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileUsercreateBP
	// void ProfileUsercreateBP(FZeuzProfileUserCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb12180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileProfilesgetBP
	// void ProfileProfilesgetBP(TArray<FString>& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb11e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileProfilesetBP
	// void ProfileProfilesetBP(FZeuzUserProfile In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb11710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileProfilegetBP
	// void ProfileProfilegetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb113f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileProfiledeleteBP
	// void ProfileProfiledeleteBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb110d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemtransferBP
	// void ProfileItemtransferBP(FZeuzProfileItemTransferIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb10dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemsetBP
	// void ProfileItemsetBP(FZeuzInvItem In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb10680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemrembynameBP
	// void ProfileItemrembynameBP(FZeuzProfileItemRemByNameIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb10370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemremBP
	// void ProfileItemremBP(FZeuzProfileItemRemIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb10080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemlistBP
	// void ProfileItemlistBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0fd60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemgetbynameBP
	// void ProfileItemgetbynameBP(FZeuzProfileItemUserName& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0fa60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemgetBP
	// void ProfileItemgetBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0f740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemcreateBP
	// void ProfileItemcreateBP(FZeuzInvItem In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0f000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemconfiggetBP
	// void ProfileItemconfiggetBP(FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0ed80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItembuyBP
	// void ProfileItembuyBP(FZeuzProfileItemAddIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0ea70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItembarterBP
	// void ProfileItembarterBP(FZeuzProfileItemBarterIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0e6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.ProfileItemaddBP
	// void ProfileItemaddBP(FZeuzProfileItemAddIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb0e3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPS__DelegateSignature
	// void DelegateProfileUserslookupBPS__DelegateSignature(TArray<FString>& Result);                                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPF__DelegateSignature
	// void DelegateProfileUserslookupBPF__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBP__DelegateSignature
	// void DelegateProfileUserslookupBP__DelegateSignature(TArray<FString>& Result, FString Error);                            // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPS__DelegateSignature
	// void DelegateProfileUserslistBPS__DelegateSignature(FZeuzProfileUsersListOut& Result);                                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPF__DelegateSignature
	// void DelegateProfileUserslistBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBP__DelegateSignature
	// void DelegateProfileUserslistBP__DelegateSignature(FZeuzProfileUsersListOut& Result, FString Error);                     // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPS__DelegateSignature
	// void DelegateProfileUsersgetBPS__DelegateSignature(TArray<FZeuzUser>& Result);                                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPF__DelegateSignature
	// void DelegateProfileUsersgetBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBP__DelegateSignature
	// void DelegateProfileUsersgetBP__DelegateSignature(TArray<FZeuzUser>& Result, FString Error);                             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPS__DelegateSignature
	// void DelegateProfileUsersetpwhashBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPF__DelegateSignature
	// void DelegateProfileUsersetpwhashBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBP__DelegateSignature
	// void DelegateProfileUsersetpwhashBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPS__DelegateSignature
	// void DelegateProfileUsersetBPS__DelegateSignature();                                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPF__DelegateSignature
	// void DelegateProfileUsersetBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBP__DelegateSignature
	// void DelegateProfileUsersetBP__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPS__DelegateSignature
	// void DelegateProfileUserlookupBPS__DelegateSignature(FString Result);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPF__DelegateSignature
	// void DelegateProfileUserlookupBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBP__DelegateSignature
	// void DelegateProfileUserlookupBP__DelegateSignature(FString Result, FString Error);                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPS__DelegateSignature
	// void DelegateProfileUsergetpwhashBPS__DelegateSignature(FString Result);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPF__DelegateSignature
	// void DelegateProfileUsergetpwhashBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBP__DelegateSignature
	// void DelegateProfileUsergetpwhashBP__DelegateSignature(FString Result, FString Error);                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPS__DelegateSignature
	// void DelegateProfileUsergetBPS__DelegateSignature(FZeuzUser Result);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPF__DelegateSignature
	// void DelegateProfileUsergetBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBP__DelegateSignature
	// void DelegateProfileUsergetBP__DelegateSignature(FZeuzUser Result, FString Error);                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPS__DelegateSignature
	// void DelegateProfileUserdeleteBPS__DelegateSignature();                                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPF__DelegateSignature
	// void DelegateProfileUserdeleteBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBP__DelegateSignature
	// void DelegateProfileUserdeleteBP__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPS__DelegateSignature
	// void DelegateProfileUsercreateBPS__DelegateSignature(FString Result);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPF__DelegateSignature
	// void DelegateProfileUsercreateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBP__DelegateSignature
	// void DelegateProfileUsercreateBP__DelegateSignature(FString Result, FString Error);                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPS__DelegateSignature
	// void DelegateProfileProfilesgetBPS__DelegateSignature(TArray<FZeuzUserProfile>& Result);                                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPF__DelegateSignature
	// void DelegateProfileProfilesgetBPF__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBP__DelegateSignature
	// void DelegateProfileProfilesgetBP__DelegateSignature(TArray<FZeuzUserProfile>& Result, FString Error);                   // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPS__DelegateSignature
	// void DelegateProfileProfilesetBPS__DelegateSignature();                                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPF__DelegateSignature
	// void DelegateProfileProfilesetBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBP__DelegateSignature
	// void DelegateProfileProfilesetBP__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPS__DelegateSignature
	// void DelegateProfileProfilegetBPS__DelegateSignature(FZeuzUserProfile Result);                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPF__DelegateSignature
	// void DelegateProfileProfilegetBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBP__DelegateSignature
	// void DelegateProfileProfilegetBP__DelegateSignature(FZeuzUserProfile Result, FString Error);                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPS__DelegateSignature
	// void DelegateProfileProfiledeleteBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPF__DelegateSignature
	// void DelegateProfileProfiledeleteBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBP__DelegateSignature
	// void DelegateProfileProfiledeleteBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPS__DelegateSignature
	// void DelegateProfileItemtransferBPS__DelegateSignature();                                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPF__DelegateSignature
	// void DelegateProfileItemtransferBPF__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBP__DelegateSignature
	// void DelegateProfileItemtransferBP__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPS__DelegateSignature
	// void DelegateProfileItemsetBPS__DelegateSignature();                                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPF__DelegateSignature
	// void DelegateProfileItemsetBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBP__DelegateSignature
	// void DelegateProfileItemsetBP__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPS__DelegateSignature
	// void DelegateProfileItemrembynameBPS__DelegateSignature(FString Result);                                                 // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPF__DelegateSignature
	// void DelegateProfileItemrembynameBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBP__DelegateSignature
	// void DelegateProfileItemrembynameBP__DelegateSignature(FString Result, FString Error);                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPS__DelegateSignature
	// void DelegateProfileItemremBPS__DelegateSignature();                                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPF__DelegateSignature
	// void DelegateProfileItemremBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBP__DelegateSignature
	// void DelegateProfileItemremBP__DelegateSignature(FString Error);                                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPS__DelegateSignature
	// void DelegateProfileItemlistBPS__DelegateSignature(TArray<FZeuzInvItem>& Result);                                        // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPF__DelegateSignature
	// void DelegateProfileItemlistBPF__DelegateSignature(FString Error);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBP__DelegateSignature
	// void DelegateProfileItemlistBP__DelegateSignature(TArray<FZeuzInvItem>& Result, FString Error);                          // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPS__DelegateSignature
	// void DelegateProfileItemgetbynameBPS__DelegateSignature(FZeuzInvItem Result);                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPF__DelegateSignature
	// void DelegateProfileItemgetbynameBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBP__DelegateSignature
	// void DelegateProfileItemgetbynameBP__DelegateSignature(FZeuzInvItem Result, FString Error);                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPS__DelegateSignature
	// void DelegateProfileItemgetBPS__DelegateSignature(FZeuzInvItem Result);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPF__DelegateSignature
	// void DelegateProfileItemgetBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBP__DelegateSignature
	// void DelegateProfileItemgetBP__DelegateSignature(FZeuzInvItem Result, FString Error);                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPS__DelegateSignature
	// void DelegateProfileItemcreateBPS__DelegateSignature(FString Result);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPF__DelegateSignature
	// void DelegateProfileItemcreateBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBP__DelegateSignature
	// void DelegateProfileItemcreateBP__DelegateSignature(FString Result, FString Error);                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPS__DelegateSignature
	// void DelegateProfileItemconfiggetBPS__DelegateSignature(FZeuzProfileItemConfigGetOut& Result);                           // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPF__DelegateSignature
	// void DelegateProfileItemconfiggetBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBP__DelegateSignature
	// void DelegateProfileItemconfiggetBP__DelegateSignature(FZeuzProfileItemConfigGetOut& Result, FString Error);             // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPS__DelegateSignature
	// void DelegateProfileItembuyBPS__DelegateSignature(FString Result);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPF__DelegateSignature
	// void DelegateProfileItembuyBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBP__DelegateSignature
	// void DelegateProfileItembuyBP__DelegateSignature(FString Result, FString Error);                                         // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPS__DelegateSignature
	// void DelegateProfileItembarterBPS__DelegateSignature();                                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPF__DelegateSignature
	// void DelegateProfileItembarterBPF__DelegateSignature(FString Error);                                                     // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBP__DelegateSignature
	// void DelegateProfileItembarterBP__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPS__DelegateSignature
	// void DelegateProfileItemaddBPS__DelegateSignature(FString Result);                                                       // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPF__DelegateSignature
	// void DelegateProfileItemaddBPF__DelegateSignature(FString Error);                                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBP__DelegateSignature
	// void DelegateProfileItemaddBP__DelegateSignature(FString Result, FString Error);                                         // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiServerbrowser
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiServerbrowser : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserRefreshBP
	// void ServerbrowserRefreshBP(FZeuzServerBrowserStateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb17990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserQueryBP
	// void ServerbrowserQueryBP(FZeuzServerBrowserQueryIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb17650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserDestroyBP
	// void ServerbrowserDestroyBP(FString In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb17330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPS__DelegateSignature
	// void DelegateServerbrowserRefreshBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPF__DelegateSignature
	// void DelegateServerbrowserRefreshBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBP__DelegateSignature
	// void DelegateServerbrowserRefreshBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPS__DelegateSignature
	// void DelegateServerbrowserQueryBPS__DelegateSignature(FZeuzServerBrowserQueryOut& Result);                               // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPF__DelegateSignature
	// void DelegateServerbrowserQueryBPF__DelegateSignature(FString Error);                                                    // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBP__DelegateSignature
	// void DelegateServerbrowserQueryBP__DelegateSignature(FZeuzServerBrowserQueryOut& Result, FString Error);                 // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPS__DelegateSignature
	// void DelegateServerbrowserDestroyBPS__DelegateSignature();                                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPF__DelegateSignature
	// void DelegateServerbrowserDestroyBPF__DelegateSignature(FString Error);                                                  // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBP__DelegateSignature
	// void DelegateServerbrowserDestroyBP__DelegateSignature(FString Error);                                                   // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiSimpleAuth
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiSimpleAuth : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.StringHash
	// FString StringHash(FString Val);                                                                                         // [0xb18160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.SimpleProfileUsercreateBP
	// void SimpleProfileUsercreateBP(FZeuzSimpleProfileUserCreateIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb17e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPS__DelegateSignature
	// void DelegateSimpleProfileUsercreateBPS__DelegateSignature(FString Result);                                              // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPF__DelegateSignature
	// void DelegateSimpleProfileUsercreateBPF__DelegateSignature(FString Error);                                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBP__DelegateSignature
	// void DelegateSimpleProfileUsercreateBP__DelegateSignature(FString Result, FString Error);                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPS__DelegateSignature
	// void DelegateAuthLoginBPS__DelegateSignature(FZeuzContext Context);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPF__DelegateSignature
	// void DelegateAuthLoginBPF__DelegateSignature(FString Error);                                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBP__DelegateSignature
	// void DelegateAuthLoginBP__DelegateSignature(FZeuzContext Context, FString Error);                                        // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPS__DelegateSignature
	// void DelegateAuthCheckSessionBPS__DelegateSignature(FZeuzTimestamp Expires);                                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPF__DelegateSignature
	// void DelegateAuthCheckSessionBPF__DelegateSignature(FString Error);                                                      // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBP__DelegateSignature
	// void DelegateAuthCheckSessionBP__DelegateSignature(FZeuzTimestamp Expires, FString Error);                               // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.CalcPWHash
	// FString CalcPWHash(FString Login, FString Password);                                                                     // [0xb167c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.AuthLoginBP
	// void AuthLoginBP(FZeuzSimpleAuthLoginIn& In, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx, bool SaveDefaultContext); // [0xb16460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiSimpleAuth.AuthCheckSessionBP
	// void AuthCheckSessionBP(FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext Ctx); // [0xb16160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiContext
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiContext : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiContext.SetDefaultContext
	// void SetDefaultContext(FZeuzContext& Ctx);                                                                               // [0xb17ce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiContext.GetDefaultContext
	// FZeuzContext GetDefaultContext();                                                                                        // [0xb16ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Zeuzsdk.ZeuzID
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzID : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzID.IsValid
	// bool IsValid(FString ID);                                                                                                // [0xb17220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzID.IsType
	// bool IsType(FString ID, ZeuzIDType typ);                                                                                 // [0xb170d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzID.GetType
	// ZeuzIDType GetType(FString ID);                                                                                          // [0xb16fe0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiPing
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiPing : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiPing.DoPingBP
	// void DoPingBP(FString Target, float Timeout, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb16970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPing.DelegateDoPingBPS__DelegateSignature
	// void DelegateDoPingBPS__DelegateSignature(FString Target, float Duration, FString Resolved);                             // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPing.DelegateDoPingBPF__DelegateSignature
	// void DelegateDoPingBPF__DelegateSignature(FString Error);                                                                // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPing.DelegateDoPingBP__DelegateSignature
	// void DelegateDoPingBP__DelegateSignature(FString Target, float Duration, FString Resolved, FString Error);               // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzApiPubIP
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiPubIP : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiPubIP.GetPublicIPBP
	// void GetPublicIPBP(bool v6, FDelegateProperty& Callback, FDelegateProperty& OnSuccess, FDelegateProperty& OnFailure, FZeuzContext& Ctx); // [0xb16d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPS__DelegateSignature
	// void DelegateGetPublicIPBPS__DelegateSignature(FString Result);                                                          // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPF__DelegateSignature
	// void DelegateGetPublicIPBPF__DelegateSignature(FString Error);                                                           // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBP__DelegateSignature
	// void DelegateGetPublicIPBP__DelegateSignature(FString Result, FString Error);                                            // [0x24710f0] Public|Delegate      
};

/// Class /Script/Zeuzsdk.ZeuzTagsUtil
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzTagsUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzTagsUtil.TagsToString
	// FString TagsToString(FZeuzTags& In);                                                                                     // [0xb1a3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzTagsUtil.StringToTags
	// void StringToTags(FString In, FZeuzTags& Out);                                                                           // [0xb19b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Zeuzsdk.ZeuzApiTime
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiTime : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiTime.ToDateTime
	// FDateTime ToDateTime(FZeuzTimestamp T);                                                                                  // [0xb1a640] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiTime.Now
	// FZeuzTimestamp Now(bool adjusted);                                                                                       // [0xb19620] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiTime.IsZero
	// bool IsZero(FZeuzTimestamp T);                                                                                           // [0xb192e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiTime.GetOffset
	// FZeuzTimestamp GetOffset();                                                                                              // [0xb19170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiTime.FromDateTime
	// FZeuzTimestamp FromDateTime(FDateTime T, bool adjusted);                                                                 // [0xb190b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiTime.AdjustOffset
	// void AdjustOffset(FZeuzTimestamp ofs);                                                                                   // [0xb19030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Zeuzsdk.ZeuzApiUtil
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UZeuzApiUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Zeuzsdk.ZeuzApiUtil.TimerWithString
	// void TimerWithString(FDelegateProperty& Event, float Time, FString Value);                                               // [0xb1a4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.TimerDynamicDelegateS__DelegateSignature
	// void TimerDynamicDelegateS__DelegateSignature(FString Value);                                                            // [0x24710f0] Public|Delegate      
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StructToVariant
	// bool StructToVariant(class UProperty* AnyStruct, FZeuzVariant& Value);                                                   // [0xb1a270] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StructToByteArrayJSON
	// bool StructToByteArrayJSON(class UProperty* AnyStruct, FZeuzByteArray& Value);                                           // [0xb1a150] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StructToByteArrayBin
	// bool StructToByteArrayBin(class UProperty* AnyStruct, FZeuzByteArray& Value);                                            // [0xb1a030] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StructFromVariant
	// bool StructFromVariant(class UProperty*& AnyStruct, FZeuzVariant& Value);                                                // [0xb19ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StructFromByteArrayJSON
	// bool StructFromByteArrayJSON(class UProperty*& AnyStruct, FZeuzByteArray& Value);                                        // [0xb19dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StructFromByteArrayBin
	// bool StructFromByteArrayBin(class UProperty* AnyStruct, FZeuzByteArray& Value);                                          // [0xb19cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StringNotEmpty
	// bool StringNotEmpty(FString String);                                                                                     // [0xb19a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.StringIsEmpty
	// bool StringIsEmpty(FString String);                                                                                      // [0xb19970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.SaveGameToByteArray
	// bool SaveGameToByteArray(FString Filename, FZeuzByteArray& Value);                                                       // [0xb19810] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.SaveGameFromByteArray
	// bool SaveGameFromByteArray(FZeuzByteArray& Value, FString Filename);                                                     // [0xb196b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.JsonToVariant
	// bool JsonToVariant(FString Json, FZeuzVariant& Variant);                                                                 // [0xb194a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.JsonFromVariant
	// bool JsonFromVariant(FZeuzVariant& Variant, FString& Json);                                                              // [0xb19370] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Zeuzsdk.ZeuzApiUtil.GetSaveGamePath
	// FString GetSaveGamePath(FString Name);                                                                                   // [0xb191b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Zeuzsdk.ZeuzVariant
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzVariant
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzByteArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzByteArray
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzContext
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FZeuzContext
{ 
	FString                                            Endpoint;                                                   // 0x0000   (0x0010)  
	FString                                            SessionID;                                                  // 0x0010   (0x0010)  
	FString                                            SessionKey;                                                 // 0x0020   (0x0010)  
	FString                                            UserID;                                                     // 0x0030   (0x0010)  
	FString                                            DeveloperID;                                                // 0x0040   (0x0010)  
	FString                                            ProjID;                                                     // 0x0050   (0x0010)  
	FString                                            EnvID;                                                      // 0x0060   (0x0010)  
	FString                                            Login;                                                      // 0x0070   (0x0010)  
	FString                                            PWHash;                                                     // 0x0080   (0x0010)  
	EZeuzSessionType                                   LoginType;                                                  // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzACLEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzACLEntry
{ 
	FString                                            GenID;                                                      // 0x0000   (0x0010)  
	int32_t                                            Grant;                                                      // 0x0010   (0x0004)  
	int32_t                                            Deny;                                                       // 0x0014   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzACL
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzACL
{ 
	TArray<FZeuzACLEntry>                              List;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzTags
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzTags
{ 
	TArray<FString>                                    Tags;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzProperties
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FZeuzTags                                          Tags;                                                       // 0x0008   (0x0010)  
	FZeuzVariant                                       Val;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzTimestamp
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 pad: 0x0000
struct FZeuzTimestamp
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzItemCommon
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FZeuzItemCommon
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FZeuzACL                                           ACL;                                                        // 0x0018   (0x0010)  
	FZeuzProperties                                    Props;                                                      // 0x0028   (0x0028)  
	FZeuzTimestamp                                     Created;                                                    // 0x0050   (0x0008)  
	FString                                            CreatedBy;                                                  // 0x0058   (0x0010)  
	FZeuzTimestamp                                     Modified;                                                   // 0x0068   (0x0008)  
	FString                                            ModifiedBy;                                                 // 0x0070   (0x0010)  
	FZeuzTimestamp                                     Expires;                                                    // 0x0080   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzProvisioningAccount
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FZeuzProvisioningAccount
{ 
	FString                                            ProviderID;                                                 // 0x0000   (0x0010)  
	bool                                               SpawnInstances;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Username;                                                   // 0x0018   (0x0010)  
	FString                                            Password;                                                   // 0x0028   (0x0010)  
	FString                                            ApiKey;                                                     // 0x0038   (0x0010)  
	FString                                            SecretKey;                                                  // 0x0048   (0x0010)  
	FString                                            SubscriptionID;                                             // 0x0058   (0x0010)  
	FString                                            TenantID;                                                   // 0x0068   (0x0010)  
	FString                                            ClientId;                                                   // 0x0078   (0x0010)  
	FString                                            ClientSecret;                                               // 0x0088   (0x0010)  
	FString                                            GcpCredentialsFile;                                         // 0x0098   (0x0010)  
	FString                                            GcpFileName;                                                // 0x00A8   (0x0010)  
	FZeuzTimestamp                                     GcpUploadFileDate;                                          // 0x00B8   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccount
/// Size: 0x00E0 (224 bytes) (0x000088 - 0x000168) align 8 pad: 0x0000
struct FZeuzAccount : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	TArray<FString>                                    Managers;                                                   // 0x0098   (0x0010)  
	TArray<FString>                                    Projects;                                                   // 0x00A8   (0x0010)  
	TArray<FString>                                    Teams;                                                      // 0x00B8   (0x0010)  
	TArray<FString>                                    Devs;                                                       // 0x00C8   (0x0010)  
	FString                                            Desc;                                                       // 0x00D8   (0x0010)  
	FString                                            EMail;                                                      // 0x00E8   (0x0010)  
	FString                                            Company;                                                    // 0x00F8   (0x0010)  
	FString                                            Department;                                                 // 0x0108   (0x0010)  
	FString                                            Country;                                                    // 0x0118   (0x0010)  
	FString                                            ZIP;                                                        // 0x0128   (0x0010)  
	FString                                            City;                                                       // 0x0138   (0x0010)  
	FString                                            StreetAddr;                                                 // 0x0148   (0x0010)  
	TArray<FZeuzProvisioningAccount>                   ProvisioningAccounts;                                       // 0x0158   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminAccountsIn
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FZeuzAdminAccountsIn
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAdminCountResoucesIn
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzAdminCountResoucesIn
{ 
	bool                                               OnlyInUse;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            RegionID;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminCountResoucesPerAccountOut
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzAdminCountResoucesPerAccountOut
{ 
	FString                                            AccountID;                                                  // 0x0000   (0x0010)  
	FString                                            AccountName;                                                // 0x0010   (0x0010)  
	int32_t                                            Count;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAdminTestpoolIn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzAdminTestpoolIn
{ 
	FString                                            RegionID;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzDeveloper
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000120) align 8 pad: 0x0000
struct FZeuzDeveloper : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            Account;                                                    // 0x0098   (0x0010)  
	int32_t                                            Role;                                                       // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FString                                            Login;                                                      // 0x00B0   (0x0010)  
	FString                                            Desc;                                                       // 0x00C0   (0x0010)  
	FString                                            PWHash;                                                     // 0x00D0   (0x0010)  
	FZeuzTimestamp                                     LastLogin;                                                  // 0x00E0   (0x0008)  
	TArray<FString>                                    Projects;                                                   // 0x00E8   (0x0010)  
	TArray<FString>                                    Teams;                                                      // 0x00F8   (0x0010)  
	bool                                               Revoked;                                                    // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FZeuzTimestamp                                     RevokedAt;                                                  // 0x0110   (0x0008)  
	FZeuzTimestamp                                     PasswordRequestExpiry;                                      // 0x0118   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminAccountIn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzAdminAccountIn
{ 
	FString                                            AccountID;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzServiceCfg
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FZeuzServiceCfg
{ 
	FString                                            ServiceType;                                                // 0x0000   (0x0010)  
	int32_t                                            MaxScale;                                                   // 0x0010   (0x0004)  
	int32_t                                            CurScale;                                                   // 0x0014   (0x0004)  
	int32_t                                            CloudScale;                                                 // 0x0018   (0x0004)  
	int32_t                                            Busy;                                                       // 0x001C   (0x0004)  
	int32_t                                            Idle;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            Params;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzEnv
/// Size: 0x0060 (96 bytes) (0x000088 - 0x0000E8) align 8 pad: 0x0000
struct FZeuzEnv : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            Proj;                                                       // 0x0098   (0x0010)  
	FString                                            Account;                                                    // 0x00A8   (0x0010)  
	bool                                               Enabled;                                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FString                                            Desc;                                                       // 0x00C0   (0x0010)  
	int32_t                                            MaxScale;                                                   // 0x00D0   (0x0004)  
	int32_t                                            CurScale;                                                   // 0x00D4   (0x0004)  
	TArray<FZeuzServiceCfg>                            Services;                                                   // 0x00D8   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminEnvIn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzAdminEnvIn
{ 
	FString                                            ProjectID;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAdminItem
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminItemsOut
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzAdminItemsOut
{ 
	TArray<FZeuzAdminItem>                             Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminItemsIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAdminItemsIn
{ 
	FString                                            Table;                                                      // 0x0000   (0x0010)  
	FString                                            Query;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLogsearchOut
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzLogsearchOut
{ 
	FZeuzVariant                                       Stats;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminLogsIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzAdminLogsIn
{ 
	FString                                            Start;                                                      // 0x0000   (0x0010)  
	FString                                            End;                                                        // 0x0010   (0x0010)  
	FString                                            Account;                                                    // 0x0020   (0x0010)  
	FString                                            Project;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProjEnvInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzProjEnvInfo
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Title;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProj
/// Size: 0x0040 (64 bytes) (0x000088 - 0x0000C8) align 8 pad: 0x0000
struct FZeuzProj : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            Account;                                                    // 0x0098   (0x0010)  
	FString                                            Desc;                                                       // 0x00A8   (0x0010)  
	TArray<FZeuzProjEnvInfo>                           Envs;                                                       // 0x00B8   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminStat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzAdminStat
{ 
	FString                                            GroupCol;                                                   // 0x0000   (0x0010)  
	int32_t                                            CountVal;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAdminStatsOut
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzAdminStatsOut
{ 
	TArray<FZeuzAdminStat>                             Stats;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAdminStatsIn
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FZeuzAdminStatsIn
{ 
	FString                                            Table;                                                      // 0x0000   (0x0010)  
	FString                                            Start;                                                      // 0x0010   (0x0010)  
	FString                                            End;                                                        // 0x0020   (0x0010)  
	FString                                            GroupBy;                                                    // 0x0030   (0x0010)  
	FString                                            Count;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzSession
/// Size: 0x0068 (104 bytes) (0x000088 - 0x0000F0) align 8 pad: 0x0000
struct FZeuzSession : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            SessionKey;                                                 // 0x0098   (0x0010)  
	FString                                            Dev;                                                        // 0x00A8   (0x0010)  
	FString                                            User;                                                       // 0x00B8   (0x0010)  
	FString                                            ApiKey;                                                     // 0x00C8   (0x0010)  
	FString                                            Proj;                                                       // 0x00D8   (0x0010)  
	bool                                               Admin;                                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAuthLoginResult
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FZeuzAuthLoginResult
{ 
	FString                                            Dev;                                                        // 0x0000   (0x0010)  
	FString                                            User;                                                       // 0x0010   (0x0010)  
	FString                                            ApiKey;                                                     // 0x0020   (0x0010)  
	FString                                            Proj;                                                       // 0x0030   (0x0010)  
	FString                                            SessionID;                                                  // 0x0040   (0x0010)  
	FString                                            SessionNonce;                                               // 0x0050   (0x0010)  
	FZeuzTimestamp                                     ValidThru;                                                  // 0x0060   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzAuthLoginIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzAuthLoginIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	bool                                               IsUser;                                                     // 0x0010   (0x0001)  
	bool                                               IsApi;                                                      // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	FZeuzTimestamp                                     Time;                                                       // 0x0018   (0x0008)  
	FString                                            Nonce;                                                      // 0x0020   (0x0010)  
	FString                                            Hash;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAPIKey
/// Size: 0x0058 (88 bytes) (0x000088 - 0x0000E0) align 8 pad: 0x0000
struct FZeuzAPIKey : FZeuzItemCommon
{ 
	FString                                            APIKeyID;                                                   // 0x0088   (0x0010)  
	FString                                            Key;                                                        // 0x0098   (0x0010)  
	FString                                            ProjID;                                                     // 0x00A8   (0x0010)  
	FString                                            PWHash;                                                     // 0x00B8   (0x0010)  
	bool                                               Revoked;                                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FZeuzTimestamp                                     RevokedAt;                                                  // 0x00D0   (0x0008)  
	FZeuzTimestamp                                     LastLogin;                                                  // 0x00D8   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzAPIKeyDeleteIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAPIKeyDeleteIn
{ 
	FString                                            APIKeyID;                                                   // 0x0000   (0x0010)  
	FString                                            ProjID;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAPIKeyGenerateIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAPIKeyGenerateIn
{ 
	FString                                            ProjID;                                                     // 0x0000   (0x0010)  
	FString                                            Title;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAPIKeyGetIn
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzAPIKeyGetIn
{ 
	FString                                            APIKeyID;                                                   // 0x0000   (0x0010)  
	FString                                            ProjID;                                                     // 0x0010   (0x0010)  
	bool                                               NotRevoked;                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAPIKeyPwHashIn
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzAPIKeyPwHashIn
{ 
	FString                                            APIKeyID;                                                   // 0x0000   (0x0010)  
	FString                                            ProjID;                                                     // 0x0010   (0x0010)  
	FString                                            PWHash;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemClassConfig
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FZeuzProfileItemClassConfig
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            CountMaxU;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FZeuzTimestamp                                     LimitAddInterval;                                           // 0x0018   (0x0008)  
	SDK_UNDEFINED(80,605) /* TMap<FString, FString> */ __um(Params);                                               // 0x0020   (0x0050)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemNameCount
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzProfileItemNameCount
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemConfig
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FZeuzProfileItemConfig
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Class;                                                      // 0x0010   (0x0010)  
	int32_t                                            CountMaxU;                                                  // 0x0020   (0x0004)  
	bool                                               Stackable;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FZeuzTimestamp                                     LimitAddInterval;                                           // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,606) /* TMap<FString, FString> */ __um(Params);                                               // 0x0030   (0x0050)  
	TArray<FZeuzProfileItemNameCount>                  BuyPrice;                                                   // 0x0080   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemConfigGetOut
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzProfileItemConfigGetOut
{ 
	TArray<FZeuzProfileItemClassConfig>                Classes;                                                    // 0x0000   (0x0010)  
	TArray<FZeuzProfileItemConfig>                     Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzInvItem
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
struct FZeuzInvItem : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            UserID;                                                     // 0x0098   (0x0010)  
	FString                                            Name;                                                       // 0x00A8   (0x0010)  
	int32_t                                            Count;                                                      // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzUserProfile
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FZeuzUserProfile
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FZeuzTags                                          Tags;                                                       // 0x0010   (0x0010)  
	FZeuzTimestamp                                     FirstLogin;                                                 // 0x0020   (0x0008)  
	FZeuzTimestamp                                     BanStart;                                                   // 0x0028   (0x0008)  
	FZeuzTimestamp                                     BanEnd;                                                     // 0x0030   (0x0008)  
	TArray<FString>                                    Comments;                                                   // 0x0038   (0x0010)  
	FZeuzVariant                                       Data;                                                       // 0x0048   (0x0010)  
	TArray<FString>                                    LinkedAccounts;                                             // 0x0058   (0x0010)  
	TArray<FString>                                    Friends;                                                    // 0x0068   (0x0010)  
	TArray<FString>                                    Blocked;                                                    // 0x0078   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzUser
/// Size: 0x0050 (80 bytes) (0x000088 - 0x0000D8) align 8 pad: 0x0000
struct FZeuzUser : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            Login;                                                      // 0x0098   (0x0010)  
	FString                                            Name;                                                       // 0x00A8   (0x0010)  
	FString                                            PWHash;                                                     // 0x00B8   (0x0010)  
	FString                                            Desc;                                                       // 0x00C8   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileUsersListOut
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzProfileUsersListOut
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FString>                                    UserIDs;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemAddIn
/// Size: 0x0010 (16 bytes) (0x000018 - 0x000028) align 8 pad: 0x0000
struct FZeuzProfileItemAddIn : FZeuzProfileItemNameCount
{ 
	FString                                            UserID;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemMove
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzProfileItemMove
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemBarterIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzProfileItemBarterIn
{ 
	FString                                            UserIDA;                                                    // 0x0000   (0x0010)  
	FString                                            UserIDB;                                                    // 0x0010   (0x0010)  
	TArray<FZeuzProfileItemMove>                       OfferA;                                                     // 0x0020   (0x0010)  
	TArray<FZeuzProfileItemMove>                       OfferB;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemUserName
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzProfileItemUserName
{ 
	FString                                            UserID;                                                     // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemRemIn
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzProfileItemRemIn
{ 
	FString                                            ItemID;                                                     // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemRemByNameIn
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzProfileItemRemByNameIn
{ 
	FString                                            UserID;                                                     // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	int32_t                                            Count;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzProfileItemTransferIn
/// Size: 0x0010 (16 bytes) (0x000018 - 0x000028) align 8 pad: 0x0000
struct FZeuzProfileItemTransferIn : FZeuzProfileItemMove
{ 
	FString                                            UserIDTo;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileUserCreateIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzProfileUserCreateIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Desc;                                                       // 0x0020   (0x0010)  
	FString                                            PWHash;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileUserLookupIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzProfileUserLookupIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileUserPwHashIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzProfileUserPwHashIn
{ 
	FString                                            UserID;                                                     // 0x0000   (0x0010)  
	FString                                            PWHash;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzProfileUsersListIn
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzProfileUsersListIn
{ 
	FString                                            Offset;                                                     // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAccountCreateIn
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FZeuzAccountCreateIn
{ 
	FString                                            Title;                                                      // 0x0000   (0x0010)  
	FString                                            Desc;                                                       // 0x0010   (0x0010)  
	FString                                            EMail;                                                      // 0x0020   (0x0010)  
	FString                                            Company;                                                    // 0x0030   (0x0010)  
	FString                                            Department;                                                 // 0x0040   (0x0010)  
	FString                                            Country;                                                    // 0x0050   (0x0010)  
	FString                                            ZIP;                                                        // 0x0060   (0x0010)  
	FString                                            City;                                                       // 0x0070   (0x0010)  
	FString                                            StreetAddr;                                                 // 0x0080   (0x0010)  
	FZeuzProperties                                    Props;                                                      // 0x0090   (0x0028)  
	TArray<FZeuzProvisioningAccount>                   ProvisioningAccounts;                                       // 0x00B8   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDeveloperCreateIn
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FZeuzAccountDeveloperCreateIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            Desc;                                                       // 0x0020   (0x0010)  
	FString                                            AccountID;                                                  // 0x0030   (0x0010)  
	int32_t                                            AccountRole;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            PWHash;                                                     // 0x0048   (0x0010)  
	FZeuzProperties                                    Props;                                                      // 0x0058   (0x0028)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDeveloperCreatePwHashIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzAccountDeveloperCreatePwHashIn
{ 
	FString                                            DevID;                                                      // 0x0000   (0x0010)  
	FString                                            AccountID;                                                  // 0x0010   (0x0010)  
	FString                                            Hash;                                                       // 0x0020   (0x0010)  
	FString                                            PWHash;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDeveloperPasswordResetExecuteRequestIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn
{ 
	FString                                            EMail;                                                      // 0x0000   (0x0010)  
	FString                                            Hash;                                                       // 0x0010   (0x0010)  
	FString                                            PasswordHash;                                               // 0x0020   (0x0010)  
	FString                                            PasswordConfirmHash;                                        // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDeveloperPasswordResetIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAccountDeveloperPasswordResetIn
{ 
	FString                                            EMail;                                                      // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDeveloperSetPwHashIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAccountDeveloperSetPwHashIn
{ 
	FString                                            CurrentPWHash;                                              // 0x0000   (0x0010)  
	FString                                            NewPWHash;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDevQuickSetupOut
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FZeuzAccountDevQuickSetupOut
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Account;                                                    // 0x0010   (0x0010)  
	FString                                            User;                                                       // 0x0020   (0x0010)  
	FString                                            Dev;                                                        // 0x0030   (0x0010)  
	FString                                            Team;                                                       // 0x0040   (0x0010)  
	FString                                            Proj;                                                       // 0x0050   (0x0010)  
	FString                                            Env;                                                        // 0x0060   (0x0010)  
	FString                                            ApiKey;                                                     // 0x0070   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountDevQuickSetupIn
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzAccountDevQuickSetupIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            PWHash;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountEnvCreateIn
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FZeuzAccountEnvCreateIn
{ 
	FString                                            Proj;                                                       // 0x0000   (0x0010)  
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            Desc;                                                       // 0x0020   (0x0010)  
	FZeuzProperties                                    Props;                                                      // 0x0030   (0x0028)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountEnvDeleteIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzAccountEnvDeleteIn
{ 
	FString                                            Proj;                                                       // 0x0000   (0x0010)  
	FString                                            Env;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountChange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzAccountChange
{ 
	FString                                            Account;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountProjectCreateIn
/// Size: 0x0048 (72 bytes) (0x000010 - 0x000058) align 8 pad: 0x0000
struct FZeuzAccountProjectCreateIn : FZeuzAccountChange
{ 
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            Desc;                                                       // 0x0020   (0x0010)  
	FZeuzProperties                                    Props;                                                      // 0x0030   (0x0028)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountProjectDeleteIn
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000020) align 8 pad: 0x0000
struct FZeuzAccountProjectDeleteIn : FZeuzAccountChange
{ 
	FString                                            Proj;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountQuotaInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzAccountQuotaInfo
{ 
	FString                                            Account;                                                    // 0x0000   (0x0010)  
	int32_t                                            QuotaCL;                                                    // 0x0010   (0x0004)  
	int32_t                                            QuotaBM;                                                    // 0x0014   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountTeamCreateIn
/// Size: 0x0058 (88 bytes) (0x000010 - 0x000068) align 8 pad: 0x0000
struct FZeuzAccountTeamCreateIn : FZeuzAccountChange
{ 
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            Desc;                                                       // 0x0020   (0x0010)  
	FZeuzProperties                                    Props;                                                      // 0x0030   (0x0028)  
	TArray<FString>                                    Devs;                                                       // 0x0058   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAccountTeamDeleteIn
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000020) align 8 pad: 0x0000
struct FZeuzAccountTeamDeleteIn : FZeuzAccountChange
{ 
	FString                                            Team;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzTeam
/// Size: 0x0040 (64 bytes) (0x000088 - 0x0000C8) align 8 pad: 0x0000
struct FZeuzTeam : FZeuzItemCommon
{ 
	FString                                            ID;                                                         // 0x0088   (0x0010)  
	FString                                            Account;                                                    // 0x0098   (0x0010)  
	FString                                            Desc;                                                       // 0x00A8   (0x0010)  
	TArray<FString>                                    Devs;                                                       // 0x00B8   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineSpec
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzMachineSpec
{ 
	FString                                            OS;                                                         // 0x0000   (0x0010)  
	int32_t                                            CoreCount;                                                  // 0x0010   (0x0004)  
	int32_t                                            CoreMhz;                                                    // 0x0014   (0x0004)  
	int32_t                                            MemoryMB;                                                   // 0x0018   (0x0004)  
	int32_t                                            StorageGB;                                                  // 0x001C   (0x0004)  
	int32_t                                            IOBandwidthMBps;                                            // 0x0020   (0x0004)  
	int32_t                                            InetBandwidthMBps;                                          // 0x0024   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceInfo
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FZeuzMachineResourceInfo
{ 
	FString                                            ResourceID;                                                 // 0x0000   (0x0010)  
	FString                                            LocationID;                                                 // 0x0010   (0x0010)  
	FZeuzMachineSpec                                   Spec;                                                       // 0x0020   (0x0028)  
	FString                                            Provider;                                                   // 0x0048   (0x0010)  
	FString                                            Hostname;                                                   // 0x0058   (0x0010)  
	FString                                            IP;                                                         // 0x0068   (0x0010)  
	bool                                               IgnoreOnAlloc;                                              // 0x0078   (0x0001)  
	bool                                               Bound;                                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x007A   (0x0006)  MISSED
	FString                                            MachineID;                                                  // 0x0080   (0x0010)  
	FString                                            AccountID;                                                  // 0x0090   (0x0010)  
	int32_t                                            TierLevel;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FZeuzTags                                          Tags;                                                       // 0x00A8   (0x0010)  
	FString                                            ProvisionJobID;                                             // 0x00B8   (0x0010)  
	FString                                            ResourceClusterID;                                          // 0x00C8   (0x0010)  
	FString                                            NodeID;                                                     // 0x00D8   (0x0010)  
	bool                                               AllocatingDisabled;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzMachineInfo
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 pad: 0x0000
struct FZeuzMachineInfo
{ 
	FString                                            MachineID;                                                  // 0x0000   (0x0010)  
	FString                                            ResourceID;                                                 // 0x0010   (0x0010)  
	FString                                            LocationID;                                                 // 0x0020   (0x0010)  
	FString                                            AllocationID;                                               // 0x0030   (0x0010)  
	FString                                            AccountID;                                                  // 0x0040   (0x0010)  
	FZeuzMachineSpec                                   Spec;                                                       // 0x0050   (0x0028)  
	FZeuzTags                                          Tags;                                                       // 0x0078   (0x0010)  
	FString                                            IP;                                                         // 0x0088   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0098   (0x0010)  
	FString                                            LocationType;                                               // 0x00A8   (0x0010)  
	FZeuzTimestamp                                     Created;                                                    // 0x00B8   (0x0008)  
	FZeuzTimestamp                                     Finished;                                                   // 0x00C0   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineGetOut
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzMachineGetOut
{ 
	TArray<FZeuzMachineInfo>                           Items;                                                      // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzMachineTagsSetIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzMachineTagsSetIn
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FZeuzTags                                          Tags;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceDataIn
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 pad: 0x0000
struct FZeuzMachineResourceDataIn
{ 
	FString                                            LocationID;                                                 // 0x0000   (0x0010)  
	FZeuzMachineSpec                                   Spec;                                                       // 0x0010   (0x0028)  
	FString                                            Hostname;                                                   // 0x0038   (0x0010)  
	FString                                            Provider;                                                   // 0x0048   (0x0010)  
	FString                                            IP;                                                         // 0x0058   (0x0010)  
	bool                                               IgnoreOnAlloc;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            AccountID;                                                  // 0x0070   (0x0010)  
	int32_t                                            TierLevel;                                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FZeuzTags                                          Tags;                                                       // 0x0088   (0x0010)  
	FString                                            ResourceClusterID;                                          // 0x0098   (0x0010)  
	FString                                            NodeID;                                                     // 0x00A8   (0x0010)  
	bool                                               AllocatingDisabled;                                         // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceAllocateIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzMachineResourceAllocateIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    Resources;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourcesCountIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzMachineResourcesCountIn
{ 
	FString                                            AccountID;                                                  // 0x0000   (0x0010)  
	FString                                            Type;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceDeallocateIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzMachineResourceDeallocateIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    Machines;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachinePagination
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzMachinePagination
{ 
	bool                                               GetTotal;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            Limit;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            OrderBy;                                                    // 0x0010   (0x0010)  
	bool                                               OrderAsc;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzMachineGetIn
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000088) align 8 pad: 0x0000
struct FZeuzMachineGetIn : FZeuzMachinePagination
{ 
	FString                                            MachineID;                                                  // 0x0028   (0x0010)  
	FString                                            AllocationID;                                               // 0x0038   (0x0010)  
	FString                                            RegionID;                                                   // 0x0048   (0x0010)  
	FString                                            LocationType;                                               // 0x0058   (0x0010)  
	TArray<FString>                                    Tags;                                                       // 0x0068   (0x0010)  
	FZeuzTimestamp                                     Start;                                                      // 0x0078   (0x0008)  
	FZeuzTimestamp                                     End;                                                        // 0x0080   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceGetIn
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FZeuzMachineResourceGetIn
{ 
	TArray<FString>                                    ResourceIDs;                                                // 0x0000   (0x0010)  
	FString                                            RegionID;                                                   // 0x0010   (0x0010)  
	FZeuzMachineSpec                                   MinSpec;                                                    // 0x0020   (0x0028)  
	TArray<FString>                                    MachineType;                                                // 0x0048   (0x0010)  
	TArray<FString>                                    Accounts;                                                   // 0x0058   (0x0010)  
	TArray<FString>                                    Machines;                                                   // 0x0068   (0x0010)  
	TArray<FString>                                    Providers;                                                  // 0x0078   (0x0010)  
	int32_t                                            MinTierLevel;                                               // 0x0088   (0x0004)  
	bool                                               GetBound;                                                   // 0x008C   (0x0001)  
	bool                                               GetUnbound;                                                 // 0x008D   (0x0001)  
	bool                                               ForAllocation;                                              // 0x008E   (0x0001)  
	bool                                               ForDeprovisioning;                                          // 0x008F   (0x0001)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceDeprovisionIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzMachineResourceDeprovisionIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    Resources;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineResourceUpdateIn
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FZeuzMachineResourceUpdateIn
{ 
	FString                                            ResourceID;                                                 // 0x0000   (0x0010)  
	FZeuzMachineResourceDataIn                         Data;                                                       // 0x0010   (0x00C0)  
};

/// Struct /Script/Zeuzsdk.ZeuzMetricsEvalCondition
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FZeuzMetricsEvalCondition
{ 
	int32_t                                            TimeFrame;                                                  // 0x0000   (0x0004)  
	float                                              CoreUsageThreshold;                                         // 0x0004   (0x0004)  
	float                                              MemoryUsageThreshold;                                       // 0x0008   (0x0004)  
	float                                              IOBandwidthThreshold;                                       // 0x000C   (0x0004)  
	float                                              InetBandwidthThreshold;                                     // 0x0010   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzProviderResourceTypes
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzProviderResourceTypes
{ 
	FString                                            Provider;                                                   // 0x0000   (0x0010)  
	TArray<FString>                                    ResourceTypes;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMachineScalingRules
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FZeuzMachineScalingRules
{ 
	bool                                               EnableScaling;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MaxCloudMachines;                                           // 0x0004   (0x0004)  
	bool                                               UseAllBareMetalMachines;                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            MaxBareMetalMachines;                                       // 0x000C   (0x0004)  
	int32_t                                            MinFreePayloadCapacity;                                     // 0x0010   (0x0004)  
	int32_t                                            MaxFreePayloadCapacity;                                     // 0x0014   (0x0004)  
	bool                                               UseMetrics;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            CapEvalTimeFrame;                                           // 0x001C   (0x0004)  
	TArray<FZeuzMetricsEvalCondition>                  BlockedConditions;                                          // 0x0020   (0x0010)  
	TArray<FZeuzMetricsEvalCondition>                  IdleConditions;                                             // 0x0030   (0x0010)  
	TArray<FZeuzProviderResourceTypes>                 AllowedResourceTypes;                                       // 0x0040   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzPortDef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzPortDef
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadDef
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzPayloadDef
{ 
	FString                                            HostOS;                                                     // 0x0000   (0x0010)  
	FString                                            Image;                                                      // 0x0010   (0x0010)  
	TArray<FString>                                    Cmd;                                                        // 0x0020   (0x0010)  
	TArray<FZeuzPortDef>                               Ports;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadQuota
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FZeuzPayloadQuota
{ 
	float                                              CpuCores;                                                   // 0x0000   (0x0004)  
	int32_t                                            MemoryMB;                                                   // 0x0004   (0x0004)  
	int32_t                                            StorageGB;                                                  // 0x0008   (0x0004)  
	int32_t                                            IOBandwidthMBps;                                            // 0x000C   (0x0004)  
	int32_t                                            InetBandwidthMBps;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzSafetyLimits
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FZeuzSafetyLimits
{ 
	float                                              CoreMaxUsageThreshold;                                      // 0x0000   (0x0004)  
	int32_t                                            CpuRemainingCores;                                          // 0x0004   (0x0004)  
	int32_t                                            MemoryMBFree;                                               // 0x0008   (0x0004)  
	int32_t                                            StorageGBFree;                                              // 0x000C   (0x0004)  
	int32_t                                            IOMBpsFree;                                                 // 0x0010   (0x0004)  
	int32_t                                            InetMBpsFree;                                               // 0x0014   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadScalingRules
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FZeuzPayloadScalingRules
{ 
	bool                                               EnableScaling;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FZeuzPayloadDef                                    PayloadDef;                                                 // 0x0008   (0x0040)  
	FZeuzPayloadQuota                                  PayloadQuota;                                               // 0x0048   (0x0014)  
	FZeuzSafetyLimits                                  SafetyLimits;                                               // 0x005C   (0x0018)  
	int32_t                                            MinUnreservedPayloads;                                      // 0x0074   (0x0004)  
	int32_t                                            MaxUnreservedPayloads;                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzScalingRules
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FZeuzScalingRules
{ 
	FZeuzMachineScalingRules                           Machine;                                                    // 0x0000   (0x0050)  
	FZeuzPayloadScalingRules                           Payload;                                                    // 0x0050   (0x0080)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationInfo
/// Size: 0x0168 (360 bytes) (0x000000 - 0x000168) align 8 pad: 0x0000
struct FZeuzAllocationInfo
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	FString                                            ProjID;                                                     // 0x0010   (0x0010)  
	FString                                            EnvID;                                                      // 0x0020   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0030   (0x0010)  
	TArray<FString>                                    Machines;                                                   // 0x0040   (0x0010)  
	FString                                            Description;                                                // 0x0050   (0x0010)  
	bool                                               Enabled;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FZeuzScalingRules                                  ScalingRules;                                               // 0x0068   (0x00D0)  
	FZeuzMachineSpec                                   MachineMinSpec;                                             // 0x0138   (0x0028)  
	int32_t                                            ActivePayloads;                                             // 0x0160   (0x0004)  
	int32_t                                            ReservedPayloads;                                           // 0x0164   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationDef
/// Size: 0x0118 (280 bytes) (0x000000 - 0x000118) align 8 pad: 0x0000
struct FZeuzAllocationDef
{ 
	FString                                            Description;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0010   (0x0010)  
	FZeuzScalingRules                                  ScalingRules;                                               // 0x0020   (0x00D0)  
	FZeuzMachineSpec                                   MachineMinSpec;                                             // 0x00F0   (0x0028)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationCreateIn
/// Size: 0x0138 (312 bytes) (0x000000 - 0x000138) align 8 pad: 0x0000
struct FZeuzAllocationCreateIn
{ 
	FString                                            ProjID;                                                     // 0x0000   (0x0010)  
	FString                                            EnvID;                                                      // 0x0010   (0x0010)  
	FZeuzAllocationDef                                 AllocationDef;                                              // 0x0020   (0x0118)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationGetOut
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzAllocationGetOut
{ 
	TArray<FZeuzAllocationInfo>                        Items;                                                      // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationPagination
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzAllocationPagination
{ 
	bool                                               GetTotal;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            Limit;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            OrderBy;                                                    // 0x0010   (0x0010)  
	bool                                               OrderAsc;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationGetIn
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
struct FZeuzAllocationGetIn : FZeuzAllocationPagination
{ 
	TArray<FString>                                    AllocationIDs;                                              // 0x0028   (0x0010)  
	bool                                               GetDisabled;                                                // 0x0038   (0x0001)  
	bool                                               GetEnabled;                                                 // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
	FString                                            Region;                                                     // 0x0040   (0x0010)  
	FString                                            OS;                                                         // 0x0050   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationPayloadPortMapping
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FZeuzAllocationPayloadPortMapping
{ 
	int32_t                                            InternalPort;                                               // 0x0000   (0x0004)  
	int32_t                                            ExternalPort;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationPayloadInfo
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 pad: 0x0000
struct FZeuzAllocationPayloadInfo
{ 
	FString                                            PayloadID;                                                  // 0x0000   (0x0010)  
	FString                                            MachineID;                                                  // 0x0010   (0x0010)  
	FString                                            AllocationID;                                               // 0x0020   (0x0010)  
	FString                                            EnvID;                                                      // 0x0030   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0040   (0x0010)  
	FZeuzPayloadDef                                    PayloadDef;                                                 // 0x0050   (0x0040)  
	bool                                               Active;                                                     // 0x0090   (0x0001)  
	bool                                               Reserved;                                                   // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0092   (0x0006)  MISSED
	FString                                            IP;                                                         // 0x0098   (0x0010)  
	TArray<FZeuzAllocationPayloadPortMapping>          PortMapping;                                                // 0x00A8   (0x0010)  
	FString                                            Handling;                                                   // 0x00B8   (0x0010)  
	FString                                            LocationType;                                               // 0x00C8   (0x0010)  
	FZeuzTimestamp                                     Created;                                                    // 0x00D8   (0x0008)  
	FZeuzTimestamp                                     Modified;                                                   // 0x00E0   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationRegionCount
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzAllocationRegionCount
{ 
	FString                                            RegionID;                                                   // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationRequestServiceIn
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzAllocationRequestServiceIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	TArray<FZeuzAllocationRegionCount>                 RegionCount;                                                // 0x0010   (0x0010)  
	int32_t                                            TimeoutSeconds;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzAllocationUpdateIn
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 pad: 0x0000
struct FZeuzAllocationUpdateIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	FZeuzAllocationDef                                 AllocationDef;                                              // 0x0010   (0x0118)  
	bool                                               Enabled;                                                    // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzEchoOut
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzEchoOut
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzEcho2Out
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzEcho2Out
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzEchoIn
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzEchoIn
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzEcho2In
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzEcho2In
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzEcho3In
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FZeuzEcho3In
{ 
	int32_t                                            Num;                                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerPublishOutput
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzImageManagerPublishOutput
{ 
	FString                                            ImageHash;                                                  // 0x0000   (0x0010)  
	FString                                            ImageURL;                                                   // 0x0010   (0x0010)  
	FString                                            Version;                                                    // 0x0020   (0x0010)  
	FString                                            Description;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImagemanagerPublishState
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FZeuzImagemanagerPublishState
{ 
	FString                                            ImageID;                                                    // 0x0000   (0x0010)  
	FString                                            ImageHash;                                                  // 0x0010   (0x0010)  
	FString                                            State;                                                      // 0x0020   (0x0010)  
	FString                                            Message;                                                    // 0x0030   (0x0010)  
	FZeuzImageManagerPublishOutput                     Result;                                                     // 0x0040   (0x0040)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerListEntry
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FZeuzImageManagerListEntry
{ 
	FZeuzTimestamp                                     Timestamp;                                                  // 0x0000   (0x0008)  
	FString                                            ImageHash;                                                  // 0x0008   (0x0010)  
	FString                                            ImageURL;                                                   // 0x0018   (0x0010)  
	FString                                            Title;                                                      // 0x0028   (0x0010)  
	FString                                            Version;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerManifestEntryPart
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzImageManagerManifestEntryPart
{ 
	FString                                            Hash;                                                       // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
	int32_t                                            Index;                                                      // 0x0020   (0x0004)  
	int32_t                                            StartByte;                                                  // 0x0024   (0x0004)  
	int32_t                                            Length;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerManifestEntry
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FZeuzImageManagerManifestEntry
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	int32_t                                            Filesize;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Hash;                                                       // 0x0018   (0x0010)  
	FString                                            URL;                                                        // 0x0028   (0x0010)  
	TArray<FZeuzImageManagerManifestEntryPart>         Parts;                                                      // 0x0038   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerManifest
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzImageManagerManifest
{ 
	TArray<FZeuzImageManagerManifestEntry>             Entries;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerPushPullOutput
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzImageManagerPushPullOutput
{ 
	FZeuzImageManagerManifest                          Manifest;                                                   // 0x0000   (0x0010)  
	FString                                            ManifestHash;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    TransferHashes;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerPublishInput
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzImageManagerPublishInput
{ 
	FString                                            Description;                                                // 0x0000   (0x0010)  
	FString                                            Version;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerPullInput
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzImageManagerPullInput
{ 
	FString                                            ImageHash;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzImageManagerPresignedFileUrlIn
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzImageManagerPresignedFileUrlIn
{ 
	FString                                            ManifestHash;                                               // 0x0000   (0x0010)  
	FString                                            Filename;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzKVStoreKVEntry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FZeuzKVStoreKVEntry
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Partition;                                                  // 0x0008   (0x0010)  
	FString                                            Key;                                                        // 0x0018   (0x0010)  
	FString                                            Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzKVStoreKey
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzKVStoreKey
{ 
	FString                                            Partition;                                                  // 0x0000   (0x0010)  
	FString                                            Key;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzKVStoreDelIn
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FZeuzKVStoreDelIn : FZeuzKVStoreKey
{ 
};

/// Struct /Script/Zeuzsdk.ZeuzKVStoreKeyValue
/// Size: 0x0010 (16 bytes) (0x000020 - 0x000030) align 8 pad: 0x0000
struct FZeuzKVStoreKeyValue : FZeuzKVStoreKey
{ 
	FString                                            Value;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzKVStorePutIn
/// Size: 0x0000 (0 bytes) (0x000030 - 0x000030) align 8 pad: 0x0000
struct FZeuzKVStorePutIn : FZeuzKVStoreKeyValue
{ 
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyStateBase
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FZeuzLobbyStateBase
{ 
	FString                                            LobbyID;                                                    // 0x0000   (0x0010)  
	int32_t                                            UsersMax;                                                   // 0x0010   (0x0004)  
	bool                                               Private;                                                    // 0x0014   (0x0001)  
	bool                                               HasStarted;                                                 // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FString                                            Compatibility;                                              // 0x0018   (0x0010)  
	FZeuzVariant                                       Params;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyStateOut
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
struct FZeuzLobbyStateOut : FZeuzLobbyStateBase
{ 
	FString                                            InboxID;                                                    // 0x0038   (0x0010)  
	bool                                               HasPassword;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            UsersCur;                                                   // 0x004C   (0x0004)  
	int32_t                                            Version;                                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyUser
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FZeuzLobbyUser
{ 
	FString                                            UserID;                                                     // 0x0000   (0x0010)  
	FString                                            DisplayName;                                                // 0x0010   (0x0010)  
	FString                                            Team;                                                       // 0x0020   (0x0010)  
	FString                                            Slot;                                                       // 0x0030   (0x0010)  
	FString                                            Info;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyUserBase
/// Size: 0x0028 (40 bytes) (0x000050 - 0x000078) align 8 pad: 0x0000
struct FZeuzLobbyUserBase : FZeuzLobbyUser
{ 
	bool                                               Ready;                                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FZeuzVariant                                       Params;                                                     // 0x0058   (0x0010)  
	FZeuzTimestamp                                     Created;                                                    // 0x0068   (0x0008)  
	FZeuzTimestamp                                     Updated;                                                    // 0x0070   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyUsersOut
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FZeuzLobbyUsersOut
{ 
	FZeuzLobbyStateOut                                 Lobby;                                                      // 0x0000   (0x0058)  
	TArray<FZeuzLobbyUserBase>                         Users;                                                      // 0x0058   (0x0010)  
	FString                                            ServerConnect;                                              // 0x0068   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyQueryOut
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzLobbyQueryOut
{ 
	TArray<FZeuzLobbyStateOut>                         Results;                                                    // 0x0000   (0x0010)  
	int32_t                                            ResultOfs;                                                  // 0x0010   (0x0004)  
	int32_t                                            ResultTotal;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyServerConnect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FZeuzLobbyServerConnect
{ 
	FString                                            ServerConnect;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyStateIn
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
struct FZeuzLobbyStateIn : FZeuzLobbyStateBase
{ 
	FString                                            UserID;                                                     // 0x0038   (0x0010)  
	FString                                            Password;                                                   // 0x0048   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyStartDestroy
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FZeuzLobbyStartDestroy
{ 
	FString                                            LobbyID;                                                    // 0x0000   (0x0010)  
	FString                                            UserID;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyJoin
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzLobbyJoin
{ 
	FString                                            LobbyID;                                                    // 0x0000   (0x0010)  
	FString                                            UserID;                                                     // 0x0010   (0x0010)  
	FString                                            Password;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyKick
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FZeuzLobbyKick
{ 
	FString                                            LobbyID;                                                    // 0x0000   (0x0010)  
	FString                                            UserID;                                                     // 0x0010   (0x0010)  
	FString                                            TargetID;                                                   // 0x0020   (0x0010)  
	bool                                               Ban;                                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyQueryIn
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FZeuzLobbyQueryIn
{ 
	int32_t                                            ListMax;                                                    // 0x0000   (0x0004)  
	int32_t                                            ListOfs;                                                    // 0x0004   (0x0004)  
	FString                                            Filter;                                                     // 0x0008   (0x0010)  
	FString                                            Compatibility;                                              // 0x0018   (0x0010)  
	FZeuzVariant                                       Params;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyRefresh
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzLobbyRefresh
{ 
	FString                                            LobbyID;                                                    // 0x0000   (0x0010)  
	FString                                            UserID;                                                     // 0x0010   (0x0010)  
	int32_t                                            LastVersion;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyUserState
/// Size: 0x0010 (16 bytes) (0x000078 - 0x000088) align 8 pad: 0x0000
struct FZeuzLobbyUserState : FZeuzLobbyUserBase
{ 
	FString                                            ServerConnect;                                              // 0x0078   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLobbyUserIn
/// Size: 0x0010 (16 bytes) (0x000088 - 0x000098) align 8 pad: 0x0000
struct FZeuzLobbyUserIn : FZeuzLobbyUserState
{ 
	FString                                            LobbyID;                                                    // 0x0088   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLocation
/// Size: 0x00C8 (200 bytes) (0x000088 - 0x000150) align 8 pad: 0x0000
struct FZeuzLocation : FZeuzItemCommon
{ 
	FString                                            LocationID;                                                 // 0x0088   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0098   (0x0010)  
	FString                                            DisplayName;                                                // 0x00A8   (0x0010)  
	FString                                            Provider;                                                   // 0x00B8   (0x0010)  
	FString                                            Type;                                                       // 0x00C8   (0x0010)  
	float                                              Ranking;                                                    // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FString>                                    PingServer;                                                 // 0x00E0   (0x0010)  
	FString                                            ProvisionTemplateName;                                      // 0x00F0   (0x0010)  
	SDK_UNDEFINED(80,607) /* TMap<FString, FString> */ __um(ProvisionTemplateParams);                              // 0x0100   (0x0050)  
};

/// Struct /Script/Zeuzsdk.ZeuzProvider
/// Size: 0x0028 (40 bytes) (0x000088 - 0x0000B0) align 8 pad: 0x0000
struct FZeuzProvider : FZeuzItemCommon
{ 
	FString                                            ProviderID;                                                 // 0x0088   (0x0010)  
	FString                                            Name;                                                       // 0x0098   (0x0010)  
	bool                                               ClientProvisionable;                                        // 0x00A8   (0x0001)  
	bool                                               ProvisioningAllowed;                                        // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzRegion
/// Size: 0x0020 (32 bytes) (0x000088 - 0x0000A8) align 8 pad: 0x0000
struct FZeuzRegion : FZeuzItemCommon
{ 
	FString                                            RegionID;                                                   // 0x0088   (0x0010)  
	FString                                            DisplayName;                                                // 0x0098   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLocalityLocationGetIn
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FZeuzLocalityLocationGetIn
{ 
	TArray<FString>                                    LocationIDs;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    DisplayNames;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    Providers;                                                  // 0x0020   (0x0010)  
	TArray<FString>                                    LocationType;                                               // 0x0030   (0x0010)  
	FString                                            WithinRegion;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLocalityProviderGetIn
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzLocalityProviderGetIn
{ 
	TArray<FString>                                    ProviderIDs;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    Names;                                                      // 0x0010   (0x0010)  
	bool                                               GetClientProvisionable;                                     // 0x0020   (0x0001)  
	bool                                               GetNonClientProvisionable;                                  // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzLocalityRegionGetIn
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzLocalityRegionGetIn
{ 
	TArray<FString>                                    RegionIDs;                                                  // 0x0000   (0x0010)  
	TArray<FString>                                    DisplayNames;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    ContainsLocations;                                          // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLogsearchAccountLog
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 pad: 0x0000
struct FZeuzLogsearchAccountLog
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	int32_t                                            Time;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Message;                                                    // 0x0018   (0x0010)  
	int32_t                                            Level;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            Subroutine;                                                 // 0x0030   (0x0010)  
	FString                                            Container;                                                  // 0x0040   (0x0010)  
	FString                                            Proj;                                                       // 0x0050   (0x0010)  
	FString                                            Env;                                                        // 0x0060   (0x0010)  
	FString                                            Allocation;                                                 // 0x0070   (0x0010)  
	FString                                            Payload;                                                    // 0x0080   (0x0010)  
	FString                                            Machine;                                                    // 0x0090   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzLogsearchAccountOut
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzLogsearchAccountOut
{ 
	TArray<FZeuzLogsearchAccountLog>                   Logs;                                                       // 0x0000   (0x0010)  
	int32_t                                            Total;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzLogsearchLogsStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzLogsearchLogsStatus
{ 
	FString                                            Status;                                                     // 0x0000   (0x0010)  
	int32_t                                            Step;                                                       // 0x0010   (0x0004)  
	int32_t                                            Total;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzLogsearchAccountIn
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FZeuzLogsearchAccountIn
{ 
	FZeuzTimestamp                                     Start;                                                      // 0x0000   (0x0008)  
	FZeuzTimestamp                                     End;                                                        // 0x0008   (0x0008)  
	FString                                            Level;                                                      // 0x0010   (0x0010)  
	FString                                            Payload;                                                    // 0x0020   (0x0010)  
	FString                                            Query;                                                      // 0x0030   (0x0010)  
	FString                                            OrderBy;                                                    // 0x0040   (0x0010)  
	bool                                               OrderAsc;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	int32_t                                            LastLevel;                                                  // 0x0054   (0x0004)  
	int32_t                                            LastTime;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            LastID;                                                     // 0x0060   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchmakingUser
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FZeuzMatchmakingUser
{ 
	FString                                            UserID;                                                     // 0x0000   (0x0010)  
	FString                                            DisplayName;                                                // 0x0010   (0x0010)  
	FString                                            Team;                                                       // 0x0020   (0x0010)  
	FString                                            Slot;                                                       // 0x0030   (0x0010)  
	FString                                            Info;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchMakingResult
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 pad: 0x0000
struct FZeuzMatchMakingResult
{ 
	FString                                            Result;                                                     // 0x0000   (0x0010)  
	FString                                            Map;                                                        // 0x0010   (0x0010)  
	FString                                            Region;                                                     // 0x0020   (0x0010)  
	TArray<FZeuzMatchmakingUser>                       Users;                                                      // 0x0030   (0x0010)  
	FString                                            ServerConnect;                                              // 0x0040   (0x0010)  
	TArray<int32_t>                                    ServerPorts;                                                // 0x0050   (0x0010)  
	FString                                            AllocationID;                                               // 0x0060   (0x0010)  
	FString                                            Opt;                                                        // 0x0070   (0x0010)  
	FString                                            Signature;                                                  // 0x0080   (0x0010)  
	FZeuzTimestamp                                     Timestamp;                                                  // 0x0090   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchMakingStatus
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 pad: 0x0000
struct FZeuzMatchMakingStatus
{ 
	FString                                            MatchMakingId;                                              // 0x0000   (0x0010)  
	FZeuzTimestamp                                     ETA;                                                        // 0x0010   (0x0008)  
	FZeuzMatchMakingResult                             Result;                                                     // 0x0018   (0x0098)  
	FString                                            Error;                                                      // 0x00B0   (0x0010)  
	FString                                            State;                                                      // 0x00C0   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchMakingStats
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FZeuzMatchMakingStats
{ 
	int32_t                                            UsersCount;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchMakingInit
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FZeuzMatchMakingInit
{ 
	FZeuzMatchmakingUser                               User;                                                       // 0x0000   (0x0050)  
	FString                                            Compatibility;                                              // 0x0050   (0x0010)  
	FString                                            Region;                                                     // 0x0060   (0x0010)  
	FZeuzVariant                                       Params;                                                     // 0x0070   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchMakingPartyInit
/// Size: 0x0030 (48 bytes) (0x000080 - 0x0000B0) align 8 pad: 0x0000
struct FZeuzMatchMakingPartyInit : FZeuzMatchMakingInit
{ 
	TArray<FZeuzMatchmakingUser>                       Party;                                                      // 0x0080   (0x0010)  
	FString                                            AllocationID;                                               // 0x0090   (0x0010)  
	FString                                            ServerConnect;                                              // 0x00A0   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzMatchMakingServerInfo
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FZeuzMatchMakingServerInfo
{ 
	FString                                            PayloadID;                                                  // 0x0000   (0x0010)  
	bool                                               Allocatable;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            UserCount;                                                  // 0x0014   (0x0004)  
	FString                                            IP;                                                         // 0x0018   (0x0010)  
	TArray<int32_t>                                    Ports;                                                      // 0x0028   (0x0010)  
	FString                                            MachineID;                                                  // 0x0038   (0x0010)  
	FString                                            AllocationID;                                               // 0x0048   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0058   (0x0010)  
	FZeuzTimestamp                                     Created;                                                    // 0x0068   (0x0008)  
	FZeuzTimestamp                                     Updated;                                                    // 0x0070   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzMetricsQueryIn
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FZeuzMetricsQueryIn
{ 
	FZeuzTimestamp                                     Start;                                                      // 0x0000   (0x0008)  
	FZeuzTimestamp                                     End;                                                        // 0x0008   (0x0008)  
	int32_t                                            Step;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            GroupBy;                                                    // 0x0018   (0x0010)  
	TArray<FString>                                    PayloadIDs;                                                 // 0x0028   (0x0010)  
	TArray<FString>                                    MachineIDs;                                                 // 0x0038   (0x0010)  
	TArray<FString>                                    AllocationIDs;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadPortMapping
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FZeuzPayloadPortMapping
{ 
	int32_t                                            InternalPort;                                               // 0x0000   (0x0004)  
	int32_t                                            ExternalPort;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadInfo
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 pad: 0x0000
struct FZeuzPayloadInfo
{ 
	FString                                            PayloadID;                                                  // 0x0000   (0x0010)  
	FString                                            MachineID;                                                  // 0x0010   (0x0010)  
	FString                                            AllocationID;                                               // 0x0020   (0x0010)  
	FString                                            EnvID;                                                      // 0x0030   (0x0010)  
	TArray<FString>                                    Regions;                                                    // 0x0040   (0x0010)  
	FZeuzPayloadDef                                    PayloadDef;                                                 // 0x0050   (0x0040)  
	bool                                               Active;                                                     // 0x0090   (0x0001)  
	bool                                               Reserved;                                                   // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0092   (0x0006)  MISSED
	FString                                            IP;                                                         // 0x0098   (0x0010)  
	TArray<FZeuzPayloadPortMapping>                    PortMapping;                                                // 0x00A8   (0x0010)  
	FString                                            Handling;                                                   // 0x00B8   (0x0010)  
	FString                                            LocationType;                                               // 0x00C8   (0x0010)  
	FZeuzTimestamp                                     Created;                                                    // 0x00D8   (0x0008)  
	FZeuzTimestamp                                     Modified;                                                   // 0x00E0   (0x0008)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadGetOut
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FZeuzPayloadGetOut
{ 
	TArray<FZeuzPayloadInfo>                           Items;                                                      // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadStateInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FZeuzPayloadStateInfo
{ 
	FString                                            PayloadID;                                                  // 0x0000   (0x0010)  
	int32_t                                            State;                                                      // 0x0010   (0x0004)  
	int32_t                                            PlayerCount;                                                // 0x0014   (0x0004)  
	SDK_UNDEFINED(80,608) /* TMap<FString, FString> */ __um(PlayerList);                                           // 0x0018   (0x0050)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadAllocateIn
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzPayloadAllocateIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	FString                                            RegionID;                                                   // 0x0010   (0x0010)  
	int32_t                                            Count;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadCreateIn
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FZeuzPayloadCreateIn
{ 
	FString                                            AllocationID;                                               // 0x0000   (0x0010)  
	FString                                            MachineID;                                                  // 0x0010   (0x0010)  
	FZeuzPayloadDef                                    PayloadDef;                                                 // 0x0020   (0x0040)  
	FString                                            Hostname;                                                   // 0x0060   (0x0010)  
	int32_t                                            TTL;                                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadPagination
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzPayloadPagination
{ 
	bool                                               GetTotal;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            Limit;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            OrderBy;                                                    // 0x0010   (0x0010)  
	bool                                               OrderAsc;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadGetIn
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000080) align 8 pad: 0x0000
struct FZeuzPayloadGetIn : FZeuzPayloadPagination
{ 
	TArray<FString>                                    AllocationIDs;                                              // 0x0028   (0x0010)  
	TArray<FString>                                    MachineIDs;                                                 // 0x0038   (0x0010)  
	TArray<FString>                                    PayloadIDs;                                                 // 0x0048   (0x0010)  
	FString                                            LocationType;                                               // 0x0058   (0x0010)  
	FString                                            RegionID;                                                   // 0x0068   (0x0010)  
	bool                                               GetReserved;                                                // 0x0078   (0x0001)  
	bool                                               GetUnreserved;                                              // 0x0079   (0x0001)  
	bool                                               GetActive;                                                  // 0x007A   (0x0001)  
	bool                                               GetInactive;                                                // 0x007B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadResumeIn
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 pad: 0x0000
struct FZeuzPayloadResumeIn
{ 
	FString                                            PayloadID;                                                  // 0x0000   (0x0010)  
	FString                                            AllocationID;                                               // 0x0010   (0x0010)  
	FString                                            MachineID;                                                  // 0x0020   (0x0010)  
	FZeuzPayloadDef                                    PayloadDef;                                                 // 0x0030   (0x0040)  
	FString                                            Hostname;                                                   // 0x0070   (0x0010)  
	int32_t                                            TTL;                                                        // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadStateGetIn
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FZeuzPayloadStateGetIn
{ 
	TArray<FString>                                    AllocationIDs;                                              // 0x0000   (0x0010)  
	TArray<FString>                                    MachineIDs;                                                 // 0x0010   (0x0010)  
	TArray<FString>                                    PayloadIDs;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzPayloadUpdateIn
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FZeuzPayloadUpdateIn
{ 
	FString                                            PayloadID;                                                  // 0x0000   (0x0010)  
	FZeuzPayloadDef                                    PayloadDef;                                                 // 0x0010   (0x0040)  
};

/// Struct /Script/Zeuzsdk.ZeuzServerBrowserStateBase
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FZeuzServerBrowserStateBase
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            ClientAddr;                                                 // 0x0010   (0x0010)  
	int32_t                                            UsersCur;                                                   // 0x0020   (0x0004)  
	int32_t                                            UsersMax;                                                   // 0x0024   (0x0004)  
	FString                                            Compatibility;                                              // 0x0028   (0x0010)  
	FZeuzVariant                                       Params;                                                     // 0x0038   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzServerBrowserStateOut
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
struct FZeuzServerBrowserStateOut : FZeuzServerBrowserStateBase
{ 
};

/// Struct /Script/Zeuzsdk.ZeuzServerBrowserQueryOut
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzServerBrowserQueryOut
{ 
	TArray<FZeuzServerBrowserStateOut>                 Results;                                                    // 0x0000   (0x0010)  
	int32_t                                            ResultOfs;                                                  // 0x0010   (0x0004)  
	int32_t                                            ResultTotal;                                                // 0x0014   (0x0004)  
	FString                                            Errors;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzServerBrowserQueryIn
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FZeuzServerBrowserQueryIn
{ 
	int32_t                                            ListMax;                                                    // 0x0000   (0x0004)  
	int32_t                                            ListOfs;                                                    // 0x0004   (0x0004)  
	FString                                            Filter;                                                     // 0x0008   (0x0010)  
	FString                                            Compatibility;                                              // 0x0018   (0x0010)  
	FZeuzVariant                                       Params;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzServerBrowserStateIn
/// Size: 0x0000 (0 bytes) (0x000048 - 0x000048) align 8 pad: 0x0000
struct FZeuzServerBrowserStateIn : FZeuzServerBrowserStateBase
{ 
};

/// Struct /Script/Zeuzsdk.ZeuzSimpleAuthLoginIn
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FZeuzSimpleAuthLoginIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Password;                                                   // 0x0010   (0x0010)  
	EZeuzSessionType                                   LoginType;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzSimpleProfileUserCreateIn
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FZeuzSimpleProfileUserCreateIn
{ 
	FString                                            Login;                                                      // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Desc;                                                       // 0x0020   (0x0010)  
	FString                                            Password;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/Zeuzsdk.ZeuzItem
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FZeuzItem
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzACLPermission
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FZeuzACLPermission
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Zeuzsdk.ZeuzPropVal
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FZeuzPropVal
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

static_assert(sizeof(UZeuzApiAccount) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiAdmin) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiAllocation) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiApikey) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiAuth) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiEcho) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiImagemanager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiKVStore) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiLobby) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiLocality) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiLogsearch) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiMachine) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiMatchmaking) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiMetrics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiPayload) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiProfile) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiServerbrowser) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiSimpleAuth) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiContext) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzID) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiPing) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiPubIP) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzTagsUtil) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiTime) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UZeuzApiUtil) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FZeuzVariant) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzByteArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzContext) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FZeuzACLEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzACL) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzTags) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzTimestamp) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FZeuzItemCommon) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FZeuzProvisioningAccount) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FZeuzAccount) == 0x0168); // 360 bytes (0x000088 - 0x000168)
static_assert(sizeof(FZeuzAdminAccountsIn) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FZeuzAdminCountResoucesIn) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzAdminCountResoucesPerAccountOut) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzAdminTestpoolIn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzDeveloper) == 0x0120); // 288 bytes (0x000088 - 0x000120)
static_assert(sizeof(FZeuzAdminAccountIn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzServiceCfg) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FZeuzEnv) == 0x00E8); // 232 bytes (0x000088 - 0x0000E8)
static_assert(sizeof(FZeuzAdminEnvIn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzAdminItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzAdminItemsOut) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzAdminItemsIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzLogsearchOut) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzAdminLogsIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzProjEnvInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzProj) == 0x00C8); // 200 bytes (0x000088 - 0x0000C8)
static_assert(sizeof(FZeuzAdminStat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzAdminStatsOut) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzAdminStatsIn) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FZeuzSession) == 0x00F0); // 240 bytes (0x000088 - 0x0000F0)
static_assert(sizeof(FZeuzAuthLoginResult) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FZeuzAuthLoginIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzAPIKey) == 0x00E0); // 224 bytes (0x000088 - 0x0000E0)
static_assert(sizeof(FZeuzAPIKeyDeleteIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzAPIKeyGenerateIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzAPIKeyGetIn) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzAPIKeyPwHashIn) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzProfileItemClassConfig) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FZeuzProfileItemNameCount) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzProfileItemConfig) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FZeuzProfileItemConfigGetOut) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzInvItem) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(FZeuzUserProfile) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FZeuzUser) == 0x00D8); // 216 bytes (0x000088 - 0x0000D8)
static_assert(sizeof(FZeuzProfileUsersListOut) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzProfileItemAddIn) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FZeuzProfileItemMove) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzProfileItemBarterIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzProfileItemUserName) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzProfileItemRemIn) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzProfileItemRemByNameIn) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzProfileItemTransferIn) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FZeuzProfileUserCreateIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzProfileUserLookupIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzProfileUserPwHashIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzProfileUsersListIn) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzAccountCreateIn) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FZeuzAccountDeveloperCreateIn) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FZeuzAccountDeveloperCreatePwHashIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzAccountDeveloperPasswordResetExecuteRequestIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzAccountDeveloperPasswordResetIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzAccountDeveloperSetPwHashIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzAccountDevQuickSetupOut) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FZeuzAccountDevQuickSetupIn) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzAccountEnvCreateIn) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FZeuzAccountEnvDeleteIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzAccountChange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzAccountProjectCreateIn) == 0x0058); // 88 bytes (0x000010 - 0x000058)
static_assert(sizeof(FZeuzAccountProjectDeleteIn) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FZeuzAccountQuotaInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzAccountTeamCreateIn) == 0x0068); // 104 bytes (0x000010 - 0x000068)
static_assert(sizeof(FZeuzAccountTeamDeleteIn) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FZeuzTeam) == 0x00C8); // 200 bytes (0x000088 - 0x0000C8)
static_assert(sizeof(FZeuzMachineSpec) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzMachineResourceInfo) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FZeuzMachineInfo) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FZeuzMachineGetOut) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzMachineTagsSetIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzMachineResourceDataIn) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FZeuzMachineResourceAllocateIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzMachineResourcesCountIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzMachineResourceDeallocateIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzMachinePagination) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzMachineGetIn) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FZeuzMachineResourceGetIn) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FZeuzMachineResourceDeprovisionIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzMachineResourceUpdateIn) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FZeuzMetricsEvalCondition) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FZeuzProviderResourceTypes) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzMachineScalingRules) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FZeuzPortDef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzPayloadDef) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzPayloadQuota) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FZeuzSafetyLimits) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzPayloadScalingRules) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FZeuzScalingRules) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FZeuzAllocationInfo) == 0x0168); // 360 bytes (0x000000 - 0x000168)
static_assert(sizeof(FZeuzAllocationDef) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(FZeuzAllocationCreateIn) == 0x0138); // 312 bytes (0x000000 - 0x000138)
static_assert(sizeof(FZeuzAllocationGetOut) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzAllocationPagination) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzAllocationGetIn) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FZeuzAllocationPayloadPortMapping) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FZeuzAllocationPayloadInfo) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(FZeuzAllocationRegionCount) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzAllocationRequestServiceIn) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzAllocationUpdateIn) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FZeuzEchoOut) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzEcho2Out) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzEchoIn) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzEcho2In) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzEcho3In) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FZeuzImageManagerPublishOutput) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzImagemanagerPublishState) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FZeuzImageManagerListEntry) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FZeuzImageManagerManifestEntryPart) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzImageManagerManifestEntry) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FZeuzImageManagerManifest) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzImageManagerPushPullOutput) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzImageManagerPublishInput) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzImageManagerPullInput) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzImageManagerPresignedFileUrlIn) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzKVStoreKVEntry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FZeuzKVStoreKey) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzKVStoreDelIn) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FZeuzKVStoreKeyValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FZeuzKVStorePutIn) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FZeuzLobbyStateBase) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FZeuzLobbyStateOut) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FZeuzLobbyUser) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FZeuzLobbyUserBase) == 0x0078); // 120 bytes (0x000050 - 0x000078)
static_assert(sizeof(FZeuzLobbyUsersOut) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FZeuzLobbyQueryOut) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzLobbyServerConnect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FZeuzLobbyStateIn) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FZeuzLobbyStartDestroy) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZeuzLobbyJoin) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzLobbyKick) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FZeuzLobbyQueryIn) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FZeuzLobbyRefresh) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzLobbyUserState) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FZeuzLobbyUserIn) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(FZeuzLocation) == 0x0150); // 336 bytes (0x000088 - 0x000150)
static_assert(sizeof(FZeuzProvider) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(FZeuzRegion) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(FZeuzLocalityLocationGetIn) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FZeuzLocalityProviderGetIn) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzLocalityRegionGetIn) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzLogsearchAccountLog) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FZeuzLogsearchAccountOut) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzLogsearchLogsStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzLogsearchAccountIn) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FZeuzMatchmakingUser) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FZeuzMatchMakingResult) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FZeuzMatchMakingStatus) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FZeuzMatchMakingStats) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FZeuzMatchMakingInit) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FZeuzMatchMakingPartyInit) == 0x00B0); // 176 bytes (0x000080 - 0x0000B0)
static_assert(sizeof(FZeuzMatchMakingServerInfo) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FZeuzMetricsQueryIn) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FZeuzPayloadPortMapping) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FZeuzPayloadInfo) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(FZeuzPayloadGetOut) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FZeuzPayloadStateInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FZeuzPayloadAllocateIn) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzPayloadCreateIn) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FZeuzPayloadPagination) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzPayloadGetIn) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FZeuzPayloadResumeIn) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FZeuzPayloadStateGetIn) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FZeuzPayloadUpdateIn) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FZeuzServerBrowserStateBase) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FZeuzServerBrowserStateOut) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FZeuzServerBrowserQueryOut) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzServerBrowserQueryIn) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FZeuzServerBrowserStateIn) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FZeuzSimpleAuthLoginIn) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FZeuzSimpleProfileUserCreateIn) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FZeuzItem) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FZeuzACLPermission) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FZeuzPropVal) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FZeuzContext, Endpoint) == 0x0000);
static_assert(offsetof(FZeuzContext, SessionID) == 0x0010);
static_assert(offsetof(FZeuzContext, SessionKey) == 0x0020);
static_assert(offsetof(FZeuzContext, UserID) == 0x0030);
static_assert(offsetof(FZeuzContext, DeveloperID) == 0x0040);
static_assert(offsetof(FZeuzContext, ProjID) == 0x0050);
static_assert(offsetof(FZeuzContext, EnvID) == 0x0060);
static_assert(offsetof(FZeuzContext, Login) == 0x0070);
static_assert(offsetof(FZeuzContext, PWHash) == 0x0080);
static_assert(offsetof(FZeuzContext, LoginType) == 0x0090);
static_assert(offsetof(FZeuzACLEntry, GenID) == 0x0000);
static_assert(offsetof(FZeuzACL, List) == 0x0000);
static_assert(offsetof(FZeuzTags, Tags) == 0x0000);
static_assert(offsetof(FZeuzProperties, Tags) == 0x0008);
static_assert(offsetof(FZeuzProperties, Val) == 0x0018);
static_assert(offsetof(FZeuzItemCommon, Title) == 0x0008);
static_assert(offsetof(FZeuzItemCommon, ACL) == 0x0018);
static_assert(offsetof(FZeuzItemCommon, Props) == 0x0028);
static_assert(offsetof(FZeuzItemCommon, Created) == 0x0050);
static_assert(offsetof(FZeuzItemCommon, CreatedBy) == 0x0058);
static_assert(offsetof(FZeuzItemCommon, Modified) == 0x0068);
static_assert(offsetof(FZeuzItemCommon, ModifiedBy) == 0x0070);
static_assert(offsetof(FZeuzItemCommon, Expires) == 0x0080);
static_assert(offsetof(FZeuzProvisioningAccount, ProviderID) == 0x0000);
static_assert(offsetof(FZeuzProvisioningAccount, Username) == 0x0018);
static_assert(offsetof(FZeuzProvisioningAccount, Password) == 0x0028);
static_assert(offsetof(FZeuzProvisioningAccount, ApiKey) == 0x0038);
static_assert(offsetof(FZeuzProvisioningAccount, SecretKey) == 0x0048);
static_assert(offsetof(FZeuzProvisioningAccount, SubscriptionID) == 0x0058);
static_assert(offsetof(FZeuzProvisioningAccount, TenantID) == 0x0068);
static_assert(offsetof(FZeuzProvisioningAccount, ClientId) == 0x0078);
static_assert(offsetof(FZeuzProvisioningAccount, ClientSecret) == 0x0088);
static_assert(offsetof(FZeuzProvisioningAccount, GcpCredentialsFile) == 0x0098);
static_assert(offsetof(FZeuzProvisioningAccount, GcpFileName) == 0x00A8);
static_assert(offsetof(FZeuzProvisioningAccount, GcpUploadFileDate) == 0x00B8);
static_assert(offsetof(FZeuzAccount, ID) == 0x0088);
static_assert(offsetof(FZeuzAccount, Managers) == 0x0098);
static_assert(offsetof(FZeuzAccount, Projects) == 0x00A8);
static_assert(offsetof(FZeuzAccount, Teams) == 0x00B8);
static_assert(offsetof(FZeuzAccount, Devs) == 0x00C8);
static_assert(offsetof(FZeuzAccount, Desc) == 0x00D8);
static_assert(offsetof(FZeuzAccount, EMail) == 0x00E8);
static_assert(offsetof(FZeuzAccount, Company) == 0x00F8);
static_assert(offsetof(FZeuzAccount, Department) == 0x0108);
static_assert(offsetof(FZeuzAccount, Country) == 0x0118);
static_assert(offsetof(FZeuzAccount, ZIP) == 0x0128);
static_assert(offsetof(FZeuzAccount, City) == 0x0138);
static_assert(offsetof(FZeuzAccount, StreetAddr) == 0x0148);
static_assert(offsetof(FZeuzAccount, ProvisioningAccounts) == 0x0158);
static_assert(offsetof(FZeuzAdminCountResoucesIn, RegionID) == 0x0008);
static_assert(offsetof(FZeuzAdminCountResoucesPerAccountOut, AccountID) == 0x0000);
static_assert(offsetof(FZeuzAdminCountResoucesPerAccountOut, AccountName) == 0x0010);
static_assert(offsetof(FZeuzAdminTestpoolIn, RegionID) == 0x0000);
static_assert(offsetof(FZeuzDeveloper, ID) == 0x0088);
static_assert(offsetof(FZeuzDeveloper, Account) == 0x0098);
static_assert(offsetof(FZeuzDeveloper, Login) == 0x00B0);
static_assert(offsetof(FZeuzDeveloper, Desc) == 0x00C0);
static_assert(offsetof(FZeuzDeveloper, PWHash) == 0x00D0);
static_assert(offsetof(FZeuzDeveloper, LastLogin) == 0x00E0);
static_assert(offsetof(FZeuzDeveloper, Projects) == 0x00E8);
static_assert(offsetof(FZeuzDeveloper, Teams) == 0x00F8);
static_assert(offsetof(FZeuzDeveloper, RevokedAt) == 0x0110);
static_assert(offsetof(FZeuzDeveloper, PasswordRequestExpiry) == 0x0118);
static_assert(offsetof(FZeuzAdminAccountIn, AccountID) == 0x0000);
static_assert(offsetof(FZeuzServiceCfg, ServiceType) == 0x0000);
static_assert(offsetof(FZeuzServiceCfg, Params) == 0x0028);
static_assert(offsetof(FZeuzEnv, ID) == 0x0088);
static_assert(offsetof(FZeuzEnv, Proj) == 0x0098);
static_assert(offsetof(FZeuzEnv, Account) == 0x00A8);
static_assert(offsetof(FZeuzEnv, Desc) == 0x00C0);
static_assert(offsetof(FZeuzEnv, Services) == 0x00D8);
static_assert(offsetof(FZeuzAdminEnvIn, ProjectID) == 0x0000);
static_assert(offsetof(FZeuzAdminItem, ID) == 0x0000);
static_assert(offsetof(FZeuzAdminItem, Name) == 0x0010);
static_assert(offsetof(FZeuzAdminItemsOut, Items) == 0x0000);
static_assert(offsetof(FZeuzAdminItemsIn, Table) == 0x0000);
static_assert(offsetof(FZeuzAdminItemsIn, Query) == 0x0010);
static_assert(offsetof(FZeuzLogsearchOut, Stats) == 0x0000);
static_assert(offsetof(FZeuzAdminLogsIn, Start) == 0x0000);
static_assert(offsetof(FZeuzAdminLogsIn, End) == 0x0010);
static_assert(offsetof(FZeuzAdminLogsIn, Account) == 0x0020);
static_assert(offsetof(FZeuzAdminLogsIn, Project) == 0x0030);
static_assert(offsetof(FZeuzProjEnvInfo, ID) == 0x0000);
static_assert(offsetof(FZeuzProjEnvInfo, Title) == 0x0010);
static_assert(offsetof(FZeuzProj, ID) == 0x0088);
static_assert(offsetof(FZeuzProj, Account) == 0x0098);
static_assert(offsetof(FZeuzProj, Desc) == 0x00A8);
static_assert(offsetof(FZeuzProj, Envs) == 0x00B8);
static_assert(offsetof(FZeuzAdminStat, GroupCol) == 0x0000);
static_assert(offsetof(FZeuzAdminStatsOut, Stats) == 0x0000);
static_assert(offsetof(FZeuzAdminStatsIn, Table) == 0x0000);
static_assert(offsetof(FZeuzAdminStatsIn, Start) == 0x0010);
static_assert(offsetof(FZeuzAdminStatsIn, End) == 0x0020);
static_assert(offsetof(FZeuzAdminStatsIn, GroupBy) == 0x0030);
static_assert(offsetof(FZeuzAdminStatsIn, Count) == 0x0040);
static_assert(offsetof(FZeuzSession, ID) == 0x0088);
static_assert(offsetof(FZeuzSession, SessionKey) == 0x0098);
static_assert(offsetof(FZeuzSession, Dev) == 0x00A8);
static_assert(offsetof(FZeuzSession, User) == 0x00B8);
static_assert(offsetof(FZeuzSession, ApiKey) == 0x00C8);
static_assert(offsetof(FZeuzSession, Proj) == 0x00D8);
static_assert(offsetof(FZeuzAuthLoginResult, Dev) == 0x0000);
static_assert(offsetof(FZeuzAuthLoginResult, User) == 0x0010);
static_assert(offsetof(FZeuzAuthLoginResult, ApiKey) == 0x0020);
static_assert(offsetof(FZeuzAuthLoginResult, Proj) == 0x0030);
static_assert(offsetof(FZeuzAuthLoginResult, SessionID) == 0x0040);
static_assert(offsetof(FZeuzAuthLoginResult, SessionNonce) == 0x0050);
static_assert(offsetof(FZeuzAuthLoginResult, ValidThru) == 0x0060);
static_assert(offsetof(FZeuzAuthLoginIn, Login) == 0x0000);
static_assert(offsetof(FZeuzAuthLoginIn, Time) == 0x0018);
static_assert(offsetof(FZeuzAuthLoginIn, Nonce) == 0x0020);
static_assert(offsetof(FZeuzAuthLoginIn, Hash) == 0x0030);
static_assert(offsetof(FZeuzAPIKey, APIKeyID) == 0x0088);
static_assert(offsetof(FZeuzAPIKey, Key) == 0x0098);
static_assert(offsetof(FZeuzAPIKey, ProjID) == 0x00A8);
static_assert(offsetof(FZeuzAPIKey, PWHash) == 0x00B8);
static_assert(offsetof(FZeuzAPIKey, RevokedAt) == 0x00D0);
static_assert(offsetof(FZeuzAPIKey, LastLogin) == 0x00D8);
static_assert(offsetof(FZeuzAPIKeyDeleteIn, APIKeyID) == 0x0000);
static_assert(offsetof(FZeuzAPIKeyDeleteIn, ProjID) == 0x0010);
static_assert(offsetof(FZeuzAPIKeyGenerateIn, ProjID) == 0x0000);
static_assert(offsetof(FZeuzAPIKeyGenerateIn, Title) == 0x0010);
static_assert(offsetof(FZeuzAPIKeyGetIn, APIKeyID) == 0x0000);
static_assert(offsetof(FZeuzAPIKeyGetIn, ProjID) == 0x0010);
static_assert(offsetof(FZeuzAPIKeyPwHashIn, APIKeyID) == 0x0000);
static_assert(offsetof(FZeuzAPIKeyPwHashIn, ProjID) == 0x0010);
static_assert(offsetof(FZeuzAPIKeyPwHashIn, PWHash) == 0x0020);
static_assert(offsetof(FZeuzProfileItemClassConfig, Name) == 0x0000);
static_assert(offsetof(FZeuzProfileItemClassConfig, LimitAddInterval) == 0x0018);
static_assert(offsetof(FZeuzProfileItemNameCount, Name) == 0x0000);
static_assert(offsetof(FZeuzProfileItemConfig, Name) == 0x0000);
static_assert(offsetof(FZeuzProfileItemConfig, Class) == 0x0010);
static_assert(offsetof(FZeuzProfileItemConfig, LimitAddInterval) == 0x0028);
static_assert(offsetof(FZeuzProfileItemConfig, BuyPrice) == 0x0080);
static_assert(offsetof(FZeuzProfileItemConfigGetOut, Classes) == 0x0000);
static_assert(offsetof(FZeuzProfileItemConfigGetOut, Items) == 0x0010);
static_assert(offsetof(FZeuzInvItem, ID) == 0x0088);
static_assert(offsetof(FZeuzInvItem, UserID) == 0x0098);
static_assert(offsetof(FZeuzInvItem, Name) == 0x00A8);
static_assert(offsetof(FZeuzUserProfile, ID) == 0x0000);
static_assert(offsetof(FZeuzUserProfile, Tags) == 0x0010);
static_assert(offsetof(FZeuzUserProfile, FirstLogin) == 0x0020);
static_assert(offsetof(FZeuzUserProfile, BanStart) == 0x0028);
static_assert(offsetof(FZeuzUserProfile, BanEnd) == 0x0030);
static_assert(offsetof(FZeuzUserProfile, Comments) == 0x0038);
static_assert(offsetof(FZeuzUserProfile, Data) == 0x0048);
static_assert(offsetof(FZeuzUserProfile, LinkedAccounts) == 0x0058);
static_assert(offsetof(FZeuzUserProfile, Friends) == 0x0068);
static_assert(offsetof(FZeuzUserProfile, Blocked) == 0x0078);
static_assert(offsetof(FZeuzUser, ID) == 0x0088);
static_assert(offsetof(FZeuzUser, Login) == 0x0098);
static_assert(offsetof(FZeuzUser, Name) == 0x00A8);
static_assert(offsetof(FZeuzUser, PWHash) == 0x00B8);
static_assert(offsetof(FZeuzUser, Desc) == 0x00C8);
static_assert(offsetof(FZeuzProfileUsersListOut, UserIDs) == 0x0008);
static_assert(offsetof(FZeuzProfileItemAddIn, UserID) == 0x0018);
static_assert(offsetof(FZeuzProfileItemMove, ID) == 0x0000);
static_assert(offsetof(FZeuzProfileItemBarterIn, UserIDA) == 0x0000);
static_assert(offsetof(FZeuzProfileItemBarterIn, UserIDB) == 0x0010);
static_assert(offsetof(FZeuzProfileItemBarterIn, OfferA) == 0x0020);
static_assert(offsetof(FZeuzProfileItemBarterIn, OfferB) == 0x0030);
static_assert(offsetof(FZeuzProfileItemUserName, UserID) == 0x0000);
static_assert(offsetof(FZeuzProfileItemUserName, Name) == 0x0010);
static_assert(offsetof(FZeuzProfileItemRemIn, ItemID) == 0x0000);
static_assert(offsetof(FZeuzProfileItemRemByNameIn, UserID) == 0x0000);
static_assert(offsetof(FZeuzProfileItemRemByNameIn, Name) == 0x0010);
static_assert(offsetof(FZeuzProfileItemTransferIn, UserIDTo) == 0x0018);
static_assert(offsetof(FZeuzProfileUserCreateIn, Login) == 0x0000);
static_assert(offsetof(FZeuzProfileUserCreateIn, Name) == 0x0010);
static_assert(offsetof(FZeuzProfileUserCreateIn, Desc) == 0x0020);
static_assert(offsetof(FZeuzProfileUserCreateIn, PWHash) == 0x0030);
static_assert(offsetof(FZeuzProfileUserLookupIn, Login) == 0x0000);
static_assert(offsetof(FZeuzProfileUserLookupIn, Name) == 0x0010);
static_assert(offsetof(FZeuzProfileUserPwHashIn, UserID) == 0x0000);
static_assert(offsetof(FZeuzProfileUserPwHashIn, PWHash) == 0x0010);
static_assert(offsetof(FZeuzProfileUsersListIn, Offset) == 0x0000);
static_assert(offsetof(FZeuzAccountCreateIn, Title) == 0x0000);
static_assert(offsetof(FZeuzAccountCreateIn, Desc) == 0x0010);
static_assert(offsetof(FZeuzAccountCreateIn, EMail) == 0x0020);
static_assert(offsetof(FZeuzAccountCreateIn, Company) == 0x0030);
static_assert(offsetof(FZeuzAccountCreateIn, Department) == 0x0040);
static_assert(offsetof(FZeuzAccountCreateIn, Country) == 0x0050);
static_assert(offsetof(FZeuzAccountCreateIn, ZIP) == 0x0060);
static_assert(offsetof(FZeuzAccountCreateIn, City) == 0x0070);
static_assert(offsetof(FZeuzAccountCreateIn, StreetAddr) == 0x0080);
static_assert(offsetof(FZeuzAccountCreateIn, Props) == 0x0090);
static_assert(offsetof(FZeuzAccountCreateIn, ProvisioningAccounts) == 0x00B8);
static_assert(offsetof(FZeuzAccountDeveloperCreateIn, Login) == 0x0000);
static_assert(offsetof(FZeuzAccountDeveloperCreateIn, Title) == 0x0010);
static_assert(offsetof(FZeuzAccountDeveloperCreateIn, Desc) == 0x0020);
static_assert(offsetof(FZeuzAccountDeveloperCreateIn, AccountID) == 0x0030);
static_assert(offsetof(FZeuzAccountDeveloperCreateIn, PWHash) == 0x0048);
static_assert(offsetof(FZeuzAccountDeveloperCreateIn, Props) == 0x0058);
static_assert(offsetof(FZeuzAccountDeveloperCreatePwHashIn, DevID) == 0x0000);
static_assert(offsetof(FZeuzAccountDeveloperCreatePwHashIn, AccountID) == 0x0010);
static_assert(offsetof(FZeuzAccountDeveloperCreatePwHashIn, Hash) == 0x0020);
static_assert(offsetof(FZeuzAccountDeveloperCreatePwHashIn, PWHash) == 0x0030);
static_assert(offsetof(FZeuzAccountDeveloperPasswordResetExecuteRequestIn, EMail) == 0x0000);
static_assert(offsetof(FZeuzAccountDeveloperPasswordResetExecuteRequestIn, Hash) == 0x0010);
static_assert(offsetof(FZeuzAccountDeveloperPasswordResetExecuteRequestIn, PasswordHash) == 0x0020);
static_assert(offsetof(FZeuzAccountDeveloperPasswordResetExecuteRequestIn, PasswordConfirmHash) == 0x0030);
static_assert(offsetof(FZeuzAccountDeveloperPasswordResetIn, EMail) == 0x0000);
static_assert(offsetof(FZeuzAccountDeveloperPasswordResetIn, Token) == 0x0010);
static_assert(offsetof(FZeuzAccountDeveloperSetPwHashIn, CurrentPWHash) == 0x0000);
static_assert(offsetof(FZeuzAccountDeveloperSetPwHashIn, NewPWHash) == 0x0010);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, Login) == 0x0000);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, Account) == 0x0010);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, User) == 0x0020);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, Dev) == 0x0030);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, Team) == 0x0040);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, Proj) == 0x0050);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, Env) == 0x0060);
static_assert(offsetof(FZeuzAccountDevQuickSetupOut, ApiKey) == 0x0070);
static_assert(offsetof(FZeuzAccountDevQuickSetupIn, Login) == 0x0000);
static_assert(offsetof(FZeuzAccountDevQuickSetupIn, Title) == 0x0010);
static_assert(offsetof(FZeuzAccountDevQuickSetupIn, PWHash) == 0x0020);
static_assert(offsetof(FZeuzAccountEnvCreateIn, Proj) == 0x0000);
static_assert(offsetof(FZeuzAccountEnvCreateIn, Title) == 0x0010);
static_assert(offsetof(FZeuzAccountEnvCreateIn, Desc) == 0x0020);
static_assert(offsetof(FZeuzAccountEnvCreateIn, Props) == 0x0030);
static_assert(offsetof(FZeuzAccountEnvDeleteIn, Proj) == 0x0000);
static_assert(offsetof(FZeuzAccountEnvDeleteIn, Env) == 0x0010);
static_assert(offsetof(FZeuzAccountChange, Account) == 0x0000);
static_assert(offsetof(FZeuzAccountProjectCreateIn, Title) == 0x0010);
static_assert(offsetof(FZeuzAccountProjectCreateIn, Desc) == 0x0020);
static_assert(offsetof(FZeuzAccountProjectCreateIn, Props) == 0x0030);
static_assert(offsetof(FZeuzAccountProjectDeleteIn, Proj) == 0x0010);
static_assert(offsetof(FZeuzAccountQuotaInfo, Account) == 0x0000);
static_assert(offsetof(FZeuzAccountTeamCreateIn, Title) == 0x0010);
static_assert(offsetof(FZeuzAccountTeamCreateIn, Desc) == 0x0020);
static_assert(offsetof(FZeuzAccountTeamCreateIn, Props) == 0x0030);
static_assert(offsetof(FZeuzAccountTeamCreateIn, Devs) == 0x0058);
static_assert(offsetof(FZeuzAccountTeamDeleteIn, Team) == 0x0010);
static_assert(offsetof(FZeuzTeam, ID) == 0x0088);
static_assert(offsetof(FZeuzTeam, Account) == 0x0098);
static_assert(offsetof(FZeuzTeam, Desc) == 0x00A8);
static_assert(offsetof(FZeuzTeam, Devs) == 0x00B8);
static_assert(offsetof(FZeuzMachineSpec, OS) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceInfo, ResourceID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceInfo, LocationID) == 0x0010);
static_assert(offsetof(FZeuzMachineResourceInfo, Spec) == 0x0020);
static_assert(offsetof(FZeuzMachineResourceInfo, Provider) == 0x0048);
static_assert(offsetof(FZeuzMachineResourceInfo, Hostname) == 0x0058);
static_assert(offsetof(FZeuzMachineResourceInfo, IP) == 0x0068);
static_assert(offsetof(FZeuzMachineResourceInfo, MachineID) == 0x0080);
static_assert(offsetof(FZeuzMachineResourceInfo, AccountID) == 0x0090);
static_assert(offsetof(FZeuzMachineResourceInfo, Tags) == 0x00A8);
static_assert(offsetof(FZeuzMachineResourceInfo, ProvisionJobID) == 0x00B8);
static_assert(offsetof(FZeuzMachineResourceInfo, ResourceClusterID) == 0x00C8);
static_assert(offsetof(FZeuzMachineResourceInfo, NodeID) == 0x00D8);
static_assert(offsetof(FZeuzMachineInfo, MachineID) == 0x0000);
static_assert(offsetof(FZeuzMachineInfo, ResourceID) == 0x0010);
static_assert(offsetof(FZeuzMachineInfo, LocationID) == 0x0020);
static_assert(offsetof(FZeuzMachineInfo, AllocationID) == 0x0030);
static_assert(offsetof(FZeuzMachineInfo, AccountID) == 0x0040);
static_assert(offsetof(FZeuzMachineInfo, Spec) == 0x0050);
static_assert(offsetof(FZeuzMachineInfo, Tags) == 0x0078);
static_assert(offsetof(FZeuzMachineInfo, IP) == 0x0088);
static_assert(offsetof(FZeuzMachineInfo, Regions) == 0x0098);
static_assert(offsetof(FZeuzMachineInfo, LocationType) == 0x00A8);
static_assert(offsetof(FZeuzMachineInfo, Created) == 0x00B8);
static_assert(offsetof(FZeuzMachineInfo, Finished) == 0x00C0);
static_assert(offsetof(FZeuzMachineGetOut, Items) == 0x0000);
static_assert(offsetof(FZeuzMachineTagsSetIn, ID) == 0x0000);
static_assert(offsetof(FZeuzMachineTagsSetIn, Tags) == 0x0010);
static_assert(offsetof(FZeuzMachineResourceDataIn, LocationID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceDataIn, Spec) == 0x0010);
static_assert(offsetof(FZeuzMachineResourceDataIn, Hostname) == 0x0038);
static_assert(offsetof(FZeuzMachineResourceDataIn, Provider) == 0x0048);
static_assert(offsetof(FZeuzMachineResourceDataIn, IP) == 0x0058);
static_assert(offsetof(FZeuzMachineResourceDataIn, AccountID) == 0x0070);
static_assert(offsetof(FZeuzMachineResourceDataIn, Tags) == 0x0088);
static_assert(offsetof(FZeuzMachineResourceDataIn, ResourceClusterID) == 0x0098);
static_assert(offsetof(FZeuzMachineResourceDataIn, NodeID) == 0x00A8);
static_assert(offsetof(FZeuzMachineResourceAllocateIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceAllocateIn, Resources) == 0x0010);
static_assert(offsetof(FZeuzMachineResourcesCountIn, AccountID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourcesCountIn, Type) == 0x0010);
static_assert(offsetof(FZeuzMachineResourceDeallocateIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceDeallocateIn, Machines) == 0x0010);
static_assert(offsetof(FZeuzMachinePagination, OrderBy) == 0x0010);
static_assert(offsetof(FZeuzMachineGetIn, MachineID) == 0x0028);
static_assert(offsetof(FZeuzMachineGetIn, AllocationID) == 0x0038);
static_assert(offsetof(FZeuzMachineGetIn, RegionID) == 0x0048);
static_assert(offsetof(FZeuzMachineGetIn, LocationType) == 0x0058);
static_assert(offsetof(FZeuzMachineGetIn, Tags) == 0x0068);
static_assert(offsetof(FZeuzMachineGetIn, Start) == 0x0078);
static_assert(offsetof(FZeuzMachineGetIn, End) == 0x0080);
static_assert(offsetof(FZeuzMachineResourceGetIn, ResourceIDs) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceGetIn, RegionID) == 0x0010);
static_assert(offsetof(FZeuzMachineResourceGetIn, MinSpec) == 0x0020);
static_assert(offsetof(FZeuzMachineResourceGetIn, MachineType) == 0x0048);
static_assert(offsetof(FZeuzMachineResourceGetIn, Accounts) == 0x0058);
static_assert(offsetof(FZeuzMachineResourceGetIn, Machines) == 0x0068);
static_assert(offsetof(FZeuzMachineResourceGetIn, Providers) == 0x0078);
static_assert(offsetof(FZeuzMachineResourceDeprovisionIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceDeprovisionIn, Resources) == 0x0010);
static_assert(offsetof(FZeuzMachineResourceUpdateIn, ResourceID) == 0x0000);
static_assert(offsetof(FZeuzMachineResourceUpdateIn, Data) == 0x0010);
static_assert(offsetof(FZeuzProviderResourceTypes, Provider) == 0x0000);
static_assert(offsetof(FZeuzProviderResourceTypes, ResourceTypes) == 0x0010);
static_assert(offsetof(FZeuzMachineScalingRules, BlockedConditions) == 0x0020);
static_assert(offsetof(FZeuzMachineScalingRules, IdleConditions) == 0x0030);
static_assert(offsetof(FZeuzMachineScalingRules, AllowedResourceTypes) == 0x0040);
static_assert(offsetof(FZeuzPortDef, Name) == 0x0000);
static_assert(offsetof(FZeuzPayloadDef, HostOS) == 0x0000);
static_assert(offsetof(FZeuzPayloadDef, Image) == 0x0010);
static_assert(offsetof(FZeuzPayloadDef, Cmd) == 0x0020);
static_assert(offsetof(FZeuzPayloadDef, Ports) == 0x0030);
static_assert(offsetof(FZeuzPayloadScalingRules, PayloadDef) == 0x0008);
static_assert(offsetof(FZeuzPayloadScalingRules, PayloadQuota) == 0x0048);
static_assert(offsetof(FZeuzPayloadScalingRules, SafetyLimits) == 0x005C);
static_assert(offsetof(FZeuzScalingRules, Machine) == 0x0000);
static_assert(offsetof(FZeuzScalingRules, Payload) == 0x0050);
static_assert(offsetof(FZeuzAllocationInfo, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzAllocationInfo, ProjID) == 0x0010);
static_assert(offsetof(FZeuzAllocationInfo, EnvID) == 0x0020);
static_assert(offsetof(FZeuzAllocationInfo, Regions) == 0x0030);
static_assert(offsetof(FZeuzAllocationInfo, Machines) == 0x0040);
static_assert(offsetof(FZeuzAllocationInfo, Description) == 0x0050);
static_assert(offsetof(FZeuzAllocationInfo, ScalingRules) == 0x0068);
static_assert(offsetof(FZeuzAllocationInfo, MachineMinSpec) == 0x0138);
static_assert(offsetof(FZeuzAllocationDef, Description) == 0x0000);
static_assert(offsetof(FZeuzAllocationDef, Regions) == 0x0010);
static_assert(offsetof(FZeuzAllocationDef, ScalingRules) == 0x0020);
static_assert(offsetof(FZeuzAllocationDef, MachineMinSpec) == 0x00F0);
static_assert(offsetof(FZeuzAllocationCreateIn, ProjID) == 0x0000);
static_assert(offsetof(FZeuzAllocationCreateIn, EnvID) == 0x0010);
static_assert(offsetof(FZeuzAllocationCreateIn, AllocationDef) == 0x0020);
static_assert(offsetof(FZeuzAllocationGetOut, Items) == 0x0000);
static_assert(offsetof(FZeuzAllocationPagination, OrderBy) == 0x0010);
static_assert(offsetof(FZeuzAllocationGetIn, AllocationIDs) == 0x0028);
static_assert(offsetof(FZeuzAllocationGetIn, Region) == 0x0040);
static_assert(offsetof(FZeuzAllocationGetIn, OS) == 0x0050);
static_assert(offsetof(FZeuzAllocationPayloadInfo, PayloadID) == 0x0000);
static_assert(offsetof(FZeuzAllocationPayloadInfo, MachineID) == 0x0010);
static_assert(offsetof(FZeuzAllocationPayloadInfo, AllocationID) == 0x0020);
static_assert(offsetof(FZeuzAllocationPayloadInfo, EnvID) == 0x0030);
static_assert(offsetof(FZeuzAllocationPayloadInfo, Regions) == 0x0040);
static_assert(offsetof(FZeuzAllocationPayloadInfo, PayloadDef) == 0x0050);
static_assert(offsetof(FZeuzAllocationPayloadInfo, IP) == 0x0098);
static_assert(offsetof(FZeuzAllocationPayloadInfo, PortMapping) == 0x00A8);
static_assert(offsetof(FZeuzAllocationPayloadInfo, Handling) == 0x00B8);
static_assert(offsetof(FZeuzAllocationPayloadInfo, LocationType) == 0x00C8);
static_assert(offsetof(FZeuzAllocationPayloadInfo, Created) == 0x00D8);
static_assert(offsetof(FZeuzAllocationPayloadInfo, Modified) == 0x00E0);
static_assert(offsetof(FZeuzAllocationRegionCount, RegionID) == 0x0000);
static_assert(offsetof(FZeuzAllocationRequestServiceIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzAllocationRequestServiceIn, RegionCount) == 0x0010);
static_assert(offsetof(FZeuzAllocationUpdateIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzAllocationUpdateIn, AllocationDef) == 0x0010);
static_assert(offsetof(FZeuzEchoOut, Text) == 0x0000);
static_assert(offsetof(FZeuzEcho2Out, Text) == 0x0000);
static_assert(offsetof(FZeuzEchoIn, Text) == 0x0000);
static_assert(offsetof(FZeuzEcho2In, Text) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPublishOutput, ImageHash) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPublishOutput, ImageURL) == 0x0010);
static_assert(offsetof(FZeuzImageManagerPublishOutput, Version) == 0x0020);
static_assert(offsetof(FZeuzImageManagerPublishOutput, Description) == 0x0030);
static_assert(offsetof(FZeuzImagemanagerPublishState, ImageID) == 0x0000);
static_assert(offsetof(FZeuzImagemanagerPublishState, ImageHash) == 0x0010);
static_assert(offsetof(FZeuzImagemanagerPublishState, State) == 0x0020);
static_assert(offsetof(FZeuzImagemanagerPublishState, Message) == 0x0030);
static_assert(offsetof(FZeuzImagemanagerPublishState, Result) == 0x0040);
static_assert(offsetof(FZeuzImageManagerListEntry, Timestamp) == 0x0000);
static_assert(offsetof(FZeuzImageManagerListEntry, ImageHash) == 0x0008);
static_assert(offsetof(FZeuzImageManagerListEntry, ImageURL) == 0x0018);
static_assert(offsetof(FZeuzImageManagerListEntry, Title) == 0x0028);
static_assert(offsetof(FZeuzImageManagerListEntry, Version) == 0x0038);
static_assert(offsetof(FZeuzImageManagerManifestEntryPart, Hash) == 0x0000);
static_assert(offsetof(FZeuzImageManagerManifestEntryPart, URL) == 0x0010);
static_assert(offsetof(FZeuzImageManagerManifestEntry, Filename) == 0x0000);
static_assert(offsetof(FZeuzImageManagerManifestEntry, Hash) == 0x0018);
static_assert(offsetof(FZeuzImageManagerManifestEntry, URL) == 0x0028);
static_assert(offsetof(FZeuzImageManagerManifestEntry, Parts) == 0x0038);
static_assert(offsetof(FZeuzImageManagerManifest, Entries) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPushPullOutput, Manifest) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPushPullOutput, ManifestHash) == 0x0010);
static_assert(offsetof(FZeuzImageManagerPushPullOutput, TransferHashes) == 0x0020);
static_assert(offsetof(FZeuzImageManagerPublishInput, Description) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPublishInput, Version) == 0x0010);
static_assert(offsetof(FZeuzImageManagerPullInput, ImageHash) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPresignedFileUrlIn, ManifestHash) == 0x0000);
static_assert(offsetof(FZeuzImageManagerPresignedFileUrlIn, Filename) == 0x0010);
static_assert(offsetof(FZeuzKVStoreKVEntry, Partition) == 0x0008);
static_assert(offsetof(FZeuzKVStoreKVEntry, Key) == 0x0018);
static_assert(offsetof(FZeuzKVStoreKVEntry, Value) == 0x0028);
static_assert(offsetof(FZeuzKVStoreKey, Partition) == 0x0000);
static_assert(offsetof(FZeuzKVStoreKey, Key) == 0x0010);
static_assert(offsetof(FZeuzKVStoreKeyValue, Value) == 0x0020);
static_assert(offsetof(FZeuzLobbyStateBase, LobbyID) == 0x0000);
static_assert(offsetof(FZeuzLobbyStateBase, Compatibility) == 0x0018);
static_assert(offsetof(FZeuzLobbyStateBase, Params) == 0x0028);
static_assert(offsetof(FZeuzLobbyStateOut, InboxID) == 0x0038);
static_assert(offsetof(FZeuzLobbyUser, UserID) == 0x0000);
static_assert(offsetof(FZeuzLobbyUser, DisplayName) == 0x0010);
static_assert(offsetof(FZeuzLobbyUser, Team) == 0x0020);
static_assert(offsetof(FZeuzLobbyUser, Slot) == 0x0030);
static_assert(offsetof(FZeuzLobbyUser, Info) == 0x0040);
static_assert(offsetof(FZeuzLobbyUserBase, Params) == 0x0058);
static_assert(offsetof(FZeuzLobbyUserBase, Created) == 0x0068);
static_assert(offsetof(FZeuzLobbyUserBase, Updated) == 0x0070);
static_assert(offsetof(FZeuzLobbyUsersOut, Lobby) == 0x0000);
static_assert(offsetof(FZeuzLobbyUsersOut, Users) == 0x0058);
static_assert(offsetof(FZeuzLobbyUsersOut, ServerConnect) == 0x0068);
static_assert(offsetof(FZeuzLobbyQueryOut, Results) == 0x0000);
static_assert(offsetof(FZeuzLobbyServerConnect, ServerConnect) == 0x0000);
static_assert(offsetof(FZeuzLobbyStateIn, UserID) == 0x0038);
static_assert(offsetof(FZeuzLobbyStateIn, Password) == 0x0048);
static_assert(offsetof(FZeuzLobbyStartDestroy, LobbyID) == 0x0000);
static_assert(offsetof(FZeuzLobbyStartDestroy, UserID) == 0x0010);
static_assert(offsetof(FZeuzLobbyJoin, LobbyID) == 0x0000);
static_assert(offsetof(FZeuzLobbyJoin, UserID) == 0x0010);
static_assert(offsetof(FZeuzLobbyJoin, Password) == 0x0020);
static_assert(offsetof(FZeuzLobbyKick, LobbyID) == 0x0000);
static_assert(offsetof(FZeuzLobbyKick, UserID) == 0x0010);
static_assert(offsetof(FZeuzLobbyKick, TargetID) == 0x0020);
static_assert(offsetof(FZeuzLobbyKick, Message) == 0x0038);
static_assert(offsetof(FZeuzLobbyQueryIn, Filter) == 0x0008);
static_assert(offsetof(FZeuzLobbyQueryIn, Compatibility) == 0x0018);
static_assert(offsetof(FZeuzLobbyQueryIn, Params) == 0x0028);
static_assert(offsetof(FZeuzLobbyRefresh, LobbyID) == 0x0000);
static_assert(offsetof(FZeuzLobbyRefresh, UserID) == 0x0010);
static_assert(offsetof(FZeuzLobbyUserState, ServerConnect) == 0x0078);
static_assert(offsetof(FZeuzLobbyUserIn, LobbyID) == 0x0088);
static_assert(offsetof(FZeuzLocation, LocationID) == 0x0088);
static_assert(offsetof(FZeuzLocation, Regions) == 0x0098);
static_assert(offsetof(FZeuzLocation, DisplayName) == 0x00A8);
static_assert(offsetof(FZeuzLocation, Provider) == 0x00B8);
static_assert(offsetof(FZeuzLocation, Type) == 0x00C8);
static_assert(offsetof(FZeuzLocation, PingServer) == 0x00E0);
static_assert(offsetof(FZeuzLocation, ProvisionTemplateName) == 0x00F0);
static_assert(offsetof(FZeuzProvider, ProviderID) == 0x0088);
static_assert(offsetof(FZeuzProvider, Name) == 0x0098);
static_assert(offsetof(FZeuzRegion, RegionID) == 0x0088);
static_assert(offsetof(FZeuzRegion, DisplayName) == 0x0098);
static_assert(offsetof(FZeuzLocalityLocationGetIn, LocationIDs) == 0x0000);
static_assert(offsetof(FZeuzLocalityLocationGetIn, DisplayNames) == 0x0010);
static_assert(offsetof(FZeuzLocalityLocationGetIn, Providers) == 0x0020);
static_assert(offsetof(FZeuzLocalityLocationGetIn, LocationType) == 0x0030);
static_assert(offsetof(FZeuzLocalityLocationGetIn, WithinRegion) == 0x0040);
static_assert(offsetof(FZeuzLocalityProviderGetIn, ProviderIDs) == 0x0000);
static_assert(offsetof(FZeuzLocalityProviderGetIn, Names) == 0x0010);
static_assert(offsetof(FZeuzLocalityRegionGetIn, RegionIDs) == 0x0000);
static_assert(offsetof(FZeuzLocalityRegionGetIn, DisplayNames) == 0x0010);
static_assert(offsetof(FZeuzLocalityRegionGetIn, ContainsLocations) == 0x0020);
static_assert(offsetof(FZeuzLogsearchAccountLog, ID) == 0x0000);
static_assert(offsetof(FZeuzLogsearchAccountLog, Message) == 0x0018);
static_assert(offsetof(FZeuzLogsearchAccountLog, Subroutine) == 0x0030);
static_assert(offsetof(FZeuzLogsearchAccountLog, Container) == 0x0040);
static_assert(offsetof(FZeuzLogsearchAccountLog, Proj) == 0x0050);
static_assert(offsetof(FZeuzLogsearchAccountLog, Env) == 0x0060);
static_assert(offsetof(FZeuzLogsearchAccountLog, Allocation) == 0x0070);
static_assert(offsetof(FZeuzLogsearchAccountLog, Payload) == 0x0080);
static_assert(offsetof(FZeuzLogsearchAccountLog, Machine) == 0x0090);
static_assert(offsetof(FZeuzLogsearchAccountOut, Logs) == 0x0000);
static_assert(offsetof(FZeuzLogsearchLogsStatus, Status) == 0x0000);
static_assert(offsetof(FZeuzLogsearchAccountIn, Start) == 0x0000);
static_assert(offsetof(FZeuzLogsearchAccountIn, End) == 0x0008);
static_assert(offsetof(FZeuzLogsearchAccountIn, Level) == 0x0010);
static_assert(offsetof(FZeuzLogsearchAccountIn, Payload) == 0x0020);
static_assert(offsetof(FZeuzLogsearchAccountIn, Query) == 0x0030);
static_assert(offsetof(FZeuzLogsearchAccountIn, OrderBy) == 0x0040);
static_assert(offsetof(FZeuzLogsearchAccountIn, LastID) == 0x0060);
static_assert(offsetof(FZeuzMatchmakingUser, UserID) == 0x0000);
static_assert(offsetof(FZeuzMatchmakingUser, DisplayName) == 0x0010);
static_assert(offsetof(FZeuzMatchmakingUser, Team) == 0x0020);
static_assert(offsetof(FZeuzMatchmakingUser, Slot) == 0x0030);
static_assert(offsetof(FZeuzMatchmakingUser, Info) == 0x0040);
static_assert(offsetof(FZeuzMatchMakingResult, Result) == 0x0000);
static_assert(offsetof(FZeuzMatchMakingResult, Map) == 0x0010);
static_assert(offsetof(FZeuzMatchMakingResult, Region) == 0x0020);
static_assert(offsetof(FZeuzMatchMakingResult, Users) == 0x0030);
static_assert(offsetof(FZeuzMatchMakingResult, ServerConnect) == 0x0040);
static_assert(offsetof(FZeuzMatchMakingResult, ServerPorts) == 0x0050);
static_assert(offsetof(FZeuzMatchMakingResult, AllocationID) == 0x0060);
static_assert(offsetof(FZeuzMatchMakingResult, Opt) == 0x0070);
static_assert(offsetof(FZeuzMatchMakingResult, Signature) == 0x0080);
static_assert(offsetof(FZeuzMatchMakingResult, Timestamp) == 0x0090);
static_assert(offsetof(FZeuzMatchMakingStatus, MatchMakingId) == 0x0000);
static_assert(offsetof(FZeuzMatchMakingStatus, ETA) == 0x0010);
static_assert(offsetof(FZeuzMatchMakingStatus, Result) == 0x0018);
static_assert(offsetof(FZeuzMatchMakingStatus, Error) == 0x00B0);
static_assert(offsetof(FZeuzMatchMakingStatus, State) == 0x00C0);
static_assert(offsetof(FZeuzMatchMakingInit, User) == 0x0000);
static_assert(offsetof(FZeuzMatchMakingInit, Compatibility) == 0x0050);
static_assert(offsetof(FZeuzMatchMakingInit, Region) == 0x0060);
static_assert(offsetof(FZeuzMatchMakingInit, Params) == 0x0070);
static_assert(offsetof(FZeuzMatchMakingPartyInit, Party) == 0x0080);
static_assert(offsetof(FZeuzMatchMakingPartyInit, AllocationID) == 0x0090);
static_assert(offsetof(FZeuzMatchMakingPartyInit, ServerConnect) == 0x00A0);
static_assert(offsetof(FZeuzMatchMakingServerInfo, PayloadID) == 0x0000);
static_assert(offsetof(FZeuzMatchMakingServerInfo, IP) == 0x0018);
static_assert(offsetof(FZeuzMatchMakingServerInfo, Ports) == 0x0028);
static_assert(offsetof(FZeuzMatchMakingServerInfo, MachineID) == 0x0038);
static_assert(offsetof(FZeuzMatchMakingServerInfo, AllocationID) == 0x0048);
static_assert(offsetof(FZeuzMatchMakingServerInfo, Regions) == 0x0058);
static_assert(offsetof(FZeuzMatchMakingServerInfo, Created) == 0x0068);
static_assert(offsetof(FZeuzMatchMakingServerInfo, Updated) == 0x0070);
static_assert(offsetof(FZeuzMetricsQueryIn, Start) == 0x0000);
static_assert(offsetof(FZeuzMetricsQueryIn, End) == 0x0008);
static_assert(offsetof(FZeuzMetricsQueryIn, GroupBy) == 0x0018);
static_assert(offsetof(FZeuzMetricsQueryIn, PayloadIDs) == 0x0028);
static_assert(offsetof(FZeuzMetricsQueryIn, MachineIDs) == 0x0038);
static_assert(offsetof(FZeuzMetricsQueryIn, AllocationIDs) == 0x0048);
static_assert(offsetof(FZeuzPayloadInfo, PayloadID) == 0x0000);
static_assert(offsetof(FZeuzPayloadInfo, MachineID) == 0x0010);
static_assert(offsetof(FZeuzPayloadInfo, AllocationID) == 0x0020);
static_assert(offsetof(FZeuzPayloadInfo, EnvID) == 0x0030);
static_assert(offsetof(FZeuzPayloadInfo, Regions) == 0x0040);
static_assert(offsetof(FZeuzPayloadInfo, PayloadDef) == 0x0050);
static_assert(offsetof(FZeuzPayloadInfo, IP) == 0x0098);
static_assert(offsetof(FZeuzPayloadInfo, PortMapping) == 0x00A8);
static_assert(offsetof(FZeuzPayloadInfo, Handling) == 0x00B8);
static_assert(offsetof(FZeuzPayloadInfo, LocationType) == 0x00C8);
static_assert(offsetof(FZeuzPayloadInfo, Created) == 0x00D8);
static_assert(offsetof(FZeuzPayloadInfo, Modified) == 0x00E0);
static_assert(offsetof(FZeuzPayloadGetOut, Items) == 0x0000);
static_assert(offsetof(FZeuzPayloadStateInfo, PayloadID) == 0x0000);
static_assert(offsetof(FZeuzPayloadAllocateIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzPayloadAllocateIn, RegionID) == 0x0010);
static_assert(offsetof(FZeuzPayloadCreateIn, AllocationID) == 0x0000);
static_assert(offsetof(FZeuzPayloadCreateIn, MachineID) == 0x0010);
static_assert(offsetof(FZeuzPayloadCreateIn, PayloadDef) == 0x0020);
static_assert(offsetof(FZeuzPayloadCreateIn, Hostname) == 0x0060);
static_assert(offsetof(FZeuzPayloadPagination, OrderBy) == 0x0010);
static_assert(offsetof(FZeuzPayloadGetIn, AllocationIDs) == 0x0028);
static_assert(offsetof(FZeuzPayloadGetIn, MachineIDs) == 0x0038);
static_assert(offsetof(FZeuzPayloadGetIn, PayloadIDs) == 0x0048);
static_assert(offsetof(FZeuzPayloadGetIn, LocationType) == 0x0058);
static_assert(offsetof(FZeuzPayloadGetIn, RegionID) == 0x0068);
static_assert(offsetof(FZeuzPayloadResumeIn, PayloadID) == 0x0000);
static_assert(offsetof(FZeuzPayloadResumeIn, AllocationID) == 0x0010);
static_assert(offsetof(FZeuzPayloadResumeIn, MachineID) == 0x0020);
static_assert(offsetof(FZeuzPayloadResumeIn, PayloadDef) == 0x0030);
static_assert(offsetof(FZeuzPayloadResumeIn, Hostname) == 0x0070);
static_assert(offsetof(FZeuzPayloadStateGetIn, AllocationIDs) == 0x0000);
static_assert(offsetof(FZeuzPayloadStateGetIn, MachineIDs) == 0x0010);
static_assert(offsetof(FZeuzPayloadStateGetIn, PayloadIDs) == 0x0020);
static_assert(offsetof(FZeuzPayloadUpdateIn, PayloadID) == 0x0000);
static_assert(offsetof(FZeuzPayloadUpdateIn, PayloadDef) == 0x0010);
static_assert(offsetof(FZeuzServerBrowserStateBase, ID) == 0x0000);
static_assert(offsetof(FZeuzServerBrowserStateBase, ClientAddr) == 0x0010);
static_assert(offsetof(FZeuzServerBrowserStateBase, Compatibility) == 0x0028);
static_assert(offsetof(FZeuzServerBrowserStateBase, Params) == 0x0038);
static_assert(offsetof(FZeuzServerBrowserQueryOut, Results) == 0x0000);
static_assert(offsetof(FZeuzServerBrowserQueryOut, Errors) == 0x0018);
static_assert(offsetof(FZeuzServerBrowserQueryIn, Filter) == 0x0008);
static_assert(offsetof(FZeuzServerBrowserQueryIn, Compatibility) == 0x0018);
static_assert(offsetof(FZeuzServerBrowserQueryIn, Params) == 0x0028);
static_assert(offsetof(FZeuzSimpleAuthLoginIn, Login) == 0x0000);
static_assert(offsetof(FZeuzSimpleAuthLoginIn, Password) == 0x0010);
static_assert(offsetof(FZeuzSimpleAuthLoginIn, LoginType) == 0x0020);
static_assert(offsetof(FZeuzSimpleProfileUserCreateIn, Login) == 0x0000);
static_assert(offsetof(FZeuzSimpleProfileUserCreateIn, Name) == 0x0010);
static_assert(offsetof(FZeuzSimpleProfileUserCreateIn, Desc) == 0x0020);
static_assert(offsetof(FZeuzSimpleProfileUserCreateIn, Password) == 0x0030);
