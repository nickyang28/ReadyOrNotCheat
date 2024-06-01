
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityKey
/// Size: 0x01 (1 bytes)
enum class EMagicLeapIdentityKey : uint8_t
{
	EMagicLeapIdentityKey__GivenName                                                 = 0,
	EMagicLeapIdentityKey__FamilyName                                                = 1,
	EMagicLeapIdentityKey__Email                                                     = 2,
	EMagicLeapIdentityKey__Bio                                                       = 3,
	EMagicLeapIdentityKey__PhoneNumber                                               = 4,
	EMagicLeapIdentityKey__Avatar2D                                                  = 5,
	EMagicLeapIdentityKey__Avatar3D                                                  = 6,
	EMagicLeapIdentityKey__Unknown                                                   = 7
};

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapIdentityError : uint8_t
{
	EMagicLeapIdentityError__Ok                                                      = 0,
	EMagicLeapIdentityError__InvalidParam                                            = 1,
	EMagicLeapIdentityError__AllocFailed                                             = 2,
	EMagicLeapIdentityError__PrivilegeDenied                                         = 3,
	EMagicLeapIdentityError__FailedToConnectToLocalService                           = 4,
	EMagicLeapIdentityError__FailedToConnectToCloudService                           = 5,
	EMagicLeapIdentityError__CloudAuthentication                                     = 6,
	EMagicLeapIdentityError__InvalidInformationFromCloud                             = 7,
	EMagicLeapIdentityError__NotLoggedIn                                             = 8,
	EMagicLeapIdentityError__ExpiredCredentials                                      = 9,
	EMagicLeapIdentityError__FailedToGetUserProfile                                  = 10,
	EMagicLeapIdentityError__Unauthorized                                            = 11,
	EMagicLeapIdentityError__CertificateError                                        = 12,
	EMagicLeapIdentityError__RejectedByCloud                                         = 13,
	EMagicLeapIdentityError__AlreadyLoggedIn                                         = 14,
	EMagicLeapIdentityError__ModifyIsNotSupported                                    = 15,
	EMagicLeapIdentityError__NetworkError                                            = 16,
	EMagicLeapIdentityError__UnspecifiedFailure                                      = 17
};

/// Class /Script/MagicLeapIdentity.MagicLeapIdentity
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UMagicLeapIdentity : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	// void RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentityAttribute>& AttributeValue); // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	// EMagicLeapIdentityError RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey>& RequestedAttributeList, FDelegateProperty& ResultDelegate); // [0x1a326b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	// EMagicLeapIdentityError RequestAttributeValue(TArray<EMagicLeapIdentityKey>& RequestedAttributeList, TArray<FMagicLeapIdentityAttribute>& RequestedAttributeValues); // [0x1a32560] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	// void ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey>& AttributesUpdatedSuccessfully); // [0x24710f0] Public|Delegate|HasOutParms 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	// void GetAllAvailableAttributesAsync(FDelegateProperty& ResultDelegate);                                                  // [0x1a324b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	// EMagicLeapIdentityError GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>& AvailableAttributes);                   // [0x1a323f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	// void AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey>& AvailableAttributes); // [0x24710f0] Public|Delegate|HasOutParms 
};

/// Struct /Script/MagicLeapIdentity.MagicLeapIdentityAttribute
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapIdentityAttribute
{ 
	EMagicLeapIdentityKey                              Attribute;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

static_assert(sizeof(UMagicLeapIdentity) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMagicLeapIdentityAttribute) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapIdentityAttribute, Attribute) == 0x0000);
static_assert(offsetof(FMagicLeapIdentityAttribute, Value) == 0x0008);
