
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (16 bytes) (0x0000E8 - 0x0000F8) align 8 pad: 0x0000
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x00E8   (0x0008)  
	bool                                               bLoop;                                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0030 (48 bytes) (0x0000E8 - 0x000118) align 8 pad: 0x0000
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x00E8   (0x0008)  
	bool                                               bLooping;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x00F4   (0x0004)  
	class UMediaTexture*                               MediaTexture;                                               // 0x00F8   (0x0008)  
	class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0100   (0x0008)  
	bool                                               bUseExternalMediaPlayer;                                    // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	class UMediaPlayer*                                ExternalMediaPlayer;                                        // 0x0110   (0x0008)  
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0018 (24 bytes) (0x000090 - 0x0000A8) align 8 pad: 0x0000
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  MediaSections;                                              // 0x0098   (0x0010)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	class UMediaSource*                                MediaSource;                                                // 0x0038   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0040   (0x0004)  
	bool                                               bLoop;                                                      // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FMovieSceneMediaSectionParams
{ 
	class UMediaSoundComponent*                        MediaSoundComponent;                                        // 0x0000   (0x0008)  
	class UMediaSource*                                MediaSource;                                                // 0x0008   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0010   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0018   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndFrame;                                            // 0x0024   (0x0004)  
	bool                                               bLooping;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000050) align 8 pad: 0x0000
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneMediaSectionParams                      Params;                                                     // 0x0020   (0x0030)  
};

static_assert(sizeof(UMovieSceneMediaPlayerPropertySection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneMediaPlayerPropertyTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneMediaSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(UMovieSceneMediaTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FMovieSceneMediaPlayerPropertySectionTemplate) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FMovieSceneMediaSectionParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneMediaSectionTemplate) == 0x0050); // 80 bytes (0x000020 - 0x000050)
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, MediaSource) == 0x00E8);
static_assert(offsetof(UMovieSceneMediaSection, MediaSource) == 0x00E8);
static_assert(offsetof(UMovieSceneMediaSection, StartFrameOffset) == 0x00F4);
static_assert(offsetof(UMovieSceneMediaSection, MediaTexture) == 0x00F8);
static_assert(offsetof(UMovieSceneMediaSection, MediaSoundComponent) == 0x0100);
static_assert(offsetof(UMovieSceneMediaSection, ExternalMediaPlayer) == 0x0110);
static_assert(offsetof(UMovieSceneMediaTrack, MediaSections) == 0x0098);
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource) == 0x0038);
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame) == 0x0040);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSoundComponent) == 0x0000);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSource) == 0x0008);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaTexture) == 0x0010);
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaPlayer) == 0x0018);
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionStartFrame) == 0x0020);
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionEndFrame) == 0x0024);
static_assert(offsetof(FMovieSceneMediaSectionParams, StartFrameOffset) == 0x002C);
static_assert(offsetof(FMovieSceneMediaSectionTemplate, Params) == 0x0020);
