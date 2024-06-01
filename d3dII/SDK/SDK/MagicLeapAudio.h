
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
	// bool SetOnAudioJackUnpluggedDelegate(FDelegateProperty& ResultDelegate);                                                 // [0x1a1ff20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
	// bool SetOnAudioJackPluggedDelegate(FDelegateProperty& ResultDelegate);                                                   // [0x1a1fe70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
	// bool SetMicMute(bool IsMuted);                                                                                           // [0x1a1fde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
	// bool IsMicMuted();                                                                                                       // [0x946d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeapAudio.MagicLeapAudioDummyStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FMagicLeapAudioDummyStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

static_assert(sizeof(UMagicLeapAudioFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapAudioDummyStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
