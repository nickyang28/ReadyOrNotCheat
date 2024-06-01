
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent
/// Size: 0x0000 (0 bytes) (0x0000B0 - 0x0000B0) align 8 pad: 0x0000
class UMagicLeapHandMeshingComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
	// void SetUseWeightedNormals(bool bInUseWeightedNormals);                                                                  // [0x1a3c380] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x1a3c250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x1a3c0c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x1a3c2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
	// bool DestroyClient();                                                                                                    // [0x1a3c220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
	// bool CreateClient();                                                                                                     // [0x1a3c1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x1a3c160] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FMagicLeapHandMeshBlock
{ 
	int32_t                                            IndexCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            vertexcount;                                                // 0x0004   (0x0004)  
	TArray<FVector>                                    Vertex;                                                     // 0x0008   (0x0010)  
	TArray<int32_t>                                    Index;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMesh
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 pad: 0x0000
struct FMagicLeapHandMesh
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	int32_t                                            DataCount;                                                  // 0x0004   (0x0004)  
	TArray<FMagicLeapHandMeshBlock>                    Data;                                                       // 0x0008   (0x0010)  
};

static_assert(sizeof(UMagicLeapHandMeshingComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMagicLeapHandMeshingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapHandMeshBlock) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMagicLeapHandMesh) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapHandMeshBlock, Vertex) == 0x0008);
static_assert(offsetof(FMagicLeapHandMeshBlock, Index) == 0x0018);
static_assert(offsetof(FMagicLeapHandMesh, Data) == 0x0008);
