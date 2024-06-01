
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/VICODynamicsPlugin.VDCollisionSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FVDCollisionSettings
{ 
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                                 // 0x0000   (0x0001)  
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FCollisionResponse                                 CollisionResponse;                                          // 0x0008   (0x0030)  
	FName                                              CollisionProfileName;                                       // 0x0038   (0x0008)  
};

/// Struct /Script/VICODynamicsPlugin.VDParticleAttachment
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 pad: 0x0000
struct FVDParticleAttachment
{ 
	int32_t                                            ParticleIndex;                                              // 0x0000   (0x0004)  
	bool                                               AttachingToAnotherParticle;                                 // 0x0004   (0x0001)  
	bool                                               SimulateTensionForces;                                      // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	bool                                               IsRelative;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FComponentReference                                ComponentRef;                                               // 0x0018   (0x0028)  
	FName                                              Socket;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDCachedParticleStartLocation
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FVDCachedParticleStartLocation
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	bool                                               bIsAttached;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/VICODynamicsPlugin.BaseVDComponent
/// Size: 0x0208 (520 bytes) (0x000478 - 0x000680) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UBaseVDComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0478   (0x0008)  MISSED
	class UVDSimulation*                               SimulationInstance;                                         // 0x0480   (0x0008)  
	class UVDSimulatedObject*                          VDSimObject;                                                // 0x0488   (0x0008)  
	TArray<class UVDSimulatedParticle*>                Particles;                                                  // 0x0490   (0x0010)  
	float                                              FrictionCoefficient;                                        // 0x04A0   (0x0004)  
	float                                              RestitutionCoefficient;                                     // 0x04A4   (0x0004)  
	FVDCollisionSettings                               CollisionSettings;                                          // 0x04A8   (0x0040)  
	float                                              ParticleRadius;                                             // 0x04E8   (0x0004)  
	bool                                               AttachToRigids;                                             // 0x04EC   (0x0001)  
	bool                                               AttachToParticles;                                          // 0x04ED   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x04EE   (0x0002)  MISSED
	float                                              AttachToParticlesConstraintStiffness;                       // 0x04F0   (0x0004)  
	float                                              EndOffset;                                                  // 0x04F4   (0x0004)  
	float                                              DetectionRadiusInflationFactor;                             // 0x04F8   (0x0004)  
	bool                                               CreateTensionConstraintsForSimulatingRigids;                // 0x04FC   (0x0001)  
	bool                                               bSnapToSimulatingAttachment;                                // 0x04FD   (0x0001)  
	bool                                               ManuallyAttachParticles;                                    // 0x04FE   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x04FF   (0x0001)  MISSED
	TArray<FVDParticleAttachment>                      ParticleAttachments;                                        // 0x0500   (0x0010)  
	float                                              TensionForce;                                               // 0x0510   (0x0004)  
	float                                              TensionDampening;                                           // 0x0514   (0x0004)  
	bool                                               AdjustOtherParticleLocationsBasedOnAttachments : 1;         // 0x0518:0 (0x0001)  
	bool                                               AffectedByGlobalWind : 1;                                   // 0x0518:1 (0x0001)  
	bool                                               UseExplicitRigidBodyCollision : 1;                          // 0x0518:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0519   (0x0003)  MISSED
	float                                              WindResistance;                                             // 0x051C   (0x0004)  
	TArray<FComponentReference>                        AffectedByWindSources;                                      // 0x0520   (0x0010)  
	bool                                               CheckForWindOccluders;                                      // 0x0530   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0531   (0x0003)  MISSED
	float                                              MaxWindOccluderDistance;                                    // 0x0534   (0x0004)  
	FVDCollisionSettings                               WindOccluderTraceSettings;                                  // 0x0538   (0x0040)  
	SDK_UNDEFINED(16,1983) /* FMulticastInlineDelegate */ __um(OnSimulationDataCreated);                           // 0x0578   (0x0010)  
	SDK_UNDEFINED(16,1984) /* FMulticastInlineDelegate */ __um(OnSimulationSync);                                  // 0x0588   (0x0010)  
	bool                                               ShowParticles : 1;                                          // 0x0598:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0599   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x059C   (0x0004)  
	float                                              MinConstraintDistance;                                      // 0x05A0   (0x0004)  
	bool                                               SimulateOnlyWhenRendered;                                   // 0x05A4   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x05A5   (0x0003)  MISSED
	float                                              SimulationToggleThreshold;                                  // 0x05A8   (0x0004)  
	bool                                               EnableParticleToParticleCollisions : 1;                     // 0x05AC:0 (0x0001)  
	bool                                               ConsiderInnerCollisions : 1;                                // 0x05AC:1 (0x0001)  
	bool                                               SkipRelativeVelocityCheckDuringRigidBodyCollisions : 1;     // 0x05AC:2 (0x0001)  
	unsigned char                                      UnknownBit07 : 1;                                           // 0x05AC:3 (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x05AC:4 (0x0001)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x05AC:5 (0x0001)  MISSED
	unsigned char                                      UnknownBit10 : 1;                                           // 0x05AC:6 (0x0001)  MISSED
	unsigned char                                      UnknownBit11 : 1;                                           // 0x05AC:7 (0x0001)  MISSED
	bool                                               bNotifyOnVDCollision : 1;                                   // 0x05AD:0 (0x0001)  
	unsigned char                                      UnknownData12_5[0x2];                                       // 0x05AE   (0x0002)  MISSED
	SDK_UNDEFINED(16,1985) /* FMulticastInlineDelegate */ __um(OnVDCollisionEvent);                                // 0x05B0   (0x0010)  
	SDK_UNDEFINED(80,1986) /* TMap<UVDSimulatedParticle*, FVDCollision> */ __um(PendingCollisionNotifications);    // 0x05C0   (0x0050)  
	unsigned char                                      UnknownData13_6[0x20];                                      // 0x0610   (0x0020)  MISSED
	TArray<class UVDParticleSpringConstraint*>         ConstraintsToOtherParticles;                                // 0x0630   (0x0010)  
	unsigned char                                      UnknownData14_6[0x20];                                      // 0x0640   (0x0020)  MISSED
	bool                                               bUseLocationCache : 1;                                      // 0x0660:0 (0x0001)  
	bool                                               bApplyCachedStartLocationBeforeAttachToRigids : 1;          // 0x0660:1 (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x0661   (0x0007)  MISSED
	TArray<FVDCachedParticleStartLocation>             CachedStartLocations;                                       // 0x0668   (0x0010)  


	/// Functions
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
	// void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision);                                                        // [0x122a1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
	// void SetAffectedByGlobalWind(bool IsAffected);                                                                           // [0x12299f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.OnSync
	// void OnSync();                                                                                                           // [0x24710f0] Event|Protected|BlueprintEvent 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
	// int32_t GetTensionConstraintCount();                                                                                     // [0x1229410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.GetParticleBuildInfo
	// TArray<FVDParticleInfo> GetParticleBuildInfo();                                                                          // [0x12290d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
	// FVector GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex);                                        // [0x1228f90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
	// void AttachToOverlappingRigidBodies();                                                                                   // [0x12287b0] Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/VICODynamicsPlugin.VDBlueprintFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
	// class UVDSimulation* GetVICODynamicsSimulationInstance();                                                                // [0x12294d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDColliderComponent
/// Size: 0x0030 (48 bytes) (0x0000B0 - 0x0000E0) align 8 pad: 0x0000
class UVDColliderComponent : public UActorComponent
{ 
public:
	class UVDSimulation*                               SimulationInstance;                                         // 0x00B0   (0x0008)  
	TArray<FComponentReference>                        AssociatedVDComponents;                                     // 0x00B8   (0x0010)  
	bool                                               bAddAllComponents : 1;                                      // 0x00C8:0 (0x0001)  
	bool                                               bIgnoreConvexShapes : 1;                                    // 0x00C8:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	TArray<FName>                                      SpecificColliders;                                          // 0x00D0   (0x0010)  
};

/// Struct /Script/VICODynamicsPlugin.RopePiece
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FRopePiece
{ 
	int32_t                                            StartParticleIndex;                                         // 0x0000   (0x0004)  
	int32_t                                            EndParticleIndex;                                           // 0x0004   (0x0004)  
};

/// Class /Script/VICODynamicsPlugin.VDRopeComponent
/// Size: 0x0088 (136 bytes) (0x000678 - 0x000700) align 16 pad: 0x0008
#pragma pack(push, 0x1)
class UVDRopeComponent : public UBaseVDComponent
{ 
public:
	float                                              StretchStiffness;                                           // 0x0678   (0x0004)  
	float                                              BendStiffness;                                              // 0x067C   (0x0004)  
	float                                              Mass;                                                       // 0x0680   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0684   (0x0004)  
	float                                              Length;                                                     // 0x0688   (0x0004)  
	float                                              Width;                                                      // 0x068C   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x0690   (0x0004)  
	bool                                               bEnforceStrictLength;                                       // 0x0694   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0695   (0x0003)  MISSED
	int32_t                                            NumSides;                                                   // 0x0698   (0x0004)  
	float                                              TileMaterial;                                               // 0x069C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x06A0   (0x0020)  MISSED
	TArray<class UVDParticleSpringConstraint*>         StretchConstraints;                                         // 0x06C0   (0x0010)  
	TArray<class UVDParticleSpringConstraint*>         BendConstraints;                                            // 0x06D0   (0x0010)  
	TArray<FRopePiece>                                 Pieces;                                                     // 0x06E0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x06F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
	// void SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength);                                    // [0x1229ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
	// void SetNewRestLength(float NewLength, int32_t PieceIndex);                                                              // [0x1229df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.ResetRope
	// void ResetRope();                                                                                                        // [0x12299d0] Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.GetTrueLength
	// float GetTrueLength(int32_t PieceIndex);                                                                                 // [0x1229430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.GetPieces
	// TArray<FRopePiece> GetPieces();                                                                                          // [0x12291e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.CreateRopeGeometry_BP
	// void CreateRopeGeometry_BP();                                                                                            // [0x1228920] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
	// void BreakAtSegment(int32_t SegmentIndex);                                                                               // [0x12287d0] Final|Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/VICODynamicsPlugin.VDDynamicRopeComponent
/// Size: 0x0008 (8 bytes) (0x0006F8 - 0x000700) align 16 pad: 0x0000
class UVDDynamicRopeComponent : public UVDRopeComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x06F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
	// void RebuildRopeAttached(float DistancePerSegment, class USceneComponent* StartAttachedTo, FName StartSocket, bool StartSimulateTension, class USceneComponent* EndAttachedTo, FName EndSocket, bool EndSimulateTension); // [0x12297a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
	// void RebuildRopeAtPoints(float DistancePerSegment, FVector& StartLocation, FVector& EndLocation, bool bRelativeLocations); // [0x1229610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope
	// void RebuildRope();                                                                                                      // [0x12295f0] Native|Public|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDMeshClothComponent
/// Size: 0x00E8 (232 bytes) (0x000678 - 0x000760) align 16 pad: 0x0000
class UVDMeshClothComponent : public UBaseVDComponent
{ 
public:
	class UStaticMesh*                                 HullMesh;                                                   // 0x0678   (0x0008)  
	float                                              StretchStiffness;                                           // 0x0680   (0x0004)  
	float                                              BendStiffness;                                              // 0x0684   (0x0004)  
	float                                              Mass;                                                       // 0x0688   (0x0004)  
	float                                              DragCoefficient;                                            // 0x068C   (0x0004)  
	bool                                               PreserveVolume;                                             // 0x0690   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0691   (0x0003)  MISSED
	float                                              CurrentVolume;                                              // 0x0694   (0x0004)  
	float                                              OverrideRestVolume;                                         // 0x0698   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x069C   (0x0004)  MISSED
	bool                                               UseVertexColorDataForSetup : 1;                             // 0x06A0:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x06A1   (0x0003)  MISSED
	float                                              MaxBendConstraintDistance;                                  // 0x06A4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x06A8   (0x0028)  MISSED
	TArray<class UVDParticleSpringConstraint*>         StretchConstraints;                                         // 0x06D0   (0x0010)  
	TArray<class UVDParticleSpringConstraint*>         BendConstraints;                                            // 0x06E0   (0x0010)  
	class UVDMeshVolumeConstraint*                     VolumeConstraint;                                           // 0x06F0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x68];                                      // 0x06F8   (0x0068)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
	// class UVDMeshVolumeConstraint* GetVolumeConstraint();                                                                    // [0x1229500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
	// TArray<UVDParticleSpringConstraint*> GetStretchConstraintsArray();                                                       // [0x12293e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
	// TArray<UVDParticleSpringConstraint*> GetBendConstraintsArray();                                                          // [0x1228e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VDMeshVolumeConstraint
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UVDMeshVolumeConstraint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
	// void SetRestVolume(float NewVolume);                                                                                     // [0x122a030] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
	// float GetRestVolume();                                                                                                   // [0x12292d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
	// float GetCurrentVolume();                                                                                                // [0x1228f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VDParticleSpringConstraint
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UVDParticleSpringConstraint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
	// void SetStiffness(float& NewStiffness);                                                                                  // [0x122a140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
	// void SetRestDistance(float& NewRestDistance);                                                                            // [0x1229f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
	// bool IsConstraining(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2);                       // [0x1229520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
	// float GetStifffness();                                                                                                   // [0x12293b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
	// float GetRestDistance();                                                                                                 // [0x12292a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
	// class UVDSimulatedParticle* GetParticle2();                                                                              // [0x12290a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
	// class UVDSimulatedParticle* GetParticle1();                                                                              // [0x1229070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VDProceduralClothComponent
/// Size: 0x0078 (120 bytes) (0x000678 - 0x0006F0) align 16 pad: 0x0000
class UVDProceduralClothComponent : public UBaseVDComponent
{ 
public:
	float                                              StretchStiffness;                                           // 0x0678   (0x0004)  
	float                                              BendStiffness;                                              // 0x067C   (0x0004)  
	float                                              Mass;                                                       // 0x0680   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0684   (0x0004)  
	float                                              Width;                                                      // 0x0688   (0x0004)  
	float                                              Height;                                                     // 0x068C   (0x0004)  
	int32_t                                            NumParticlesWide;                                           // 0x0690   (0x0004)  
	int32_t                                            NumParticlesHigh;                                           // 0x0694   (0x0004)  
	float                                              TileMaterialAlongWidth;                                     // 0x0698   (0x0004)  
	float                                              TileMaterialAlongHeight;                                    // 0x069C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x06A0   (0x0020)  MISSED
	TArray<class UVDParticleSpringConstraint*>         StretchConstraints;                                         // 0x06C0   (0x0010)  
	TArray<class UVDParticleSpringConstraint*>         BendConstraints;                                            // 0x06D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x06E0   (0x0010)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDSimulatedObject
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000078) align 8 pad: 0x0000
class UVDSimulatedObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
	// void SetSkipRelativeVelocityCheckDuringCollision(bool Skip);                                                             // [0x122a0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetObjectType
	// void SetObjectType(TEnumAsByte<ECollisionChannel> ObjectType);                                                           // [0x1229b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
	// void SetMinimumConstraintSatisfactionDistance(float MinDistance);                                                        // [0x1229d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
	// void SetGravityScale(float Scale);                                                                                       // [0x1229cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
	// void SetCollisionResponseToObjectType(TEnumAsByte<ECollisionChannel> ObjectType, TEnumAsByte<ECollisionResponse> Response); // [0x1229c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
	// void SetCollisionEnabled(bool Enabled);                                                                                  // [0x1229b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
	// void SetCollisionChannel(TEnumAsByte<ECollisionChannel> Channel);                                                        // [0x1229b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
	// void SetAffectiveWindVector(FVector NewWindVector);                                                                      // [0x1229a80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
	// TArray<UVDParticleSpringConstraint*> GetSpringConstraints();                                                             // [0x1229330] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
	// bool GetSkipRelativeVelocityCheckDuringCollision();                                                                      // [0x1229300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetParticles
	// TArray<UVDSimulatedParticle*> GetParticles();                                                                            // [0x1229160] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
	// float GetMinimumConstraintSatisfactionDistance();                                                                        // [0x1229040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
	// float GetGravityScale();                                                                                                 // [0x1228f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
	// FVDCollisionSettings GetCollisionSettings();                                                                             // [0x1228e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
	// bool GetCollisionEnabled();                                                                                              // [0x1228e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
	// FVector GetAffectiveWindVector();                                                                                        // [0x1228dd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
	// void DestroyVolumeConstraint(class UVDMeshVolumeConstraint* Constraint);                                                 // [0x1228d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
	// void DestroyParticle(class UVDSimulatedParticle* Particle);                                                              // [0x1228cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
	// void DestroyConstraint(class UVDParticleSpringConstraint* Constraint);                                                   // [0x1228c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
	// class UVDMeshVolumeConstraint* CreateVolumeConstraint(TArray<int32_t> IndexList, float Alpha, float RestVolume);         // [0x1228aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
	// class UVDParticleSpringConstraint* CreateSpringConstraint(class UVDSimulatedParticle* Particle1, class UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness); // [0x1228940] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedObject.CreateParticle
	// class UVDSimulatedParticle* CreateParticle(FVDParticleInfo& ParticleInfo);                                               // [0x1228860] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDSimulatedParticle
/// Size: 0x0080 (128 bytes) (0x000028 - 0x0000A8) align 8 pad: 0x0000
class UVDSimulatedParticle : public UObject
{ 
public:
	bool                                               IsAttached;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FVDParticleAttachment                              Attachment;                                                 // 0x0030   (0x0060)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
	// void SetVelocity(FVector& NewVelocity);                                                                                  // [0x122d7e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
	// void SetRestitutionCoefficient(float NewRestitutionCoefficient);                                                         // [0x122d640] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetRadius
	// void SetRadius(float NewRadius);                                                                                         // [0x122d540] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetMass
	// void SetMass(float NewMass);                                                                                             // [0x122d310] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetLocation
	// void SetLocation(FVector& NewLocation);                                                                                  // [0x122d280] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
	// void SetIsWindOccluded(bool IsOccluded);                                                                                 // [0x122d1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
	// void SetIsRigidBodyCollisionEnabled(bool IsEnabled);                                                                     // [0x122d160] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
	// void SetIsParticleCollisionEnabled(bool IsEnabled);                                                                      // [0x122d0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
	// void SetIsFree(bool IsFree);                                                                                             // [0x122d040] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
	// void SetFrictionCoefficient(float NewFrictionCoefficient);                                                               // [0x122cf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
	// void SetDragCoefficient(float NewDragCoefficient);                                                                       // [0x122ce20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0x122ca40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
	// float GetRestitutionCoefficient();                                                                                       // [0x122c960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetRadius
	// float GetRadius();                                                                                                       // [0x122c930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetMass
	// float GetMass();                                                                                                         // [0x122c900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetLocation
	// FVector GetLocation();                                                                                                   // [0x122c8c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
	// bool GetIsWindOccluded();                                                                                                // [0x122c890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
	// bool GetIsRigidBodyCollisionEnabled();                                                                                   // [0x122c840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
	// bool GetIsParticleCollisionEnabled();                                                                                    // [0x122c810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
	// bool GetIsFree();                                                                                                        // [0x122c7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
	// float GetFrictionCoefficient();                                                                                          // [0x122c790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
	// float GetDragCoefficient();                                                                                              // [0x122c760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
	// bool GetAttachment(FVDParticleAttachment& OutAttachment);                                                                // [0x122c4b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.Detach
	// void Detach();                                                                                                           // [0x122c490] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
	// void CopyAttachment(FVDParticleAttachment& Attachment, bool UseCurrentMass);                                             // [0x122c350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
	// bool AttachToLocation(FVector Location, bool IsRelative);                                                                // [0x122c260] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
	// bool AttachToComponent(class UPrimitiveComponent* Component, FVector Location, bool SimulateTension, FName Socket);      // [0x122c0d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
	// bool AttachToActor(class AActor* Actor, FVector Location, bool SimulateTension, FName Socket);                           // [0x122bf40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulatedParticle.AddForce
	// void AddForce(FVector& Force);                                                                                           // [0x122beb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/VICODynamicsPlugin.VDSimulation
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000168) align 8 pad: 0x0000
class UVDSimulation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x130];                                     // 0x0028   (0x0130)  MISSED
	TArray<class UVDWindDirectionalSourceComponent*>   WindSources;                                                // 0x0158   (0x0010)  


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetSubstepCount
	// void SetSubstepCount(int32_t SubstepCount);                                                                              // [0x122d750] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
	// void SetSelfCollisionEnabled(bool IsEnabled);                                                                            // [0x122d6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
	// void SetPhysXSceneCollisionEnabled(bool IsEnabled);                                                                      // [0x122d4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
	// void SetPerFrameCollisionCacheEnable(bool IsEnabled);                                                                    // [0x122d390] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
	// void SetPerformExtraCollisionResolutionLoop(bool IsEnabled);                                                             // [0x122d420] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
	// void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled);                                                             // [0x122cfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetFrameRate
	// void SetFrameRate(int32_t FrameRate);                                                                                    // [0x122cea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
	// void SetConstraintIterationCount(int32_t ConstraintIterationCount);                                                      // [0x122cd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
	// void SetConstrainSimulationTo2DPlane(bool IsEnabled);                                                                    // [0x122cd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
	// void SetConstrainPlaneOrigin(FVector Origin);                                                                            // [0x122cc70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
	// void SetConstrainPlaneNormal(FVector Normal);                                                                            // [0x122cbe0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
	// void RemoveExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider);            // [0x122cb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
	// void RemoveAllExplicitColliderMappings(class UBaseVDComponent* VDComponent);                                             // [0x122ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
	// bool k2QuerySphereOverlaps(FVector Location, float Radius, TArray<UVDSimulatedParticle*>& Overlaps, TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // [0x122da70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
	// bool k2QueryBoxOverlaps(FVector Location, FVector HalfExtents, TArray<UVDSimulatedParticle*>& Overlaps, TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // [0x122d870] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetSettings
	// FVDSettings GetSettings();                                                                                               // [0x122c9f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
	// bool GetIsRunningOnWorkerThread();                                                                                       // [0x122c870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
	// bool GetIsExplicitRigidBodyCollisionEnabled();                                                                           // [0x122c7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
	// void GetDirectionalWindParameters(class UBaseVDComponent* VDComponent, FVector& OutDirection, float& OutSpeed, float& OutGust); // [0x122c5d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
	// void AddExplicitColliderMapping(class UBaseVDComponent* VDComponent, class UPrimitiveComponent* Collider, bool IgnoreConvexShapes); // [0x122bda0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/VICODynamicsPlugin.VDSettings
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 pad: 0x0000
struct FVDSettings
{ 
	bool                                               bOverride_ReserveParticleBudget : 1;                        // 0x0000:0 (0x0001)  
	bool                                               bOverride_NumberOfThreadsToUse : 1;                         // 0x0000:1 (0x0001)  
	bool                                               bOverride_EnableSelfCollision : 1;                          // 0x0000:2 (0x0001)  
	bool                                               bOverride_EnablePhysXSceneCollision : 1;                    // 0x0000:3 (0x0001)  
	bool                                               bOverride_PerformExtraCollisionResolutionLoop : 1;          // 0x0000:4 (0x0001)  
	bool                                               bOverride_EnableExplicitRigidBodyCollision : 1;             // 0x0000:5 (0x0001)  
	bool                                               bOverride_SimulationFramerate : 1;                          // 0x0000:6 (0x0001)  
	bool                                               bOverride_RunSimulationOnWorkerThread : 1;                  // 0x0000:7 (0x0001)  
	bool                                               bOverride_WorkerThreadCoreAffinity : 1;                     // 0x0001:0 (0x0001)  
	bool                                               bOverride_SimulationIterations : 1;                         // 0x0001:1 (0x0001)  
	bool                                               bOverride_ConstraintIterations : 1;                         // 0x0001:2 (0x0001)  
	bool                                               bOverride_ConstrainSimulationTo2DPlane : 1;                 // 0x0001:3 (0x0001)  
	bool                                               bOverride_PlaneOrigin : 1;                                  // 0x0001:4 (0x0001)  
	bool                                               bOverride_PlaneNormal : 1;                                  // 0x0001:5 (0x0001)  
	bool                                               bOverride_CachePerFrameResults : 1;                         // 0x0001:6 (0x0001)  
	bool                                               bOverride_CacheOnlyCollisionsWithStaticRigidBodies : 1;     // 0x0001:7 (0x0001)  
	bool                                               bOverride_CacheNonHitsAlso : 1;                             // 0x0002:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            ReserveParticleBudget;                                      // 0x0004   (0x0004)  
	int32_t                                            NumberOfThreadsToUse;                                       // 0x0008   (0x0004)  
	bool                                               EnableSelfCollision;                                        // 0x000C   (0x0001)  
	bool                                               EnablePhysXSceneCollision;                                  // 0x000D   (0x0001)  
	bool                                               PerformExtraCollisionResolutionLoop;                        // 0x000E   (0x0001)  
	bool                                               EnableExplicitRigidBodyCollision;                           // 0x000F   (0x0001)  
	int32_t                                            SimulationFramerate;                                        // 0x0010   (0x0004)  
	bool                                               RunSimulationOnWorkerThread;                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            WorkerThreadCoreAffinity;                                   // 0x0018   (0x0004)  
	int32_t                                            SimulationIterations;                                       // 0x001C   (0x0004)  
	int32_t                                            ConstraintIterations;                                       // 0x0020   (0x0004)  
	bool                                               ConstrainSimulationTo2DPlane;                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            PlaneOrigin;                                                // 0x0028   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x0034   (0x000C)  
	bool                                               bCachePerFrameResults : 1;                                  // 0x0040:0 (0x0001)  
	bool                                               bCacheOnlyCollisionsWithStaticRigidBodies : 1;              // 0x0040:1 (0x0001)  
	bool                                               bCacheNonHitsAlso : 1;                                      // 0x0040:2 (0x0001)  
	bool                                               DrawCollisionDebug : 1;                                     // 0x0040:3 (0x0001)  
	bool                                               bShowOnScreenStats : 1;                                     // 0x0040:4 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0041   (0x0003)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDSimulationSettingsActor
/// Size: 0x0048 (72 bytes) (0x000220 - 0x000268) align 8 pad: 0x0000
class AVDSimulationSettingsActor : public AInfo
{ 
public:
	FVDSettings                                        Settings;                                                   // 0x0220   (0x0044)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0264   (0x0004)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
	// FVDSettings GetSettings();                                                                                               // [0x122c990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VDSkinnedRopeComponent
/// Size: 0x0038 (56 bytes) (0x0006F8 - 0x000730) align 16 pad: 0x0000
class UVDSkinnedRopeComponent : public UVDRopeComponent
{ 
public:
	FComponentReference                                PoseableMeshRef;                                            // 0x06F8   (0x0028)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0720   (0x0010)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDSplineRopeComponent
/// Size: 0x0038 (56 bytes) (0x0006F8 - 0x000730) align 16 pad: 0x0000
class UVDSplineRopeComponent : public UVDRopeComponent
{ 
public:
	FComponentReference                                SplineRef;                                                  // 0x06F8   (0x0028)  
	bool                                               bAutoAttachToSplineEndPoints : 1;                           // 0x0720:0 (0x0001)  
	bool                                               bStretchToSplineLength : 1;                                 // 0x0720:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0721   (0x0003)  MISSED
	float                                              SplineLength;                                               // 0x0724   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0728   (0x0008)  MISSED
};

/// Class /Script/VICODynamicsPlugin.VDWindDirectionalSourceActor
/// Size: 0x0008 (8 bytes) (0x000220 - 0x000228) align 8 pad: 0x0000
class AVDWindDirectionalSourceActor : public AInfo
{ 
public:
	class UVDWindDirectionalSourceComponent*           Component;                                                  // 0x0220   (0x0008)  
};

/// Class /Script/VICODynamicsPlugin.VDWindDirectionalSourceComponent
/// Size: 0x0048 (72 bytes) (0x0001F8 - 0x000240) align 16 pad: 0x0000
class UVDWindDirectionalSourceComponent : public USceneComponent
{ 
public:
	float                                              Radius;                                                     // 0x01F8   (0x0004)  
	float                                              Strength;                                                   // 0x01FC   (0x0004)  
	float                                              Speed;                                                      // 0x0200   (0x0004)  
	float                                              MinGustAmount;                                              // 0x0204   (0x0004)  
	float                                              MaxGustAmount;                                              // 0x0208   (0x0004)  
	float                                              MinGustDuration;                                            // 0x020C   (0x0004)  
	float                                              MaxGustDuration;                                            // 0x0210   (0x0004)  
	float                                              MinGustTransitionSpeed;                                     // 0x0214   (0x0004)  
	float                                              MaxGustTransitionSpeed;                                     // 0x0218   (0x0004)  
	float                                              MinSecondsBetweenGusts;                                     // 0x021C   (0x0004)  
	float                                              MaxSecondsBetweenGusts;                                     // 0x0220   (0x0004)  
	unsigned char                                      UnknownData00_7[0x1C];                                      // 0x0224   (0x001C)  MISSED


	/// Functions
	// Function /Script/VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x122d5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
	// float GetCurrentGust();                                                                                                  // [0x122c5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VICODynamicsPlugin.VICODynamicsSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000068) align 8 pad: 0x0000
class UVICODynamicsSettings : public UObject
{ 
public:
	int32_t                                            ReserveParticleBudget;                                      // 0x0028   (0x0004)  
	int32_t                                            NumberOfThreadsToUse;                                       // 0x002C   (0x0004)  
	bool                                               EnableSelfCollision;                                        // 0x0030   (0x0001)  
	bool                                               EnablePhysXSceneCollision;                                  // 0x0031   (0x0001)  
	bool                                               PerformExtraCollisionResolutionLoop;                        // 0x0032   (0x0001)  
	bool                                               EnableExplicitRigidBodyCollision;                           // 0x0033   (0x0001)  
	int32_t                                            SimulationFramerate;                                        // 0x0034   (0x0004)  
	bool                                               RunSimulationOnWorkerThread;                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            WorkerThreadCoreAffinity;                                   // 0x003C   (0x0004)  
	int32_t                                            SimulationIterations;                                       // 0x0040   (0x0004)  
	int32_t                                            ConstraintIterations;                                       // 0x0044   (0x0004)  
	bool                                               ConstrainSimulationTo2DPlane;                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	FVector                                            PlaneOrigin;                                                // 0x004C   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x0058   (0x000C)  
	bool                                               bCachePerFrameResults : 1;                                  // 0x0064:0 (0x0001)  
	bool                                               bCacheOnlyCollisionsWithStaticRigidBodies : 1;              // 0x0064:1 (0x0001)  
	bool                                               bCacheNonHitsAlso : 1;                                      // 0x0064:2 (0x0001)  
	bool                                               DrawCollisionDebug : 1;                                     // 0x0064:3 (0x0001)  
	bool                                               bShowOnScreenStats : 1;                                     // 0x0064:4 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDCollision
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 pad: 0x0000
struct FVDCollision
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/VICODynamicsPlugin.VDParticleInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 pad: 0x0000
struct FVDParticleInfo
{ 
	bool                                               IsFree : 1;                                                 // 0x0000:0 (0x0001)  
	bool                                               IsRigidBodyCollisionEnabled : 1;                            // 0x0000:1 (0x0001)  
	bool                                               IsParticleCollisionEnabled : 1;                             // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	float                                              Mass;                                                       // 0x0014   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0018   (0x0004)  
};

/// Struct /Script/VICODynamicsPlugin.VDSimulationTickFunction
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
struct FVDSimulationTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

static_assert(sizeof(FVDCollisionSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVDParticleAttachment) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FVDCachedParticleStartLocation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBaseVDComponent) == 0x0678); // 1656 bytes (0x000478 - 0x000678)
static_assert(sizeof(UVDBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVDColliderComponent) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(FRopePiece) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVDRopeComponent) == 0x06F8); // 1784 bytes (0x000678 - 0x0006F8)
static_assert(sizeof(UVDDynamicRopeComponent) == 0x0700); // 1792 bytes (0x0006F8 - 0x000700)
static_assert(sizeof(UVDMeshClothComponent) == 0x0760); // 1888 bytes (0x000678 - 0x000760)
static_assert(sizeof(UVDMeshVolumeConstraint) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVDParticleSpringConstraint) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVDProceduralClothComponent) == 0x06F0); // 1776 bytes (0x000678 - 0x0006F0)
static_assert(sizeof(UVDSimulatedObject) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UVDSimulatedParticle) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UVDSimulation) == 0x0168); // 360 bytes (0x000028 - 0x000168)
static_assert(sizeof(FVDSettings) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(AVDSimulationSettingsActor) == 0x0268); // 616 bytes (0x000220 - 0x000268)
static_assert(sizeof(UVDSkinnedRopeComponent) == 0x0730); // 1840 bytes (0x0006F8 - 0x000730)
static_assert(sizeof(UVDSplineRopeComponent) == 0x0730); // 1840 bytes (0x0006F8 - 0x000730)
static_assert(sizeof(AVDWindDirectionalSourceActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UVDWindDirectionalSourceComponent) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(UVICODynamicsSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FVDCollision) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVDParticleInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FVDSimulationTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(FVDCollisionSettings, ObjectType) == 0x0000);
static_assert(offsetof(FVDCollisionSettings, CollisionEnabled) == 0x0001);
static_assert(offsetof(FVDCollisionSettings, CollisionResponse) == 0x0008);
static_assert(offsetof(FVDCollisionSettings, CollisionProfileName) == 0x0038);
static_assert(offsetof(FVDParticleAttachment, Location) == 0x0008);
static_assert(offsetof(FVDParticleAttachment, ComponentRef) == 0x0018);
static_assert(offsetof(FVDParticleAttachment, Socket) == 0x0040);
static_assert(offsetof(FVDCachedParticleStartLocation, Location) == 0x0000);
static_assert(offsetof(UBaseVDComponent, SimulationInstance) == 0x0480);
static_assert(offsetof(UBaseVDComponent, VDSimObject) == 0x0488);
static_assert(offsetof(UBaseVDComponent, Particles) == 0x0490);
static_assert(offsetof(UBaseVDComponent, CollisionSettings) == 0x04A8);
static_assert(offsetof(UBaseVDComponent, ParticleAttachments) == 0x0500);
static_assert(offsetof(UBaseVDComponent, AffectedByWindSources) == 0x0520);
static_assert(offsetof(UBaseVDComponent, WindOccluderTraceSettings) == 0x0538);
static_assert(offsetof(UBaseVDComponent, ConstraintsToOtherParticles) == 0x0630);
static_assert(offsetof(UBaseVDComponent, CachedStartLocations) == 0x0668);
static_assert(offsetof(UVDColliderComponent, SimulationInstance) == 0x00B0);
static_assert(offsetof(UVDColliderComponent, AssociatedVDComponents) == 0x00B8);
static_assert(offsetof(UVDColliderComponent, SpecificColliders) == 0x00D0);
static_assert(offsetof(UVDRopeComponent, StretchConstraints) == 0x06C0);
static_assert(offsetof(UVDRopeComponent, BendConstraints) == 0x06D0);
static_assert(offsetof(UVDRopeComponent, Pieces) == 0x06E0);
static_assert(offsetof(UVDMeshClothComponent, HullMesh) == 0x0678);
static_assert(offsetof(UVDMeshClothComponent, StretchConstraints) == 0x06D0);
static_assert(offsetof(UVDMeshClothComponent, BendConstraints) == 0x06E0);
static_assert(offsetof(UVDMeshClothComponent, VolumeConstraint) == 0x06F0);
static_assert(offsetof(UVDProceduralClothComponent, StretchConstraints) == 0x06C0);
static_assert(offsetof(UVDProceduralClothComponent, BendConstraints) == 0x06D0);
static_assert(offsetof(UVDSimulatedParticle, Attachment) == 0x0030);
static_assert(offsetof(UVDSimulation, WindSources) == 0x0158);
static_assert(offsetof(FVDSettings, PlaneOrigin) == 0x0028);
static_assert(offsetof(FVDSettings, PlaneNormal) == 0x0034);
static_assert(offsetof(AVDSimulationSettingsActor, Settings) == 0x0220);
static_assert(offsetof(UVDSkinnedRopeComponent, PoseableMeshRef) == 0x06F8);
static_assert(offsetof(UVDSplineRopeComponent, SplineRef) == 0x06F8);
static_assert(offsetof(AVDWindDirectionalSourceActor, Component) == 0x0220);
static_assert(offsetof(UVICODynamicsSettings, PlaneOrigin) == 0x004C);
static_assert(offsetof(UVICODynamicsSettings, PlaneNormal) == 0x0058);
static_assert(offsetof(FVDParticleInfo, Location) == 0x0008);
