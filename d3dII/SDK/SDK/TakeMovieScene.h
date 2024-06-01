
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0380 (896 bytes) (0x0000E8 - 0x000468) align 8 pad: 0x0000
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          HoursCurve;                                                 // 0x00E8   (0x0090)  
	FMovieSceneIntegerChannel                          MinutesCurve;                                               // 0x0178   (0x0090)  
	FMovieSceneIntegerChannel                          SecondsCurve;                                               // 0x0208   (0x0090)  
	FMovieSceneIntegerChannel                          FramesCurve;                                                // 0x0298   (0x0090)  
	FMovieSceneFloatChannel                            SubFramesCurve;                                             // 0x0328   (0x00A0)  
	FMovieSceneStringChannel                           Slate;                                                      // 0x03C8   (0x00A0)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000088) align 8 pad: 0x0000
class UMovieSceneTakeSettings : public UObject
{ 
public:
	FString                                            HoursName;                                                  // 0x0028   (0x0010)  
	FString                                            MinutesName;                                                // 0x0038   (0x0010)  
	FString                                            SecondsName;                                                // 0x0048   (0x0010)  
	FString                                            FramesName;                                                 // 0x0058   (0x0010)  
	FString                                            SubFramesName;                                              // 0x0068   (0x0010)  
	FString                                            SlateName;                                                  // 0x0078   (0x0010)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (16 bytes) (0x000090 - 0x0000A0) align 8 pad: 0x0000
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0090   (0x0010)  
};

static_assert(sizeof(UMovieSceneTakeSection) == 0x0468); // 1128 bytes (0x0000E8 - 0x000468)
static_assert(sizeof(UMovieSceneTakeSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UMovieSceneTakeTrack) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(offsetof(UMovieSceneTakeSection, HoursCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneTakeSection, MinutesCurve) == 0x0178);
static_assert(offsetof(UMovieSceneTakeSection, SecondsCurve) == 0x0208);
static_assert(offsetof(UMovieSceneTakeSection, FramesCurve) == 0x0298);
static_assert(offsetof(UMovieSceneTakeSection, SubFramesCurve) == 0x0328);
static_assert(offsetof(UMovieSceneTakeSection, Slate) == 0x03C8);
static_assert(offsetof(UMovieSceneTakeSettings, HoursName) == 0x0028);
static_assert(offsetof(UMovieSceneTakeSettings, MinutesName) == 0x0038);
static_assert(offsetof(UMovieSceneTakeSettings, SecondsName) == 0x0048);
static_assert(offsetof(UMovieSceneTakeSettings, FramesName) == 0x0058);
static_assert(offsetof(UMovieSceneTakeSettings, SubFramesName) == 0x0068);
static_assert(offsetof(UMovieSceneTakeSettings, SlateName) == 0x0078);
static_assert(offsetof(UMovieSceneTakeTrack, Sections) == 0x0090);
