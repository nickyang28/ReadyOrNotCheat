
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLink
/// dependency: LiveLinkComponents
/// dependency: LiveLinkInterface

/// Enum /Script/LiveLinkMvnPlugin.EXsensRetargetNamingConvention
/// Size: 0x01 (1 bytes)
enum class EXsensRetargetNamingConvention : uint8_t
{
	EXsensRetargetNamingConvention__Default                                          = 0,
	EXsensRetargetNamingConvention__Custom                                           = 1,
	EXsensRetargetNamingConvention__Maya                                             = 2,
	EXsensRetargetNamingConvention__XSens                                            = 3,
	EXsensRetargetNamingConvention__Manual                                           = 4
};

/// Enum /Script/LiveLinkMvnPlugin.EXsensMapping
/// Size: 0x01 (1 bytes)
enum class EXsensMapping : uint8_t
{
	EXsensMapping__Root                                                              = 0,
	EXsensMapping__Pelvis                                                            = 1,
	EXsensMapping__L5                                                                = 2,
	EXsensMapping__L3                                                                = 3,
	EXsensMapping__T12                                                               = 4,
	EXsensMapping__T8                                                                = 5,
	EXsensMapping__Neck                                                              = 6,
	EXsensMapping__Head                                                              = 7,
	EXsensMapping__RightShoulder                                                     = 8,
	EXsensMapping__RightUpperArm                                                     = 9,
	EXsensMapping__RightForeArm                                                      = 10,
	EXsensMapping__RightHand                                                         = 11,
	EXsensMapping__LeftShoulder                                                      = 12,
	EXsensMapping__LeftUpperArm                                                      = 13,
	EXsensMapping__LeftForeArm                                                       = 14,
	EXsensMapping__LeftHand                                                          = 15,
	EXsensMapping__RightUpperLeg                                                     = 16,
	EXsensMapping__RightLowerLeg                                                     = 17,
	EXsensMapping__RightFoot                                                         = 18,
	EXsensMapping__RightToe                                                          = 19,
	EXsensMapping__LeftUpperLeg                                                      = 20,
	EXsensMapping__LeftLowerLeg                                                      = 21,
	EXsensMapping__LeftFoot                                                          = 22,
	EXsensMapping__LeftToe                                                           = 23,
	EXsensMapping__Prop1                                                             = 24,
	EXsensMapping__Prop2                                                             = 25,
	EXsensMapping__Prop3                                                             = 26,
	EXsensMapping__Prop4                                                             = 27,
	EXsensMapping__LeftCarpus                                                        = 28,
	EXsensMapping__LeftFirstMC                                                       = 29,
	EXsensMapping__LeftFirstPP                                                       = 30,
	EXsensMapping__LeftFirstDP                                                       = 31,
	EXsensMapping__LeftSecondMC                                                      = 32,
	EXsensMapping__LeftSecondPP                                                      = 33,
	EXsensMapping__LeftSecondMP                                                      = 34,
	EXsensMapping__LeftSecondDP                                                      = 35,
	EXsensMapping__LeftThirdMC                                                       = 36,
	EXsensMapping__LeftThirdPP                                                       = 37,
	EXsensMapping__LeftThirdMP                                                       = 38,
	EXsensMapping__LeftThirdDP                                                       = 39,
	EXsensMapping__LeftFourthMC                                                      = 40,
	EXsensMapping__LeftFourthPP                                                      = 41,
	EXsensMapping__LeftFourthMP                                                      = 42,
	EXsensMapping__LeftFourthDP                                                      = 43,
	EXsensMapping__LeftFifthMC                                                       = 44,
	EXsensMapping__LeftFifthPP                                                       = 45,
	EXsensMapping__LeftFifthMP                                                       = 46,
	EXsensMapping__LeftFifthDP                                                       = 47,
	EXsensMapping__RightCarpus                                                       = 48,
	EXsensMapping__RightFirstMC                                                      = 49,
	EXsensMapping__RightFirstPP                                                      = 50,
	EXsensMapping__RightFirstDP                                                      = 51,
	EXsensMapping__RightSecondMC                                                     = 52,
	EXsensMapping__RightSecondPP                                                     = 53,
	EXsensMapping__RightSecondMP                                                     = 54,
	EXsensMapping__RightSecondDP                                                     = 55,
	EXsensMapping__RightThirdMC                                                      = 56,
	EXsensMapping__RightThirdPP                                                      = 57,
	EXsensMapping__RightThirdMP                                                      = 58,
	EXsensMapping__RightThirdDP                                                      = 59,
	EXsensMapping__RightFourthMC                                                     = 60,
	EXsensMapping__RightFourthPP                                                     = 61,
	EXsensMapping__RightFourthMP                                                     = 62,
	EXsensMapping__RightFourthDP                                                     = 63,
	EXsensMapping__RightFifthMC                                                      = 64,
	EXsensMapping__RightFifthPP                                                      = 65,
	EXsensMapping__RightFifthMP                                                      = 66,
	EXsensMapping__RightFifthDP                                                      = 67
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkGameInstance
/// Size: 0x0018 (24 bytes) (0x0001A8 - 0x0001C0) align 8 pad: 0x0000
class ULiveLinkGameInstance : public UGameInstance
{ 
public:
	uint16_t                                           PortNumber;                                                 // 0x01A8   (0x0002)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x01AA   (0x0016)  MISSED
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000180) align 8 pad: 0x0000
class ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0028   (0x0010)  MISSED
	EXsensRetargetNamingConvention                     m_remapping_convention;                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UDataTable*                                  m_remapping_table;                                          // 0x0040   (0x0008)  
	SDK_UNDEFINED(80,1789) /* TMap<EXsensMapping, FRemappingRowHandle> */ __um(m_remapping_rows);                  // 0x0048   (0x0050)  
	class USkeletalMesh*                               m_skeletal_mesh;                                            // 0x0098   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC8];                                      // 0x00A0   (0x00C8)  MISSED
	class UAnimSequence*                               TPoseAnimation;                                             // 0x0168   (0x0008)  
	bool                                               IsForwardY;                                                 // 0x0170   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0171   (0x000F)  MISSED


	/// Functions
	// Function /Script/LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetRemappedBoneNameByConvention
	// FName GetRemappedBoneNameByConvention(EXsensMapping Bone, EXsensRetargetNamingConvention Convention);                    // [0x178fc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset.GetCustomRemappedBoneName
	// FName GetCustomRemappedBoneName(EXsensMapping Bone);                                                                     // [0x178fbf0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnSourceSettings
/// Size: 0x0008 (8 bytes) (0x0000A0 - 0x0000A8) align 8 pad: 0x0000
class ULiveLinkMvnSourceSettings : public ULiveLinkSourceSettings
{ 
public:
	int32_t                                            PortNumber;                                                 // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/LiveLinkMvnPlugin.LiveLinkMvnTransformController
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
class ULiveLinkMvnTransformController : public ULiveLinkControllerBase
{ 
public:
	int32_t                                            SegmentIndex;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/LiveLinkMvnPlugin.MvnRemoteControlManager
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMvnRemoteControlManager : public UObject
{ 
public:


	/// Functions
	// Function /Script/LiveLinkMvnPlugin.MvnRemoteControlManager.StopRecording
	// void StopRecording(float _fTimeOffsetInSeconds);                                                                         // [0x178fde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLinkMvnPlugin.MvnRemoteControlManager.StartRecording
	// void StartRecording(float _fTimeOffsetInSeconds);                                                                        // [0x178fd60] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/LiveLinkMvnPlugin.RemappingRow
/// Size: 0x0000 (0 bytes) (0x000008 - 0x000008) align 8 pad: 0x0000
struct FRemappingRow : FTableRowBase
{ 
};

/// Struct /Script/LiveLinkMvnPlugin.RemappingRowHandle
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000020) align 8 pad: 0x0000
struct FRemappingRowHandle : FDataTableRowHandle
{ 
	EXsensMapping                                      XsensRemapId;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              RemapId;                                                    // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

static_assert(sizeof(ULiveLinkGameInstance) == 0x01C0); // 448 bytes (0x0001A8 - 0x0001C0)
static_assert(sizeof(ULiveLinkMvnRetargetAsset) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(ULiveLinkMvnSourceSettings) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(ULiveLinkMvnTransformController) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMvnRemoteControlManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRemappingRow) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRemappingRowHandle) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(offsetof(ULiveLinkMvnRetargetAsset, m_remapping_convention) == 0x0038);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, m_remapping_table) == 0x0040);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, m_skeletal_mesh) == 0x0098);
static_assert(offsetof(ULiveLinkMvnRetargetAsset, TPoseAnimation) == 0x0168);
static_assert(offsetof(FRemappingRowHandle, XsensRemapId) == 0x0010);
static_assert(offsetof(FRemappingRowHandle, RemapId) == 0x0014);
