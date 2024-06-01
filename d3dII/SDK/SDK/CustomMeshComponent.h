
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0018 (24 bytes) (0x000478 - 0x000490) align 16 pad: 0x0000
class UCustomMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0478   (0x0018)  MISSED


	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x1aa6ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                         // [0x1aa6c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x1aa6bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 pad: 0x0000
struct FCustomMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x000C)  
	FVector                                            Vertex1;                                                    // 0x000C   (0x000C)  
	FVector                                            Vertex2;                                                    // 0x0018   (0x000C)  
};

static_assert(sizeof(UCustomMeshComponent) == 0x0490); // 1168 bytes (0x000478 - 0x000490)
static_assert(sizeof(FCustomMeshTriangle) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(offsetof(FCustomMeshTriangle, Vertex0) == 0x0000);
static_assert(offsetof(FCustomMeshTriangle, Vertex1) == 0x000C);
static_assert(offsetof(FCustomMeshTriangle, Vertex2) == 0x0018);
