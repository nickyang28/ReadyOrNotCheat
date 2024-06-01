
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Enum /Script/SequencerScripting.ESequenceTimeUnit
/// Size: 0x01 (1 bytes)
enum class ESequenceTimeUnit : uint8_t
{
	ESequenceTimeUnit__DisplayRate                                                   = 0,
	ESequenceTimeUnit__TickResolution                                                = 1
};

/// Class /Script/SequencerScripting.MovieSceneBindingExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent
	// void SetParent(FSequencerBindingProxy& InBinding, FSequencerBindingProxy& InParentBinding);                              // [0x11e30b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName
	// void SetName(FSequencerBindingProxy& InBinding, FString InName);                                                         // [0x11e2f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	// void SetDisplayName(FSequencerBindingProxy& InBinding, FText& InDisplayName);                                            // [0x11e2c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	// void RemoveTrack(FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);                              // [0x11e2820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove
	// void Remove(FSequencerBindingProxy& InBinding);                                                                          // [0x11e2370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	// void MoveBindingContents(FSequencerBindingProxy& SourceBindingId, FSequencerBindingProxy& DestinationBindingId);         // [0x11e2280] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid
	// bool IsValid(FSequencerBindingProxy& InBinding);                                                                         // [0x11e21e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(FSequencerBindingProxy& InBinding);                                                  // [0x11e1c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	// class UClass* GetPossessedObjectClass(FSequencerBindingProxy& InBinding);                                                // [0x11e19e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent
	// FSequencerBindingProxy GetParent(FSequencerBindingProxy& InBinding);                                                     // [0x11e1930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	// class UObject* GetObjectTemplate(FSequencerBindingProxy& InBinding);                                                     // [0x11e1890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName
	// FString GetName(FSequencerBindingProxy& InBinding);                                                                      // [0x11e16c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId
	// FGuid GetId(FSequencerBindingProxy& InBinding);                                                                          // [0x11e1590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	// FText GetDisplayName(FSequencerBindingProxy& InBinding);                                                                 // [0x11e1370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	// TArray<FSequencerBindingProxy> GetChildPossessables(FSequencerBindingProxy& InBinding);                                  // [0x11e1110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(FSequencerBindingProxy& InBinding, class UClass* TrackType);                  // [0x11e0d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(FSequencerBindingProxy& InBinding, class UClass* TrackType);             // [0x11e0c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(FSequencerBindingProxy& InBinding, class UClass* TrackType);                            // [0x11e0990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	// class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);                      // [0x11e0350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	// class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);                    // [0x11e02c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFolderExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	// bool SetFolderName(class UMovieSceneFolder* folder, FName InFolderName);                                                 // [0x11e2e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	// bool SetFolderColor(class UMovieSceneFolder* folder, FColor InFolderColor);                                              // [0x11e2d60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	// bool RemoveChildObjectBinding(class UMovieSceneFolder* folder, FSequencerBindingProxy InObjectBinding);                  // [0x11e25a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	// bool RemoveChildMasterTrack(class UMovieSceneFolder* folder, class UMovieSceneTrack* InMasterTrack);                     // [0x11e24d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	// bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);                  // [0x11e2400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	// FName GetFolderName(class UMovieSceneFolder* folder);                                                                    // [0x11e1500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	// FColor GetFolderColor(class UMovieSceneFolder* folder);                                                                  // [0x11e1470] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	// TArray<FSequencerBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* folder);                                  // [0x11e1040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	// TArray<UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* folder);                                         // [0x11e0f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	// TArray<UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* folder);                                             // [0x11e0ea0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	// bool AddChildObjectBinding(class UMovieSceneFolder* folder, FSequencerBindingProxy InObjectBinding);                     // [0x11e01d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	// bool AddChildMasterTrack(class UMovieSceneFolder* folder, class UMovieSceneTrack* InMasterTrack);                        // [0x11e0100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	// bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);                        // [0x11e0030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	// void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath);       // [0x11e31a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	// void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);                   // [0x11e2ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	// FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);                                                         // [0x11e1d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	// FString GetPropertyPath(class UMovieScenePropertyTrack* Track);                                                          // [0x11e1b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	// FName GetPropertyName(class UMovieScenePropertyTrack* Track);                                                            // [0x11e1a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	// class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);                                       // [0x11e1800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingKey
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UMovieSceneScriptingKey : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	// void SetValue(FMovieSceneObjectBindingID& InNewValue);                                                                   // [0x11e3510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	// FMovieSceneObjectBindingID GetValue();                                                                                   // [0x11e1df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingChannel
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UMovieSceneScriptingChannel : public UObject
{ 
public:
	FName                                              ChannelName;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	// void SetDefault(FMovieSceneObjectBindingID InDefaultValue);                                                              // [0x11e2900] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11e2690] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11e2060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	// FMovieSceneObjectBindingID GetDefault();                                                                                 // [0x11e11f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	// class UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0x11e03e0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	// void SetValue(bool InNewValue);                                                                                          // [0x11e3670] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	// bool GetValue();                                                                                                         // [0x11e1ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	// void SetDefault(bool InDefaultValue);                                                                                    // [0x11e2a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11e26f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11e2130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x11e17a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	// bool GetDefault();                                                                                                       // [0x11e1290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	// TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                         // [0x11e0ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x11e0a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	// class UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0x11e05b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetValue
	// void SetValue(char InNewValue);                                                                                          // [0x11e3770] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue
	// char GetValue();                                                                                                         // [0x11e1fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	// void SetDefault(char InDefaultValue);                                                                                    // [0x11e2b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11e26f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11e2130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	// char GetDefault();                                                                                                       // [0x11e1290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	// class UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x11e07a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue
	// void SetValue(FMovieSceneEvent& InNewValue);                                                                             // [0x11eb850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue
	// FMovieSceneEvent GetValue();                                                                                             // [0x11e9dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	// class UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0x11e8690] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	// void SetValue(float InNewValue);                                                                                         // [0x11eb980] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0x11eb780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0x11eb6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0x11eb030] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0x11eaf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0x11eae80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0x11ea710] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0x11ea630] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	// float GetValue();                                                                                                        // [0x11e9ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x11e9d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x11e9d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x11e99c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0x11e9980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x11e9940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x11e93e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0x11e93a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0x11eb1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0x11eb110] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	// void SetDefault(float InDefaultValue);                                                                                   // [0x11ea7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11ea450] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11ea120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0x11e9bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0x11e9b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x11e9a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	// float GetDefault();                                                                                                      // [0x11e94f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	// TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                        // [0x11e9110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x11e90d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	// class UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x11e8940] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	// void SetValue(int32_t InNewValue);                                                                                       // [0x11eba60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	// int32_t GetValue();                                                                                                      // [0x11e9ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	// void SetDefault(int32_t InDefaultValue);                                                                                 // [0x11ea8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11ea4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11ea1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	// int32_t GetDefault();                                                                                                    // [0x11e9590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	// class UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0x11e8b00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	// void SetValue(class UObject* InNewValue);                                                                                // [0x11ebb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	// class UObject* GetValue();                                                                                               // [0x11e9fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	// void SetDefault(class UObject* InDefaultValue);                                                                          // [0x11ea9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11e2690] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11ea240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	// class UObject* GetDefault();                                                                                             // [0x11e9630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	// class UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, class UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0x11e8cf0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringKey
/// Size: 0x0020 (32 bytes) (0x000040 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetValue
	// void SetValue(FString InNewValue);                                                                                       // [0x11ebcb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);                                  // [0x11e32d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue
	// FString GetValue();                                                                                                      // [0x11ea010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime
	// FFrameTime GetTime(ESequenceTimeUnit TimeUnit);                                                                          // [0x11e1be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000060) align 8 pad: 0x0000
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	// void SetDefault(FString InDefaultValue);                                                                                 // [0x11eaaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x11e2790] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x11ea590] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x11ea280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x11e1640] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	// FString GetDefault();                                                                                                    // [0x11e9660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	// class UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, ESequenceTimeUnit TimeUnit); // [0x11e8ec0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneSectionExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	// void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);                                           // [0x11eb5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	// void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                           // [0x11eb530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	// void SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);                                               // [0x11eb470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	// void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);                                 // [0x11eb370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange
	// void SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);                                  // [0x11eb270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	// void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);                                               // [0x11eadc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	// void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                             // [0x11ead00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	// void SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);                                                   // [0x11eac40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	// bool HasStartFrame(class UMovieSceneSection* Section);                                                                   // [0x11ea3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	// bool HasEndFrame(class UMovieSceneSection* Section);                                                                     // [0x11ea330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	// float GetStartFrameSeconds(class UMovieSceneSection* Section);                                                           // [0x11e9cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	// int32_t GetStartFrame(class UMovieSceneSection* Section);                                                                // [0x11e9c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	// int32_t GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence); // [0x11e9a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	// float GetEndFrameSeconds(class UMovieSceneSection* Section);                                                             // [0x11e98b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	// int32_t GetEndFrame(class UMovieSceneSection* Section);                                                                  // [0x11e9820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannels
	// TArray<UMovieSceneScriptingChannel*> GetChannels(class UMovieSceneSection* Section);                                     // [0x11e9420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
	// TArray<UMovieSceneScriptingChannel*> FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);   // [0x11e9290] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	// void SortMarkedFrames(class UMovieSceneSequence* Sequence);                                                              // [0x11f03d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	// void SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);                                 // [0x11f0310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	// void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);                                     // [0x11f0310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	// void SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);                                 // [0x11f0310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	// void SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);                                     // [0x11f0310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	// void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                          // [0x11f0240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	// void SetTickResolution(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                                  // [0x11f0170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	// void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);                                                 // [0x11eff30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	// void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);                                      // [0x11efe70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	// void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);                                          // [0x11efdb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	// void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);                                          // [0x11efcf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	// void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);                                              // [0x11efc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	// void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber);               // [0x11efa70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	// void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);               // [0x11ef9b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	// void SetDisplayRate(class UMovieSceneSequence* Sequence, FFrameRate DisplayRate);                                        // [0x11ef8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	// void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);                            // [0x11ef660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	// FSequencerBindingProxy ResolveBindingID(class UMovieSceneSequence* MasterSequence, FMovieSceneObjectBindingID InObjectBindingID); // [0x11ef540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	// bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack);                        // [0x11ef3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	// FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);         // [0x11ef2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	// FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration);           // [0x11ef190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
	// FMovieSceneObjectBindingID MakeBindingID(class UMovieSceneSequence* MasterSequence, FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space); // [0x11ef050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	// TArray<UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, FSequencerBindingProxy& InBinding, class UObject* Context); // [0x11eeee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	// bool IsReadOnly(class UMovieSceneSequence* Sequence);                                                                    // [0x11eee50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	// float GetWorkRangeStart(class UMovieSceneSequence* InSequence);                                                          // [0x11eedc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	// float GetWorkRangeEnd(class UMovieSceneSequence* InSequence);                                                            // [0x11eedc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	// float GetViewRangeStart(class UMovieSceneSequence* InSequence);                                                          // [0x11eedc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	// float GetViewRangeEnd(class UMovieSceneSequence* InSequence);                                                            // [0x11eedc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
	// FTimecode GetTimecodeSource(class UMovieSceneSequence* Sequence);                                                        // [0x11eed20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	// FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);                                                       // [0x11eec90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	// TArray<FSequencerBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);                                       // [0x11eebc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	// TArray<UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);                                // [0x11ee900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	// TArray<FSequencerBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);                                     // [0x11ee830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	// FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, FSequencerBindingProxy& InBinding); // [0x11ee6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	// float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);                                                      // [0x11ee660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	// int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);                                                           // [0x11ee5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	// FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);                                          // [0x11ee530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	// float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);                                                        // [0x11ee4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	// int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);                                                             // [0x11ee410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	// class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);                                                   // [0x11ee2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	// TArray<UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);                                          // [0x11ee220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	// TArray<FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);                                     // [0x11ee100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	// EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);                                      // [0x11ee070] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	// FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);                                                          // [0x11edfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	// EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);                                                // [0x11ede60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	// TArray<FSequencerBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);                                         // [0x11edd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	// FMovieSceneObjectBindingID GetBindingID(FSequencerBindingProxy& InBinding);                                              // [0x11edce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	// int32_t FindNextMarkedFrame(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);             // [0x11edbe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);          // [0x11edad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	// TArray<UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);     // [0x11ed9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	// int32_t FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, FString InLabel);                                    // [0x11ed8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	// int32_t FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);                   // [0x11ed810] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	// FSequencerBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, FString Name);                             // [0x11ed6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	// FSequencerBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);                            // [0x11ed5e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	// void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);                                                            // [0x11ed560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	// void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);                                        // [0x11ed4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	// FSequencerBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);      // [0x11ed3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	// FSequencerBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);           // [0x11ed3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	// class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, FString NewFolderName);            // [0x11ed200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	// FSequencerBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);              // [0x11ed120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	// class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                    // [0x11ed050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	// int32_t AddMarkedFrame(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame);                      // [0x11ecf50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneTrackExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	// void SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);                                               // [0x11f00b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	// void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                  // [0x11efff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	// void SetDisplayName(class UMovieSceneTrack* Track, FText& InName);                                                       // [0x11ef7e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	// void SetColorTint(class UMovieSceneTrack* Track, FColor& ColorTint);                                                     // [0x11ef720] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	// void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                    // [0x11ef480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	// int32_t GetSortingOrder(class UMovieSceneTrack* Track);                                                                  // [0x11eeb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	// class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);                                                // [0x11ee9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections
	// TArray<UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);                                                  // [0x11eea60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	// FText GetDisplayName(class UMovieSceneTrack* Track);                                                                     // [0x11edef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	// FColor GetColorTint(class UMovieSceneTrack* Track);                                                                      // [0x11e1470] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection
	// class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);                                                     // [0x11ed330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneVectorTrackExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMovieSceneVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed);                                 // [0x11efb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneVectorTrack* Track);                                                         // [0x11ee380] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.SequencerScriptingRangeExtensions
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	// void SetStartSeconds(FSequencerScriptingRange& Range, float Start);                                                      // [0x11f1230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	// void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start);                                                      // [0x11f1150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	// void SetEndSeconds(FSequencerScriptingRange& Range, float End);                                                          // [0x11f1060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	// void SetEndFrame(FSequencerScriptingRange& Range, int32_t End);                                                          // [0x11f0f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	// void RemoveStart(FSequencerScriptingRange& Range);                                                                       // [0x11f0ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	// void RemoveEnd(FSequencerScriptingRange& Range);                                                                         // [0x11f0e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	// bool HasStart(FSequencerScriptingRange& Range);                                                                          // [0x11f0dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	// bool HasEnd(FSequencerScriptingRange& Range);                                                                            // [0x11f0d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	// float GetStartSeconds(FSequencerScriptingRange& Range);                                                                  // [0x11f0c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	// int32_t GetStartFrame(FSequencerScriptingRange& Range);                                                                  // [0x11f0be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	// float GetEndSeconds(FSequencerScriptingRange& Range);                                                                    // [0x11f0b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	// int32_t GetEndFrame(FSequencerScriptingRange& Range);                                                                    // [0x11f0aa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SequencerScripting.SequencerBindingProxy
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FSequencerBindingProxy
{ 
	FGuid                                              BindingID;                                                  // 0x0000   (0x0010)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/SequencerScripting.SequencerScriptingRange
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FSequencerScriptingRange
{ 
	bool                                               bHasStart : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bHasEnd : 1;                                                // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            InclusiveStart;                                             // 0x0004   (0x0004)  
	int32_t                                            ExclusiveEnd;                                               // 0x0008   (0x0004)  
	FFrameRate                                         InternalRate;                                               // 0x000C   (0x0008)  
};

static_assert(sizeof(UMovieSceneBindingExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneEventTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneFolderExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieScenePropertyTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneScriptingKey) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMovieSceneScriptingActorReferenceKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingChannel) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMovieSceneScriptingActorReferenceChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingBoolKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingBoolChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingByteKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingByteChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingEventKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingEventChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingFloatKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingFloatChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingIntegerKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingIntegerChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingObjectPathKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingObjectPathChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingStringKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingStringChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneSectionExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneSequenceExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneVectorTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USequencerScriptingRangeExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSequencerBindingProxy) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSequencerScriptingRange) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(UMovieSceneScriptingChannel, ChannelName) == 0x0028);
static_assert(offsetof(FSequencerBindingProxy, BindingID) == 0x0000);
static_assert(offsetof(FSequencerBindingProxy, Sequence) == 0x0010);
static_assert(offsetof(FSequencerScriptingRange, InternalRate) == 0x000C);
