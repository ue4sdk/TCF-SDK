#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input = 0,
	EControlRigComponentMapDirection__Output = 1,
	EControlRigComponentMapDirection__EControlRigComponentMapDirection_MAX = 2
};


// Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace = 0,
	EControlRigComponentSpace__ActorSpace = 1,
	EControlRigComponentSpace__ComponentSpace = 2,
	EControlRigComponentSpace__RigSpace = 3,
	EControlRigComponentSpace__LocalSpace = 4,
	EControlRigComponentSpace__Max = 5
};


// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime     = 0,
	ERigExecutionType__Editing     = 1,
	ERigExecutionType__Max         = 2
};


// Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace = 0,
	EBoneGetterSetterMode__GlobalSpace = 1,
	EBoneGetterSetterMode__Max     = 2
};


// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial  = 0,
	ETransformGetterType__Current  = 1,
	ETransformGetterType__Max      = 2
};


// Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane = 0,
	EControlRigClampSpatialMode__Cylinder = 1,
	EControlRigClampSpatialMode__Sphere = 2,
	EControlRigClampSpatialMode__EControlRigClampSpatialMode_MAX = 3
};


// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace = 0,
	ETransformSpaceMode__GlobalSpace = 1,
	ETransformSpaceMode__BaseSpace = 2,
	ETransformSpaceMode__BaseJoint = 3,
	ETransformSpaceMode__Max       = 4
};


// Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points = 0,
	EControlRigDrawSettings__Lines = 1,
	EControlRigDrawSettings__LineStrip = 2,
	EControlRigDrawSettings__DynamicMesh = 3,
	EControlRigDrawSettings__EControlRigDrawSettings_MAX = 4
};


// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes = 0,
	EControlRigDrawHierarchyMode__Max = 1
};


// Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear = 0,
	EControlRigAnimEasingType__QuadraticEaseIn = 1,
	EControlRigAnimEasingType__QuadraticEaseOut = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut = 3,
	EControlRigAnimEasingType__CubicEaseIn = 4,
	EControlRigAnimEasingType__CubicEaseOut = 5,
	EControlRigAnimEasingType__CubicEaseInOut = 6,
	EControlRigAnimEasingType__QuarticEaseIn = 7,
	EControlRigAnimEasingType__QuarticEaseOut = 8,
	EControlRigAnimEasingType__QuarticEaseInOut = 9,
	EControlRigAnimEasingType__QuinticEaseIn = 10,
	EControlRigAnimEasingType__QuinticEaseOut = 11,
	EControlRigAnimEasingType__QuinticEaseInOut = 12,
	EControlRigAnimEasingType__SineEaseIn = 13,
	EControlRigAnimEasingType__SineEaseOut = 14,
	EControlRigAnimEasingType__SineEaseInOut = 15,
	EControlRigAnimEasingType__CircularEaseIn = 16,
	EControlRigAnimEasingType__CircularEaseOut = 17,
	EControlRigAnimEasingType__CircularEaseInOut = 18,
	EControlRigAnimEasingType__ExponentialEaseIn = 19,
	EControlRigAnimEasingType__ExponentialEaseOut = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut = 21,
	EControlRigAnimEasingType__ElasticEaseIn = 22,
	EControlRigAnimEasingType__ElasticEaseOut = 23,
	EControlRigAnimEasingType__ElasticEaseInOut = 24,
	EControlRigAnimEasingType__BackEaseIn = 25,
	EControlRigAnimEasingType__BackEaseOut = 26,
	EControlRigAnimEasingType__BackEaseInOut = 27,
	EControlRigAnimEasingType__BounceEaseIn = 28,
	EControlRigAnimEasingType__BounceEaseOut = 29,
	EControlRigAnimEasingType__BounceEaseInOut = 30,
	EControlRigAnimEasingType__EControlRigAnimEasingType_MAX = 31
};


// Enum ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8_t
{
	EControlRigRotationOrder__XYZ  = 0,
	EControlRigRotationOrder__XZY  = 1,
	EControlRigRotationOrder__YXZ  = 2,
	EControlRigRotationOrder__YZX  = 3,
	EControlRigRotationOrder__ZXY  = 4,
	EControlRigRotationOrder__ZYX  = 5,
	EControlRigRotationOrder__EControlRigRotationOrder_MAX = 6
};


// Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler = 1,
	ECRSimPointIntegrateType__ECRSimPointIntegrateType_MAX = 2
};


// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance = 0,
	ECRSimConstraintType__DistanceFromA = 1,
	ECRSimConstraintType__DistanceFromB = 2,
	ECRSimConstraintType__Plane    = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX = 4
};


// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX = 1
};


// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane = 0,
	ECRSimSoftCollisionType__Sphere = 1,
	ECRSimSoftCollisionType__Cone  = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX = 3
};


// Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace = 0,
	EControlRigFKRigExecuteMode__Additive = 1,
	EControlRigFKRigExecuteMode__Max = 2
};


// Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported         = 0,
	ERigBoneType__User             = 1,
	ERigBoneType__ERigBoneType_MAX = 2
};


// Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X             = 0,
	ERigControlAxis__Y             = 1,
	ERigControlAxis__Z             = 2,
	ERigControlAxis__ERigControlAxis_MAX = 3
};


// Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial  = 0,
	ERigControlValueType__Current  = 1,
	ERigControlValueType__Minimum  = 2,
	ERigControlValueType__Maximum  = 3,
	ERigControlValueType__ERigControlValueType_MAX = 4
};


// Enum ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool          = 0,
	ERigControlType__Float         = 1,
	ERigControlType__Integer       = 2,
	ERigControlType__Vector2D      = 3,
	ERigControlType__Position      = 4,
	ERigControlType__Scale         = 5,
	ERigControlType__Rotator       = 6,
	ERigControlType__Transform     = 7,
	ERigControlType__TransformNoScale = 8,
	ERigControlType__EulerTransform = 9,
	ERigControlType__ERigControlType_MAX = 10
};


// Enum ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8_t
{
	ERigHierarchyImportMode__Append = 0,
	ERigHierarchyImportMode__Replace = 1,
	ERigHierarchyImportMode__ReplaceLocalTransform = 2,
	ERigHierarchyImportMode__ReplaceGlobalTransform = 3,
	ERigHierarchyImportMode__Max   = 4
};


// Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare   = 0,
	EControlRigSetKey__Always      = 1,
	EControlRigSetKey__Never       = 2,
	EControlRigSetKey__EControlRigSetKey_MAX = 3
};


// Enum ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
	ERigEvent__None                = 0,
	ERigEvent__RequestAutoKey      = 1,
	ERigEvent__Max                 = 2
};


// Enum ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
	ERigElementType__None          = 0,
	ERigElementType__Bone          = 1,
	ERigElementType__Space         = 2,
	ERigElementType__Control       = 3,
	ERigElementType__Curve         = 4,
	ERigElementType__All           = 5,
	ERigElementType__ERigElementType_MAX = 6
};


// Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global          = 0,
	ERigSpaceType__Bone            = 1,
	ERigSpaceType__Control         = 2,
	ERigSpaceType__Space           = 3,
	ERigSpaceType__ERigSpaceType_MAX = 4
};


// Enum ControlRig.EAimMode
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget          = 0,
	EAimMode__OrientToTarget       = 1,
	EAimMode__MAX                  = 2
};


// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override  = 0,
	EApplyTransformMode__Additive  = 1,
	EApplyTransformMode__Max       = 2
};


// Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point  = 0,
	ERigUnitDebugPointMode__Vector = 1,
	ERigUnitDebugPointMode__Max    = 2
};


// Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point = 0,
	ERigUnitDebugTransformMode__Axes = 1,
	ERigUnitDebugTransformMode__Box = 2,
	ERigUnitDebugTransformMode__Max = 3
};


// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front = 0,
	EControlRigCurveAlignment__Stretched = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX = 2
};


// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction = 0,
	EControlRigVectorKind__Location = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX = 2
};


// Enum ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean = 0,
	ERBFVectorDistanceType__Manhattan = 1,
	ERBFVectorDistanceType__ArcLength = 2,
	ERBFVectorDistanceType__ERBFVectorDistanceType_MAX = 3
};


// Enum ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean = 0,
	ERBFQuatDistanceType__ArcLength = 1,
	ERBFQuatDistanceType__SwingAngle = 2,
	ERBFQuatDistanceType__TwistAngle = 3,
	ERBFQuatDistanceType__ERBFQuatDistanceType_MAX = 4
};


// Enum ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian       = 0,
	ERBFKernelType__Exponential    = 1,
	ERBFKernelType__Linear         = 2,
	ERBFKernelType__Cubic          = 3,
	ERBFKernelType__Quintic        = 4,
	ERBFKernelType__ERBFKernelType_MAX = 5
};


// Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal = 0,
	EControlRigModifyBoneMode__OverrideGlobal = 1,
	EControlRigModifyBoneMode__AdditiveLocal = 2,
	EControlRigModifyBoneMode__AdditiveGlobal = 3,
	EControlRigModifyBoneMode__Max = 4
};


// Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point = 0,
	ERigUnitVisualDebugPointMode__Vector = 1,
	ERigUnitVisualDebugPointMode__Max = 2
};


// Enum ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
	EControlRigState__Init         = 0,
	EControlRigState__Update       = 1,
	EControlRigState__Invalid      = 2,
	EControlRigState__EControlRigState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
