
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/MSDFSupport.SVGConversionParams
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 pad: 0x0000
struct FSVGConversionParams
{ 
	int32_t                                            SVGPathIndex;                                               // 0x0000   (0x0004)  
	FVector2D                                          OutputDimensions;                                           // 0x0004   (0x0008)  
	bool                                               bAutoFrame;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            ExtraMargin;                                                // 0x0010   (0x0004)  
	FVector2D                                          Scale;                                                      // 0x0014   (0x0008)  
	FVector2D                                          Translation;                                                // 0x001C   (0x0008)  
	int32_t                                            FieldRangeInPixels;                                         // 0x0024   (0x0004)  
};

/// Class /Script/MSDFSupport.MSDFAssetData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000050) align 8 pad: 0x0000
class UMSDFAssetData : public UAssetUserData
{ 
public:
	FSVGConversionParams                               ImportParameters;                                           // 0x0028   (0x0028)  
};

/// Class /Script/MSDFSupport.RenderMSDF
/// Size: 0x0070 (112 bytes) (0x000040 - 0x0000B0) align 8 pad: 0x0000
class URenderMSDF : public UMaterialExpression
{ 
public:
	class UTexture*                                    EffectiveTexture;                                           // 0x0040   (0x0008)  
	FExpressionInput                                   MSDFTexture;                                                // 0x0048   (0x0014)  
	TEnumAsByte<EMaterialSamplerType>                  SamplerType;                                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FExpressionInput                                   Coordinates;                                                // 0x0060   (0x0014)  
	char                                               ConstCoordinateIndex;                                       // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	class UTexture*                                    Texture;                                                    // 0x0078   (0x0008)  
	FExpressionInput                                   FieldDistance;                                              // 0x0080   (0x0014)  
	FExpressionInput                                   OutputTextureSize;                                          // 0x0094   (0x0014)  
	FExpressionOutput                                  Output;                                                     // 0x00A8   (0x0008)  
};

static_assert(sizeof(FSVGConversionParams) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMSDFAssetData) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(URenderMSDF) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(offsetof(FSVGConversionParams, OutputDimensions) == 0x0004);
static_assert(offsetof(FSVGConversionParams, Scale) == 0x0014);
static_assert(offsetof(FSVGConversionParams, Translation) == 0x001C);
static_assert(offsetof(UMSDFAssetData, ImportParameters) == 0x0028);
static_assert(offsetof(URenderMSDF, EffectiveTexture) == 0x0040);
static_assert(offsetof(URenderMSDF, MSDFTexture) == 0x0048);
static_assert(offsetof(URenderMSDF, SamplerType) == 0x005C);
static_assert(offsetof(URenderMSDF, Coordinates) == 0x0060);
static_assert(offsetof(URenderMSDF, Texture) == 0x0078);
static_assert(offsetof(URenderMSDF, FieldDistance) == 0x0080);
static_assert(offsetof(URenderMSDF, OutputTextureSize) == 0x0094);
static_assert(offsetof(URenderMSDF, Output) == 0x00A8);
