
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/InteractiveToolsFramework.EInputCaptureState
/// Size: 0x01 (1 bytes)
enum class EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin                                                        = 1,
	EInputCaptureState__Continue                                                     = 2,
	EInputCaptureState__End                                                          = 3,
	EInputCaptureState__Ignore                                                       = 4
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
/// Size: 0x01 (1 bytes)
enum class EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin                                                  = 1,
	EInputCaptureRequestType__Ignore                                                 = 2
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
/// Size: 0x01 (1 bytes)
enum class EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None                                                          = 0,
	EInputCaptureSide__Left                                                          = 1,
	EInputCaptureSide__Right                                                         = 2,
	EInputCaptureSide__Both                                                          = 3,
	EInputCaptureSide__Any                                                           = 99
};

/// Enum /Script/InteractiveToolsFramework.EInputDevices
/// Size: 0x02 (2 bytes)
enum class EInputDevices : uint16_t
{
	EInputDevices__None                                                              = 0,
	EInputDevices__Keyboard                                                          = 1,
	EInputDevices__Mouse                                                             = 2,
	EInputDevices__Gamepad                                                           = 4,
	EInputDevices__OculusTouch                                                       = 8,
	EInputDevices__HTCViveWands                                                      = 16,
	EInputDevices__AnySpatialDevice                                                  = 24,
	EInputDevices__TabletFingers                                                     = 1024
};

/// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
/// Size: 0x04 (4 bytes)
enum class ETransformGizmoSubElements : uint32_t
{
	ETransformGizmoSubElements__None                                                 = 0,
	ETransformGizmoSubElements__TranslateAxisX                                       = 2,
	ETransformGizmoSubElements__TranslateAxisY                                       = 4,
	ETransformGizmoSubElements__TranslateAxisZ                                       = 8,
	ETransformGizmoSubElements__TranslateAllAxes                                     = 14,
	ETransformGizmoSubElements__TranslatePlaneXY                                     = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ                                     = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ                                     = 64,
	ETransformGizmoSubElements__TranslateAllPlanes                                   = 112,
	ETransformGizmoSubElements__RotateAxisX                                          = 128,
	ETransformGizmoSubElements__RotateAxisY                                          = 256,
	ETransformGizmoSubElements__RotateAxisZ                                          = 512,
	ETransformGizmoSubElements__RotateAllAxes                                        = 896,
	ETransformGizmoSubElements__ScaleAxisX                                           = 1024,
	ETransformGizmoSubElements__ScaleAxisY                                           = 2048,
	ETransformGizmoSubElements__ScaleAxisZ                                           = 4096,
	ETransformGizmoSubElements__ScaleAllAxes                                         = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ                                         = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ                                         = 16384,
	ETransformGizmoSubElements__ScalePlaneXY                                         = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes                                       = 57344,
	ETransformGizmoSubElements__ScaleUniform                                         = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate                              = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale                          = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale                             = 131070
};

/// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
/// Size: 0x01 (1 bytes)
enum class EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking                                        = 1,
	EToolChangeTrackingMode__UndoToExit                                              = 2,
	EToolChangeTrackingMode__FullUndoRedo                                            = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolSide
/// Size: 0x01 (1 bytes)
enum class EToolSide : uint8_t
{
	EToolSide__Left                                                                  = 1,
	EToolSide__Mouse                                                                 = 1,
	EToolSide__Right                                                                 = 2
};

/// Enum /Script/InteractiveToolsFramework.EViewInteractionState
/// Size: 0x01 (1 bytes)
enum class EViewInteractionState : uint8_t
{
	EViewInteractionState__None                                                      = 0,
	EViewInteractionState__Hovered                                                   = 1,
	EViewInteractionState__Focused                                                   = 2
};

/// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
/// Size: 0x01 (1 bytes)
enum class ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace                                        = 0,
	ESelectedObjectsModificationType__Add                                            = 1,
	ESelectedObjectsModificationType__Remove                                         = 2,
	ESelectedObjectsModificationType__Clear                                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
/// Size: 0x01 (1 bytes)
enum class EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal                                                      = 0,
	EToolMessageLevel__UserMessage                                                   = 1,
	EToolMessageLevel__UserNotification                                              = 2,
	EToolMessageLevel__UserWarning                                                   = 3,
	EToolMessageLevel__UserError                                                     = 4
};

/// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
/// Size: 0x04 (4 bytes)
enum class EToolContextCoordinateSystem : uint32_t
{
	EToolContextCoordinateSystem__World                                              = 0,
	EToolContextCoordinateSystem__Local                                              = 1
};

/// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
/// Size: 0x01 (1 bytes)
enum class EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial                               = 1
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
/// Size: 0x01 (1 bytes)
enum class ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None                                                  = 0,
	ESceneSnapQueryTargetType__MeshVertex                                            = 1,
	ESceneSnapQueryTargetType__MeshEdge                                              = 2,
	ESceneSnapQueryTargetType__Grid                                                  = 4,
	ESceneSnapQueryTargetType__All                                                   = 7
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
/// Size: 0x01 (1 bytes)
enum class ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position                                                    = 1,
	ESceneSnapQueryType__Rotation                                                    = 2
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UInteractiveToolBuilder : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UInteractiveToolPropertySet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UInteractiveToolPropertySet*                 CachedProperties;                                           // 0x0038   (0x0008)  
	bool                                               bIsPropertySetEnabled;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0041   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveTool
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000080) align 8 pad: 0x0000
class UInteractiveTool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0028   (0x0020)  MISSED
	class UInputBehaviorSet*                           InputBehaviors;                                             // 0x0048   (0x0008)  
	TArray<class UObject*>                             ToolPropertyObjects;                                        // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MultiSelectionTool
/// Size: 0x0010 (16 bytes) (0x000080 - 0x000090) align 8 pad: 0x0000
class UMultiSelectionTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleSelectionTool
/// Size: 0x0008 (8 bytes) (0x000080 - 0x000088) align 8 pad: 0x0000
class USingleSelectionTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractionMechanic
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UInteractionMechanic : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor
/// Size: 0x0000 (0 bytes) (0x000220 - 0x000220) align 8 pad: 0x0000
class AInternalToolFrameworkActor : public AActor
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickTool
/// Size: 0x0008 (8 bytes) (0x000080 - 0x000088) align 8 pad: 0x0000
class USingleClickTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointTool
/// Size: 0x0038 (56 bytes) (0x000088 - 0x0000C0) align 8 pad: 0x0000
class UMeshSurfacePointTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0088   (0x0038)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.BrushStampData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 4 pad: 0x0000
struct FBrushStampData
{ 
	unsigned char                                      UnknownData00_2[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BaseBrushTool
/// Size: 0x00F8 (248 bytes) (0x0000C0 - 0x0001B8) align 8 pad: 0x0000
class UBaseBrushTool : public UMeshSurfacePointTool
{ 
public:
	class UBrushBaseProperties*                        BrushProperties;                                            // 0x00C0   (0x0008)  
	bool                                               bInBrushStroke;                                             // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              WorldToLocalScale;                                          // 0x00CC   (0x0004)  
	FBrushStampData                                    LastBrushStamp;                                             // 0x00D0   (0x00A8)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0178   (0x0010)  MISSED
	SDK_UNDEFINED(40,1744) /* TWeakObjectPtr<UClass*> */ __um(PropertyClass);                                      // 0x0188   (0x0028)  
	class UBrushStampIndicator*                        BrushStampIndicator;                                        // 0x01B0   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.BrushBaseProperties
/// Size: 0x0018 (24 bytes) (0x000060 - 0x000078) align 8 pad: 0x0000
class UBrushBaseProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              BrushSize;                                                  // 0x0060   (0x0004)  
	bool                                               bSpecifyRadius;                                             // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              BrushRadius;                                                // 0x0068   (0x0004)  
	float                                              BrushStrength;                                              // 0x006C   (0x0004)  
	float                                              BrushFalloffAmount;                                         // 0x0070   (0x0004)  
	bool                                               bShowStrength;                                              // 0x0074   (0x0001)  
	bool                                               bShowFalloff;                                               // 0x0075   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0076   (0x0002)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UInteractiveGizmoBuilder : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmo
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UInteractiveGizmo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UInputBehaviorSet*                           InputBehaviors;                                             // 0x0030   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.InputBehavior
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UInputBehavior : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000080) align 16 pad: 0x0000
class UAnyButtonInputBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmo
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000F0) align 8 pad: 0x0000
class UAxisAngleGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,1745) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1746) /* TScriptInterface<Class> */ __um(AngleSource);                                        // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1747) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1748) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0078   (0x0010)  
	bool                                               bInInteraction;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FVector                                            RotationOrigin;                                             // 0x008C   (0x000C)  
	FVector                                            RotationAxis;                                               // 0x0098   (0x000C)  
	FVector                                            RotationPlaneX;                                             // 0x00A4   (0x000C)  
	FVector                                            RotationPlaneY;                                             // 0x00B0   (0x000C)  
	FVector                                            InteractionStartPoint;                                      // 0x00BC   (0x000C)  
	FVector                                            InteractionCurPoint;                                        // 0x00C8   (0x000C)  
	float                                              InteractionStartAngle;                                      // 0x00D4   (0x0004)  
	float                                              InteractionCurAngle;                                        // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x14];                                      // 0x00DC   (0x0014)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmo
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000D8) align 8 pad: 0x0000
class UAxisPositionGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,1749) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1750) /* TScriptInterface<Class> */ __um(ParameterSource);                                    // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1751) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1752) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0078   (0x0010)  
	bool                                               bEnableSignedAxis;                                          // 0x0088   (0x0001)  
	bool                                               bInInteraction;                                             // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	FVector                                            InteractionOrigin;                                          // 0x008C   (0x000C)  
	FVector                                            InteractionAxis;                                            // 0x0098   (0x000C)  
	FVector                                            InteractionStartPoint;                                      // 0x00A4   (0x000C)  
	FVector                                            InteractionCurPoint;                                        // 0x00B0   (0x000C)  
	float                                              InteractionStartParameter;                                  // 0x00BC   (0x0004)  
	float                                              InteractionCurParameter;                                    // 0x00C0   (0x0004)  
	float                                              ParameterSign;                                              // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UGizmoConstantAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x000C)  
	FVector                                            Direction;                                                  // 0x003C   (0x000C)  
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000060) align 8 pad: 0x0000
class UGizmoConstantFrameAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x000C)  
	FVector                                            Direction;                                                  // 0x003C   (0x000C)  
	FVector                                            TangentX;                                                   // 0x0048   (0x000C)  
	FVector                                            TangentY;                                                   // 0x0054   (0x000C)  
};

/// Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UGizmoWorldAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x000C)  
	int32_t                                            AxisIndex;                                                  // 0x003C   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class UGizmoComponentAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class USceneComponent*                             Component;                                                  // 0x0030   (0x0008)  
	int32_t                                            AxisIndex;                                                  // 0x0038   (0x0004)  
	bool                                               bLocalAxes;                                                 // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicator
/// Size: 0x0078 (120 bytes) (0x000038 - 0x0000B0) align 8 pad: 0x0000
class UBrushStampIndicator : public UInteractiveGizmo
{ 
public:
	float                                              BrushRadius;                                                // 0x0038   (0x0004)  
	float                                              BrushFalloff;                                               // 0x003C   (0x0004)  
	FVector                                            BrushPosition;                                              // 0x0040   (0x000C)  
	FVector                                            BrushNormal;                                                // 0x004C   (0x000C)  
	bool                                               bDrawIndicatorLines;                                        // 0x0058   (0x0001)  
	bool                                               bDrawRadiusCircle;                                          // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	int32_t                                            SampleStepCount;                                            // 0x005C   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0060   (0x0010)  
	float                                              LineThickness;                                              // 0x0070   (0x0004)  
	bool                                               bDepthTested;                                               // 0x0074   (0x0001)  
	bool                                               bDrawSecondaryLines;                                        // 0x0075   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0076   (0x0002)  MISSED
	float                                              SecondaryLineThickness;                                     // 0x0078   (0x0004)  
	FLinearColor                                       SecondaryLineColor;                                         // 0x007C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	class UPrimitiveComponent*                         AttachedComponent;                                          // 0x0090   (0x0008)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0098   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ClickDragInputBehavior
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x000140) align 16 pad: 0x0000
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0080   (0x00A0)  MISSED
	bool                                               bUpdateModifiersDuringDrag;                                 // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0121   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000280) align 16 pad: 0x0000
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0140   (0x0140)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ClickDragToolBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UClickDragToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragTool
/// Size: 0x0008 (8 bytes) (0x000080 - 0x000088) align 8 pad: 0x0000
class UClickDragTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoActor
/// Size: 0x0000 (0 bytes) (0x000220 - 0x000220) align 8 pad: 0x0000
class AGizmoActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseComponent
/// Size: 0x0020 (32 bytes) (0x000450 - 0x000470) align 16 pad: 0x0000
class UGizmoBaseComponent : public UPrimitiveComponent
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0450   (0x0010)  
	float                                              HoverSizeMultiplier;                                        // 0x0460   (0x0004)  
	float                                              PixelHitDistanceThreshold;                                  // 0x0464   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0468   (0x0008)  MISSED


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// void UpdateWorldLocalState(bool bWorldIn);                                                                               // [0x4322370] Final|Native|Public  
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// void UpdateHoverState(bool bHoveringIn);                                                                                 // [0x43222e0] Final|Native|Public  
};

/// Class /Script/InteractiveToolsFramework.GizmoArrowComponent
/// Size: 0x0020 (32 bytes) (0x000470 - 0x000490) align 16 pad: 0x0000
class UGizmoArrowComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Direction;                                                  // 0x0470   (0x000C)  
	float                                              Gap;                                                        // 0x047C   (0x0004)  
	float                                              Length;                                                     // 0x0480   (0x0004)  
	float                                              Thickness;                                                  // 0x0484   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0488   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBoxComponent
/// Size: 0x0040 (64 bytes) (0x000470 - 0x0004B0) align 16 pad: 0x0000
class UGizmoBoxComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Origin;                                                     // 0x0470   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x047C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0480   (0x0010)  
	FVector                                            Dimensions;                                                 // 0x0490   (0x000C)  
	float                                              LineThickness;                                              // 0x049C   (0x0004)  
	bool                                               bRemoveHiddenLines;                                         // 0x04A0   (0x0001)  
	bool                                               bEnableAxisFlip;                                            // 0x04A1   (0x0001)  
	unsigned char                                      UnknownData01_7[0xE];                                       // 0x04A2   (0x000E)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoCircleComponent
/// Size: 0x0020 (32 bytes) (0x000470 - 0x000490) align 16 pad: 0x0000
class UGizmoCircleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x0470   (0x000C)  
	float                                              Radius;                                                     // 0x047C   (0x0004)  
	float                                              Thickness;                                                  // 0x0480   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0484   (0x0004)  
	bool                                               bViewAligned;                                               // 0x0488   (0x0001)  
	bool                                               bOnlyAllowFrontFacingHits;                                  // 0x0489   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x048A   (0x0006)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformSource
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGizmoTransformSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.SetTransform
	// void SetTransform(FTransform& NewTransform);                                                                             // [0x4322200] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.GetTransform
	// FTransform GetTransform();                                                                                               // [0x4322070] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisSource
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGizmoAxisSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	// bool HasTangentVectors();                                                                                                // [0x16da1d0] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	// void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);                                                      // [0x4321f80] Native|Public|HasOutParms|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	// FVector GetOrigin();                                                                                                     // [0x208dd70] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetDirection
	// FVector GetDirection();                                                                                                  // [0x20fba20] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoClickTarget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGizmoClickTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	// void UpdateHoverState(bool bHovering);                                                                                   // [0x16d8b40] Native|Public|Const  
};

/// Class /Script/InteractiveToolsFramework.GizmoStateTarget
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGizmoStateTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	// void EndUpdate();                                                                                                        // [0x16d9730] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	// void BeginUpdate();                                                                                                      // [0x16d86e0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGizmoFloatParameterSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	// void SetParameter(float NewValue);                                                                                       // [0x43220e0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	// float GetParameter();                                                                                                    // [0x203cf50] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	// void EndModify();                                                                                                        // [0x4321f20] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	// void BeginModify();                                                                                                      // [0x16d9730] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UGizmoVec2ParameterSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	// void SetParameter(FVector2D& NewValue);                                                                                  // [0x4322170] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	// FVector2D GetParameter();                                                                                                // [0x4321f40] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	// void EndModify();                                                                                                        // [0x4321f20] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	// void BeginModify();                                                                                                      // [0x16d9730] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent
/// Size: 0x0030 (48 bytes) (0x000470 - 0x0004A0) align 16 pad: 0x0000
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x0470   (0x000C)  
	float                                              HandleSize;                                                 // 0x047C   (0x0004)  
	float                                              Thickness;                                                  // 0x0480   (0x0004)  
	FVector                                            Direction;                                                  // 0x0484   (0x000C)  
	float                                              Length;                                                     // 0x0490   (0x0004)  
	bool                                               bImageScale;                                                // 0x0494   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0495   (0x000B)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoRectangleComponent
/// Size: 0x0030 (48 bytes) (0x000470 - 0x0004A0) align 16 pad: 0x0000
class UGizmoRectangleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            DirectionX;                                                 // 0x0470   (0x000C)  
	FVector                                            DirectionY;                                                 // 0x047C   (0x000C)  
	float                                              OffsetX;                                                    // 0x0488   (0x0004)  
	float                                              OffsetY;                                                    // 0x048C   (0x0004)  
	float                                              LengthX;                                                    // 0x0490   (0x0004)  
	float                                              LengthY;                                                    // 0x0494   (0x0004)  
	float                                              Thickness;                                                  // 0x0498   (0x0004)  
	char                                               SegmentFlags;                                               // 0x049C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x049D   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
/// Size: 0x0088 (136 bytes) (0x000028 - 0x0000B0) align 16 pad: 0x0000
class UGizmoLambdaHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0028   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000080) align 16 pad: 0x0000
class UGizmoComponentHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UPrimitiveComponent*                         Component;                                                  // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.BehaviorInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 pad: 0x0000
struct FBehaviorInfo
{ 
	class UInputBehavior*                              Behavior;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0008   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSet
/// Size: 0x0010 (16 bytes) (0x000028 - 0x000038) align 8 pad: 0x0000
class UInputBehaviorSet : public UObject
{ 
public:
	TArray<FBehaviorInfo>                              Behaviors;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSource
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UInputBehaviorSource : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InputRouter
/// Size: 0x0088 (136 bytes) (0x000028 - 0x0000B0) align 8 pad: 0x0000
class UInputRouter : public UObject
{ 
public:
	bool                                               bAutoInvalidateOnHover;                                     // 0x0028   (0x0001)  
	bool                                               bAutoInvalidateOnCapture;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x002A   (0x000E)  MISSED
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                       // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.ActiveGizmo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 pad: 0x0000
struct FActiveGizmo
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoManager
/// Size: 0x0090 (144 bytes) (0x000028 - 0x0000B8) align 8 pad: 0x0000
class UInteractiveGizmoManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FActiveGizmo>                               ActiveGizmos;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0040   (0x0018)  MISSED
	SDK_UNDEFINED(80,1753) /* TMap<FString, UInteractiveGizmoBuilder*> */ __um(GizmoBuilders);                     // 0x0058   (0x0050)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UToolContextTransactionProvider : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolManager
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000138) align 8 pad: 0x0000
class UInteractiveToolManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UInteractiveTool*                            ActiveLeftTool;                                             // 0x0030   (0x0008)  
	class UInteractiveTool*                            ActiveRightTool;                                            // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED
	SDK_UNDEFINED(80,1754) /* TMap<FString, UInteractiveToolBuilder*> */ __um(ToolBuilders);                       // 0x0090   (0x0050)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x00E0   (0x0058)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolFrameworkComponent
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UToolFrameworkComponent : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolsContext
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000098) align 8 pad: 0x0000
class UInteractiveToolsContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UInputRouter*                                InputRouter;                                                // 0x0058   (0x0008)  
	class UInteractiveToolManager*                     ToolManager;                                                // 0x0060   (0x0008)  
	class UInteractiveGizmoManager*                    GizmoManager;                                               // 0x0068   (0x0008)  
	SDK_UNDEFINED(40,1755) /* TWeakObjectPtr<UClass*> */ __um(ToolManagerClass);                                   // 0x0070   (0x0028)  
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoActor
/// Size: 0x0018 (24 bytes) (0x000220 - 0x000238) align 8 pad: 0x0000
class AIntervalGizmoActor : public AGizmoActor
{ 
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                        // 0x0220   (0x0008)  
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                      // 0x0228   (0x0008)  
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                   // 0x0230   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder
/// Size: 0x0098 (152 bytes) (0x000028 - 0x0000C0) align 16 pad: 0x0000
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0028   (0x0098)  MISSED
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmo
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x000130) align 16 pad: 0x0000
class UIntervalGizmo : public UInteractiveGizmo
{ 
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	class UTransformProxy*                             TransformProxy;                                             // 0x0050   (0x0008)  
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                           // 0x0058   (0x0010)  
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                               // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0078   (0x0018)  MISSED
	class UGizmoComponentAxisSource*                   AxisYSource;                                                // 0x0090   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisZSource;                                                // 0x0098   (0x0008)  
	unsigned char                                      UnknownData02_7[0x90];                                      // 0x00A0   (0x0090)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UGizmoBaseFloatParameterSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
/// Size: 0x0018 (24 bytes) (0x000048 - 0x000060) align 8 pad: 0x0000
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	SDK_UNDEFINED(16,1756) /* TScriptInterface<Class> */ __um(FloatParameterSource);                               // 0x0048   (0x0010)  
	float                                              MinParameter;                                               // 0x0058   (0x0004)  
	float                                              MaxParameter;                                               // 0x005C   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x000110) align 16 pad: 0x0000
class UKeyAsModifierInputBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0030   (0x00E0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MouseHoverBehavior
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000098) align 8 pad: 0x0000
class UMouseHoverBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x000130) align 16 pad: 0x0000
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0080   (0x00B0)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoFloatParameterChange
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 pad: 0x0000
struct FGizmoFloatParameterChange
{ 
	float                                              InitialValue;                                               // 0x0000   (0x0004)  
	float                                              CurrentValue;                                               // 0x0004   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	float                                              Value;                                                      // 0x0048   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x004C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UGizmoBaseVec2ParameterSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 pad: 0x0000
struct FGizmoVec2ParameterChange
{ 
	FVector2D                                          InitialValue;                                               // 0x0000   (0x0008)  
	FVector2D                                          CurrentValue;                                               // 0x0008   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
/// Size: 0x0018 (24 bytes) (0x000048 - 0x000060) align 8 pad: 0x0000
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	FVector2D                                          Value;                                                      // 0x0048   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0050   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
/// Size: 0x00C8 (200 bytes) (0x000048 - 0x000110) align 16 pad: 0x0000
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0048   (0x0048)  MISSED
	SDK_UNDEFINED(16,1757) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1758) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              Parameter;                                                  // 0x00B0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00B4   (0x0008)  
	FVector                                            CurTranslationAxis;                                         // 0x00BC   (0x000C)  
	FVector                                            CurTranslationOrigin;                                       // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00E0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
/// Size: 0x00E8 (232 bytes) (0x000048 - 0x000130) align 16 pad: 0x0000
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0048   (0x0048)  MISSED
	SDK_UNDEFINED(16,1759) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1760) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	FVector2D                                          Parameter;                                                  // 0x00B0   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x00B8   (0x0010)  
	FVector                                            CurTranslationOrigin;                                       // 0x00C8   (0x000C)  
	FVector                                            CurTranslationNormal;                                       // 0x00D4   (0x000C)  
	FVector                                            CurTranslationAxisX;                                        // 0x00E0   (0x000C)  
	FVector                                            CurTranslationAxisY;                                        // 0x00EC   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0100   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
/// Size: 0x00C8 (200 bytes) (0x000048 - 0x000110) align 16 pad: 0x0000
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0048   (0x0048)  MISSED
	SDK_UNDEFINED(16,1761) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1762) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              Angle;                                                      // 0x00B0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00B4   (0x0008)  
	FVector                                            CurRotationAxis;                                            // 0x00BC   (0x000C)  
	FVector                                            CurRotationOrigin;                                          // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00E0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000F0) align 16 pad: 0x0000
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	SDK_UNDEFINED(16,1763) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1764) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0058   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0068   (0x0004)  
	FVector2D                                          Parameter;                                                  // 0x006C   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0074   (0x0010)  
	FVector                                            CurScaleOrigin;                                             // 0x0084   (0x000C)  
	FVector                                            CurScaleNormal;                                             // 0x0090   (0x000C)  
	FVector                                            CurScaleAxisX;                                              // 0x009C   (0x000C)  
	FVector                                            CurScaleAxisY;                                              // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x00C0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
/// Size: 0x0078 (120 bytes) (0x000048 - 0x0000C0) align 16 pad: 0x0000
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	SDK_UNDEFINED(16,1765) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1766) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0058   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0068   (0x0004)  
	float                                              Parameter;                                                  // 0x006C   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x0070   (0x0008)  
	FVector                                            CurScaleAxis;                                               // 0x0078   (0x000C)  
	FVector                                            CurScaleOrigin;                                             // 0x0084   (0x000C)  
	FTransform                                         InitialTransform;                                           // 0x0090   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
/// Size: 0x00E8 (232 bytes) (0x000048 - 0x000130) align 16 pad: 0x0000
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0048   (0x0048)  MISSED
	SDK_UNDEFINED(16,1767) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1768) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x00B0   (0x0004)  
	FVector2D                                          Parameter;                                                  // 0x00B4   (0x0008)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x00BC   (0x0010)  
	FVector                                            CurScaleOrigin;                                             // 0x00CC   (0x000C)  
	FVector                                            CurScaleNormal;                                             // 0x00D8   (0x000C)  
	FVector                                            CurScaleAxisX;                                              // 0x00E4   (0x000C)  
	FVector                                            CurScaleAxisY;                                              // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0100   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmo
/// Size: 0x00C8 (200 bytes) (0x000038 - 0x000100) align 8 pad: 0x0000
class UPlanePositionGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,1769) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1770) /* TScriptInterface<Class> */ __um(ParameterSource);                                    // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1771) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1772) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0078   (0x0010)  
	bool                                               bEnableSignedAxis;                                          // 0x0088   (0x0001)  
	bool                                               bFlipX;                                                     // 0x0089   (0x0001)  
	bool                                               bFlipY;                                                     // 0x008A   (0x0001)  
	bool                                               bInInteraction;                                             // 0x008B   (0x0001)  
	FVector                                            InteractionOrigin;                                          // 0x008C   (0x000C)  
	FVector                                            InteractionNormal;                                          // 0x0098   (0x000C)  
	FVector                                            InteractionAxisX;                                           // 0x00A4   (0x000C)  
	FVector                                            InteractionAxisY;                                           // 0x00B0   (0x000C)  
	FVector                                            InteractionStartPoint;                                      // 0x00BC   (0x000C)  
	FVector                                            InteractionCurPoint;                                        // 0x00C8   (0x000C)  
	FVector2D                                          InteractionStartParameter;                                  // 0x00D4   (0x0008)  
	FVector2D                                          InteractionCurParameter;                                    // 0x00DC   (0x0008)  
	FVector2D                                          ParameterSigns;                                             // 0x00E4   (0x0008)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x00EC   (0x0014)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SelectionSet
/// Size: 0x0018 (24 bytes) (0x000028 - 0x000040) align 8 pad: 0x0000
class USelectionSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSelectionSet
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000080) align 8 pad: 0x0000
class UMeshSelectionSet : public USelectionSet
{ 
public:
	TArray<int32_t>                                    Vertices;                                                   // 0x0040   (0x0010)  
	TArray<int32_t>                                    Edges;                                                      // 0x0050   (0x0010)  
	TArray<int32_t>                                    Faces;                                                      // 0x0060   (0x0010)  
	TArray<int32_t>                                    Groups;                                                     // 0x0070   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.SingleClickInputBehavior
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x000130) align 16 pad: 0x0000
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0080   (0x0040)  MISSED
	bool                                               HitTestOnRelease;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6F];                                      // 0x00C1   (0x006F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickToolBuilder
/// Size: 0x0000 (0 bytes) (0x000028 - 0x000028) align 8 pad: 0x0000
class USingleClickToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoNilStateTarget
/// Size: 0x0008 (8 bytes) (0x000028 - 0x000030) align 8 pad: 0x0000
class UGizmoNilStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
/// Size: 0x0088 (136 bytes) (0x000028 - 0x0000B0) align 16 pad: 0x0000
class UGizmoLambdaStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0028   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000058) align 8 pad: 0x0000
class UGizmoObjectModifyStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000E0) align 16 pad: 0x0000
class UGizmoTransformChangeStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0028   (0x0028)  MISSED
	SDK_UNDEFINED(16,1773) /* TScriptInterface<Class> */ __um(TransactionManager);                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x80];                                      // 0x0060   (0x0080)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformGizmoActor
/// Size: 0x0080 (128 bytes) (0x000220 - 0x0002A0) align 8 pad: 0x0000
class ATransformGizmoActor : public AGizmoActor
{ 
public:
	class UPrimitiveComponent*                         TranslateX;                                                 // 0x0220   (0x0008)  
	class UPrimitiveComponent*                         TranslateY;                                                 // 0x0228   (0x0008)  
	class UPrimitiveComponent*                         TranslateZ;                                                 // 0x0230   (0x0008)  
	class UPrimitiveComponent*                         TranslateYZ;                                                // 0x0238   (0x0008)  
	class UPrimitiveComponent*                         TranslateXZ;                                                // 0x0240   (0x0008)  
	class UPrimitiveComponent*                         TranslateXY;                                                // 0x0248   (0x0008)  
	class UPrimitiveComponent*                         RotateX;                                                    // 0x0250   (0x0008)  
	class UPrimitiveComponent*                         RotateY;                                                    // 0x0258   (0x0008)  
	class UPrimitiveComponent*                         RotateZ;                                                    // 0x0260   (0x0008)  
	class UPrimitiveComponent*                         UniformScale;                                               // 0x0268   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleX;                                                 // 0x0270   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleY;                                                 // 0x0278   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleZ;                                                 // 0x0280   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleYZ;                                               // 0x0288   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleXZ;                                               // 0x0290   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleXY;                                               // 0x0298   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.TransformGizmoBuilder
/// Size: 0x0098 (152 bytes) (0x000028 - 0x0000C0) align 16 pad: 0x0000
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0028   (0x0098)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformGizmo
/// Size: 0x0168 (360 bytes) (0x000038 - 0x0001A0) align 16 pad: 0x0000
class UTransformGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	class UTransformProxy*                             ActiveTarget;                                               // 0x0040   (0x0008)  
	bool                                               bSnapToWorldGrid;                                           // 0x0048   (0x0001)  
	bool                                               bGridSizeIsExplicit;                                        // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	FVector                                            ExplicitGridSize;                                           // 0x004C   (0x000C)  
	bool                                               bRotationGridSizeIsExplicit;                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	FRotator                                           ExplicitRotationGridSize;                                   // 0x005C   (0x000C)  
	bool                                               bSnapToWorldRotGrid;                                        // 0x0068   (0x0001)  
	bool                                               bUseContextCoordinateSystem;                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                    // 0x006C   (0x0004)  
	unsigned char                                      UnknownData04_6[0x90];                                      // 0x0070   (0x0090)  MISSED
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                           // 0x0100   (0x0010)  
	TArray<class UPrimitiveComponent*>                 NonuniformScaleComponents;                                  // 0x0110   (0x0010)  
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                               // 0x0120   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0130   (0x0010)  MISSED
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                           // 0x0140   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisXSource;                                                // 0x0148   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisYSource;                                                // 0x0150   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisZSource;                                                // 0x0158   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                            // 0x0160   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                            // 0x0168   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                            // 0x0170   (0x0008)  
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x0178   (0x0008)  
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                      // 0x0180   (0x0008)  
	unsigned char                                      UnknownData06_7[0x18];                                      // 0x0188   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformProxy
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000F0) align 16 pad: 0x0000
class UTransformProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0028   (0x0048)  MISSED
	bool                                               bRotatePerObject;                                           // 0x0070   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1E];                                      // 0x0072   (0x001E)  MISSED
	FTransform                                         SharedTransform;                                            // 0x0090   (0x0030)  
	FTransform                                         InitialSharedTransform;                                     // 0x00C0   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource
/// Size: 0x0020 (32 bytes) (0x000028 - 0x000048) align 8 pad: 0x0000
class UGizmoBaseTransformSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
/// Size: 0x0010 (16 bytes) (0x000048 - 0x000058) align 8 pad: 0x0000
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{ 
public:
	class USceneComponent*                             Component;                                                  // 0x0048   (0x0008)  
	bool                                               bModifyComponentOnTransform;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource
/// Size: 0x0098 (152 bytes) (0x000048 - 0x0000E0) align 16 pad: 0x0000
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{ 
public:
	SDK_UNDEFINED(16,1774) /* TScriptInterface<Class> */ __um(ChildTransformSource);                               // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x88];                                      // 0x0058   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
/// Size: 0x0008 (8 bytes) (0x000048 - 0x000050) align 8 pad: 0x0000
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{ 
public:
	class UTransformProxy*                             Proxy;                                                      // 0x0048   (0x0008)  
};

/// Struct /Script/InteractiveToolsFramework.InputRayHit
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 pad: 0x0000
struct FInputRayHit
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

static_assert(sizeof(UInteractiveToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolPropertySet) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UInteractiveTool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UMultiSelectionTool) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(USingleSelectionTool) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UInteractionMechanic) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(AInternalToolFrameworkActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(USingleClickTool) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UMeshSurfacePointToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMeshSurfacePointTool) == 0x00C0); // 192 bytes (0x000088 - 0x0000C0)
static_assert(sizeof(FBrushStampData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(UBaseBrushTool) == 0x01B8); // 440 bytes (0x0000C0 - 0x0001B8)
static_assert(sizeof(UBrushBaseProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UInteractiveGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveGizmo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputBehavior) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAnyButtonInputBehavior) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UAxisAngleGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAxisAngleGizmo) == 0x00F0); // 240 bytes (0x000038 - 0x0000F0)
static_assert(sizeof(UAxisPositionGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAxisPositionGizmo) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(UGizmoConstantAxisSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGizmoConstantFrameAxisSource) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UGizmoWorldAxisSource) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGizmoComponentAxisSource) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UBrushStampIndicatorBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBrushStampIndicator) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UClickDragInputBehavior) == 0x0140); // 320 bytes (0x000080 - 0x000140)
static_assert(sizeof(ULocalClickDragInputBehavior) == 0x0280); // 640 bytes (0x000140 - 0x000280)
static_assert(sizeof(UClickDragToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClickDragTool) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(AGizmoActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UGizmoBaseComponent) == 0x0470); // 1136 bytes (0x000450 - 0x000470)
static_assert(sizeof(UGizmoArrowComponent) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UGizmoBoxComponent) == 0x04B0); // 1200 bytes (0x000470 - 0x0004B0)
static_assert(sizeof(UGizmoCircleComponent) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UGizmoTransformSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoAxisSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoClickTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoStateTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoFloatParameterSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoVec2ParameterSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoLineHandleComponent) == 0x04A0); // 1184 bytes (0x000470 - 0x0004A0)
static_assert(sizeof(UGizmoRectangleComponent) == 0x04A0); // 1184 bytes (0x000470 - 0x0004A0)
static_assert(sizeof(UGizmoLambdaHitTarget) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UGizmoComponentHitTarget) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FBehaviorInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UInputBehaviorSet) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputBehaviorSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputRouter) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FActiveGizmo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UInteractiveGizmoManager) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(UToolContextTransactionProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolManager) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(UToolFrameworkComponent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolsContext) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(AIntervalGizmoActor) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(UIntervalGizmoBuilder) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UIntervalGizmo) == 0x0130); // 304 bytes (0x000038 - 0x000130)
static_assert(sizeof(UGizmoBaseFloatParameterSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGizmoAxisIntervalParameterSource) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UKeyAsModifierInputBehavior) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UMouseHoverBehavior) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UMultiClickSequenceInputBehavior) == 0x0130); // 304 bytes (0x000080 - 0x000130)
static_assert(sizeof(FGizmoFloatParameterChange) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UGizmoLocalFloatParameterSource) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UGizmoBaseVec2ParameterSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGizmoVec2ParameterChange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGizmoLocalVec2ParameterSource) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UGizmoAxisTranslationParameterSource) == 0x0110); // 272 bytes (0x000048 - 0x000110)
static_assert(sizeof(UGizmoPlaneTranslationParameterSource) == 0x0130); // 304 bytes (0x000048 - 0x000130)
static_assert(sizeof(UGizmoAxisRotationParameterSource) == 0x0110); // 272 bytes (0x000048 - 0x000110)
static_assert(sizeof(UGizmoUniformScaleParameterSource) == 0x00F0); // 240 bytes (0x000048 - 0x0000F0)
static_assert(sizeof(UGizmoAxisScaleParameterSource) == 0x00C0); // 192 bytes (0x000048 - 0x0000C0)
static_assert(sizeof(UGizmoPlaneScaleParameterSource) == 0x0130); // 304 bytes (0x000048 - 0x000130)
static_assert(sizeof(UPlanePositionGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPlanePositionGizmo) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(USelectionSet) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMeshSelectionSet) == 0x0080); // 128 bytes (0x000040 - 0x000080)
static_assert(sizeof(USingleClickInputBehavior) == 0x0130); // 304 bytes (0x000080 - 0x000130)
static_assert(sizeof(USingleClickToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoNilStateTarget) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGizmoLambdaStateTarget) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UGizmoObjectModifyStateTarget) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGizmoTransformChangeStateTarget) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(ATransformGizmoActor) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(sizeof(UTransformGizmoBuilder) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UTransformGizmo) == 0x01A0); // 416 bytes (0x000038 - 0x0001A0)
static_assert(sizeof(UTransformProxy) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UGizmoBaseTransformSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGizmoComponentWorldTransformSource) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UGizmoScaledTransformSource) == 0x00E0); // 224 bytes (0x000048 - 0x0000E0)
static_assert(sizeof(UGizmoTransformProxyTransformSource) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FInputRayHit) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(UInteractiveToolPropertySet, CachedProperties) == 0x0038);
static_assert(offsetof(UInteractiveTool, InputBehaviors) == 0x0048);
static_assert(offsetof(UInteractiveTool, ToolPropertyObjects) == 0x0050);
static_assert(offsetof(UBaseBrushTool, BrushProperties) == 0x00C0);
static_assert(offsetof(UBaseBrushTool, LastBrushStamp) == 0x00D0);
static_assert(offsetof(UBaseBrushTool, BrushStampIndicator) == 0x01B0);
static_assert(offsetof(UInteractiveGizmo, InputBehaviors) == 0x0030);
static_assert(offsetof(UAxisAngleGizmo, RotationOrigin) == 0x008C);
static_assert(offsetof(UAxisAngleGizmo, RotationAxis) == 0x0098);
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneX) == 0x00A4);
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneY) == 0x00B0);
static_assert(offsetof(UAxisAngleGizmo, InteractionStartPoint) == 0x00BC);
static_assert(offsetof(UAxisAngleGizmo, InteractionCurPoint) == 0x00C8);
static_assert(offsetof(UAxisPositionGizmo, InteractionOrigin) == 0x008C);
static_assert(offsetof(UAxisPositionGizmo, InteractionAxis) == 0x0098);
static_assert(offsetof(UAxisPositionGizmo, InteractionStartPoint) == 0x00A4);
static_assert(offsetof(UAxisPositionGizmo, InteractionCurPoint) == 0x00B0);
static_assert(offsetof(UGizmoConstantAxisSource, Origin) == 0x0030);
static_assert(offsetof(UGizmoConstantAxisSource, Direction) == 0x003C);
static_assert(offsetof(UGizmoConstantFrameAxisSource, Origin) == 0x0030);
static_assert(offsetof(UGizmoConstantFrameAxisSource, Direction) == 0x003C);
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentX) == 0x0048);
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentY) == 0x0054);
static_assert(offsetof(UGizmoWorldAxisSource, Origin) == 0x0030);
static_assert(offsetof(UGizmoComponentAxisSource, Component) == 0x0030);
static_assert(offsetof(UBrushStampIndicator, BrushPosition) == 0x0040);
static_assert(offsetof(UBrushStampIndicator, BrushNormal) == 0x004C);
static_assert(offsetof(UBrushStampIndicator, LineColor) == 0x0060);
static_assert(offsetof(UBrushStampIndicator, SecondaryLineColor) == 0x007C);
static_assert(offsetof(UBrushStampIndicator, AttachedComponent) == 0x0090);
static_assert(offsetof(UGizmoBaseComponent, Color) == 0x0450);
static_assert(offsetof(UGizmoArrowComponent, Direction) == 0x0470);
static_assert(offsetof(UGizmoBoxComponent, Origin) == 0x0470);
static_assert(offsetof(UGizmoBoxComponent, Rotation) == 0x0480);
static_assert(offsetof(UGizmoBoxComponent, Dimensions) == 0x0490);
static_assert(offsetof(UGizmoCircleComponent, Normal) == 0x0470);
static_assert(offsetof(UGizmoLineHandleComponent, Normal) == 0x0470);
static_assert(offsetof(UGizmoLineHandleComponent, Direction) == 0x0484);
static_assert(offsetof(UGizmoRectangleComponent, DirectionX) == 0x0470);
static_assert(offsetof(UGizmoRectangleComponent, DirectionY) == 0x047C);
static_assert(offsetof(UGizmoComponentHitTarget, Component) == 0x0030);
static_assert(offsetof(FBehaviorInfo, Behavior) == 0x0000);
static_assert(offsetof(UInputBehaviorSet, Behaviors) == 0x0028);
static_assert(offsetof(UInputRouter, ActiveInputBehaviors) == 0x0038);
static_assert(offsetof(UInteractiveGizmoManager, ActiveGizmos) == 0x0030);
static_assert(offsetof(UInteractiveToolManager, ActiveLeftTool) == 0x0030);
static_assert(offsetof(UInteractiveToolManager, ActiveRightTool) == 0x0038);
static_assert(offsetof(UInteractiveToolsContext, InputRouter) == 0x0058);
static_assert(offsetof(UInteractiveToolsContext, ToolManager) == 0x0060);
static_assert(offsetof(UInteractiveToolsContext, GizmoManager) == 0x0068);
static_assert(offsetof(AIntervalGizmoActor, UpIntervalComponent) == 0x0220);
static_assert(offsetof(AIntervalGizmoActor, DownIntervalComponent) == 0x0228);
static_assert(offsetof(AIntervalGizmoActor, ForwardIntervalComponent) == 0x0230);
static_assert(offsetof(UIntervalGizmo, StateTarget) == 0x0038);
static_assert(offsetof(UIntervalGizmo, TransformProxy) == 0x0050);
static_assert(offsetof(UIntervalGizmo, ActiveComponents) == 0x0058);
static_assert(offsetof(UIntervalGizmo, ActiveGizmos) == 0x0068);
static_assert(offsetof(UIntervalGizmo, AxisYSource) == 0x0090);
static_assert(offsetof(UIntervalGizmo, AxisZSource) == 0x0098);
static_assert(offsetof(UGizmoLocalFloatParameterSource, LastChange) == 0x004C);
static_assert(offsetof(FGizmoVec2ParameterChange, InitialValue) == 0x0000);
static_assert(offsetof(FGizmoVec2ParameterChange, CurrentValue) == 0x0008);
static_assert(offsetof(UGizmoLocalVec2ParameterSource, Value) == 0x0048);
static_assert(offsetof(UGizmoLocalVec2ParameterSource, LastChange) == 0x0050);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, LastChange) == 0x00B4);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationAxis) == 0x00BC);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationOrigin) == 0x00C8);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, InitialTransform) == 0x00E0);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, Parameter) == 0x00B0);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, LastChange) == 0x00B8);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationOrigin) == 0x00C8);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationNormal) == 0x00D4);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisX) == 0x00E0);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisY) == 0x00EC);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, InitialTransform) == 0x0100);
static_assert(offsetof(UGizmoAxisRotationParameterSource, LastChange) == 0x00B4);
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationAxis) == 0x00BC);
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationOrigin) == 0x00C8);
static_assert(offsetof(UGizmoAxisRotationParameterSource, InitialTransform) == 0x00E0);
static_assert(offsetof(UGizmoUniformScaleParameterSource, Parameter) == 0x006C);
static_assert(offsetof(UGizmoUniformScaleParameterSource, LastChange) == 0x0074);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleOrigin) == 0x0084);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleNormal) == 0x0090);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisX) == 0x009C);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisY) == 0x00A8);
static_assert(offsetof(UGizmoUniformScaleParameterSource, InitialTransform) == 0x00C0);
static_assert(offsetof(UGizmoAxisScaleParameterSource, LastChange) == 0x0070);
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleAxis) == 0x0078);
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleOrigin) == 0x0084);
static_assert(offsetof(UGizmoAxisScaleParameterSource, InitialTransform) == 0x0090);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, Parameter) == 0x00B4);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, LastChange) == 0x00BC);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleOrigin) == 0x00CC);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleNormal) == 0x00D8);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisX) == 0x00E4);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisY) == 0x00F0);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, InitialTransform) == 0x0100);
static_assert(offsetof(UPlanePositionGizmo, InteractionOrigin) == 0x008C);
static_assert(offsetof(UPlanePositionGizmo, InteractionNormal) == 0x0098);
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisX) == 0x00A4);
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisY) == 0x00B0);
static_assert(offsetof(UPlanePositionGizmo, InteractionStartPoint) == 0x00BC);
static_assert(offsetof(UPlanePositionGizmo, InteractionCurPoint) == 0x00C8);
static_assert(offsetof(UPlanePositionGizmo, InteractionStartParameter) == 0x00D4);
static_assert(offsetof(UPlanePositionGizmo, InteractionCurParameter) == 0x00DC);
static_assert(offsetof(UPlanePositionGizmo, ParameterSigns) == 0x00E4);
static_assert(offsetof(UMeshSelectionSet, Vertices) == 0x0040);
static_assert(offsetof(UMeshSelectionSet, Edges) == 0x0050);
static_assert(offsetof(UMeshSelectionSet, Faces) == 0x0060);
static_assert(offsetof(UMeshSelectionSet, Groups) == 0x0070);
static_assert(offsetof(ATransformGizmoActor, TranslateX) == 0x0220);
static_assert(offsetof(ATransformGizmoActor, TranslateY) == 0x0228);
static_assert(offsetof(ATransformGizmoActor, TranslateZ) == 0x0230);
static_assert(offsetof(ATransformGizmoActor, TranslateYZ) == 0x0238);
static_assert(offsetof(ATransformGizmoActor, TranslateXZ) == 0x0240);
static_assert(offsetof(ATransformGizmoActor, TranslateXY) == 0x0248);
static_assert(offsetof(ATransformGizmoActor, RotateX) == 0x0250);
static_assert(offsetof(ATransformGizmoActor, RotateY) == 0x0258);
static_assert(offsetof(ATransformGizmoActor, RotateZ) == 0x0260);
static_assert(offsetof(ATransformGizmoActor, UniformScale) == 0x0268);
static_assert(offsetof(ATransformGizmoActor, AxisScaleX) == 0x0270);
static_assert(offsetof(ATransformGizmoActor, AxisScaleY) == 0x0278);
static_assert(offsetof(ATransformGizmoActor, AxisScaleZ) == 0x0280);
static_assert(offsetof(ATransformGizmoActor, PlaneScaleYZ) == 0x0288);
static_assert(offsetof(ATransformGizmoActor, PlaneScaleXZ) == 0x0290);
static_assert(offsetof(ATransformGizmoActor, PlaneScaleXY) == 0x0298);
static_assert(offsetof(UTransformGizmo, ActiveTarget) == 0x0040);
static_assert(offsetof(UTransformGizmo, ExplicitGridSize) == 0x004C);
static_assert(offsetof(UTransformGizmo, ExplicitRotationGridSize) == 0x005C);
static_assert(offsetof(UTransformGizmo, CurrentCoordinateSystem) == 0x006C);
static_assert(offsetof(UTransformGizmo, ActiveComponents) == 0x0100);
static_assert(offsetof(UTransformGizmo, NonuniformScaleComponents) == 0x0110);
static_assert(offsetof(UTransformGizmo, ActiveGizmos) == 0x0120);
static_assert(offsetof(UTransformGizmo, CameraAxisSource) == 0x0140);
static_assert(offsetof(UTransformGizmo, AxisXSource) == 0x0148);
static_assert(offsetof(UTransformGizmo, AxisYSource) == 0x0150);
static_assert(offsetof(UTransformGizmo, AxisZSource) == 0x0158);
static_assert(offsetof(UTransformGizmo, UnitAxisXSource) == 0x0160);
static_assert(offsetof(UTransformGizmo, UnitAxisYSource) == 0x0168);
static_assert(offsetof(UTransformGizmo, UnitAxisZSource) == 0x0170);
static_assert(offsetof(UTransformGizmo, StateTarget) == 0x0178);
static_assert(offsetof(UTransformGizmo, ScaledTransformSource) == 0x0180);
static_assert(offsetof(UTransformProxy, SharedTransform) == 0x0090);
static_assert(offsetof(UTransformProxy, InitialSharedTransform) == 0x00C0);
static_assert(offsetof(UGizmoComponentWorldTransformSource, Component) == 0x0048);
static_assert(offsetof(UGizmoTransformProxyTransformSource, Proxy) == 0x0048);
