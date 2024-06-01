
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/ModelingOperators.ECSGOperation
/// Size: 0x01 (1 bytes)
enum class ECSGOperation : uint8_t
{
	ECSGOperation__DifferenceAB                                                      = 0,
	ECSGOperation__DifferenceBA                                                      = 1,
	ECSGOperation__Intersect                                                         = 2,
	ECSGOperation__Union                                                             = 3,
	ECSGOperation__TrimA                                                             = 4,
	ECSGOperation__TrimB                                                             = 5
};

/// Enum /Script/ModelingOperators.ESplitNormalMethod
/// Size: 0x01 (1 bytes)
enum class ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology                                          = 0,
	ESplitNormalMethod__FaceNormalThreshold                                          = 1,
	ESplitNormalMethod__FaceGroupID                                                  = 2,
	ESplitNormalMethod__PerTriangle                                                  = 3,
	ESplitNormalMethod__PerVertex                                                    = 4
};

/// Enum /Script/ModelingOperators.ENormalCalculationMethod
/// Size: 0x01 (1 bytes)
enum class ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted                                           = 0,
	ENormalCalculationMethod__AngleWeighted                                          = 1,
	ENormalCalculationMethod__AreaAngleWeighting                                     = 2
};

/// Enum /Script/ModelingOperators.EHoleFillOpFillType
/// Size: 0x01 (1 bytes)
enum class EHoleFillOpFillType : uint8_t
{
	EHoleFillOpFillType__TriangleFan                                                 = 0,
	EHoleFillOpFillType__PolygonEarClipping                                          = 1,
	EHoleFillOpFillType__Planar                                                      = 2,
	EHoleFillOpFillType__Minimal                                                     = 3,
	EHoleFillOpFillType__Smooth                                                      = 4
};

/// Enum /Script/ModelingOperators.ERemeshSmoothingType
/// Size: 0x01 (1 bytes)
enum class ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform                                                    = 0,
	ERemeshSmoothingType__Cotangent                                                  = 1,
	ERemeshSmoothingType__MeanValue                                                  = 2
};

/// Enum /Script/ModelingOperators.ERemeshType
/// Size: 0x01 (1 bytes)
enum class ERemeshType : uint8_t
{
	ERemeshType__Standard                                                            = 0,
	ERemeshType__FullPass                                                            = 1,
	ERemeshType__NormalFlow                                                          = 2
};

/// Enum /Script/ModelingOperators.EUVProjectionMethod
/// Size: 0x01 (1 bytes)
enum class EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Cube                                                        = 0,
	EUVProjectionMethod__Cylinder                                                    = 1,
	EUVProjectionMethod__Plane                                                       = 2
};

/// Enum /Script/ModelingOperators.EMorphologyOperation
/// Size: 0x01 (1 bytes)
enum class EMorphologyOperation : uint8_t
{
	EMorphologyOperation__Dilate                                                     = 0,
	EMorphologyOperation__Contract                                                   = 1,
	EMorphologyOperation__Close                                                      = 2,
	EMorphologyOperation__Open                                                       = 3
};

