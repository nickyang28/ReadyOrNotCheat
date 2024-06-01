
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

/// Enum /Script/InputRemapping.EAxisMappingFilter
/// Size: 0x01 (1 bytes)
enum class EAxisMappingFilter : uint8_t
{
	EAxisMappingFilter__Name                                                         = 0,
	EAxisMappingFilter__Key                                                          = 1,
	EAxisMappingFilter__Scale                                                        = 2,
	EAxisMappingFilter__IsNotGamepad                                                 = 3,
	EAxisMappingFilter__IsNotKeyboard                                                = 4,
	EAxisMappingFilter__IsNotMouse                                                   = 5,
	EAxisMappingFilter__IsNotAxis                                                    = 6
};

/// Enum /Script/InputRemapping.EActionMappingFilter
/// Size: 0x01 (1 bytes)
enum class EActionMappingFilter : uint8_t
{
	EActionMappingFilter__Name                                                       = 0,
	EActionMappingFilter__Key                                                        = 1,
	EActionMappingFilter__Shift                                                      = 2,
	EActionMappingFilter__Ctrl                                                       = 3,
	EActionMappingFilter__Alt                                                        = 4,
	EActionMappingFilter__Cmd                                                        = 5,
	EActionMappingFilter__IsNotGamepad                                               = 6,
	EActionMappingFilter__IsNotKeyboard                                              = 7,
	EActionMappingFilter__IsNotMouse                                                 = 8
};

/// Enum /Script/InputRemapping.EMappingType
/// Size: 0x01 (1 bytes)
enum class EMappingType : uint8_t
{
	EMappingType__Axis                                                               = 0,
	EMappingType__Action                                                             = 1,
	EMappingType__Auto                                                               = 2
};

/// Class /Script/InputRemapping.InputRemappingNodes
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UInputRemappingNodes : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/InputRemapping.InputRemappingNodes.RemoveAxisMapping
	// void RemoveAxisMapping(FAxisMappingStruct MappingData, bool& ReturnValue);                                               // [0x839b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InputRemapping.InputRemappingNodes.RemoveActionMapping
	// void RemoveActionMapping(FActionMappingStruct MappingData, bool& ReturnValue);                                           // [0x8399a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InputRemapping.InputRemappingNodes.RebindAxisMapping
	// void RebindAxisMapping(FAxisMappingStruct AxisMapping, FAxisMappingStruct NewData, bool& ReturnValue);                   // [0x839790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InputRemapping.InputRemappingNodes.RebindActionMapping
	// void RebindActionMapping(FActionMappingStruct ActionMapping, FActionMappingStruct NewData, bool& ReturnValue);           // [0x839550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InputRemapping.InputRemappingNodes.GetAllAxisMappings
	// void GetAllAxisMappings(FAxisMappingStruct FilterData, TArray<EAxisMappingFilter> Filters, bool& ReturnValue, TArray<FAxisMappingStruct>& AxisMappings); // [0x8392b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/InputRemapping.InputRemappingNodes.GetAllActionMappings
	// void GetAllActionMappings(FActionMappingStruct FilterData, TArray<EActionMappingFilter> Filters, bool& ReturnValue, TArray<FActionMappingStruct>& ActionMappings); // [0x839000] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/InputRemapping.InputRemappingNodes.CreateNewAxisMapping
	// void CreateNewAxisMapping(FAxisMappingStruct MappingData, bool& ReturnValue);                                            // [0x838ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InputRemapping.InputRemappingNodes.CreateNewActionMapping
	// void CreateNewActionMapping(FActionMappingStruct MappingData, bool& ReturnValue);                                        // [0x838d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping
	// bool AxisMappingNotEqualActionMapping(FAxisMappingStruct& A, FAxisMappingStruct& B);                                     // [0x838bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping
	// bool AxisMappingEqualActionMapping(FAxisMappingStruct& A, FAxisMappingStruct& B);                                        // [0x838a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping
	// bool ActionMappingNotEqualActionMapping(FActionMappingStruct& A, FActionMappingStruct& B);                               // [0x838890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping
	// bool ActionMappingEqualActionMapping(FActionMappingStruct& A, FActionMappingStruct& B);                                  // [0x838700] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/InputRemapping.AxisMappingStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FAxisMappingStruct
{ 
	FName                                              MappingName;                                                // 0x0000   (0x0008)  
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/InputRemapping.ActionMappingStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FActionMappingStruct
{ 
	FName                                              MappingName;                                                // 0x0000   (0x0008)  
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	bool                                               Shift;                                                      // 0x0020   (0x0001)  
	bool                                               Ctrl;                                                       // 0x0021   (0x0001)  
	bool                                               Alt;                                                        // 0x0022   (0x0001)  
	bool                                               Cmd;                                                        // 0x0023   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

static_assert(sizeof(UInputRemappingNodes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAxisMappingStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FActionMappingStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FAxisMappingStruct, MappingName) == 0x0000);
static_assert(offsetof(FAxisMappingStruct, Key) == 0x0008);
static_assert(offsetof(FActionMappingStruct, MappingName) == 0x0000);
static_assert(offsetof(FActionMappingStruct, Key) == 0x0008);
