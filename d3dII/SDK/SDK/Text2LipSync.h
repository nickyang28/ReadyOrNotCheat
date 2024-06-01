
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Text2LipSync.ELipSyncAnimType
/// Size: 0x01 (1 bytes)
enum class ELipSyncAnimType : uint8_t
{
	ELipSyncAnimType__T_MorphTargets                                                 = 0,
	ELipSyncAnimType__T_AnimCurves                                                   = 1,
	ELipSyncAnimType__T_Max                                                          = 2
};

/// Enum /Script/Text2LipSync.EPhoneme
/// Size: 0x01 (1 bytes)
enum class EPhoneme : uint8_t
{
	EPhoneme__V_A                                                                    = 0,
	EPhoneme__V_AH                                                                   = 1,
	EPhoneme__V_B                                                                    = 2,
	EPhoneme__V_C                                                                    = 3,
	EPhoneme__V_CH                                                                   = 4,
	EPhoneme__V_D                                                                    = 5,
	EPhoneme__V_EH                                                                   = 6,
	EPhoneme__V_F                                                                    = 7,
	EPhoneme__V_I                                                                    = 8,
	EPhoneme__V_K                                                                    = 9,
	EPhoneme__V_N                                                                    = 10,
	EPhoneme__V_OO                                                                   = 11,
	EPhoneme__V_OW                                                                   = 12,
	EPhoneme__V_R                                                                    = 13,
	EPhoneme__V_Other                                                                = 14,
	EPhoneme__V_OtherVowel                                                           = 15,
	EPhoneme__V_Pause                                                                = 16,
	EPhoneme__V_Max                                                                  = 17
};

/// Class /Script/Text2LipSync.PhrasesList
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UPhrasesList : public UObject
{ 
public:
	SDK_UNDEFINED(80,1962) /* TMap<FName, FLipSync_Phrase> */ __um(Data);                                          // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/Text2LipSync.PhrasesList.LoadFromDataTable
	// bool LoadFromDataTable(class UDataTable* DataTable);                                                                     // [0x11d6ff0] Final|Native|Public  
	// Function /Script/Text2LipSync.PhrasesList.GetPhraseFromList
	// void GetPhraseFromList(FName& Key, FLipSync_Phrase& ReturnValue);                                                        // [0x11d6ad0] Final|Native|Public|HasOutParms|Const 
};

/// Class /Script/Text2LipSync.SubtitlesCache
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class USubtitlesCache : public UObject
{ 
public:
	SDK_UNDEFINED(80,1963) /* TMap<FName, FLipSync_Pause> */ __um(Data);                                           // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/Text2LipSync.SubtitlesCache.SaveToDisk
	// int32_t SaveToDisk(FString Filename);                                                                                    // [0x11d7920] Final|Native|Public|Const 
	// Function /Script/Text2LipSync.SubtitlesCache.SaveToBinaryFile
	// int32_t SaveToBinaryFile(FString FullFileName);                                                                          // [0x11d7820] Final|Native|Public|Const 
	// Function /Script/Text2LipSync.SubtitlesCache.RenameAsset
	// bool RenameAsset(FString CurrentName, FString NewName);                                                                  // [0x11d7510] Final|Native|Public  
	// Function /Script/Text2LipSync.SubtitlesCache.RemoveAsset
	// bool RemoveAsset(class USoundBase* SoundAsset);                                                                          // [0x11d73d0] Final|Native|Public  
	// Function /Script/Text2LipSync.SubtitlesCache.LoadFromDisk
	// int32_t LoadFromDisk(FString Filename);                                                                                  // [0x11d7090] Final|Native|Public  
	// Function /Script/Text2LipSync.SubtitlesCache.LoadFromBinaryFile
	// int32_t LoadFromBinaryFile(FString FullFileName);                                                                        // [0x11d6ef0] Final|Native|Public  
	// Function /Script/Text2LipSync.SubtitlesCache.GetPausesForVoiceAsset
	// bool GetPausesForVoiceAsset(class USoundBase* SoundAsset, TArray<FLipSync_Interval>& Pauses);                            // [0x11d69d0] Final|Native|Public|HasOutParms|Const 
	// Function /Script/Text2LipSync.SubtitlesCache.GetCachedKeys
	// void GetCachedKeys(TArray<FString>& CachedKeys);                                                                         // [0x11d65b0] Final|Native|Public|HasOutParms|Const 
	// Function /Script/Text2LipSync.SubtitlesCache.AddAsset
	// bool AddAsset(class USoundBase* SoundAsset, TArray<FLipSync_TimedPhrase>& PhraseData, TArray<int32_t> PauseIndexes, float PhraseDuration); // [0x11d6250] Final|Native|Public|HasOutParms 
};

/// Class /Script/Text2LipSync.SubtitlesFileSave
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class USubtitlesFileSave : public USaveGame
{ 
public:
	SDK_UNDEFINED(80,1964) /* TMap<FName, FLipSync_Pause> */ __um(Data);                                           // 0x0028   (0x0050)  
};

/// Struct /Script/Text2LipSync.LipSync_TimedPhrase
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FLipSync_TimedPhrase
{ 
	float                                              TimeOffset;                                                 // 0x0000   (0x0004)  
	FName                                              ItemName;                                                   // 0x0004   (0x0008)  
	char                                               Flag;                                                       // 0x000C   (0x0001)  
	char                                               FlagEmotion;                                                // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/Text2LipSync.TextLipSync
/// Size: 0x0758 (1880 bytes) (0x0000B0 - 0x000808) align 8 pad: 0x0000
class UTextLipSync : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,1965) /* TMap<EPhoneme, FName> */ __um(MorphTargetsMap);                                      // 0x00B0   (0x0050)  
	SDK_UNDEFINED(80,1966) /* TMap<FName, FLipSync_MorphPreset> */ __um(CompositePhonemeTargetsMap);               // 0x0100   (0x0050)  
	SDK_UNDEFINED(80,1967) /* TMap<FName, FLipSync_MorphPreset> */ __um(EmotionTags);                              // 0x0150   (0x0050)  
	float                                              PauseFadeTime;                                              // 0x01A0   (0x0004)  
	float                                              PhonemeFadeTime;                                            // 0x01A4   (0x0004)  
	float                                              MorphLowerLimit;                                            // 0x01A8   (0x0004)  
	float                                              MorphUpperLimit;                                            // 0x01AC   (0x0004)  
	float                                              AudioMinTreshold;                                           // 0x01B0   (0x0004)  
	float                                              PauseMultiplier;                                            // 0x01B4   (0x0004)  
	float                                              DefaultOffsetFromDurationEnd;                               // 0x01B8   (0x0004)  
	float                                              DelayAtSentenceEnd;                                         // 0x01BC   (0x0004)  
	float                                              DelayAtComma;                                               // 0x01C0   (0x0004)  
	float                                              EnvelopeMultiplier;                                         // 0x01C4   (0x0004)  
	float                                              MinimumPhonemesInterval;                                    // 0x01C8   (0x0004)  
	float                                              EmotionBlendTime;                                           // 0x01CC   (0x0004)  
	float                                              ShortEmotionHalfDuration;                                   // 0x01D0   (0x0004)  
	bool                                               bRealtimeTimingCorrection;                                  // 0x01D4   (0x0001)  
	bool                                               bUseSubtitlesCacheSystem;                                   // 0x01D5   (0x0001)  
	bool                                               bUsePhrasesTableSystem;                                     // 0x01D6   (0x0001)  
	bool                                               bUseCompositeMorphTargets;                                  // 0x01D7   (0x0001)  
	ELipSyncAnimType                                   AnimationType;                                              // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01D9   (0x0007)  MISSED
	SDK_UNDEFINED(16,1968) /* FMulticastInlineDelegate */ __um(OnNotifyExecuted);                                  // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,1969) /* FMulticastInlineDelegate */ __um(OnPlayingFinished);                                 // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,1970) /* FMulticastInlineDelegate */ __um(OnSpeakingPause);                                   // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,1971) /* FMulticastInlineDelegate */ __um(OnTimelineChanged);                                 // 0x0210   (0x0010)  
	class UAudioComponent*                             Speaker;                                                    // 0x0220   (0x0008)  
	class USkeletalMeshComponent*                      ControlledMesh;                                             // 0x0228   (0x0008)  
	class USoundBase*                                  CurrentSound;                                               // 0x0230   (0x0008)  
	FName                                              MorphTargets[17];                                           // 0x0238   (0x0088)  
	SDK_UNDEFINED(80,1972) /* TMap<FName, float> */    __um(MorphTargetRuntimeValue);                              // 0x02C0   (0x0050)  
	SDK_UNDEFINED(80,1973) /* TSet<FName> */           __um(MorphTargetsList);                                     // 0x0310   (0x0050)  
	class UPhrasesList*                                PhrasesList;                                                // 0x0360   (0x0008)  
	class USubtitlesCache*                             SubtitlesCache;                                             // 0x0368   (0x0008)  
	bool                                               bIsInitialized;                                             // 0x0370   (0x0001)  
	bool                                               bIsSpeaking;                                                // 0x0371   (0x0001)  
	bool                                               bIsSpeakingPhonemeInAudio;                                  // 0x0372   (0x0001)  
	bool                                               bSubtitleWasChanged;                                        // 0x0373   (0x0001)  
	bool                                               bSubtitleWasLoadedFromCache;                                // 0x0374   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0375   (0x0003)  MISSED
	float                                              PauseTime;                                                  // 0x0378   (0x0004)  
	float                                              CurrentTime;                                                // 0x037C   (0x0004)  
	float                                              EnvelopeVolumeMultiplier;                                   // 0x0380   (0x0004)  
	float                                              PhraseDuration;                                             // 0x0384   (0x0004)  
	int32_t                                            NextPhonemeIndex;                                           // 0x0388   (0x0004)  
	int32_t                                            PrevPhonemeIndex;                                           // 0x038C   (0x0004)  
	int32_t                                            NextNotifyIndex;                                            // 0x0390   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0394   (0x0004)  MISSED
	TArray<FLipSync_TimedPhrase>                       PhraseData;                                                 // 0x0398   (0x0010)  
	TArray<int32_t>                                    PauseIndexes;                                               // 0x03A8   (0x0010)  
	TArray<FLipSync_TimedPhrase>                       PhraseNotifies;                                             // 0x03B8   (0x0010)  
	float                                              CurrentIntervalDuration;                                    // 0x03C8   (0x0004)  
	bool                                               bTrial;                                                     // 0x03CC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x03CD   (0x0003)  MISSED
	int32_t                                            TrialMonth;                                                 // 0x03D0   (0x0004)  
	int32_t                                            TrialYear;                                                  // 0x03D4   (0x0004)  
	SDK_UNDEFINED(80,1974) /* TMap<FName, char> */     __um(Emotion2Flag);                                         // 0x03D8   (0x0050)  
	SDK_UNDEFINED(80,1975) /* TMap<char, FName> */     __um(Flag2Emotion);                                         // 0x0428   (0x0050)  
	SDK_UNDEFINED(80,1976) /* TMap<char, float> */     __um(ActiveEmotions);                                       // 0x0478   (0x0050)  
	unsigned char                                      UnknownData04_7[0x340];                                     // 0x04C8   (0x0340)  MISSED


	/// Functions
	// Function /Script/Text2LipSync.TextLipSync.TextToPhonemes
	// void TextToPhonemes(FText& Line, TArray<FLipSync_PhonemeInPhrase>& OutputArray, int32_t& VowelsCount, int32_t& PunctuationMarksCount); // [0x11d7f90] Final|Native|Protected|HasOutParms 
	// Function /Script/Text2LipSync.TextLipSync.StretchPhraseData
	// void StretchPhraseData(float ErrorForPunctuation, float ErrorForWord);                                                   // [0x11d7ec0] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.StretchDataInterval
	// void StretchDataInterval(int32_t StartIndex, int32_t EndIndex, float NewStartTime, float NewEndTime);                    // [0x11d7d60] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.StopSpeaking
	// bool StopSpeaking(bool bStopPlayingSound);                                                                               // [0x11d7cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.SpeakByKey
	// bool SpeakByKey(FName& PhraseKey, bool bStartPlayingSound);                                                              // [0x11d7bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.SpeakAgain
	// bool SpeakAgain();                                                                                                       // [0x11d7ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.Speak
	// bool Speak(FLipSync_Phrase& Phrase, bool bStartPlayingSound);                                                            // [0x11d7a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.SaveLastPhraseToCache
	// bool SaveLastPhraseToCache();                                                                                            // [0x11d77f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.SaveCacheToDisk
	// int32_t SaveCacheToDisk(FString Filename, bool bUseBinaryFormat);                                                        // [0x11d76b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.RestorePhraseDataFromPauses
	// void RestorePhraseDataFromPauses();                                                                                      // [0x11d7690] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.RemovePhraseFromCache
	// bool RemovePhraseFromCache(class USoundWave* VoiceAsset);                                                                // [0x11d7470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.OnSpeaker_AudioSingleEnvelopeValue
	// void OnSpeaker_AudioSingleEnvelopeValue(class USoundWave* PlayingSoundWave, float EnvelopeValue);                        // [0x11d7300] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.OnSpeaker_AudioPlaybackPercent
	// void OnSpeaker_AudioPlaybackPercent(class USoundWave* PlayingSoundWave, float PlaybackPercent);                          // [0x11d7230] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.LoadPhrasesSetFromDataTable
	// bool LoadPhrasesSetFromDataTable(class UDataTable* Table);                                                               // [0x11d7190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.LoadCacheFromDisk
	// int32_t LoadCacheFromDisk(FString Filename, bool bUseBinaryFormat);                                                      // [0x11d6db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.IsSpeaking
	// bool IsSpeaking();                                                                                                       // [0x11d6d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.IsInitialized
	// bool IsInitialized();                                                                                                    // [0x11d6d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.InitializePhonemesArray
	// void InitializePhonemesArray();                                                                                          // [0x11d6d50] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.InitializEPhonemeConvertRules
	// void InitializEPhonemeConvertRules();                                                                                    // [0x11d6c90] Final|Native|Protected 
	// Function /Script/Text2LipSync.TextLipSync.Initialize
	// bool Initialize(class UAudioComponent* SpeakingAudioComp);                                                               // [0x11d6cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.GetSpeakingTime
	// float GetSpeakingTime();                                                                                                 // [0x11d6c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.GetListOfCachedAssets
	// void GetListOfCachedAssets(TArray<FString>& VoiceAssetNames);                                                            // [0x11d6900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Text2LipSync.TextLipSync.GetLastPhraseDuration
	// float GetLastPhraseDuration();                                                                                           // [0x11d68e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.GetCurveValue
	// float GetCurveValue(FName& CurveName);                                                                                   // [0x11d6840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.GetCurrentPhrase
	// void GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue);                                                               // [0x11d6700] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.GetCurrentPhonemesLine
	// FString GetCurrentPhonemesLine();                                                                                        // [0x11d6680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.GetActiveMorphTargets
	// FString GetActiveMorphTargets();                                                                                         // [0x11d6530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Text2LipSync.TextLipSync.BuildPhraseData
	// void BuildPhraseData(TArray<FLipSync_TimedData>& Subtitles);                                                             // [0x11d6430] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/Text2LipSync.LipSync_Interval
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FLipSync_Interval
{ 
	int32_t                                            PhonemeIndex;                                               // 0x0000   (0x0004)  
	float                                              StartTime;                                                  // 0x0004   (0x0004)  
	float                                              EndTime;                                                    // 0x0008   (0x0004)  
	char                                               Flag;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Text2LipSync.LipSync_Pause
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLipSync_Pause
{ 
	TArray<FLipSync_Interval>                          Pauses;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Text2LipSync.LipSync_TimedData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FLipSync_TimedData
{ 
	float                                              TimeOffset;                                                 // 0x0000   (0x0004)  
	float                                              EndTime;                                                    // 0x0004   (0x0004)  
	FText                                              Data;                                                       // 0x0008   (0x0018)  
};

/// Struct /Script/Text2LipSync.LipSync_Phrase
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000030) align 8 pad: 0x0000
struct FLipSync_Phrase : FTableRowBase
{ 
	class USoundBase*                                  VoiceAsset;                                                 // 0x0008   (0x0008)  
	TArray<FLipSync_TimedData>                         Subtitles;                                                  // 0x0010   (0x0010)  
	TArray<FLipSync_TimedPhrase>                       Notifies;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/Text2LipSync.LipSync_PhoneticRule
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FLipSync_PhoneticRule
{ 
	bool                                               bCondition_IsFirst;                                         // 0x0000   (0x0001)  
	bool                                               bCondition_IsLast;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            Condition_NextSymbol;                                       // 0x0008   (0x0010)  
	TArray<EPhoneme>                                   Result_Replace;                                             // 0x0018   (0x0010)  
	bool                                               bResult_RemoveNext;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/Text2LipSync.LipSync_PhonemeInPhrase
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 pad: 0x0000
struct FLipSync_PhonemeInPhrase
{ 
	EPhoneme                                           Value;                                                      // 0x0000   (0x0001)  
	char                                               Flag;                                                       // 0x0001   (0x0001)  
	char                                               FlagEmotion;                                                // 0x0002   (0x0001)  
};

/// Struct /Script/Text2LipSync.LipSync_MorphTarget
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FLipSync_MorphTarget
{ 
	FName                                              MorphTargetName;                                            // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Text2LipSync.LipSync_MorphPreset
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FLipSync_MorphPreset
{ 
	TArray<FLipSync_MorphTarget>                       Data;                                                       // 0x0000   (0x0010)  
};

static_assert(sizeof(UPhrasesList) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(USubtitlesCache) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(USubtitlesFileSave) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FLipSync_TimedPhrase) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTextLipSync) == 0x0808); // 2056 bytes (0x0000B0 - 0x000808)
static_assert(sizeof(FLipSync_Interval) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLipSync_Pause) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLipSync_TimedData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLipSync_Phrase) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FLipSync_PhoneticRule) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLipSync_PhonemeInPhrase) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FLipSync_MorphTarget) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLipSync_MorphPreset) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FLipSync_TimedPhrase, ItemName) == 0x0004);
static_assert(offsetof(UTextLipSync, AnimationType) == 0x01D8);
static_assert(offsetof(UTextLipSync, Speaker) == 0x0220);
static_assert(offsetof(UTextLipSync, ControlledMesh) == 0x0228);
static_assert(offsetof(UTextLipSync, CurrentSound) == 0x0230);
static_assert(offsetof(UTextLipSync, MorphTargets) == 0x0238);
static_assert(offsetof(UTextLipSync, PhrasesList) == 0x0360);
static_assert(offsetof(UTextLipSync, SubtitlesCache) == 0x0368);
static_assert(offsetof(UTextLipSync, PhraseData) == 0x0398);
static_assert(offsetof(UTextLipSync, PauseIndexes) == 0x03A8);
static_assert(offsetof(UTextLipSync, PhraseNotifies) == 0x03B8);
static_assert(offsetof(FLipSync_Pause, Pauses) == 0x0000);
static_assert(offsetof(FLipSync_TimedData, Data) == 0x0008);
static_assert(offsetof(FLipSync_Phrase, VoiceAsset) == 0x0008);
static_assert(offsetof(FLipSync_Phrase, Subtitles) == 0x0010);
static_assert(offsetof(FLipSync_Phrase, Notifies) == 0x0020);
static_assert(offsetof(FLipSync_PhoneticRule, Condition_NextSymbol) == 0x0008);
static_assert(offsetof(FLipSync_PhoneticRule, Result_Replace) == 0x0018);
static_assert(offsetof(FLipSync_PhonemeInPhrase, Value) == 0x0000);
static_assert(offsetof(FLipSync_MorphTarget, MorphTargetName) == 0x0000);
static_assert(offsetof(FLipSync_MorphPreset, Data) == 0x0000);
