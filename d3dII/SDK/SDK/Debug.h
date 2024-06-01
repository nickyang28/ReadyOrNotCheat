
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Debug.ELoggingOptions
/// Size: 0x01 (1 bytes)
enum class ELoggingOptions : uint8_t
{
	LO_Viewport                                                                      = 0,
	LO_Console                                                                       = 1,
	LO_Both                                                                          = 2,
	LO_NoLog                                                                         = 3
};

/// Enum /Script/Debug.EDebugLogType
/// Size: 0x01 (1 bytes)
enum class EDebugLogType : uint8_t
{
	DL_Info                                                                          = 0,
	DL_Success                                                                       = 1,
	DL_Warning                                                                       = 2,
	DL_Error                                                                         = 3,
	DL_Fatal                                                                         = 4
};

/// Enum /Script/Debug.EDebugLogComparisonMethod
/// Size: 0x01 (1 bytes)
enum class EDebugLogComparisonMethod : uint8_t
{
	CM_Equal_To                                                                      = 0,
	CM_Not_Equal_To                                                                  = 1,
	CM_Greater_Than_Or_Equal_To                                                      = 2,
	CM_Less_Than_Or_Equal_To                                                         = 3,
	CM_Greater_Than                                                                  = 4,
	CM_Less_Than                                                                     = 5
};

/// Enum /Script/Debug.EDebugLogTimeUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogTimeUnit : uint8_t
{
	DLTU_Nanoseconds                                                                 = 0,
	DLTU_Microseconds                                                                = 1,
	DLTU_Milliseconds                                                                = 2,
	DLTU_Seconds                                                                     = 3,
	DLTU_Minutes                                                                     = 4,
	DLTU_Hours                                                                       = 5,
	DLTU_Days                                                                        = 6,
	DLTU_Weeks                                                                       = 7,
	DLTU_Months                                                                      = 8,
	DLTU_Years                                                                       = 9,
	DLTU_Decades                                                                     = 10,
	DLTU_Centuries                                                                   = 11,
	DLTU_Millennium                                                                  = 12
};

/// Enum /Script/Debug.EDebugLogLightUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogLightUnit : uint8_t
{
	DLLU_Lumens                                                                      = 0,
	DLLU_Candela                                                                     = 1,
	DLLU_Lux                                                                         = 2,
	DLLU_CandelaPerMeter2                                                            = 3
};

/// Enum /Script/Debug.EDebugLogFrequencyUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogFrequencyUnit : uint8_t
{
	DLFU_Hertz                                                                       = 0,
	DLFU_Kilohertz                                                                   = 1,
	DLFU_Megahertz                                                                   = 2,
	DLFU_Gigahertz                                                                   = 3,
	DLFU_RevolutionsPerMinute                                                        = 4
};

/// Enum /Script/Debug.EDebugLogForceUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogForceUnit : uint8_t
{
	DLFU_Newtons                                                                     = 0,
	DLFU_PoundsForce                                                                 = 1,
	DLFU_KilogramsForce                                                              = 2
};

/// Enum /Script/Debug.EDebugLogAngularUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogAngularUnit : uint8_t
{
	DLAU_Degrees                                                                     = 0,
	DLAU_Radians                                                                     = 1
};

/// Enum /Script/Debug.EDebugLogSpeedUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogSpeedUnit : uint8_t
{
	DLSU_CentimetersPerSec                                                           = 0,
	DLSU_CentimetersPerHour                                                          = 1,
	DLSU_MicrometersPerSec                                                           = 2,
	DLSU_MicrometersPerHour                                                          = 3,
	DLSU_MillimetersPerSec                                                           = 4,
	DLSU_MillimetersPerHour                                                          = 5,
	DLSU_MetersPerSec                                                                = 6,
	DLSU_MetersPerHour                                                               = 7,
	DLSU_KilometersPerSec                                                            = 8,
	DLSU_KilometersPerHour                                                           = 9,
	DLSU_InchesPerSec                                                                = 10,
	DLSU_InchesPerHour                                                               = 11,
	DLSU_FeetPerSec                                                                  = 12,
	DLSU_FeetPerHour                                                                 = 13,
	DLSU_MilesPerSec                                                                 = 14,
	DLSU_MilesPerHour                                                                = 15,
	DLSU_YardsPerSec                                                                 = 16,
	DLSU_YardsPerHour                                                                = 17,
	DLSU_Knots                                                                       = 18
};

/// Enum /Script/Debug.EDebugLogMassUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogMassUnit : uint8_t
{
	DLMU_Microgram                                                                   = 0,
	DLMU_Milligram                                                                   = 1,
	DLMU_Gram                                                                        = 2,
	DLMU_Kilogram                                                                    = 3,
	DLMU_Tonne                                                                       = 4,
	DLMU_Ounce                                                                       = 5,
	DLMU_Pound                                                                       = 6,
	DLMU_Stone                                                                       = 7
};

/// Enum /Script/Debug.EDebugLogLengthUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogLengthUnit : uint8_t
{
	DLLU_Centimeter                                                                  = 0,
	DLLU_Micrometer                                                                  = 1,
	DLLU_Millimeter                                                                  = 2,
	DLLU_Meter                                                                       = 3,
	DLLU_Kilometer                                                                   = 4,
	DLLU_Inch                                                                        = 5,
	DLLU_Feet                                                                        = 6,
	DLLU_Mile                                                                        = 7,
	DLLU_NauticalMile                                                                = 8,
	DLLU_Yard                                                                        = 9,
	DLLU_Lightyears                                                                  = 10
};

/// Enum /Script/Debug.EDebugLogDataUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogDataUnit : uint8_t
{
	DLDU_Bit                                                                         = 0,
	DLDU_Byte                                                                        = 1,
	DLDU_Kilobyte                                                                    = 2,
	DLDU_Megabyte                                                                    = 3,
	DLDU_Gigabyte                                                                    = 4,
	DLDU_Terabyte                                                                    = 5,
	DLDU_Petabyte                                                                    = 6
};

/// Enum /Script/Debug.EDebugLogVolumeUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogVolumeUnit : uint8_t
{
	DLVU_Litre                                                                       = 0,
	DLVU_Millilitre                                                                  = 1,
	DLVU_Gallon                                                                      = 2,
	DLVU_Pint                                                                        = 3,
	DLVU_Quart                                                                       = 4
};

/// Enum /Script/Debug.EDebugLogTemperatureUnit
/// Size: 0x01 (1 bytes)
enum class EDebugLogTemperatureUnit : uint8_t
{
	DLTU_Celsius                                                                     = 0,
	DLTU_Fahrenheit                                                                  = 1,
	DLTU_Kelvin                                                                      = 2
};

/// Enum /Script/Debug.EDebugLogNumberSystems
/// Size: 0x01 (1 bytes)
enum class EDebugLogNumberSystems : uint8_t
{
	DLNS_Decimal                                                                     = 0,
	DLNS_Binary                                                                      = 1,
	DLNS_Hex                                                                         = 2,
	DLNS_Octal                                                                       = 3,
	DLNS_Roman                                                                       = 4
};

/// Class /Script/Debug.DebugLogLibrarySettings
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000F0) align 8 pad: 0x0000
class UDebugLogLibrarySettings : public UObject
{ 
public:
	bool                                               bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers : 1; // 0x0028:0 (0x0001)  
	bool                                               bCrashGameInShippingBuildConfiguration : 1;                 // 0x0028:1 (0x0001)  
	bool                                               bSaveLogMessagesToCustomLogFile : 1;                        // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FColor                                             InfoColor;                                                  // 0x002C   (0x0004)  
	FColor                                             ErrorColor;                                                 // 0x0030   (0x0004)  
	FColor                                             WarningColor;                                               // 0x0034   (0x0004)  
	FColor                                             SuccessColor;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(80,564) /* TMap<FName, int32_t> */   __um(ViewportLogKeys);                                      // 0x0040   (0x0050)  
	bool                                               bEnableSpecifiers : 1;                                      // 0x0090:0 (0x0001)  
	TEnumAsByte<ELoggingOptions>                       DisplaySpecifiersIn;                                        // 0x0091   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0092   (0x0006)  MISSED
	SDK_UNDEFINED(80,565) /* TMap<TEnumAsByte<EDebugLogType>, FString> */ __um(LogCategorySpecifiers);             // 0x0098   (0x0050)  
	bool                                               bLogContext : 1;                                            // 0x00E8:0 (0x0001)  
	TEnumAsByte<ELoggingOptions>                       DisplayContextIn;                                           // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Class /Script/Debug.Log
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class ULog : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Debug.Log.Yo
	// void Yo(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);                // [0xa49c50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Yes
	// void Yes(FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject); // [0xa49aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Wassup
	// void Wassup(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);            // [0xa499a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Warning_WithCondition
	// void Warning_WithCondition(FString Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa49760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Warning
	// void Warning(FString Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa49570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Volume
	// void Volume(float InVolumeValue, TEnumAsByte<EDebugLogVolumeUnit> VolumeUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa492a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Vector2D
	// void Vector2D(FVector2D& InVector2D, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa48d60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Vector
	// void Vector(FVector& InVector, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa49000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Valid
	// void Valid(FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject); // [0xa48bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.UnImplemented
	// void UnImplemented();                                                                                                    // [0xa48b90] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.Transform
	// void Transform(FTransform& InTransform, FString Prefix, bool bFormat, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa48900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Time
	// void Time(float InTimeValue, TEnumAsByte<EDebugLogTimeUnit> TimeUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa48630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Temperature
	// void Temperature(float InTemperatureValue, TEnumAsByte<EDebugLogTemperatureUnit> TemperatureUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa48360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Success_WithCondition
	// void Success_WithCondition(FString Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa48120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Success
	// void Success(FString Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa47f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.StopDebugTimer
	// float StopDebugTimer(bool bAutoDetermineTimeUnit, TEnumAsByte<EDebugLogTimeUnit> DisplayIn, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject); // [0xa47d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.StartDebugTimer
	// void StartDebugTimer(FString Description);                                                                               // [0xa47d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Speed
	// void Speed(float InSpeedValue, TEnumAsByte<EDebugLogSpeedUnit> SpeedUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa47a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Rotator
	// void Rotator(FRotator& InRotator, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa47790] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Quat
	// void Quat(FQuat& Quaternion, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa474f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Percent
	// void Percent(float Number, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa472b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.ObjectValidity
	// void ObjectValidity(class UObject* InObject, bool bSilenceOnError, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa470e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.ObjectName
	// void ObjectName(class UObject* InObject, bool bSilenceOnError, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa46f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Number_Int_Blueprint
	// void Number_Int_Blueprint(int32_t Number, FString Prefix, FString Suffix, TEnumAsByte<EDebugLogNumberSystems> NumberSystem, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa46c80] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.Number_Float_Blueprint
	// void Number_Float_Blueprint(float Number, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa46a40] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.No
	// void No(FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject); // [0xa46890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.MessageInWorld
	// void MessageInWorld(FString Message, FVector& WorldLocation, float FontScale, FString Prefix, FString Suffix, float TimeToDisplay); // [0xa46680] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Matrix
	// void Matrix(FMatrix& InMatrix, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa46430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Mass
	// void Mass(float InMassValue, TEnumAsByte<EDebugLogMassUnit> MassUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa46160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.LineBreak_Symbol
	// void LineBreak_Symbol(FString Symbol, TEnumAsByte<ELoggingOptions> LoggingOption);                                       // [0xa46090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.LineBreak
	// void LineBreak(TEnumAsByte<ELoggingOptions> LoggingOption);                                                              // [0xa46020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Light
	// void Light(float InLightValue, TEnumAsByte<EDebugLogLightUnit> LightUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa45d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Length
	// void Length(float InLengthValue, TEnumAsByte<EDebugLogLengthUnit> LengthUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa45a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Invalid
	// void Invalid(FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject); // [0xa458d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Info_WithCondition
	// void Info_WithCondition(FString Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa45690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Info
	// void Info(FString Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa454a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.InBrackets_Text_Blueprint
	// FText InBrackets_Text_Blueprint(FText Text);                                                                             // [0xa45360] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/Debug.Log.InBrackets_String_Blueprint
	// FString InBrackets_String_Blueprint(FString String);                                                                     // [0xa45280] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/Debug.Log.InBrackets_Name_Blueprint
	// FName InBrackets_Name_Blueprint(FName Name);                                                                             // [0xa451f0] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/Debug.Log.Hey
	// void Hey(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);               // [0xa450f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Hello
	// void Hello(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);             // [0xa44ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Goodbye
	// void Goodbye(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);           // [0xa44ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Frequency
	// void Frequency(float InFrequencyValue, TEnumAsByte<EDebugLogFrequencyUnit> FrequencyUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa44c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Force
	// void Force(float InForceValue, TEnumAsByte<EDebugLogForceUnit> ForceUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa44950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Fatal_WithCondition
	// void Fatal_WithCondition(FString Message, bool bCondition);                                                              // [0xa44880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Fatal
	// void Fatal(FString Message);                                                                                             // [0xa447f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Error_WithCondition
	// void Error_WithCondition(FString Message, bool bCondition, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa445b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Error
	// void Error(FString Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa443c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.EnsureObject
	// void EnsureObject(class UObject* Object, bool bAlwaysEnsure, FString Message);                                           // [0xa44290] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.EnsureCondition
	// void EnsureCondition(bool bCondition, bool bAlwaysEnsure, FString Message);                                              // [0xa44160] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.Dollar
	// void Dollar(float InDollarValue, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa43ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.DebugMessage_WithCondition
	// void DebugMessage_WithCondition(TEnumAsByte<EDebugLogType> LogSeverity, bool bCondition, FString Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa43c50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.DebugMessage
	// void DebugMessage(TEnumAsByte<EDebugLogType> LogSeverity, FString Message, TEnumAsByte<ELoggingOptions> LoggingOption, bool bAddPrefix, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa43a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.DateTime
	// void DateTime(FDateTime& InDateTime, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa437d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.Data
	// void Data(float InDataValue, TEnumAsByte<EDebugLogDataUnit> DataUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa43500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Cya
	// void Cya(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);               // [0xa43400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Crash
	// void Crash(FString Message, FString FromFunction, class UObject* ContextObject);                                         // [0xa432d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Color
	// void Color(FLinearColor& InColor, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa43030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.CheckObject
	// void CheckObject(class UObject* Object, FString Message);                                                                // [0xa42f60] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.CheckNoReEntry
	// void CheckNoReEntry();                                                                                                   // [0xa42f20] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.CheckNoRecursion
	// void CheckNoRecursion();                                                                                                 // [0xa42f40] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.CheckNoEntry
	// void CheckNoEntry();                                                                                                     // [0xa42f00] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.CheckCondition
	// void CheckCondition(bool bCondition, FString Message);                                                                   // [0xa42e20] Final|Native|Static|Protected|BlueprintCallable 
	// Function /Script/Debug.Log.Bye
	// void Bye(TEnumAsByte<ELoggingOptions> LoggingOption, FName ViewportKeyName, class UObject* ContextObject);               // [0xa42d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Bool
	// void Bool(bool bBoolToTest, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa42ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertValue_Integer
	// bool AssertValue_Integer(int32_t Actual, int32_t Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa42050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertValue_Float
	// bool AssertValue_Float(float Actual, float Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa41d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertValue_DateTime
	// bool AssertValue_DateTime(FDateTime Actual, FDateTime Expected, TEnumAsByte<EDebugLogComparisonMethod> ShouldBe, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa41a40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Vector2D
	// bool AssertNotEqual_Vector2D(FVector2D Actual, FVector2D Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa414a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Vector
	// bool AssertNotEqual_Vector(FVector Actual, FVector Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa41760] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Transform
	// bool AssertNotEqual_Transform(FTransform Actual, FTransform Expected, FString Message, bool bNoScale, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa410c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_String
	// bool AssertNotEqual_String(FString Actual, FString Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa40d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Rotator
	// bool AssertNotEqual_Rotator(FRotator Actual, FRotator Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa40a80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Quat
	// bool AssertNotEqual_Quat(FQuat Actual, FQuat Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa407b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Object
	// bool AssertNotEqual_Object(class UObject* Actual, class UObject* Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa404f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Name
	// bool AssertNotEqual_Name(FName Actual, FName Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa40230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertNotEqual_Color
	// bool AssertNotEqual_Color(FColor Actual, FColor Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3ff70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Vector2D
	// bool AssertEqual_Vector2D(FVector2D Actual, FVector2D Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3f9d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Vector
	// bool AssertEqual_Vector(FVector Actual, FVector Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3fc90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Transform
	// bool AssertEqual_Transform(FTransform Actual, FTransform Expected, FString Message, bool bNoScale, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3f5f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_String
	// bool AssertEqual_String(FString Actual, FString Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3f290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Rotator
	// bool AssertEqual_Rotator(FRotator Actual, FRotator Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3efb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Quat
	// bool AssertEqual_Quat(FQuat Actual, FQuat Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3ece0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Object
	// bool AssertEqual_Object(class UObject* Actual, class UObject* Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3ea20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Name
	// bool AssertEqual_Name(FName Actual, FName Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3e760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Integer
	// bool AssertEqual_Integer(int32_t Actual, int32_t Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3e4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Float
	// bool AssertEqual_Float(float Actual, float Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3e1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_DateTime
	// bool AssertEqual_DateTime(FDateTime Actual, FDateTime Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3df10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Color
	// bool AssertEqual_Color(FColor Actual, FColor Expected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3dc50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Debug.Log.AssertEqual_Bool
	// bool AssertEqual_Bool(bool bActual, bool bExpected, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3d970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Assert_True
	// bool Assert_True(bool bCondition, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa42850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Assert_IsValid
	// bool Assert_IsValid(class UObject* Object, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa425d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Assert_False
	// bool Assert_False(bool bCondition, FString Message, bool bCrashOnFailure, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa42350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Vector2D
	// void Array_Vector2D(TArray<FVector2D> inArray, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3d430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Vector
	// void Array_Vector(TArray<FVector> inArray, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3d6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Transform
	// void Array_Transform(TArray<FTransform> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3d1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Text
	// void Array_Text(TArray<FText> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3cf10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_String
	// void Array_String(TArray<FString> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3cc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Rotator
	// void Array_Rotator(TArray<FRotator> inArray, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3c990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Quat
	// void Array_Quat(TArray<FQuat> inArray, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3c6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Object
	// void Array_Object(TArray<UObject*>& inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3c4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Name
	// void Array_Name(TArray<FName> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3c290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Matrix
	// void Array_Matrix(TArray<FMatrix> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3c040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Int64
	// void Array_Int64(TArray<int64_t> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3bdf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Int32
	// void Array_Int32(TArray<int32_t> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3bba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Float
	// void Array_Float(TArray<float> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3b950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_DateTime
	// void Array_DateTime(TArray<FDateTime> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3b700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Color
	// void Array_Color(TArray<FLinearColor> inArray, bool bCompact, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3b460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Array_Bool
	// void Array_Bool(TArray<bool> inArray, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, class UObject* ContextObject); // [0xa3b220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Debug.Log.Angle
	// void Angle(float InAngleValue, TEnumAsByte<EDebugLogAngularUnit> AngleUnit, bool bConvertValueToInt, FString Prefix, FString Suffix, TEnumAsByte<ELoggingOptions> LoggingOption, float TimeToDisplay, FName ViewportKeyName, class UObject* ContextObject); // [0xa3af50] Final|Native|Static|Public|BlueprintCallable 
};

static_assert(sizeof(UDebugLogLibrarySettings) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(ULog) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UDebugLogLibrarySettings, InfoColor) == 0x002C);
static_assert(offsetof(UDebugLogLibrarySettings, ErrorColor) == 0x0030);
static_assert(offsetof(UDebugLogLibrarySettings, WarningColor) == 0x0034);
static_assert(offsetof(UDebugLogLibrarySettings, SuccessColor) == 0x0038);
static_assert(offsetof(UDebugLogLibrarySettings, DisplaySpecifiersIn) == 0x0091);
static_assert(offsetof(UDebugLogLibrarySettings, DisplayContextIn) == 0x00E9);
