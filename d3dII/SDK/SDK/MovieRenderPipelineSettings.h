
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x0058 (88 bytes) (0x000048 - 0x0000A0) align 8 pad: 0x0000
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
public:
	FSoftClassPath                                     BurnInClass;                                                // 0x0048   (0x0018)  
	bool                                               bCompositeOntoFinalImage;                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0061   (0x002F)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0090   (0x0008)  
	class UMoviePipelineBurnInWidget*                  BurnInWidgetInstance;                                       // 0x0098   (0x0008)  
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0000 (0 bytes) (0x000260 - 0x000260) align 8 pad: 0x0000
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                            // [0x24710f0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x0080 (128 bytes) (0x000048 - 0x0000C8) align 8 pad: 0x0000
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
public:
	SDK_UNDEFINED(80,1922) /* TMap<FString, float> */  __um(ConsoleVariables);                                     // 0x0048   (0x0050)  
	TArray<FString>                                    StartConsoleCommands;                                       // 0x0098   (0x0010)  
	TArray<FString>                                    EndConsoleCommands;                                         // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0020 (32 bytes) (0x000048 - 0x000068) align 8 pad: 0x0000
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
public:
	bool                                               bCompositeOntoFinalImage;                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0049   (0x0017)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0060   (0x0008)  
};

static_assert(sizeof(UMoviePipelineBurnInSetting) == 0x00A0); // 160 bytes (0x000048 - 0x0000A0)
static_assert(sizeof(UMoviePipelineBurnInWidget) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UMoviePipelineConsoleVariableSetting) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(UMoviePipelineWidgetRenderer) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(offsetof(UMoviePipelineBurnInSetting, BurnInClass) == 0x0048);
static_assert(offsetof(UMoviePipelineBurnInSetting, RenderTarget) == 0x0090);
static_assert(offsetof(UMoviePipelineBurnInSetting, BurnInWidgetInstance) == 0x0098);
static_assert(offsetof(UMoviePipelineConsoleVariableSetting, StartConsoleCommands) == 0x0098);
static_assert(offsetof(UMoviePipelineConsoleVariableSetting, EndConsoleCommands) == 0x00A8);
static_assert(offsetof(UMoviePipelineWidgetRenderer, RenderTarget) == 0x0060);
