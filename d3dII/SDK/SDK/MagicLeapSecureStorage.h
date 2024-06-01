
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapSecureStorage.MagicLeapSecureStorage
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	// bool PutSecureVector(FString Key, FVector& DataToStore);                                                                 // [0x1a3a120] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	// bool PutSecureTransform(FString Key, FTransform& DataToStore);                                                           // [0x1a3a400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	// bool PutSecureString(FString Key, FString DataToStore);                                                                  // [0x1a3ab80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	// bool PutSecureSaveGame(FString Key, class USaveGame* ObjectToStore);                                                     // [0x1a3aaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	// bool PutSecureRotator(FString Key, FRotator& DataToStore);                                                               // [0x1a3a120] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	// bool PutSecureInt64(FString Key, int64_t DataToStore);                                                                   // [0x1a3a8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	// bool PutSecureInt(FString Key, int32_t DataToStore);                                                                     // [0x1a3a9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	// bool PutSecureFloat(FString Key, float DataToStore);                                                                     // [0x1a3a7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	// bool PutSecureByte(FString Key, char DataToStore);                                                                       // [0x1a3a710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	// bool PutSecureBool(FString Key, bool DataToStore);                                                                       // [0x1a3a630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	// bool PutSecureArray(FString Key, TArray<int32_t>& DataToStore);                                                          // [0x1a3a530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	// bool GetSecureVector(FString Key, FVector& DataToRetrieve);                                                              // [0x1a3a120] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	// bool GetSecureTransform(FString Key, FTransform& DataToRetrieve);                                                        // [0x1a3a400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	// bool GetSecureString(FString Key, FString& DataToRetrieve);                                                              // [0x1a3a300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	// bool GetSecureSaveGame(FString Key, class USaveGame*& ObjectToRetrieve);                                                 // [0x1a3a210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	// bool GetSecureRotator(FString Key, FRotator& DataToRetrieve);                                                            // [0x1a3a120] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	// bool GetSecureInt64(FString Key, int64_t& DataToRetrieve);                                                               // [0x1a39f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	// bool GetSecureInt(FString Key, int32_t& DataToRetrieve);                                                                 // [0x1a3a030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	// bool GetSecureFloat(FString Key, float& DataToRetrieve);                                                                 // [0x1a39e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	// bool GetSecureByte(FString Key, char& DataToRetrieve);                                                                   // [0x1a39d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	// bool GetSecureBool(FString Key, bool& DataToRetrieve);                                                                   // [0x1a39d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	// bool GetSecureArray(FString Key, TArray<int32_t>& DataToRetrieve);                                                       // [0x1a39c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	// bool DeleteSecureData(FString Key);                                                                                      // [0x1a39bc0] Final|Native|Static|Public|BlueprintCallable 
};

static_assert(sizeof(UMagicLeapSecureStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
