
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: GeometryCache
/// dependency: MovieScene

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FMovieSceneGeometryCacheParams
{ 
	class UGeometryCache*                              GeometryCacheAsset;                                         // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              StartOffset;                                                // 0x001C   (0x0004)  
	float                                              EndOffset;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FSoftObjectPath                                    GeometryCache;                                              // 0x0028   (0x0018)  
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
/// Size: 0x0040 (64 bytes) (0x0000E8 - 0x000128) align 8 pad: 0x0000
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCacheParams                     Params;                                                     // 0x00E8   (0x0040)  
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
/// Size: 0x0018 (24 bytes) (0x000090 - 0x0000A8) align 8 pad: 0x0000
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x0098   (0x0010)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
/// Size: 0x0008 (8 bytes) (0x000040 - 0x000048) align 8 pad: 0x0000
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0044   (0x0004)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
/// Size: 0x0048 (72 bytes) (0x000020 - 0x000068) align 8 pad: 0x0000
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCacheSectionTemplateParameters  Params;                                                     // 0x0020   (0x0048)  
};

static_assert(sizeof(FMovieSceneGeometryCacheParams) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UMovieSceneGeometryCacheSection) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(UMovieSceneGeometryCacheTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplate) == 0x0068); // 104 bytes (0x000020 - 0x000068)
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0x0000);
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 0x0028);
static_assert(offsetof(UMovieSceneGeometryCacheSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 0x0098);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 0x0044);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 0x0020);
