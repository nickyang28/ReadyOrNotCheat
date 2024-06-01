
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/VictoryBPLibrary.ESpeedUnit
/// Size: 0x01 (1 bytes)
enum class ESpeedUnit : uint8_t
{
	CentimeterPerSecond                                                              = 0,
	FootPerSecond                                                                    = 1,
	MeterPerSecond                                                                   = 2,
	MeterPerMinute                                                                   = 3,
	KilometerPerSecond                                                               = 4,
	KilometerPerMinute                                                               = 5,
	KilometerPerHour                                                                 = 6,
	MilePerHour                                                                      = 7,
	Knot                                                                             = 8,
	Mach                                                                             = 9,
	SpeedOfLight                                                                     = 10,
	YardPerSecond                                                                    = 11
};

/// Enum /Script/VictoryBPLibrary.EJoyGraphicsFullScreen
/// Size: 0x01 (1 bytes)
enum class EJoyGraphicsFullScreen : uint8_t
{
	EJoyGraphicsFullScreen__FullScreen                                               = 0,
	EJoyGraphicsFullScreen__WindowedFullScreen                                       = 1,
	EJoyGraphicsFullScreen__WindowedFullScreenPerformance                            = 2,
	EJoyGraphicsFullScreen__EJoyGraphicsFullScreen_Max                               = 3
};

/// Enum /Script/VictoryBPLibrary.EVictoryHMDDevice
/// Size: 0x01 (1 bytes)
enum class EVictoryHMDDevice : uint8_t
{
	EVictoryHMDDevice__None                                                          = 0,
	EVictoryHMDDevice__OculusRift                                                    = 1,
	EVictoryHMDDevice__Morpheus                                                      = 2,
	EVictoryHMDDevice__ES2GenericStereoMesh                                          = 3,
	EVictoryHMDDevice__SteamVR                                                       = 4,
	EVictoryHMDDevice__GearVR                                                        = 5
};

/// Enum /Script/VictoryBPLibrary.EJoyImageFormats
/// Size: 0x01 (1 bytes)
enum class EJoyImageFormats : uint8_t
{
	EJoyImageFormats__JPG                                                            = 0,
	EJoyImageFormats__PNG                                                            = 1,
	EJoyImageFormats__BMP                                                            = 2,
	EJoyImageFormats__ICO                                                            = 3,
	EJoyImageFormats__EXR                                                            = 4,
	EJoyImageFormats__ICNS                                                           = 5
};

/// Class /Script/VictoryBPLibrary.TKMathFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
	// FVector VectorRadiansToDegrees(FVector RadVector);                                                                       // [0x9400a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
	// FVector VectorDegreesToRadians(FVector DegVector);                                                                       // [0x940000] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
	// bool SphereBoxIntersection(FVector SphereOrigin, float SphereRadius, FVector BoxOrigin, FVector BoxExtent);              // [0x93deb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
	// float SignedDistancePlanePoint(FVector PlaneNormal, FVector planePoint, FVector Point);                                  // [0x93db80] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
	// FVector SetVectorLength(FVector A, float Size);                                                                          // [0x93da90] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
	// void SetCenterOfMassOffset(class UPrimitiveComponent* Target, FVector Offset, FName BoneName);                           // [0x93d7f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
	// int32_t RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf);                                                // [0x93d040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
	// int32_t RoundToNearestMultiple(int32_t A, int32_t Multiple);                                                             // [0x93cf70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
	// int32_t RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf);                                                // [0x93ce70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
	// FVector ProjectPointOnLine(FVector LineOrigin, FVector LineDirection, FVector Point);                                    // [0x93be90] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
	// int32_t PointOnWhichSideOfLineSegment(FVector LinePoint1, FVector LinePoint2, FVector Point);                            // [0x93bd50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
	// FVector2D NegateVector2D(FVector2D A);                                                                                   // [0x93ac40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
	// int32_t NegateInt(int32_t A);                                                                                            // [0x93abb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
	// float NegateFloat(float A);                                                                                              // [0x93ab20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
	// bool LineToLineIntersection(FVector& IntersectionPoint, FVector LinePoint1, FVector LineDir1, FVector LinePoint2, FVector LineDir2); // [0x939b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
	// bool LineExtentBoxIntersection(FBox InBox, FVector Start, FVector End, FVector Extent, FVector& HitLocation, FVector& HitNormal, float& HitTime); // [0x939870] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
	// bool IsPowerOfTwo(int32_t X);                                                                                            // [0x938c60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
	// bool IsPointInsideBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);                                              // [0x9389d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
	// bool IsMultipleOf(int32_t A, int32_t Multiple);                                                                          // [0x938900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
	// bool IsLineInsideSphere(FVector LineStart, FVector LineDir, float LineLength, FVector SphereOrigin, float SphereRadius); // [0x938730] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
	// bool IsEvenNumber(float A);                                                                                              // [0x9386b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
	// FVector GridSnap(FVector A, float Grid);                                                                                 // [0x938150] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
	// FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, FVector Point, FName BoneName, bool DrawDebugInfo);        // [0x937b30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
	// int32_t GetConsoleVariableInt(FString VariableName);                                                                     // [0x936a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
	// float GetConsoleVariableFloat(FString VariableName);                                                                     // [0x936940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
	// float ConvertPhysicsLinearVelocity(FVector Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);                                 // [0x934090] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
	// void ConvertAnchorToAnchor(class UObject* WorldContextObject, FAnchors CurrentAnchor, FMargin Offsets, FAnchors TargetAnchor, FMargin& ConvertedOffsets); // [0x933ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
	// bool ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector LinePoint1, FVector lineVec1, FVector LinePoint2, FVector lineVec2); // [0x933380] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
	// void ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2); // [0x933160] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
	// FVector ClosestPointOnSphereToLine(FVector SphereOrigin, float SphereRadius, FVector LineOrigin, FVector LineDir);       // [0x932fd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
	// FVector ClosestPointOnLineSeqment(FVector Point, FVector LineStart, FVector LineEnd);                                    // [0x932e80] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
	// bool AreLineSegmentsCrossing(FVector pointA1, FVector pointA2, FVector pointB1, FVector pointB2);                        // [0x9320d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VictoryBPLibrary.VictoryBPFunctionLibrary
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
	// bool WorldType__InPIEWorld(class UObject* WorldContextObject);                                                           // [0x946940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
	// bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);                                                  // [0x9468b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
	// bool WorldType__InEditorWorld(class UObject* WorldContextObject);                                                        // [0x946820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
	// bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);                                         // [0x946750] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	// class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);                        // [0x946680] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
	// void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, class UClass* WidgetClass, bool bImmediateOnly); // [0x946510] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
	// void Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime); // [0x9463e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
	// void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime); // [0x9462b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
	// bool ViewportPositionDeproject(class UObject* WorldContextObject, FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection); // [0x945d10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
	// bool Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);                               // [0x946190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
	// bool Viewport__GetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);                               // [0x946070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	// bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float& PosX, float& PosY);                            // [0x945f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
	// bool Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);                                // [0x945e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	// bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);                                     // [0x9449a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
	// void VictorySortIntArray(TArray<int32_t>& IntArray, TArray<int32_t>& IntArrayRef);                                       // [0x944890] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
	// void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>& FloatArrayRef);                                     // [0x944780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
	// void VictorySimulateMouseWheel(float& Delta);                                                                            // [0x9446f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
	// void VictorySimulateKeyPress(class APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType);              // [0x944590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
	// void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);                     // [0x944230] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
	// void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);                         // [0x9443d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
	// void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);                         // [0x944040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
	// void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);                       // [0x943e80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
	// void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32_t Value);                            // [0x943ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
	// void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);                            // [0x943b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
	// void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);                     // [0x943980] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
	// void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);                              // [0x9437d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	// void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);                                                               // [0x943630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	// void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);                                                                 // [0x943490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	// bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);                                     // [0x943180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
	// bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);                                           // [0x942e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
	// bool VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);              // [0x942da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
	// FString VictoryPaths__WindowsNoEditorDir();                                                                              // [0x942d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
	// FString VictoryPaths__Win64Dir_BinaryLocation();                                                                         // [0x942ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	// FString VictoryPaths__ScreenShotsDir();                                                                                  // [0x942c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	// FString VictoryPaths__SavedDir();                                                                                        // [0x942ba0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
	// FString VictoryPaths__LogsDir();                                                                                         // [0x942b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
	// FString VictoryPaths__GameRootDirectory();                                                                               // [0x942aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
	// FString VictoryPaths__ConfigDir();                                                                                       // [0x942a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
	// class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, FString MapFolderOffOfContent, FString LevelName, int32_t InstanceNumber, FVector Location, FRotator Rotation, bool& Success); // [0x942740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
	// void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<AVictoryISM*>& Out);                    // [0x942390] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
	// void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, TArray<AVictoryISM*>& CreatedISMActors, bool DestroyOriginalActors, int32_t MinCountToCreateISM); // [0x9421d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
	// bool VictoryIsApplicationRunning(int32_t ProcessId);                                                                     // [0x9426b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
	// void VictoryIntPlusEquals(int32_t& Int, int32_t Add, int32_t& IntOut);                                                   // [0x942590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
	// void VictoryIntMinusEquals(int32_t& Int, int32_t Sub, int32_t& IntOut);                                                  // [0x942470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	// FVictoryInputAxis VictoryGetVictoryInputAxis(FKeyEvent& KeyEvent);                                                       // [0x942000] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	// FVictoryInput VictoryGetVictoryInput(FKeyEvent& KeyEvent);                                                               // [0x941e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
	// float VictoryGetSoundVolume(class USoundClass* SoundClassObject);                                                        // [0x941d70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
	// FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);                  // [0x9419e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
	// FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);                      // [0x941ba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
	// FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);                      // [0x9417e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
	// FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);                    // [0x941610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
	// int32_t VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);                         // [0x941450] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
	// float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);                         // [0x941290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
	// FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);                  // [0x9410c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
	// bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);                           // [0x940f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
	// FString VictoryGetApplicationName(int32_t ProcessId);                                                                    // [0x940e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	// void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);                                                  // [0x940d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	// void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings); // [0x940ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	// void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);                                                    // [0x9409c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
	// void VictoryFloatPlusEquals(float& Float, float Add, float& FloatOut);                                                   // [0x9408a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
	// void VictoryFloatMinusEquals(float& Float, float Sub, float& FloatOut);                                                  // [0x940780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
	// void VictoryCreateProc(int32_t& ProcessId, FString FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32_t Priority, FString OptionalWorkingDirectory); // [0x9403f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
	// void VictoryAppendInline(FString& String, FString ToAppend, FString& Result, bool AppendNewline);                        // [0x940210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
	// FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);                                            // [0x945bf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
	// void Victory_SaveStringToOSClipboard(FString ToClipboard);                                                               // [0x945b60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
	// bool Victory_SavePixels(FString FullFilePath, int32_t Width, int32_t Height, TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString); // [0x9458f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
	// class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32_t& Width, int32_t& Height, TArray<FLinearColor>& OutPixels); // [0x9456d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
	// class UTexture2D* Victory_LoadTexture2D_FromFile(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32_t& Width, int32_t& Height); // [0x9454e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
	// void Victory_GetStringFromOSClipboard(FString& FromClipboard);                                                           // [0x945270] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
	// bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32_t& TextureWidth, int32_t& TextureHeight, TArray<FLinearColor>& PixelArray); // [0x9450f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
	// bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32_t X, int32_t Y, FLinearColor& PixelColor);                     // [0x944fa0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
	// FString Victory_GetGRHIAdapterName();                                                                                    // [0x944ee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
	// void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);     // [0x944d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
	// FString Victory_GetGPUBrand();                                                                                           // [0x944ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
	// bool Victory_Get_Pixel(TArray<FLinearColor>& Pixels, int32_t ImageHeight, int32_t X, int32_t Y, FLinearColor& FoundColor); // [0x945310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
	// TEnumAsByte<EPathFollowingRequestResult> Victory_AI_MoveToWithFilter(class APawn* Pawn, FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe); // [0x944a70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
	// float VerticalFOV(float HorizontalFOV, float AspectRatio);                                                               // [0x940140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
	// FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);            // [0x93fea0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
	// FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);                     // [0x93fd40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
	// void UTCToLocal(FDateTime& UTCTime, FDateTime& LocalTime);                                                               // [0x93fbd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
	// void UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance);                                                  // [0x93fcc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
	// FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, FVector& InVector);                                       // [0x93fae0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
	// FVector TransformVectorToActorSpace(class AActor* Actor, FVector& InVector);                                             // [0x93f9f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
	// class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, FVector& TraceStart, FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid); // [0x93f6f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
	// class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, FVector& TraceStart, FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid); // [0x93f430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
	// bool TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, class USkeletalMeshComponent* Mesh, FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness); // [0x93f150] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
	// bool TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, class AActor* TheCharacter, FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness); // [0x93ee70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
	// int32_t Text_ToInt(FText& Text, bool UseDotForThousands);                                                                // [0x93eca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
	// float Text_ToFloat(FText& Text, bool UseDotForThousands);                                                                // [0x93eab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
	// bool Text_IsNumeric(FText& Text);                                                                                        // [0x93e9e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
	// bool StringIsEmpty(FString Target);                                                                                      // [0x93e1b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
	// void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32_t Precision, bool IncludeLeadingZero); // [0x93e030] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
	// void String__ExplodeString(TArray<FString>& OutputStrings, FString InputString, FString Separator, int32_t Limit, bool bTrimElements); // [0x93e770] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
	// FString String__CombineStrings_Multi(FString A, FString B);                                                              // [0x93e5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
	// FString String__CombineStrings(FString StringFirst, FString StringSecond, FString Separator, FString StringFirstLabel, FString StringSecondLabel); // [0x93e250] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
	// class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding); // [0x93dcc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
	// void SetGenericTeamId(class AActor* Target, char NewTeamId);                                                             // [0x93d9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
	// void SetComponentTickRate(class UActorComponent* Component, float Seconds);                                              // [0x93d900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
	// void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);                                    // [0x93d730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
	// void ServerTravel(class UObject* WorldContextObject, FString MapName, bool bSkipNotifyPlayers);                          // [0x93d5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
	// void Selection_SelectionBox(class UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, class UClass* ClassFilter); // [0x93d420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
	// void seedRandWithTime();                                                                                                 // [0x946a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
	// void seedRandWithEntropy();                                                                                              // [0x946a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
	// void seedRand(int32_t Seed);                                                                                             // [0x9469f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	// bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, FString NewName, FString NewAbsoluteFolderPath, bool HighResolution); // [0x93d200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	// void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);                                                 // [0x93d140] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
	// void Rendering__UnFreezeGameRendering();                                                                                 // [0x93ce50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
	// void Rendering__FreezeGameRendering();                                                                                   // [0x93ce30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
	// void RemoveFromStreamingLevels(class UObject* WorldContextObject, FLevelStreamInstanceInfo& LevelInstanceInfo);          // [0x93cd60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	// void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass);                              // [0x93cca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
	// void RealWorldTime__GetTimePassedSincePreviousTime(FString PreviousTime, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours); // [0x93cab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
	// void RealWorldTime__GetDifferenceBetweenTimes(FString PreviousTime1, FString PreviousTime2, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours); // [0x93c890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
	// FString RealWorldTime__GetCurrentOSTime(int32_t& MilliSeconds, int32_t& Seconds, int32_t& Minutes, int32_t& Hours12, int32_t& Hours24, int32_t& Day, int32_t& Month, int32_t& Year); // [0x93c580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
	// int32_t RandInt_uniDis_MT();                                                                                             // [0x93c550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
	// int32_t RandInt_uniDis();                                                                                                // [0x93c520] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
	// int32_t RandInt_MINMAX_uniDis_MT(int32_t iMin, int32_t iMax);                                                            // [0x93c450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
	// int32_t RandInt_MINMAX_uniDis(int32_t iMin, int32_t iMax);                                                               // [0x93c380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
	// float RandFloat_uniDis_MT();                                                                                             // [0x93c350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
	// float RandFloat_uniDis();                                                                                                // [0x93c320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
	// float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);                                                                // [0x93c250] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
	// float RandFloat_MINMAX_uniDis(float iMin, float iMax);                                                                   // [0x93c180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
	// bool RandBool_Bernoulli_MT(float fBias);                                                                                 // [0x93c100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
	// bool RandBool_Bernoulli(float fBias);                                                                                    // [0x93c080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
	// FVector2D ProjectWorldToScreenPosition(FVector& WorldLocation);                                                          // [0x93bfe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
	// void PointDistanceToPlane(FPlane& Plane, FVector Point, float& Distance);                                                // [0x93bc10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
	// bool PlayerState_GetPlayerID(class APlayerController* ThePC, int32_t& PlayerId);                                         // [0x93bb30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
	// bool PlayerController_GetControllerID(class APlayerController* ThePC, int32_t& ControllerId);                            // [0x93ba50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
	// bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed); // [0x93b950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
	// bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, FVector& InitLocation, FRotator& InitRotation); // [0x93b780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
	// bool Physics__IsRagDoll(class AActor* TheCharacter);                                                                     // [0x93b6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
	// bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation);       // [0x93b5c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
	// bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, FVector& RagdollLocation);                                // [0x93b4f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
	// bool Physics__EnterRagDoll(class AActor* TheCharacter);                                                                  // [0x93b460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
	// bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32_t>& Widths, TArray<int32_t>& Heights, TArray<int32_t>& RefreshRates, bool IncludeRefreshRates); // [0x93b2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
	// void OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& Android_Vulkan, bool& PS4, bool& XboxOne, bool& HTML5, bool& APPLE); // [0x93aed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
	// void Open_URL_In_Web_Browser(FString TheURL);                                                                            // [0x93adf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
	// bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);                                          // [0x93acc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
	// bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility);      // [0x93aa50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
	// void MinOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue);                              // [0x93a910] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
	// void MinOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMinValue, float& MinValue);                              // [0x93a7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
	// void MaxOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue);                              // [0x93a690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
	// void MaxOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue);                              // [0x93a550] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
	// float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);                    // [0x93a3a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
	// void Loops_ResetBPRunawayCounter();                                                                                      // [0x93a380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
	// class UTexture2D* LoadTexture2D_FromFileByExtension(FString ImagePath, bool& IsValid, int32_t& OutWidth, int32_t& OutHeight); // [0x93a200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
	// class UTexture2D* LoadTexture2D_FromDDSFile(FString FullFilePath);                                                       // [0x93a160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
	// bool LoadStringFromFile(FString& Result, FString FullFilePath);                                                          // [0x939ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
	// bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32_t& ArraySize, FString FullFilePath, bool ExcludeEmptyLines); // [0x939df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	// class UObject* LoadObjectFromAssetPath(class UClass* ObjectClass, FName Path, bool& IsValid);                            // [0x939ce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
	// bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset); // [0x9396a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
	// void JoyIsKey(FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match);                // [0x939320] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
	// void JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting);                                // [0x9392b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
	// TEnumAsByte<EJoyGraphicsFullScreen> JoyGraphicsSettings__FullScreen_Get();                                               // [0x939270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
	// bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);          // [0x939070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
	// bool JoyFileIO_GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);                                // [0x938e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	// bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass);                            // [0x938da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
	// bool IsStandAlone(class UObject* WorldContextObject);                                                                    // [0x938cf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
	// bool IsPointOnPlane(FPlane& Plane, FVector Point, float Tolerance);                                                      // [0x938b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
	// bool IsAlphaNumeric(FString String);                                                                                     // [0x938610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
	// class UPanelSlot* InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content);                           // [0x938510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
	// float HorizontalFOV(float VerticalFOV, float AspectRatio);                                                               // [0x938440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
	// void HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance);                                                    // [0x9383c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
	// bool HasSubstring(FString SearchIn, FString SubString, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir); // [0x938240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
	// void GraphicsSettings__SetFrameRateToBeUnbound();                                                                        // [0x938130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
	// void GraphicsSettings__SetFrameRateCap(float NewValue);                                                                  // [0x9380b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
	// class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, FName& Name);                                      // [0x937fd0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
	// bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult); // [0x937de0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
	// bool GetViewportPosition(class UObject* WorldContextObject, FVector2D& ScreenPosition, FVector2D& OutViewportPosition);  // [0x937cc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
	// FVector GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation);               // [0x9379e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
	// void GetUTCFromUnixTimeStamp(int32_t UnixTimeStamp, FDateTime& UTCTime);                                                 // [0x937630] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
	// void GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32_t& UnknownId);        // [0x937800] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
	// int32_t GetUnixTimeStamp(FDateTime& UTCTime);                                                                            // [0x937730] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
	// float GetTimeAlive(class AActor* Target);                                                                                // [0x9375a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
	// bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions);                   // [0x9374b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
	// FRotator GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation);                                    // [0x9373b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
	// int32_t GetPlayerUniqueNetID();                                                                                          // [0x937380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
	// class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, FString PlayerStartName);                          // [0x937250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
	// FName GetObjectPath(class UObject* Obj);                                                                                 // [0x9371c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
	// void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);                    // [0x9370b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
	// FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance);                              // [0x937010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
	// FName GetHeadMountedDisplayDeviceType();                                                                                 // [0x936fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
	// char GetGenericTeamId(class AActor* Target);                                                                             // [0x936f40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	// class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly); // [0x936e40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
	// float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, FVector& Point, FVector& ClosestPointOnCollision); // [0x936d10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
	// float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, FVector& PointOnSurface1, FVector& PointOnSurface2); // [0x936bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
	// float GetCreationTime(class AActor* Target);                                                                             // [0x936b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
	// FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);    // [0x936860] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
	// FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);     // [0x936780] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
	// FString GetCommandLine();                                                                                                // [0x9366a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
	// class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, FVector Center, float Radius, bool& IsValid); // [0x9364d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
	// class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool& IsValid); // [0x936330] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
	// void GetBoxContainingWorldPoints(TArray<FVector>& Points, FVector& Center, FVector& Extent);                             // [0x9360a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
	// int32_t GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames); // [0x935f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
	// FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);                                  // [0x935e90] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
	// FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);                                   // [0x935db0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
	// void FlushPressedKeys(class APlayerController* PlayerController);                                                        // [0x935d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
	// void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32_t MaxFlashCount, int32_t FlashFrequencyMilliseconds); // [0x935be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
	// bool FileIO__SaveStringTextToFile(FString SaveDirectory, FString JoyfulFileName, FString SaveText, bool AllowOverWriting); // [0x935990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
	// bool FileIO__SaveStringArrayToFile(FString SaveDirectory, FString JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting); // [0x9356b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
	// bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);                                        // [0x935580] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
	// void DrawCircle(class UObject* WorldContextObject, FVector Center, float Radius, int32_t NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines); // [0x934d00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
	// void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, FVector& Endpoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration); // [0x9353a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
	// void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, FVector& Endpoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration); // [0x9351c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
	// void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration); // [0x935020] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
	// bool DoesMaterialHaveParameter(class UMaterialInterface* Mat, FName Parameter);                                          // [0x934c30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
	// float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, FVector& TestPoint, FVector& ClosestSurfacePoint); // [0x934b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
	// bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<FVector>& BoneLocations);                        // [0x934a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
	// class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32_t Width, int32_t Height, FLinearColor ClearColor, float Gamma); // [0x934820] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
	// class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, FName Name, FVector Location, FRotator Rotation); // [0x934680] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
	// FPlane CreatePlane(FVector Center, FVector Normal);                                                                      // [0x934580] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
	// class UObject* CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass);                            // [0x9344b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
	// bool CreateMD5Hash(FString FileToHash, FString FileToStoreHashTo);                                                       // [0x934340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
	// int32_t CountOccurrancesOfSubString(FString Source, FString SubString, TEnumAsByte<ESearchCase> SearchCase);             // [0x934160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
	// FRotator Conversions__VectorToRotator(FVector& TheVector);                                                               // [0x933e20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
	// void Conversions__StringToVector(FString String, FVector& ConvertedVector, bool& IsValid);                               // [0x933cf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
	// void Conversions__StringToRotator(FString String, FRotator& ConvertedRotator, bool& IsValid);                            // [0x933bc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
	// void Conversions__StringToColor(FString String, FLinearColor& ConvertedColor, bool& IsValid);                            // [0x933a90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
	// FVector Conversions__RotatorToVector(FRotator& TheRotator);                                                              // [0x9339f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
	// void Conversions__ColorToString(FLinearColor& Color, FString& ColorAsString);                                            // [0x933900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
	// int32_t Conversion__FloatToRoundedInteger(float IN_Float);                                                               // [0x933880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
	// void constructRand();                                                                                                    // [0x9469d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
	// void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // [0x933720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
	// bool CompareMD5Hash(FString MD5HashFile1, FString MD5HashFile2);                                                         // [0x9335b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
	// class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, bool& IsValid, class AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset); // [0x932cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
	// bool ClientWindow__GameWindowIsForeGroundInOS();                                                                         // [0x932ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
	// bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);                          // [0x932b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
	// FRotator Character__GetControllerRotation(class AActor* TheCharacter);                                                   // [0x932c00] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
	// bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, FString ImagePath, FLinearColor ClearColour);  // [0x9329b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
	// bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);  // [0x932890] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
	// bool Capture2D_SaveImage(class ASceneCapture2D* Target, FString ImagePath, FLinearColor ClearColour);                    // [0x932710] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
	// bool Capture2D_Project(class ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);                    // [0x9325f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
	// float Calcs__ClosestPointToSourcePoint(FVector& Source, TArray<FVector>& OtherPoints, FVector& ClosestPoint);            // [0x932490] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
	// void Array_Sort(TArray<int32_t>& TargetArray, bool bAscendingOrder, FName VariableName);                                 // [0x932340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
	// bool Array_IsValidIndex(TArray<int32_t>& TargetArray, int32_t Index);                                                    // [0x932250] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
	// FString AppendMultiple(FString A, FString B);                                                                            // [0x931f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
	// bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, FRotator& TheRotation, float& Pitch, float& Yaw);   // [0x931db0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
	// bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float& Pitch, float& Yaw);                                      // [0x931c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
	// void AddToStreamingLevels(class UObject* WorldContextObject, FLevelStreamInstanceInfo& LevelInstanceInfo);               // [0x931bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
	// void AddToActorRotation(class AActor* TheActor, FRotator AddRot);                                                        // [0x931af0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
	// void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // [0x9317e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
	// bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);                              // [0x931a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
	// void Actor__GetAttachedActors(class AActor* ParentActor, TArray<AActor*>& ActorsArray);                                  // [0x931940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
	// class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool& IsValid);                       // [0x931700] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
	// FString Accessor__GetNameAsString(class UObject* TheObject);                                                             // [0x931630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
	// class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool& IsValid);             // [0x931550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryBPLibrary.VictoryBPHTML
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UVictoryBPHTML : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
	// void VictoryHTML5_SetCursorVisible(bool MakeVisible);                                                                    // [0x946dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPHTML.IsHTML
	// bool IsHTML();                                                                                                           // [0x946d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VictoryBPLibrary.VictoryISM
/// Size: 0x0008 (8 bytes) (0x000220 - 0x000228) align 8 pad: 0x0000
class AVictoryISM : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               Mesh;                                                       // 0x0220   (0x0008)  
};

/// Struct /Script/VictoryBPLibrary.LevelStreamInstanceInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 pad: 0x0000
struct FLevelStreamInstanceInfo
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              PackageNameToLoad;                                          // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x001C   (0x000C)  
	bool                                               bShouldBeLoaded : 1;                                        // 0x0028:0 (0x0001)  
	bool                                               bShouldBeVisible : 1;                                       // 0x0028:1 (0x0001)  
	bool                                               bShouldBlockOnLoad : 1;                                     // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            LODIndex;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/VictoryBPLibrary.VictoryInputAxis
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FVictoryInputAxis
{ 
	FString                                            AxisName;                                                   // 0x0000   (0x0010)  
	FString                                            KeyAsString;                                                // 0x0010   (0x0010)  
	FKey                                               Key;                                                        // 0x0020   (0x0018)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/VictoryBPLibrary.VictoryInput
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 pad: 0x0000
struct FVictoryInput
{ 
	FString                                            ActionName;                                                 // 0x0000   (0x0010)  
	FKey                                               Key;                                                        // 0x0010   (0x0018)  
	FString                                            KeyAsString;                                                // 0x0028   (0x0010)  
	bool                                               bShift : 1;                                                 // 0x0038:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0038:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0038:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

static_assert(sizeof(UTKMathFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVictoryBPFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVictoryBPHTML) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AVictoryISM) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FLevelStreamInstanceInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FVictoryInputAxis) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVictoryInput) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(AVictoryISM, Mesh) == 0x0220);
static_assert(offsetof(FLevelStreamInstanceInfo, PackageName) == 0x0000);
static_assert(offsetof(FLevelStreamInstanceInfo, PackageNameToLoad) == 0x0008);
static_assert(offsetof(FLevelStreamInstanceInfo, Location) == 0x0010);
static_assert(offsetof(FLevelStreamInstanceInfo, Rotation) == 0x001C);
static_assert(offsetof(FVictoryInputAxis, AxisName) == 0x0000);
static_assert(offsetof(FVictoryInputAxis, KeyAsString) == 0x0010);
static_assert(offsetof(FVictoryInputAxis, Key) == 0x0020);
static_assert(offsetof(FVictoryInput, ActionName) == 0x0000);
static_assert(offsetof(FVictoryInput, Key) == 0x0010);
static_assert(offsetof(FVictoryInput, KeyAsString) == 0x0028);
