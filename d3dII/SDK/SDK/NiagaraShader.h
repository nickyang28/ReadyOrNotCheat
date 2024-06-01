
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x01 (1 bytes)
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Warning                                            = 1,
	FNiagaraCompileEventSeverity__Error                                              = 2
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x0008)  
	FName                                              IterationSource;                                            // 0x0008   (0x0008)  
	bool                                               bSpawnOnly : 1;                                             // 0x0010:0 (0x0001)  
	bool                                               bWritesParticles : 1;                                       // 0x0010:1 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FName>                                      OutputDestinations;                                         // 0x0018   (0x0010)  
	int32_t                                            MinStage;                                                   // 0x0028   (0x0004)  
	int32_t                                            MaxStage;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	FString                                            DataInterfaceHLSLSymbol;                                    // 0x0000   (0x0010)  
	FString                                            DIClassName;                                                // 0x0010   (0x0010)  
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            ShortDescription;                                           // 0x0018   (0x0010)  
	bool                                               bDismissable;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGuid                                              NodeGuid;                                                   // 0x002C   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FGuid>                                      StackGuids;                                                 // 0x0050   (0x0010)  
};

static_assert(sizeof(UNiagaraScriptBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSimulationStageMetaData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraCompileEvent) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x0000);
static_assert(offsetof(FSimulationStageMetaData, IterationSource) == 0x0008);
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x0018);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x0000);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x0010);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x0020);
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x0000);
static_assert(offsetof(FNiagaraCompileEvent, Message) == 0x0008);
static_assert(offsetof(FNiagaraCompileEvent, ShortDescription) == 0x0018);
static_assert(offsetof(FNiagaraCompileEvent, NodeGuid) == 0x002C);
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x003C);
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x0050);
