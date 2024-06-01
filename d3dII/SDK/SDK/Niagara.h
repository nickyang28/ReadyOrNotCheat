
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x01 (1 bytes)
enum class ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x01 (1 bytes)
enum class ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x01 (1 bytes)
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x01 (1 bytes)
enum class ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x01 (1 bytes)
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04 (4 bytes)
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x04 (4 bytes)
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x01 (1 bytes)
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x01 (1 bytes)
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x01 (1 bytes)
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x01 (1 bytes)
enum class ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x01 (1 bytes)
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x04 (4 bytes)
enum class ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000D8) align 8 pad: 0x0000
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(80,1673) /* TSet<int32_t> */         __um(OutputShaderStages);                                   // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,1674) /* TSet<int32_t> */         __um(IterationShaderStages);                                // 0x0088   (0x0050)  
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (16 bytes) (0x000090 - 0x0000A0) align 8 pad: 0x0000
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0090   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0014 (20 bytes) (0x00000C - 0x000020) align 8 pad: 0x0000
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (32 bytes) (0x0000A0 - 0x0000C0) align 8 pad: 0x0000
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x00A0   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (8 bytes) (0x0000C0 - 0x0000C8) align 8 pad: 0x0000
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (16 bytes) (0x0000E8 - 0x0000F8) align 8 pad: 0x0000
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00E8   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00EC   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F0   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (8 bytes) (0x0000A0 - 0x0000A8) align 8 pad: 0x0000
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (16 bytes) (0x0000C0 - 0x0000D0) align 8 pad: 0x0000
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C0   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 8 pad: 0x0000
class ANiagaraActor : public AActor
{ 
public:
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0220   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x0228:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0229   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0x1136f50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0x1136ec0] Final|Native|Private 
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraBakerTextureSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraBakerTextureSettings
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x0008)  
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0008   (0x0008)  
	bool                                               bUseFrameSize : 1;                                          // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0014   (0x0008)  
	FIntPoint                                          TextureSize;                                                // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UTexture2D*                                  GeneratedTexture;                                           // 0x0028   (0x0008)  
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x000118) align 8 pad: 0x0000
class UNiagaraBakerSettings : public UObject
{ 
public:
	float                                              StartSeconds;                                               // 0x0028   (0x0004)  
	float                                              DurationSeconds;                                            // 0x002C   (0x0004)  
	int32_t                                            FramesPerSecond;                                            // 0x0030   (0x0004)  
	bool                                               bPreviewLooping : 1;                                        // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FIntPoint                                          FramesPerDimension;                                         // 0x0038   (0x0008)  
	TArray<FNiagaraBakerTextureSettings>               OutputTextures;                                             // 0x0040   (0x0010)  
	ENiagaraBakerViewMode                              CameraViewportMode;                                         // 0x0050   (0x0004)  
	FVector                                            CameraViewportLocation[7];                                  // 0x0054   (0x0054)  
	FRotator                                           CameraViewportRotation[7];                                  // 0x00A8   (0x0054)  
	float                                              CameraOrbitDistance;                                        // 0x00FC   (0x0004)  
	float                                              CameraFOV;                                                  // 0x0100   (0x0004)  
	float                                              CameraOrthoWidth;                                           // 0x0104   (0x0004)  
	bool                                               bUseCameraAspectRatio : 1;                                  // 0x0108:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              CameraAspectRatio;                                          // 0x010C   (0x0004)  
	bool                                               bRenderComponentOnly : 1;                                   // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0004 (4 bytes) (0x00000C - 0x000010) align 4 pad: 0x0000
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 pad: 0x0000
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (80 bytes) (0x000078 - 0x0000C8) align 8 pad: 0x0000
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	SDK_UNDEFINED(80,1675) /* TMap<FNiagaraVariable, FNiagaraVariable> */ __um(UserParameterRedirects);            // 0x0078   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraMaterialOverride
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	uint32_t                                           MaterialSubIndex;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UNiagaraRendererProperties*                  EmitterRendererProperty;                                    // 0x0010   (0x0008)  
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x01B0 (432 bytes) (0x000450 - 0x000600) align 16 pad: 0x0000
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	class UNiagaraSystem*                              Asset;                                                      // 0x0450   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x0458   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0459   (0x0003)  MISSED
	int32_t                                            RandomSeedOffset;                                           // 0x045C   (0x0004)  
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0460   (0x00C8)  
	bool                                               bForceSolo : 1;                                             // 0x0528:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x0528:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x2F];                                      // 0x0529   (0x002F)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x0558:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x0558:1 (0x0001)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x0558:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x0558:3 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0559   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x055C   (0x0004)  
	TArray<FNiagaraMaterialOverride>                   EmitterMaterials;                                           // 0x0560   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0570   (0x0008)  MISSED
	SDK_UNDEFINED(16,1676) /* FMulticastInlineDelegate */ __um(OnSystemFinished);                                  // 0x0578   (0x0010)  
	SDK_UNDEFINED(8,1677) /* TWeakObjectPtr<USceneComponent*> */ __um(AutoAttachParent);                           // 0x0588   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x0590   (0x0008)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x0598   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x0599   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x059A   (0x0001)  
	unsigned char                                      UnknownData04_7[0x65];                                      // 0x059B   (0x0065)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0x113b770] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0x113b690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0x113b5c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0x113b4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0x113b420] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0x113b350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0x113b280] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0x113b1b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0x113b0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0x113b010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0x113af40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0x113ae70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0x113adf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0x113ad70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0x113ace0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0x113ac50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                    // [0x113ab80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0x113aaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0x113aa00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0x113a910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0x113a830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0x113a740] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0x113a2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0x113a650] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0x113a570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0x113a480] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0x113a3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0x113a2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0x113a240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                                  // [0x113a1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0x113a120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0x113a090] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0x113a010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0x1139f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0x1139ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                     // [0x1139e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0x1139d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0x1139d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0x1139c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0x1139c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0x1139c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x1139c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                       // [0x1139c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0x1139be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0x1139bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                           // [0x1139b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0x1139b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                           // [0x1139b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0x11398b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0x1139a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0x11397c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0x1139790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0x1139760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0x1139730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0x1139700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0x1139650] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0x1139630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0x1139600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0x1139530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0x1139460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000080) align 8 pad: 0x0000
class UNiagaraComponentPool : public UObject
{ 
public:
	SDK_UNDEFINED(80,1678) /* TMap<UNiagaraSystem*, FNCPool> */ __um(WorldParticleSystemPools);                    // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x0008)  
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            MinInt;                                                     // 0x000C   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)  
	float                                              MinFloat;                                                   // 0x0014   (0x0004)  
	float                                              MaxFloat;                                                   // 0x0018   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x001C:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x001C:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x001C:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x001C:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x001D   (0x000B)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)  
	ENiagaraRendererMotionVectorSetting                MotionVectorSetting;                                        // 0x005C   (0x0004)  
	bool                                               bIsEnabled;                                                 // 0x0060   (0x0001)  
	bool                                               bMotionBlurEnabled;                                         // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x0062   (0x0016)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraTypeDefinition
{ 
	class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 pad: 0x0000
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x0008)  
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0060   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0070   (0x0008)  
	SDK_UNDEFINED(80,1679) /* TMap<FString, FString> */ __um(PropertySetterParameterDefaults);                     // 0x0078   (0x0050)  
	FNiagaraVariable                                   WritableValue;                                              // 0x00C8   (0x0020)  
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0138 (312 bytes) (0x000078 - 0x0001B0) align 8 pad: 0x0000
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UClass*                                      ComponentType;                                              // 0x0078   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0088   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x00E0   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x0138   (0x0001)  
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                       // 0x0139   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x013A   (0x0002)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x013C   (0x0004)  
	class USceneComponent*                             TemplateComponent;                                          // 0x0140   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x0148   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0158   (0x0058)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x000118) align 8 pad: 0x0000
class UNiagaraComponentSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,1680) /* TSet<FName> */           __um(SuppressActivationList);                               // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,1681) /* TSet<FName> */           __um(ForceAutoPooolingList);                                // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,1682) /* TSet<FNiagaraEmitterNameSettingsRef> */ __um(SuppressEmitterList);                   // 0x00C8   (0x0050)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture2DArray*                             Texture;                                                    // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	int32_t                                            MaxElements;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2D>                                  FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector>                                    FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4>                                   FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat>                                      QuatData;                                                   // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	// void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0x113fd10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	// void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // [0x113fa40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0x113f920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	// void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // [0x113f780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0x113f660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0x113fbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	// void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // [0x113f4c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0x113f3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	// void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0x113f210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0x113f0f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	// void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // [0x113ef60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0x113ee40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	// void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // [0x113eca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0x113eb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	// void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // [0x113e9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0x113e8b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	// FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);           // [0x113e6a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	// FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0x113e480] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x113e370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	// FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0x113e260] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x113e150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0x113e590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	// FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);               // [0x113e040] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0x113df30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	// int32_t GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0x113de30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x113dd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	// float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);              // [0x113dc20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0x113db10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	// FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0x113da00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x113d8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	// bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);                // [0x113d7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0x113d6e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (16 bytes) (0x000050 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000070) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundBase*                                  SoundToPlay;                                                // 0x0038   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0040   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0064   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (16 bytes) (0x000040 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0044   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0048   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000070) align 8 pad: 0x0000
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0048   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)  
	bool                                               bUseLUT : 1;                                                // 0x0058:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	class UTexture2D*                                  ExposedTexture;                                             // 0x0068   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (512 bytes) (0x000070 - 0x000270) align 8 pad: 0x0000
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
public:
	class UTextureCube*                                Texture;                                                    // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (128 bytes) (0x000070 - 0x0000F0) align 8 pad: 0x0000
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);                         // [0x113e7b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0020 (32 bytes) (0x0000D8 - 0x0000F8) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            NumCellsX;                                                  // 0x00D8   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x00DC   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E0   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x00E4   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x00EC   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (200 bytes) (0x0000F8 - 0x0001C0) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F8   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0118   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0119:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x56];                                      // 0x011A   (0x0056)  MISSED
	SDK_UNDEFINED(80,1683) /* TMap<uint64_t, UTextureRenderTarget2DArray*> */ __um(ManagedRenderTargets);          // 0x0170   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0x1143190] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0x1142ee0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0x1142dc0] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0x1142a50] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0070 (112 bytes) (0x0000F8 - 0x000168) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FString                                            EmitterName;                                                // 0x00F8   (0x0010)  
	FString                                            DIName;                                                     // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0118   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0028 (40 bytes) (0x0000D8 - 0x000100) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         NumCells;                                                   // 0x00D8   (0x000C)  
	float                                              CellSize;                                                   // 0x00E4   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E8   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x00EC   (0x0004)  
	FVector                                            WorldBBoxSize;                                              // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (128 bytes) (0x000100 - 0x000180) align 8 pad: 0x0000
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0108   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0128   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0129:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x56];                                      // 0x012A   (0x0056)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0x11432c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0x1143010] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0x1142dc0] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0x1142bc0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0078 (120 bytes) (0x0000D8 - 0x000150) align 8 pad: 0x0000
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00D8   (0x0008)  
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E0   (0x0020)  
	SDK_UNDEFINED(80,1684) /* TMap<uint64_t, UTextureRenderTarget2D*> */ __um(ManagedRenderTargets);               // 0x0100   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      SourceLandscape;                                            // 0x0038   (0x0008)  
	ENDILandscape_SourceMode                           SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<class UPhysicalMaterial*>                   PhysicalMaterials;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
public:
	class UNiagaraMeshRendererProperties*              MeshRenderer;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (8 bytes) (0x000100 - 0x000108) align 8 pad: 0x0000
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (16 bytes) (0x0000D8 - 0x0000E8) align 8 pad: 0x0000
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	FString                                            EmitterName;                                                // 0x00D8   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (48 bytes) (0x000038 - 0x000068) align 8 pad: 0x0000
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x00D0 (208 bytes) (0x0000D8 - 0x0001A8) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00D8   (0x0008)  
	ENiagaraMipMapGeneration                           MipMapGeneration;                                           // 0x00E0   (0x0001)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E1   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00E2:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E2:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00E3   (0x0005)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0108   (0x0050)  MISSED
	SDK_UNDEFINED(80,1685) /* TMap<uint64_t, UTextureRenderTarget2D*> */ __um(ManagedRenderTargets);               // 0x0158   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (128 bytes) (0x0000D8 - 0x000158) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00D8   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E4   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00E5:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E5:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	SDK_UNDEFINED(80,1686) /* TMap<uint64_t, UTextureRenderTarget2DArray*> */ __um(ManagedRenderTargets);          // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0078 (120 bytes) (0x0000D8 - 0x000150) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            Size;                                                       // 0x00D8   (0x0004)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00DC   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00DD:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00DD:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00DE   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E0   (0x0020)  
	SDK_UNDEFINED(80,1687) /* TMap<uint64_t, UTextureRenderTargetCube*> */ __um(ManagedRenderTargets);             // 0x0100   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0080 (128 bytes) (0x0000D8 - 0x000158) align 8 pad: 0x0000
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00D8   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x00E4   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00E5:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E5:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	SDK_UNDEFINED(80,1688) /* TMap<uint64_t, UTextureRenderTargetVolume*> */ __um(ManagedRenderTargets);           // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0000 (0 bytes) (0x000038 - 0x000038) align 8 pad: 0x0000
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0090 (144 bytes) (0x000038 - 0x0000C8) align 8 pad: 0x0000
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class AActor*                                      Source;                                                     // 0x0040   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0048   (0x0020)  
	class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0068   (0x0008)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x0078   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x0090   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00A0   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00B0   (0x0008)  
	bool                                               bExcludeBone : 1;                                           // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            UvSetIndex;                                                 // 0x00BC   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 8 pad: 0x0000
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      Source;                                                     // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       SplineUserParameter;                                        // 0x0040   (0x0020)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000088) align 8 pad: 0x0000
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 DefaultMesh;                                                // 0x0040   (0x0008)  
	class AActor*                                      Source;                                                     // 0x0048   (0x0008)  
	class UStaticMeshComponent*                        SourceComponent;                                            // 0x0050   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0058   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	TArray<FName>                                      FilteredSockets;                                            // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (256 bytes) (0x000070 - 0x000170) align 8 pad: 0x0000
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (512 bytes) (0x000070 - 0x000270) align 8 pad: 0x0000
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (384 bytes) (0x000070 - 0x0001F0) align 8 pad: 0x0000
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	class UVectorField*                                Field;                                                      // 0x0038   (0x0008)  
	bool                                               bTileX;                                                     // 0x0040   (0x0001)  
	bool                                               bTileY;                                                     // 0x0041   (0x0001)  
	bool                                               bTileZ;                                                     // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class UVolumeTexture*                              Texture;                                                    // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraDebugHUDVariable
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraDebugHudTextOptions
{ 
	ENiagaraDebugHudFont                               Font;                                                       // 0x0000   (0x0004)  
	ENiagaraDebugHudHAlign                             HorizontalAlignment;                                        // 0x0004   (0x0001)  
	ENiagaraDebugHudVAlign                             VerticalAlignment;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector2D                                          ScreenOffset;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 pad: 0x0000
struct FNiagaraDebugHUDSettingsData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	bool                                               bValidateSystemSimulationDataBuffers;                       // 0x0001   (0x0001)  
	bool                                               bValidateParticleDataBuffers;                               // 0x0002   (0x0001)  
	bool                                               bOverviewEnabled;                                           // 0x0003   (0x0001)  
	ENiagaraDebugHudFont                               OverviewFont;                                               // 0x0004   (0x0004)  
	FVector2D                                          OverviewLocation;                                           // 0x0008   (0x0008)  
	FString                                            ActorFilter;                                                // 0x0010   (0x0010)  
	bool                                               bComponentFilterEnabled;                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FString                                            ComponentFilter;                                            // 0x0028   (0x0010)  
	bool                                               bSystemFilterEnabled;                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            SystemFilter;                                               // 0x0040   (0x0010)  
	bool                                               bEmitterFilterEnabled;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            EmitterFilter;                                              // 0x0058   (0x0010)  
	bool                                               bActorFilterEnabled;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	ENiagaraDebugHudVerbosity                          SystemDebugVerbosity;                                       // 0x006C   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemEmitterVerbosity;                                     // 0x0070   (0x0004)  
	bool                                               bSystemShowBounds;                                          // 0x0074   (0x0001)  
	bool                                               bSystemShowActiveOnlyInWorld;                               // 0x0075   (0x0001)  
	bool                                               bShowSystemVariables;                                       // 0x0076   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0077   (0x0001)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   SystemVariables;                                            // 0x0078   (0x0010)  
	FNiagaraDebugHudTextOptions                        SystemTextOptions;                                          // 0x0088   (0x0010)  
	bool                                               bShowParticleVariables;                                     // 0x0098   (0x0001)  
	bool                                               bEnableGpuParticleReadback;                                 // 0x0099   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   ParticlesVariables;                                         // 0x00A0   (0x0010)  
	FNiagaraDebugHudTextOptions                        ParticleTextOptions;                                        // 0x00B0   (0x0010)  
	bool                                               bShowParticlesVariablesWithSystem;                          // 0x00C0   (0x0001)  
	bool                                               bUseMaxParticlesToDisplay;                                  // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x00C2   (0x0002)  MISSED
	int32_t                                            MaxParticlesToDisplay;                                      // 0x00C4   (0x0004)  
	ENiagaraDebugPlaybackMode                          PlaybackMode;                                               // 0x00C8   (0x0001)  
	bool                                               bPlaybackRateEnabled;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x00CA   (0x0002)  MISSED
	float                                              PlaybackRate;                                               // 0x00CC   (0x0004)  
	bool                                               bLoopTimeEnabled;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              LoopTime;                                                   // 0x00D4   (0x0004)  
	bool                                               bShowGlobalBudgetInfo;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData09_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000128) align 8 pad: 0x0000
class UNiagaraDebugHUDSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0028   (0x0020)  MISSED
	FNiagaraDebugHUDSettingsData                       Data;                                                       // 0x0048   (0x00E0)  
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0030:3 (0x0001)  
	bool                                               bCullByGlobalBudget : 1;                                    // 0x0030:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	int32_t                                            MaxInstances;                                               // 0x0038   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x003C   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0040   (0x0004)  
	float                                              MaxGlobalBudgetUsage;                                       // 0x0044   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraPerfBaselineStats
{ 
	float                                              PerInstanceAvg_GT;                                          // 0x0000   (0x0004)  
	float                                              PerInstanceAvg_RT;                                          // 0x0004   (0x0004)  
	float                                              PerInstanceMax_GT;                                          // 0x0008   (0x0004)  
	float                                              PerInstanceMax_RT;                                          // 0x000C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000098) align 8 pad: 0x0000
class UNiagaraEffectType : public UObject
{ 
public:
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x0028   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x002C   (0x0004)  
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0030   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0038   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0048   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UNiagaraBaselineController*                  PerformanceBaselineController;                              // 0x0070   (0x0008)  
	FNiagaraPerfBaselineStats                          PerfBaselineStats;                                          // 0x0078   (0x0010)  
	FGuid                                              PerfBaselineVersion;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 pad: 0x0000
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)  
	FName                                              SourceEmitter;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ENiagaraDataSetType                                Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)  
	uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0040)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraEmitterScriptProperties
{ 
	class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x0008)  
	bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0278 (632 bytes) (0x000028 - 0x0002A0) align 8 pad: 0x0000
class UNiagaraEmitter : public UObject
{ 
public:
	bool                                               bLocalSpace;                                                // 0x0028   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x002C   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x0034   (0x0004)  
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x0038   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0060   (0x0028)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FBox                                               FixedBounds;                                                // 0x008C   (0x001C)  
	int32_t                                            MinDetailLevel;                                             // 0x00A8   (0x0004)  
	int32_t                                            MaxDetailLevel;                                             // 0x00AC   (0x0004)  
	FNiagaraDetailsLevelScaleOverrides                 GlobalSpawnCountScaleOverrides;                             // 0x00B0   (0x0014)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FNiagaraPlatformSet                                Platforms;                                                  // 0x00C8   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00F8   (0x0010)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0108:0 (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0108:1 (0x0001)  
	bool                                               bUseMinDetailLevel : 1;                                     // 0x0108:2 (0x0001)  
	bool                                               bUseMaxDetailLevel : 1;                                     // 0x0108:3 (0x0001)  
	bool                                               bOverrideGlobalSpawnCountScale : 1;                         // 0x0108:4 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0108:5 (0x0001)  
	bool                                               bCombineEventSpawn : 1;                                     // 0x0108:6 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              MaxDeltaTimePerTick;                                        // 0x010C   (0x0004)  
	uint32_t                                           DefaultShaderStageIndex;                                    // 0x0110   (0x0004)  
	uint32_t                                           MaxUpdateIterations;                                        // 0x0114   (0x0004)  
	SDK_UNDEFINED(80,1689) /* TSet<uint32_t> */        __um(SpawnStages);                                          // 0x0118   (0x0050)  
	bool                                               bSimulationStagesEnabled : 1;                               // 0x0168:0 (0x0001)  
	bool                                               bDeprecatedShaderStagesEnabled : 1;                         // 0x0168:1 (0x0001)  
	bool                                               bLimitDeltaTime : 1;                                        // 0x0168:2 (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0170   (0x0010)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0180   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0190   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x01A0   (0x0010)  
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x01B0   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData06_7[0xD8];                                      // 0x01C8   (0x00D8)  MISSED
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x114bcd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x114b9f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0x114b4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0x114b610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	// void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture); // [0x114b4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0x114b3c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0x114ae10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0x114acf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0x114abd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0x114a800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02B8 (696 bytes) (0x000078 - 0x000330) align 8 pad: 0x0000
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x0078:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x0078:1 (0x0001)  
	bool                                               bAlphaScalesBrightness : 1;                                 // 0x0078:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x007C   (0x0004)  
	float                                              DefaultExponent;                                            // 0x0080   (0x0004)  
	FVector                                            ColorAdd;                                                   // 0x0084   (0x000C)  
	int32_t                                            RendererVisibility;                                         // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x0098   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0148   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0250   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x02A8   (0x0058)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0300   (0x0030)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraMeshRendererMeshProperties
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	FVector                                            Scale;                                                      // 0x0008   (0x000C)  
	FVector                                            PivotOffset;                                                // 0x0014   (0x000C)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraMeshMaterialOverride
{ 
	class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)  
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0820 (2080 bytes) (0x000078 - 0x000898) align 8 pad: 0x0000
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraMeshRendererMeshProperties>         Meshes;                                                     // 0x0078   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0088   (0x0001)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	bool                                               bOverrideMaterials : 1;                                     // 0x008C:0 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x008C:1 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x008C:2 (0x0001)  
	bool                                               bSubImageBlend : 1;                                         // 0x008C:3 (0x0001)  
	bool                                               bEnableFrustumCulling : 1;                                  // 0x008C:4 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x008C:5 (0x0001)  
	bool                                               bEnableMeshFlipbook : 1;                                    // 0x008C:6 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0090   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x00A0   (0x0008)  
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	bool                                               bLockedAxisEnable : 1;                                      // 0x00AC:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x00B0   (0x000C)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00C0   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00C4   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0128   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0180   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0230   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0288   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0338   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0390   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x03E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0440   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0498   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x04F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0548   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x05A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshIndexBinding;                                           // 0x05F8   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0650   (0x0010)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0660   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevScaleBinding;                                           // 0x06B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevMeshOrientationBinding;                                 // 0x0710   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0768   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x07C0   (0x0058)  
	unsigned char                                      UnknownData06_6[0x68];                                      // 0x0818   (0x0068)  MISSED
	class UStaticMesh*                                 ParticleMesh;                                               // 0x0880   (0x0008)  
	FVector                                            PivotOffset;                                                // 0x0888   (0x000C)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0894   (0x0001)  
	unsigned char                                      UnknownData07_7[0x3];                                       // 0x0895   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000E0) align 8 pad: 0x0000
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	class UNiagaraParameterCollection*                 Collection;                                                 // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0078)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x114b900] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x114b810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x114b730] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x114b2d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x114b1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x114b100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x114b010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x114af30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0x114ab10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x114aa50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x114a990] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x114a8d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0x114a750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0x114a6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x114a5e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0x114a530] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)  
	class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0040   (0x0008)  
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0048   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraParameterDefinitionsBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000068) align 8 pad: 0x0000
class UNiagaraBaselineController : public UObject
{ 
public:
	float                                              TestDuration;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0030   (0x0008)  
	class ANiagaraPerfBaselineActor*                   Owner;                                                      // 0x0038   (0x0008)  
	SDK_UNDEFINED(40,1690) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(System);                                     // 0x0040   (0x0028)  


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                       // [0x11501a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                       // [0x1150110] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0x1150080] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                      // [0x1150060] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// class UNiagaraSystem* GetSystem();                                                                                       // [0xbbc5f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (24 bytes) (0x000068 - 0x000080) align 8 pad: 0x0000
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
public:
	int32_t                                            NumInstances;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UNiagaraComponent*>                   SpawnedComponents;                                          // 0x0070   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (16 bytes) (0x000220 - 0x000230) align 8 pad: 0x0000
class ANiagaraPerfBaselineActor : public AActor
{ 
public:
	class UNiagaraBaselineController*                  Controller;                                                 // 0x0220   (0x0008)  
	class UTextRenderComponent*                        Label;                                                      // 0x0228   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0028   (0x0010)  
	class UNiagaraSystem*                              System;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0 bytes) (0x000220 - 0x000220) align 8 pad: 0x0000
class ANiagaraPreviewBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x24710f0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x24710f0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraPreviewAxis : public UObject
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0x1150030] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0x114fde0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0028   (0x0008)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0038   (0x0004)  
	int32_t                                            Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (8 bytes) (0x000038 - 0x000040) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0038   (0x0004)  
	float                                              Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0010 (16 bytes) (0x000038 - 0x000048) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0038   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0018 (24 bytes) (0x000038 - 0x000050) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0038   (0x000C)  
	FVector                                            Max;                                                        // 0x0044   (0x000C)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0028 (40 bytes) (0x000038 - 0x000060) align 16 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           Min;                                                        // 0x0040   (0x0010)  
	FVector4                                           Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (32 bytes) (0x000038 - 0x000058) align 8 pad: 0x0000
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0038   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (80 bytes) (0x000220 - 0x000270) align 8 pad: 0x0000
class ANiagaraPreviewGrid : public AActor
{ 
public:
	class UNiagaraSystem*                              System;                                                     // 0x0220   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0229   (0x0007)  MISSED
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x0230   (0x0008)  
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x0238   (0x0008)  
	class UClass*                                      PreviewClass;                                               // 0x0240   (0x0008)  
	float                                              SpacingX;                                                   // 0x0248   (0x0004)  
	float                                              SpacingY;                                                   // 0x024C   (0x0004)  
	int32_t                                            NumX;                                                       // 0x0250   (0x0004)  
	int32_t                                            NumY;                                                       // 0x0254   (0x0004)  
	TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0268   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0x11501d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x114ff80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0x114ff60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0x114fd50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0000   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0004   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0018   (0x0008)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0020   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 pad: 0x0000
struct FNiagaraRibbonShapeCustomVertex
{ 
	FVector2D                                          position;                                                   // 0x0000   (0x0008)  
	FVector2D                                          Normal;                                                     // 0x0008   (0x0008)  
	float                                              TextureV;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x07E8 (2024 bytes) (0x000078 - 0x000860) align 8 pad: 0x0000
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0078   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0080   (0x0020)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00A4   (0x0024)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x00C8   (0x0024)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x00EC   (0x0001)  
	ENiagaraRibbonShapeMode                            Shape;                                                      // 0x00ED   (0x0001)  
	bool                                               bEnableAccurateGeometry;                                    // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00EF   (0x0001)  MISSED
	int32_t                                            WidthSegmentationCount;                                     // 0x00F0   (0x0004)  
	int32_t                                            MultiPlaneCount;                                            // 0x00F4   (0x0004)  
	int32_t                                            TubeSubdivisions;                                           // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	TArray<FNiagaraRibbonShapeCustomVertex>            CustomVertices;                                             // 0x0100   (0x0010)  
	float                                              CurveTension;                                               // 0x0110   (0x0004)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x0114   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0115   (0x0003)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0118   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x011C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x011D   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x0120   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x0124   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0125   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0128   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0180   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0230   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0288   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x02E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x0338   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0390   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x03E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0440   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0498   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x04F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0548   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x05A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonUVDistance;                                           // 0x05F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x0650   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x06A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0700   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x0758   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x07B0   (0x0010)  
	unsigned char                                      UnknownData06_7[0xA0];                                      // 0x07C0   (0x00A0)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 pad: 0x0000
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (32 bytes) (0x000078 - 0x000098) align 8 pad: 0x0000
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0078   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x007C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0080   (0x0010)  
	bool                                               bInitialized : 1;                                           // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 pad: 0x0000
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:1 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
	FGuid                                              ScriptVersionID;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraCompilerTag
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FString                                            StringValue;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)  
	bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FName                                              Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              OwnerName;                                                  // 0x0008   (0x0008)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x0008)  
	FName                                              FriendlyName;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 pad: 0x0000
struct FNiagaraVMExecutableData
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	TArray<char>                                       OptimizedByteCode;                                          // 0x0010   (0x0010)  
	int32_t                                            NumTempRegisters;                                           // 0x0020   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x0024   (0x0004)  
	TArray<FNiagaraCompilerTag>                        CompileTags;                                                // 0x0028   (0x0010)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0038   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0048   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x0060   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0080   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x0090   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x00A0   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00B0   (0x0010)  
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DIParamInfo;                                                // 0x00C0   (0x0010)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x00D8   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x00E8:0 (0x0001)  
	bool                                               bNeedsGPUContextInit : 1;                                   // 0x00E8:1 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 pad: 0x0000
struct FNiagaraScriptDataInterfaceInfo
{ 
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0030   (0x0008)  
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x02B8 (696 bytes) (0x000028 - 0x0002E0) align 8 pad: 0x0000
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	ENiagaraScriptUsage                                Usage;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGuid                                              UsageId;                                                    // 0x002C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0040   (0x0078)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00B8   (0x0098)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0150   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0160   (0x0058)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01B8   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01C8   (0x00F0)  
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x02B8   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0xbbc500] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0090 (144 bytes) (0x000038 - 0x0000C8) align 8 pad: 0x0000
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0038   (0x0018)  
	TArray<FText>                                      QualityLevels;                                              // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,1691) /* TMap<FString, FText> */  __um(ComponentRendererWarningsPerClass);                    // 0x0060   (0x0050)  
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x00B0   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	ENiagaraDefaultRendererMotionVectorSetting         DefaultRendererMotionVectorSetting;                         // 0x00B4   (0x0004)  
	TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>         NDISkelMesh_GpuMaxInfluences;                               // 0x00B8   (0x0001)  
	TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;                       // 0x00B9   (0x0001)  
	TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;               // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00BB   (0x0005)  MISSED
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                       // 0x00C0   (0x0008)  
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	class UNiagaraScript*                              Script;                                                     // 0x0028   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0030   (0x0008)  
	bool                                               bEnabled : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0030 (48 bytes) (0x000040 - 0x000070) align 8 pad: 0x0000
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	ENiagaraIterationSource                            IterationSource;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x0044   (0x0004)  
	bool                                               bSpawnOnly : 1;                                             // 0x0048:0 (0x0001)  
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x0048:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0050   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0A38 (2616 bytes) (0x000078 - 0x000AB0) align 8 pad: 0x0000
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0078   (0x0008)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0088   (0x0020)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x00A8   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x00AC   (0x0008)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x00B8   (0x0008)  
	bool                                               bSubImageBlend : 1;                                         // 0x00C0:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x00C0:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00C0:2 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x00C0:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              MinFacingCameraBlendDistance;                               // 0x00C4   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x00C8   (0x0004)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00CC:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00D0   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00D4   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0138   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0190   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0240   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x0298   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x02F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0348   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x03F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0450   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x04A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0500   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0558   (0x0058)  
	FNiagaraVariableAttributeBinding                   PivotOffsetBinding;                                         // 0x05B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0608   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0660   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x06B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0710   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0768   (0x0010)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0778   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x07D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteRotationBinding;                                  // 0x0828   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteSizeBinding;                                      // 0x0880   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteFacingBinding;                                    // 0x08D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteAlignmentBinding;                                 // 0x0930   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0988   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevPivotOffsetBinding;                                     // 0x09E0   (0x0058)  
	unsigned char                                      UnknownData06_7[0x78];                                      // 0x0A38   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (8 bytes) (0x000048 - 0x000050) align 8 pad: 0x0000
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0048:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0048:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0048:2 (0x0001)  
	bool                                               bOverrideTimeSinceRendererSettings : 1;                     // 0x0048:3 (0x0001)  
	bool                                               bOverrideGlobalBudgetCullingSettings : 1;                   // 0x0048:4 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UNiagaraEmitter*                             Instance;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0218 (536 bytes) (0x000000 - 0x000218) align 8 pad: 0x0000
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0078)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0078   (0x0040)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00B8   (0x0040)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x00F8   (0x0040)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0138   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0158   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x0178   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x0198   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01A8   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01C8   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x01E8   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0208   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0468 (1128 bytes) (0x000030 - 0x000498) align 8 pad: 0x0000
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bDumpDebugSystemInfo;                                       // 0x0030   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0032   (0x0001)  MISSED
	bool                                               bRequireCurrentFrameData;                                   // 0x0033   (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0038   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0048   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0058   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x0068   (0x0010)  
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x0078   (0x0010)  
	class UNiagaraScript*                              SystemSpawnScript;                                          // 0x0088   (0x0008)  
	class UNiagaraScript*                              SystemUpdateScript;                                         // 0x0090   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0098   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00A8   (0x0218)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x02C0   (0x00C8)  
	FBox                                               FixedBounds;                                                // 0x0388   (0x001C)  
	bool                                               bAutoDeactivate;                                            // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x03A5   (0x0003)  MISSED
	float                                              WarmupTime;                                                 // 0x03A8   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x03AC   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x03B0   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x03B4   (0x0001)  
	bool                                               bNeedsGPUContextInitForDataInterfaces;                      // 0x03B5   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x03B6   (0x0002)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData06_7[0xD0];                                      // 0x03C8   (0x00D0)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000040) align 8 pad: 0x0000
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0090 (144 bytes) (0x000040 - 0x0000D0) align 8 pad: 0x0000
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0280 (640 bytes) (0x000040 - 0x0002C0) align 8 pad: 0x0000
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x00A0)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0220   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000E0) align 8 pad: 0x0000
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0090 (144 bytes) (0x000040 - 0x0000D0) align 8 pad: 0x0000
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000028) align 8 pad: 0x0000
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0 bytes) (0x000020 - 0x000020) align 8 pad: 0x0000
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0288 (648 bytes) (0x000040 - 0x0002C8) align 8 pad: 0x0000
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels[4];                                          // 0x0040   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraScalabilityState
{ 
	float                                              Significance;                                               // 0x0000   (0x0004)  
	bool                                               bCulled : 1;                                                // 0x0004:0 (0x0001)  
	bool                                               bPreviousCulled : 1;                                        // 0x0004:1 (0x0001)  
	bool                                               bCulledByDistance : 1;                                      // 0x0004:2 (0x0001)  
	bool                                               bCulledByInstanceCount : 1;                                 // 0x0004:3 (0x0001)  
	bool                                               bCulledByVisibility : 1;                                    // 0x0004:4 (0x0001)  
	bool                                               bCulledByGlobalBudget : 1;                                  // 0x0004:5 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FNiagaraCompileDependency
{ 
	FString                                            LinkerErrorMessage;                                         // 0x0000   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0010   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0020   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0030   (0x0010)  
	FNiagaraVariableBase                               DependentVariable;                                          // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FNiagaraSystemUpdateContext
{ 
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0028   (0x0008)  
	bool                                               bRequiresContext : 1;                                       // 0x0030:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x0030:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x0030:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x0030:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x0030:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x0030:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x0030:6 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x0030:7 (0x0001)  
	bool                                               bIsCompileTagGenerator : 1;                                 // 0x0031:0 (0x0001)  
	bool                                               bHidden : 1;                                                // 0x0031:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)  
	int32_t                                            ContextStageMinIndex;                                       // 0x0038   (0x0004)  
	int32_t                                            ContextStageMaxIndex;                                       // 0x003C   (0x0004)  
	SDK_UNDEFINED(80,1692) /* TMap<FName, FName> */    __um(FunctionSpecifiers);                                   // 0x0040   (0x0050)  
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNCPoolElement
{ 
	class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraEmitterNameSettingsRef
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	FString                                            EmitterName;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FBasicParticleData
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	float                                              Size;                                                       // 0x000C   (0x0004)  
	FVector                                            Velocity;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector                                            BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FNiagaraSimpleClientInfo
{ 
	TArray<FString>                                    Systems;                                                    // 0x0000   (0x0010)  
	TArray<FString>                                    Actors;                                                     // 0x0010   (0x0010)  
	TArray<FString>                                    Components;                                                 // 0x0020   (0x0010)  
	TArray<FString>                                    Emitters;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraOutlinerCaptureSettings
{ 
	bool                                               bTriggerCapture;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           CaptureDelayFrames;                                         // 0x0004   (0x0004)  
	bool                                               bGatherPerfData;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraRequestSimpleClientInfoMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FNiagaraOutlinerData
{ 
	SDK_UNDEFINED(80,1693) /* TMap<FString, FNiagaraOutlinerWorldData> */ __um(WorldData);                         // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 pad: 0x0000
struct FNiagaraDebuggerOutlinerUpdate
{ 
	FNiagaraOutlinerData                               OutlinerData;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraOutlinerTimingData
{ 
	float                                              GameThread;                                                 // 0x0000   (0x0004)  
	float                                              RenderThread;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 pad: 0x0000
struct FNiagaraOutlinerWorldData
{ 
	SDK_UNDEFINED(80,1694) /* TMap<FString, FNiagaraOutlinerSystemData> */ __um(Systems);                          // 0x0000   (0x0050)  
	bool                                               bHasBegunPlay;                                              // 0x0050   (0x0001)  
	char                                               WorldType;                                                  // 0x0051   (0x0001)  
	char                                               NetMode;                                                    // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0053   (0x0001)  MISSED
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0054   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FNiagaraOutlinerEmitterInstanceData
{ 
	FString                                            EmitterName;                                                // 0x0000   (0x0010)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	ENiagaraExecutionState                             ExecState;                                                  // 0x0014   (0x0004)  
	int32_t                                            NumParticles;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 pad: 0x0000
struct FNiagaraOutlinerSystemInstanceData
{ 
	FString                                            ComponentName;                                              // 0x0000   (0x0010)  
	TArray<FNiagaraOutlinerEmitterInstanceData>        Emitters;                                                   // 0x0010   (0x0010)  
	ENiagaraExecutionState                             ActualExecutionState;                                       // 0x0020   (0x0004)  
	ENiagaraExecutionState                             RequestedExecutionState;                                    // 0x0024   (0x0004)  
	FNiagaraScalabilityState                           ScalabilityState;                                           // 0x0028   (0x0008)  
	bool                                               bPendingKill : 1;                                           // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	ENCPoolMethod                                      PoolMethod;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FNiagaraOutlinerTimingData                         AverageTime;                                                // 0x0038   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxTime;                                                    // 0x0040   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraOutlinerSystemData
{ 
	TArray<FNiagaraOutlinerSystemInstanceData>         SystemInstances;                                            // 0x0000   (0x0010)  
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0010   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x0018   (0x0008)  
	FNiagaraOutlinerTimingData                         AveragePerInstanceTime;                                     // 0x0020   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerInstanceTime;                                         // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraDebuggerExecuteConsoleCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	bool                                               bRequiresWorld;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FNiagaraDebuggerConnectionClosed
{ 
	FGuid                                              SessionID;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FNiagaraDebuggerAcceptConnection
{ 
	FGuid                                              SessionID;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FNiagaraDebuggerRequestConnection
{ 
	FGuid                                              SessionID;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0008)  
	float                                              Zoom;                                                       // 0x0008   (0x0004)  
	bool                                               bIsValid;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 pad: 0x0000
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x000C)  
	FVector                                            CollisionNormal;                                            // 0x000C   (0x000C)  
	FVector                                            CollisionVelocity;                                          // 0x0018   (0x000C)  
	int32_t                                            ParticleIndex;                                              // 0x0024   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x0028   (0x0004)  
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FParameterDefinitionsSubscription
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 pad: 0x0000
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 pad: 0x0000
struct FNiagaraScalabilityManager
{ 
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FVersionedNiagaraScriptData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x0008   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FText                                              Description;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (16 bytes) (0x000078 - 0x000088) align 8 pad: 0x0000
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 pad: 0x0000
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UObject*>                             RootObjects;                                                // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0018   (0x0068)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 pad: 0x0000
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 pad: 0x0000
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0040)  
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 pad: 0x0000
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            EditorSortPriority;                                         // 0x0034   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0040   (0x0018)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x0058   (0x0018)  
	SDK_UNDEFINED(80,1695) /* TMap<FName, FString> */  __um(PropertyMetaData);                                     // 0x0070   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x00C0   (0x0008)  
	FGuid                                              VariableGuid;                                               // 0x00C8   (0x0010)  
	bool                                               bIsStaticSwitch;                                            // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x00DC   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FNiagaraAssetVersion
{ 
	int32_t                                            MajorVersion;                                               // 0x0000   (0x0004)  
	int32_t                                            MinorVersion;                                               // 0x0004   (0x0004)  
	FGuid                                              VersionGuid;                                                // 0x0008   (0x0010)  
	bool                                               bIsVisibleInVersionSelector;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 pad: 0x0000
struct FNiagaraMatrix
{ 
	FVector4                                           Row0;                                                       // 0x0000   (0x0010)  
	FVector4                                           Row1;                                                       // 0x0010   (0x0010)  
	FVector4                                           Row2;                                                       // 0x0020   (0x0010)  
	FVector4                                           Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 pad: 0x0000
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 pad: 0x0000
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 pad: 0x0000
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 pad: 0x0000
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 pad: 0x0000
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FNiagaraWildcard
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraVariant
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

static_assert(sizeof(UNiagaraDataInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceRWBase) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(UMovieSceneNiagaraTrack) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(FNiagaraTypeDefinitionHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariableBase) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraVariable) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(UMovieSceneNiagaraParameterTrack) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UMovieSceneNiagaraBoolParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraColorParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraFloatParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraIntegerParameterTrack) == 0x00C8); // 200 bytes (0x0000C0 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraSystemSpawnSection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneNiagaraSystemTrack) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UMovieSceneNiagaraVectorParameterTrack) == 0x00D0); // 208 bytes (0x0000C0 - 0x0000D0)
static_assert(sizeof(ANiagaraActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(FNiagaraBakerTextureSource) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraBakerTextureSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNiagaraBakerSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(FNiagaraVariableWithOffset) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FNiagaraParameterStore) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraUserRedirectionParameterStore) == 0x00C8); // 200 bytes (0x000078 - 0x0000C8)
static_assert(sizeof(FNiagaraMaterialOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNiagaraComponent) == 0x0600); // 1536 bytes (0x000450 - 0x000600)
static_assert(sizeof(UNiagaraComponentPool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraDeviceProfileStateEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetCVarCondition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraPlatformSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNiagaraRendererProperties) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FNiagaraVariableAttributeBinding) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraTypeDefinition) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraComponentPropertyBinding) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(UNiagaraComponentRendererProperties) == 0x01B0); // 432 bytes (0x000078 - 0x0001B0)
static_assert(sizeof(UNiagaraComponentSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UNiagaraConvertInPlaceUtilityBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterface2DArrayTexture) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceArray) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat2) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat3) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat4) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayColor) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayQuat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceArrayInt32) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayBool) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceAudioSubmix) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceAudioOscilloscope) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayer) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceAudioSpectrum) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceCamera) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceCollisionQuery) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceCubeTexture) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0x00F0); // 240 bytes (0x000070 - 0x0000F0)
static_assert(sizeof(UNiagaraDataInterfaceDebugDraw) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraParticleCallbackHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraUserParameterBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraDataInterfaceExport) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceGBuffer) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceGrid2D) == 0x00F8); // 248 bytes (0x0000D8 - 0x0000F8)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollection) == 0x01C0); // 448 bytes (0x0000F8 - 0x0001C0)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x0168); // 360 bytes (0x0000F8 - 0x000168)
static_assert(sizeof(UNiagaraDataInterfaceGrid3D) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollection) == 0x0180); // 384 bytes (0x000100 - 0x000180)
static_assert(sizeof(UNiagaraDataInterfaceIntRenderTarget2D) == 0x0150); // 336 bytes (0x0000D8 - 0x000150)
static_assert(sizeof(UNiagaraDataInterfaceLandscape) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceMeshRendererInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceNeighborGrid3D) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UNiagaraDataInterfaceOcclusion) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceParticleRead) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePlatformSet) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2D) == 0x01A8); // 424 bytes (0x0000D8 - 0x0001A8)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetCube) == 0x0150); // 336 bytes (0x0000D8 - 0x000150)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetVolume) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceSimpleCounter) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceSkeletalMesh) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UNiagaraDataInterfaceTexture) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVector2DCurve) == 0x0170); // 368 bytes (0x000070 - 0x000170)
static_assert(sizeof(UNiagaraDataInterfaceVector4Curve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x01F0); // 496 bytes (0x000070 - 0x0001F0)
static_assert(sizeof(UNiagaraDataInterfaceVectorField) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVolumeTexture) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FNiagaraDebugHUDVariable) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebugHudTextOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraDebugHUDSettingsData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(UNiagaraDebugHUDSettings) == 0x0128); // 296 bytes (0x000028 - 0x000128)
static_assert(sizeof(UNiagaraEditorDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEditorParametersAdapterBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerDistance) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerAge) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraSystemScalabilitySettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraSystemScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterScalabilitySettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraEmitterScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPerfBaselineStats) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraEffectType) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraTypeLayoutInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNiagaraVariableLayoutInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNiagaraDataSetID) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraDataSetCompiledData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDetailsLevelScaleOverrides) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNiagaraEmitterScalabilityOverride) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNiagaraEmitterScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEventScriptProperties) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UNiagaraEmitter) == 0x02A0); // 672 bytes (0x000028 - 0x0002A0)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNiagaraFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraLightRendererProperties) == 0x0330); // 816 bytes (0x000078 - 0x000330)
static_assert(sizeof(FNiagaraMeshRendererMeshProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraMeshMaterialOverride) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraMaterialAttributeBinding) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x0898); // 2200 bytes (0x000078 - 0x000898)
static_assert(sizeof(UNiagaraMessageDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraParameterCollectionInstance) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UNiagaraParameterCollection) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNiagaraParameterDefinitionsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraBaselineController) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UNiagaraBaselineController_Basic) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(ANiagaraPerfBaselineActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UNiagaraPrecompileContainer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ANiagaraPreviewBase) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UNiagaraPreviewAxis) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamInt32) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamFloat) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector4) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(ANiagaraPreviewGrid) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(FNiagaraRibbonUVSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FNiagaraRibbonShapeCustomVertex) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x0860); // 2144 bytes (0x000078 - 0x000860)
static_assert(sizeof(FNiagaraScriptExecutionPaddingInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraScriptExecutionParameterStore) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(FNiagaraBoundParameter) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraVMExecutableDataId) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraCompilerTag) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraScriptDataInterfaceCompileInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVMFunctionSpecifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraDataSetProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraStatScope) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraVMExecutableData) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraScript) == 0x02E0); // 736 bytes (0x000028 - 0x0002E0)
static_assert(sizeof(UNiagaraScriptSourceBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UNiagaraSettings) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(UNiagaraSimulationStageBase) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FNiagaraVariableDataInterfaceBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraSimulationStageGeneric) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x0AB0); // 2736 bytes (0x000078 - 0x000AB0)
static_assert(sizeof(FNiagaraSystemScalabilityOverride) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FNiagaraSystemScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterHandle) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraParameterDataSetBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraParameterDataSetBindingCollection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraSystemCompiledData) == 0x0218); // 536 bytes (0x000000 - 0x000218)
static_assert(sizeof(UNiagaraSystem) == 0x0498); // 1176 bytes (0x000030 - 0x000498)
static_assert(sizeof(FMovieSceneNiagaraParameterSectionTemplate) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x02C0); // 704 bytes (0x000040 - 0x0002C0)
static_assert(sizeof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackImplementation) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x02C8); // 712 bytes (0x000040 - 0x0002C8)
static_assert(sizeof(FNiagaraScalabilityState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraCompileDependency) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraRandInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraScriptVariableBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraVariableInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraSystemUpdateContext) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraFunctionSignature) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNCPoolElement) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNCPool) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterNameSettingsRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBasicParticleData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMeshTriCoordinate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraSimpleClientInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraOutlinerCaptureSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraRequestSimpleClientInfoMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraOutlinerData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraDebuggerOutlinerUpdate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraOutlinerTimingData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraOutlinerWorldData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraOutlinerEmitterInstanceData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraOutlinerSystemInstanceData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraOutlinerSystemData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraDebuggerExecuteConsoleCommand) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebuggerConnectionClosed) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerAcceptConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerRequestConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraGraphViewSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FParameterDefinitionsSubscription) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetConflictEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraPlatformSetConflictInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraScalabilityManager) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FVersionedNiagaraScriptData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraModuleDependency) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraScriptInstanceParameterStore) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FNiagaraScriptHighlight) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraSystemCompileRequest) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEmitterCompiledScriptPair) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNiagaraEmitterCompiledData) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FNiagaraInputConditionMetadata) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraVariableMetaData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FNiagaraCompileHashVisitorDebugInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraSpawnInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraAssetVersion) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FNiagaraMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraParameterMap) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraNumeric) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraHalfVector4) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraHalfVector3) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FNiagaraHalfVector2) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraHalf) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FNiagaraBool) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraInt32) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraFloat) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraWildcard) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraVariant) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraWorldManagerTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 0x0090);
static_assert(offsetof(FNiagaraVariableBase, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 0x0008);
static_assert(offsetof(FNiagaraVariable, VarData) == 0x0010);
static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 0x00A0);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior) == 0x00E8);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior) == 0x00EC);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior) == 0x00F0);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode) == 0x00F4);
static_assert(offsetof(ANiagaraActor, NiagaraComponent) == 0x0220);
static_assert(offsetof(FNiagaraBakerTextureSource, SourceName) == 0x0000);
static_assert(offsetof(FNiagaraBakerTextureSettings, OutputName) == 0x0000);
static_assert(offsetof(FNiagaraBakerTextureSettings, SourceBinding) == 0x0008);
static_assert(offsetof(FNiagaraBakerTextureSettings, FrameSize) == 0x0014);
static_assert(offsetof(FNiagaraBakerTextureSettings, TextureSize) == 0x001C);
static_assert(offsetof(FNiagaraBakerTextureSettings, GeneratedTexture) == 0x0028);
static_assert(offsetof(UNiagaraBakerSettings, FramesPerDimension) == 0x0038);
static_assert(offsetof(UNiagaraBakerSettings, OutputTextures) == 0x0040);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportMode) == 0x0050);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportLocation) == 0x0054);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportRotation) == 0x00A8);
static_assert(offsetof(FNiagaraParameterStore, Owner) == 0x0008);
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 0x0020);
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 0x0030);
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 0x0040);
static_assert(offsetof(FNiagaraMaterialOverride, Material) == 0x0000);
static_assert(offsetof(FNiagaraMaterialOverride, EmitterRendererProperty) == 0x0010);
static_assert(offsetof(UNiagaraComponent, Asset) == 0x0450);
static_assert(offsetof(UNiagaraComponent, TickBehavior) == 0x0458);
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 0x0460);
static_assert(offsetof(UNiagaraComponent, EmitterMaterials) == 0x0560);
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 0x0590);
static_assert(offsetof(UNiagaraComponent, AutoAttachLocationRule) == 0x0598);
static_assert(offsetof(UNiagaraComponent, AutoAttachRotationRule) == 0x0599);
static_assert(offsetof(UNiagaraComponent, AutoAttachScaleRule) == 0x059A);
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0x0008);
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 0x0018);
static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 0x0028);
static_assert(offsetof(UNiagaraRendererProperties, MotionVectorSetting) == 0x005C);
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 0x0000);
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetVariable) == 0x0010);
static_assert(offsetof(FNiagaraVariableAttributeBinding, RootVariable) == 0x0030);
static_assert(offsetof(FNiagaraVariableAttributeBinding, BindingSourceMode) == 0x0050);
static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 0x0058);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 0x0060);
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 0x0070);
static_assert(offsetof(FNiagaraComponentPropertyBinding, WritableValue) == 0x00C8);
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 0x0078);
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 0x0088);
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibilityTagBinding) == 0x00E0);
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 0x0140);
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 0x0148);
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, QuatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceAudioSubmix, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 0x005C);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 0x0070);
static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationMode) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, OverrideBufferFormat) == 0x0118);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, SetResolutionMethod) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat) == 0x0128);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, RenderTargetUserParameter) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceMode) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, PhysicalMaterials) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterName) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat) == 0x00E1);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFormat) == 0x00DC);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, RenderTargetUserParameter) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFormat) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, Source) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SkinningMode) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 0x0078);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 0x0090);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 0x00A0);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 0x00B0);
static_assert(offsetof(UNiagaraDataInterfaceSpline, Source) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSpline, SplineUserParameter) == 0x0040);
static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, Source) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 0x0038);
static_assert(offsetof(FNiagaraDebugHUDVariable, Name) == 0x0008);
static_assert(offsetof(FNiagaraDebugHudTextOptions, Font) == 0x0000);
static_assert(offsetof(FNiagaraDebugHudTextOptions, HorizontalAlignment) == 0x0004);
static_assert(offsetof(FNiagaraDebugHudTextOptions, VerticalAlignment) == 0x0005);
static_assert(offsetof(FNiagaraDebugHudTextOptions, ScreenOffset) == 0x0008);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewFont) == 0x0004);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewLocation) == 0x0008);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ActorFilter) == 0x0010);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ComponentFilter) == 0x0028);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemFilter) == 0x0040);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, EmitterFilter) == 0x0058);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity) == 0x006C);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity) == 0x0070);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemVariables) == 0x0078);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemTextOptions) == 0x0088);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticlesVariables) == 0x00A0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleTextOptions) == 0x00B0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackMode) == 0x00C8);
static_assert(offsetof(UNiagaraDebugHUDSettings, Data) == 0x0048);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(UNiagaraEffectType, UpdateFrequency) == 0x0028);
static_assert(offsetof(UNiagaraEffectType, CullReaction) == 0x002C);
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 0x0030);
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 0x0038);
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 0x0048);
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 0x0058);
static_assert(offsetof(UNiagaraEffectType, PerformanceBaselineController) == 0x0070);
static_assert(offsetof(UNiagaraEffectType, PerfBaselineStats) == 0x0078);
static_assert(offsetof(UNiagaraEffectType, PerfBaselineVersion) == 0x0088);
static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0x0000);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 0x0008);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets) == 0x0000);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets) == 0x0020);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets) == 0x0030);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets) == 0x0040);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets) == 0x0050);
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 0x0010);
static_assert(offsetof(FNiagaraDataSetID, Name) == 0x0000);
static_assert(offsetof(FNiagaraDataSetID, Type) == 0x0008);
static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0x0000);
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 0x0010);
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 0x0020);
static_assert(offsetof(FNiagaraDataSetCompiledData, SimTarget) == 0x003C);
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 0x0004);
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 0x0010);
static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 0x0008);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 0x0018);
static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEventScriptProperties, ExecutionMode) == 0x0028);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 0x0034);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 0x0044);
static_assert(offsetof(UNiagaraEmitter, AllocationMode) == 0x0030);
static_assert(offsetof(UNiagaraEmitter, UpdateScriptProps) == 0x0038);
static_assert(offsetof(UNiagaraEmitter, SpawnScriptProps) == 0x0060);
static_assert(offsetof(UNiagaraEmitter, SimTarget) == 0x0088);
static_assert(offsetof(UNiagaraEmitter, FixedBounds) == 0x008C);
static_assert(offsetof(UNiagaraEmitter, GlobalSpawnCountScaleOverrides) == 0x00B0);
static_assert(offsetof(UNiagaraEmitter, Platforms) == 0x00C8);
static_assert(offsetof(UNiagaraEmitter, ScalabilityOverrides) == 0x00F8);
static_assert(offsetof(UNiagaraEmitter, UniqueEmitterName) == 0x0170);
static_assert(offsetof(UNiagaraEmitter, RendererProperties) == 0x0180);
static_assert(offsetof(UNiagaraEmitter, EventHandlerScriptProps) == 0x0190);
static_assert(offsetof(UNiagaraEmitter, SimulationStages) == 0x01A0);
static_assert(offsetof(UNiagaraEmitter, GPUComputeScript) == 0x01B0);
static_assert(offsetof(UNiagaraEmitter, SharedEventGeneratorIds) == 0x01B8);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 0x0084);
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 0x0098);
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 0x00F0);
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 0x0148);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 0x01A0);
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 0x01F8);
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 0x0250);
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibilityTagBinding) == 0x02A8);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Mesh) == 0x0000);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Scale) == 0x0008);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffset) == 0x0014);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace) == 0x0020);
static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0x0000);
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 0x0014);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 0x0020);
static_assert(offsetof(UNiagaraMeshRendererProperties, Meshes) == 0x0078);
static_assert(offsetof(UNiagaraMeshRendererProperties, SourceMode) == 0x0088);
static_assert(offsetof(UNiagaraMeshRendererProperties, SortMode) == 0x0089);
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 0x0090);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 0x00A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, FacingMode) == 0x00A8);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 0x00B0);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxisSpace) == 0x00BC);
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 0x00D0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 0x0128);
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 0x0180);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 0x01D8);
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 0x0230);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 0x0288);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 0x02E0);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 0x0338);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 0x0390);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 0x03E8);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 0x0440);
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 0x0498);
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 0x04F0);
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 0x0548);
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 0x05A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshIndexBinding) == 0x05F8);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialParameterBindings) == 0x0650);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevPositionBinding) == 0x0660);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevScaleBinding) == 0x06B8);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding) == 0x0710);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding) == 0x0768);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevVelocityBinding) == 0x07C0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ParticleMesh) == 0x0880);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffset) == 0x0888);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffsetSpace) == 0x0894);
static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 0x0048);
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 0x0050);
static_assert(offsetof(UNiagaraBaselineController, EffectType) == 0x0030);
static_assert(offsetof(UNiagaraBaselineController, Owner) == 0x0038);
static_assert(offsetof(UNiagaraBaselineController_Basic, SpawnedComponents) == 0x0070);
static_assert(offsetof(ANiagaraPerfBaselineActor, Controller) == 0x0220);
static_assert(offsetof(ANiagaraPerfBaselineActor, Label) == 0x0228);
static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 0x0028);
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 0x0028);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Max) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Max) == 0x0044);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Min) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Max) == 0x0050);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Max) == 0x0048);
static_assert(offsetof(ANiagaraPreviewGrid, System) == 0x0220);
static_assert(offsetof(ANiagaraPreviewGrid, ResetMode) == 0x0228);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisX) == 0x0230);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisY) == 0x0238);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewClass) == 0x0240);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewComponents) == 0x0258);
static_assert(offsetof(FNiagaraRibbonUVSettings, DistributionMode) == 0x0000);
static_assert(offsetof(FNiagaraRibbonUVSettings, LeadingEdgeMode) == 0x0004);
static_assert(offsetof(FNiagaraRibbonUVSettings, TrailingEdgeMode) == 0x0008);
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 0x0010);
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 0x0018);
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, position) == 0x0000);
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Normal) == 0x0008);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 0x0078);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 0x0080);
static_assert(offsetof(UNiagaraRibbonRendererProperties, FacingMode) == 0x00A0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 0x00A4);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 0x00C8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DrawDirection) == 0x00EC);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Shape) == 0x00ED);
static_assert(offsetof(UNiagaraRibbonRendererProperties, CustomVertices) == 0x0100);
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationMode) == 0x0114);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 0x0128);
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 0x0180);
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 0x01D8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 0x0230);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 0x0288);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 0x02E0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 0x0338);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 0x0390);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 0x03E8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 0x0440);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 0x0498);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 0x04F0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 0x0548);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 0x05A0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonUVDistance) == 0x05F8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 0x0650);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 0x06A8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 0x0700);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 0x0758);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialParameterBindings) == 0x07B0);
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddingInfo) == 0x0080);
static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageType) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageTypeID) == 0x0014);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptID) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptVersionID) == 0x0048);
static_assert(offsetof(FNiagaraCompilerTag, Variable) == 0x0000);
static_assert(offsetof(FNiagaraCompilerTag, StringValue) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 0x0010);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 0x0028);
static_assert(offsetof(FVMFunctionSpecifier, Key) == 0x0000);
static_assert(offsetof(FVMFunctionSpecifier, Value) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0x0000);
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 0x0010);
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 0x0028);
static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0x0000);
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 0x0010);
static_assert(offsetof(FNiagaraStatScope, FullName) == 0x0000);
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 0x0008);
static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableData, OptimizedByteCode) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableData, CompileTags) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 0x0048);
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 0x0058);
static_assert(offsetof(FNiagaraVMExecutableData, DataInterfaceInfo) == 0x0060);
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 0x0070);
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 0x0090);
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 0x00A0);
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 0x00B0);
static_assert(offsetof(FNiagaraVMExecutableData, DIParamInfo) == 0x00C0);
static_assert(offsetof(FNiagaraVMExecutableData, LastCompileStatus) == 0x00D0);
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 0x00D8);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 0x0008);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 0x0018);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 0x0028);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 0x0030);
static_assert(offsetof(UNiagaraScript, Usage) == 0x0028);
static_assert(offsetof(UNiagaraScript, UsageId) == 0x002C);
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 0x0040);
static_assert(offsetof(UNiagaraScript, ScriptExecutionParamStore) == 0x00B8);
static_assert(offsetof(UNiagaraScript, ScriptExecutionBoundParameters) == 0x0150);
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 0x0160);
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 0x01C8);
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 0x02B8);
static_assert(offsetof(UNiagaraScript, CachedDefaultDataInterfaces) == 0x02C8);
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 0x0038);
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 0x0050);
static_assert(offsetof(UNiagaraSettings, DefaultRenderTargetFormat) == 0x00B0);
static_assert(offsetof(UNiagaraSettings, DefaultGridFormat) == 0x00B1);
static_assert(offsetof(UNiagaraSettings, DefaultRendererMotionVectorSetting) == 0x00B4);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences) == 0x00B8);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat) == 0x00B9);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat) == 0x00BA);
static_assert(offsetof(UNiagaraSettings, DefaultEffectTypePtr) == 0x00C0);
static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 0x0028);
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 0x0030);
static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0x0000);
static_assert(offsetof(UNiagaraSimulationStageGeneric, IterationSource) == 0x0040);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 0x0050);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 0x0078);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SourceMode) == 0x0080);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 0x0088);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Alignment) == 0x00A8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, FacingMode) == 0x00A9);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 0x00AC);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortMode) == 0x00B4);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 0x00B8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 0x00E0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 0x0138);
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 0x0190);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 0x01E8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 0x0240);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 0x0298);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 0x02F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 0x0348);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 0x03A0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 0x03F8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 0x0450);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 0x04A8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 0x0500);
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 0x0558);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotOffsetBinding) == 0x05B0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 0x0608);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 0x0660);
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 0x06B8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 0x0710);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameterBindings) == 0x0768);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPositionBinding) == 0x0778);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevVelocityBinding) == 0x07D0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteRotationBinding) == 0x0828);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteSizeBinding) == 0x0880);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteFacingBinding) == 0x08D8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteAlignmentBinding) == 0x0930);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevCameraOffsetBinding) == 0x0988);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPivotOffsetBinding) == 0x09E0);
static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 0x0010);
static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0x001C);
static_assert(offsetof(FNiagaraEmitterHandle, Instance) == 0x0028);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0x0000);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0x0000);
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 0x0078);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 0x00B8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 0x00F8);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 0x0138);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 0x0158);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 0x0178);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 0x0198);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 0x01A8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 0x01C8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 0x01E8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 0x0208);
static_assert(offsetof(UNiagaraSystem, EffectType) == 0x0038);
static_assert(offsetof(UNiagaraSystem, ScalabilityOverrides) == 0x0048);
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 0x0058);
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 0x0068);
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 0x0078);
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 0x0088);
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 0x0090);
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 0x00A8);
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 0x02C0);
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 0x0388);
static_assert(offsetof(UNiagaraSystem, UserDINamesReadInSystemScripts) == 0x03B8);
static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 0x00E0);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 0x0180);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 0x0220);
static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame) == 0x0010);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame) == 0x0014);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior) == 0x0018);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior) == 0x001C);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode) == 0x0024);
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 0x0040);
static_assert(offsetof(FNiagaraCompileDependency, LinkerErrorMessage) == 0x0000);
static_assert(offsetof(FNiagaraCompileDependency, NodeGuid) == 0x0010);
static_assert(offsetof(FNiagaraCompileDependency, PinGuid) == 0x0020);
static_assert(offsetof(FNiagaraCompileDependency, StackGuids) == 0x0030);
static_assert(offsetof(FNiagaraCompileDependency, DependentVariable) == 0x0040);
static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 0x0020);
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 0x0038);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0x0000);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 0x0010);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 0x0020);
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 0x0030);
static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0x0000);
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 0x0008);
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 0x0018);
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 0x0028);
static_assert(offsetof(FNCPoolElement, Component) == 0x0000);
static_assert(offsetof(FNCPool, FreeElements) == 0x0000);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, SystemName) == 0x0000);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, EmitterName) == 0x0008);
static_assert(offsetof(FBasicParticleData, position) == 0x0000);
static_assert(offsetof(FBasicParticleData, Velocity) == 0x0010);
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 0x0004);
static_assert(offsetof(FNiagaraSimpleClientInfo, Systems) == 0x0000);
static_assert(offsetof(FNiagaraSimpleClientInfo, Actors) == 0x0010);
static_assert(offsetof(FNiagaraSimpleClientInfo, Components) == 0x0020);
static_assert(offsetof(FNiagaraSimpleClientInfo, Emitters) == 0x0030);
static_assert(offsetof(FNiagaraDebuggerOutlinerUpdate, OutlinerData) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerWorldData, AveragePerFrameTime) == 0x0054);
static_assert(offsetof(FNiagaraOutlinerWorldData, MaxPerFrameTime) == 0x005C);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, EmitterName) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, SimTarget) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, ExecState) == 0x0014);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ComponentName) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, Emitters) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ActualExecutionState) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState) == 0x0024);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ScalabilityState) == 0x0028);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, PoolMethod) == 0x0034);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, AverageTime) == 0x0038);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, MaxTime) == 0x0040);
static_assert(offsetof(FNiagaraOutlinerSystemData, SystemInstances) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerFrameTime) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerFrameTime) == 0x0018);
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerInstanceTime) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerInstanceTime) == 0x0028);
static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, Command) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, SessionID) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, SessionID) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerRequestConnection, SessionID) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerRequestConnection, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 0x000C);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 0x0018);
static_assert(offsetof(FNiagaraParameters, Parameters) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 0x0008);
static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 0x0000);
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ID) == 0x0000);
static_assert(offsetof(FNiagaraModuleDependency, Type) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ScriptConstraint) == 0x0009);
static_assert(offsetof(FNiagaraModuleDependency, Description) == 0x0010);
static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0x0000);
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompileRequest, RootObjects) == 0x0008);
static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0x0000);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 0x0010);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 0x0030);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 0x0050);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 0x0070);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 0x0090);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 0x00B0);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 0x00D0);
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 0x00F0);
static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0x0000);
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 0x0008);
static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0x0000);
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 0x0018);
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 0x0040);
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 0x0058);
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 0x00C0);
static_assert(offsetof(FNiagaraVariableMetaData, VariableGuid) == 0x00C8);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0x0000);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 0x0010);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 0x0020);
static_assert(offsetof(FNiagaraAssetVersion, VersionGuid) == 0x0008);
static_assert(offsetof(FNiagaraMatrix, Row0) == 0x0000);
static_assert(offsetof(FNiagaraMatrix, Row1) == 0x0010);
static_assert(offsetof(FNiagaraMatrix, Row2) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row3) == 0x0030);
static_assert(offsetof(FNiagaraVariant, Object) == 0x0000);
static_assert(offsetof(FNiagaraVariant, DataInterface) == 0x0008);
static_assert(offsetof(FNiagaraVariant, Bytes) == 0x0010);
static_assert(offsetof(FNiagaraVariant, CurrentMode) == 0x0020);
