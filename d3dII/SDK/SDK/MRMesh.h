
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x20a39e0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x181c2c0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x31d11a0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x181c090] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x31d1170] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x1822d50] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x176c220] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0078 (120 bytes) (0x0001F8 - 0x000270) align 16 pad: 0x0000
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,467) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                               // 0x01F8   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0208   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0209   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x020A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x020B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x020C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0210   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0220   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0230   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0248   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0250   (0x0020)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x24710f0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x31d1010] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x31d0f80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x00C0 (192 bytes) (0x000450 - 0x000510) align 16 pad: 0x0000
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0450   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0460   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0468   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0470   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0471   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0472   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0473   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0478   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0480   (0x0010)  
	unsigned char                                      UnknownData02_7[0x80];                                      // 0x0490   (0x0080)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x31d1370] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x31d12e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x31d1250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x31d11c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x31d1130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x31d1100] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x31d10e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x31d10c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x31d10a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x31d0f50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 pad: 0x0000
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(UMRMeshComponent) == 0x0510); // 1296 bytes (0x000450 - 0x000510)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x020B);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0210);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0220);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0230);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x0248);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0460);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0468);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0478);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0480);
