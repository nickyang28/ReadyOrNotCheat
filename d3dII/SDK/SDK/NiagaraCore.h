
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraMergeable : public UObject
{ 
public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
public:
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 pad: 0x0000
struct FNiagaraCompileHash
{ 
	TArray<char>                                       DataHash;                                                   // 0x0000   (0x0010)  
};

static_assert(sizeof(UNiagaraMergeable) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraCompileHash) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x0000);
