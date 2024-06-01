
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

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x01 (1 bytes)
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor                                  = 0,
	EActorSequenceObjectReferenceType__ExternalActor                                 = 1,
	EActorSequenceObjectReferenceType__Component                                     = 2
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FActorSequenceObjectReference
{ 
	EActorSequenceObjectReferenceType                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGuid                                              ActorId;                                                    // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            PathToComponent;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FActorSequenceObjectReferences
{ 
	TArray<FActorSequenceObjectReference>              Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FActorSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FActorSequenceObjectReferences>             References;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0028 (40 bytes) (0x000060 - 0x000088) align 8 pad: 0x0000
class UActorSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0060   (0x0008)  
	FActorSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0068   (0x0020)  
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x0028 (40 bytes) (0x0000B0 - 0x0000D8) align 8 pad: 0x0000
class UActorSequenceComponent : public UActorComponent
{ 
public:
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x00B0   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UActorSequence*                              Sequence;                                                   // 0x00C8   (0x0008)  
	class UActorSequencePlayer*                        SequencePlayer;                                             // 0x00D0   (0x0008)  
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x0000 (0 bytes) (0x0004E8 - 0x0004E8) align 8 pad: 0x0000
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
};

static_assert(sizeof(FActorSequenceObjectReference) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FActorSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActorSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UActorSequence) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UActorSequenceComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UActorSequencePlayer) == 0x04E8); // 1256 bytes (0x0004E8 - 0x0004E8)
static_assert(offsetof(FActorSequenceObjectReference, Type) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReference, ActorId) == 0x0004);
static_assert(offsetof(FActorSequenceObjectReference, PathToComponent) == 0x0018);
static_assert(offsetof(FActorSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(UActorSequence, MovieScene) == 0x0060);
static_assert(offsetof(UActorSequence, ObjectReferences) == 0x0068);
static_assert(offsetof(UActorSequenceComponent, PlaybackSettings) == 0x00B0);
static_assert(offsetof(UActorSequenceComponent, Sequence) == 0x00C8);
static_assert(offsetof(UActorSequenceComponent, SequencePlayer) == 0x00D0);
