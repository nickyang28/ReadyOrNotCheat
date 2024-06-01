
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FMovieSceneGeometryCollectionParams
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FSoftObjectPath                                    GeometryCollectionCache;                                    // 0x0008   (0x0018)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x0020   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0024   (0x0004)  
	float                                              PlayRate;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
/// Size: 0x0030 (48 bytes) (0x0000E8 - 0x000118) align 8 pad: 0x0000
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCollectionParams                Params;                                                     // 0x00E8   (0x0030)  
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
/// Size: 0x0018 (24 bytes) (0x000090 - 0x0000A8) align 8 pad: 0x0000
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x0098   (0x0010)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
/// Size: 0x0008 (8 bytes) (0x000030 - 0x000038) align 8 pad: 0x0000
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0030   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0034   (0x0004)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
/// Size: 0x0038 (56 bytes) (0x000020 - 0x000058) align 8 pad: 0x0000
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                 // 0x0020   (0x0038)  
};

static_assert(sizeof(FMovieSceneGeometryCollectionParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneGeometryCollectionSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(UMovieSceneGeometryCollectionTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplate) == 0x0058); // 88 bytes (0x000020 - 0x000058)
static_assert(offsetof(FMovieSceneGeometryCollectionParams, GeometryCollectionCache) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, StartFrameOffset) == 0x0020);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, EndFrameOffset) == 0x0024);
static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 0x0098);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime) == 0x0030);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime) == 0x0034);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplate, Params) == 0x0020);
