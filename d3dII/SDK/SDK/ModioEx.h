
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Modio

/// Class /Script/ModioEx.ModioSubmissionExtensionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFromMemoryAsync
	// void K2_SubmitNewModFromMemoryAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, TArray<char> PngData, FDelegateProperty Callback); // [0x15f66d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
	// void K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params); // [0x15f6480] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitModChangesFromMemoryAsync
	// void K2_SubmitModChangesFromMemoryAsync(FModioModID Mod, FModioEditModParams Params, TArray<char> PngData, FDelegateProperty Callback); // [0x15f6100] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
	// bool K2_LoadModFileToMemory(class UModioSubsystem* Target, FModioModID ModId, TArray<char>& ModData);                    // [0x15f5fd0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ModioEx.ModioCreateModFileMemoryParams
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FModioCreateModFileMemoryParams
{ 
	TArray<char>                                       ModMemory;                                                  // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0010   (0x0050)  MISSED
};

static_assert(sizeof(UModioSubmissionExtensionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FModioCreateModFileMemoryParams) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FModioCreateModFileMemoryParams, ModMemory) == 0x0000);
