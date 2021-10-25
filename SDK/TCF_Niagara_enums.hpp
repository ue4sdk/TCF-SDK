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

// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};


// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};


// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};


// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX = 3
};


// Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles = 0,
	ENiagaraRendererSourceDataMode__Emitter = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX = 2
};


// Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6
};


// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles = 0,
	ENiagaraIterationSource__DataInterface = 1,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX = 2
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle  = 0,
	ENiagaraScriptGroup__Emitter   = 1,
	ENiagaraScriptGroup__System    = 2,
	ENiagaraScriptGroup__Max       = 3
};


// Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System = 0,
	ENiagaraScriptContextStaticSwitch__Emitter = 1,
	ENiagaraScriptContextStaticSwitch__Particle = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX = 3
};


// Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn = 0,
	ENiagaraCompileUsageStaticSwitch__Update = 1,
	ENiagaraCompileUsageStaticSwitch__Event = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage = 3,
	ENiagaraCompileUsageStaticSwitch__Default = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX = 5
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__DynamicInput = 2,
	ENiagaraScriptUsage__ParticleSpawnScript = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
	ENiagaraScriptUsage__ParticleUpdateScript = 5,
	ENiagaraScriptUsage__ParticleEventScript = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript = 8,
	ENiagaraScriptUsage__EmitterSpawnScript = 9,
	ENiagaraScriptUsage__EmitterUpdateScript = 10,
	ENiagaraScriptUsage__SystemSpawnScript = 11,
	ENiagaraScriptUsage__SystemUpdateScript = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 13
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	ENiagaraScriptCompileStatus__NCS_MAX = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__TranslatorConstant = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent = 0,
	ENiagaraStatDisplayMode__Absolute = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX = 2
};


// Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average = 0,
	ENiagaraStatEvaluationType__Maximum = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX = 2
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime = 0,
	ENiagaraAgeUpdateMode__DesiredAge = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 3
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim      = 0,
	ENiagaraSimTarget__GPUComputeSim = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2
};


// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value     = 0,
	ENiagaraDefaultMode__Binding   = 1,
	ENiagaraDefaultMode__Custom    = 2,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX = 3
};


// Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float = 0,
	ENiagaraGpuBufferFormat__HalfFloat = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte = 2,
	ENiagaraGpuBufferFormat__Max   = 3
};


// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs = 0,
	ENiagaraTickBehavior__UseComponentTickGroup = 1,
	ENiagaraTickBehavior__ForceTickFirst = 2,
	ENiagaraTickBehavior__ForceTickLast = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX = 4
};


// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None            = 0,
	ENCPoolMethod__AutoRelease     = 1,
	ENCPoolMethod__ManualRelease   = 2,
	ENCPoolMethod__ManualRelease_OnComplete = 3,
	ENCPoolMethod__FreeInPool      = 4,
	ENCPoolMethod__ENCPoolMethod_MAX = 5
};


// Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize = 0,
	ENDIExport_GPUAllocationMode__PerParticle = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX = 2
};


// Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
	ESetResolutionMethod__Independent = 0,
	ESetResolutionMethod__MaxAxis  = 1,
	ESetResolutionMethod__CellSize = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX = 3
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid = 0,
	ENDISkeletalMesh_SkinningMode__None = 1,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 2,
	ENDISkeletalMesh_SkinningMode__PreSkin = 3,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 4
};


// Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default = 0,
	ENDISkeletalMesh_SourceMode__Source = 1,
	ENDISkeletalMesh_SourceMode__AttachParent = 2,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX = 3
};


// Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default = 0,
	ENDIStaticMesh_SourceMode__Source = 1,
	ENDIStaticMesh_SourceMode__AttachParent = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly = 3,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX = 4
};


// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly = 0,
	ENiagaraScalabilityUpdateFrequency__Low = 1,
	ENiagaraScalabilityUpdateFrequency__Medium = 2,
	ENiagaraScalabilityUpdateFrequency__High = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX = 5
};


// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	ENiagaraCullReaction__Deactivate = 0,
	ENiagaraCullReaction__DeactivateImmediate = 1,
	ENiagaraCullReaction__DeactivateResume = 2,
	ENiagaraCullReaction__DeactivateImmediateResume = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX = 4
};


// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate = 0,
	EParticleAllocationMode__ManualEstimate = 1,
	EParticleAllocationMode__EParticleAllocationMode_MAX = 2
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None         = 0,
	ENiagaraSortMode__ViewDepth    = 1,
	ENiagaraSortMode__ViewDistance = 2,
	ENiagaraSortMode__CustomAscending = 3,
	ENiagaraSortMode__CustomDecending = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 5
};


// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation = 0,
	ENiagaraMeshLockedAxisSpace__World = 1,
	ENiagaraMeshLockedAxisSpace__Local = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX = 3
};


// Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation = 1,
	ENiagaraMeshPivotOffsetSpace__World = 2,
	ENiagaraMeshPivotOffsetSpace__Local = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX = 4
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default = 0,
	ENiagaraMeshFacingMode__Velocity = 1,
	ENiagaraMeshFacingMode__CameraPosition = 2,
	ENiagaraMeshFacingMode__CameraPlane = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4
};


// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled = 0,
	ENiagaraPlatformSetState__Enabled = 1,
	ENiagaraPlatformSetState__Active = 2,
	ENiagaraPlatformSetState__Unknown = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX = 4
};


// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default = 0,
	ENiagaraPlatformSelectionState__Enabled = 1,
	ENiagaraPlatformSelectionState__Disabled = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX = 3
};


// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never = 0,
	ENiagaraPreviewGridResetMode__Individual = 1,
	ENiagaraPreviewGridResetMode__All = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength = 2,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition = 0,
	ENiagaraRibbonUVEdgeMode__Locked = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic = 0,
	ENiagaraRibbonTessellationMode__Custom = 1,
	ENiagaraRibbonTessellationMode__Disabled = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack = 0,
	ENiagaraRibbonDrawDirection__BackToFront = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale = 0,
	ENiagaraRibbonAgeOffsetMode__Clip = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen = 0,
	ENiagaraRibbonFacingMode__Custom = 1,
	ENiagaraRibbonFacingMode__CustomSideVector = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3
};


// Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid = 0,
	ENiagaraScriptLibraryVisibility__Unexposed = 1,
	ENiagaraScriptLibraryVisibility__Library = 2,
	ENiagaraScriptLibraryVisibility__Hidden = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX = 4
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency = 0,
	ENiagaraModuleDependencyType__PostDependency = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
};


// Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
	ENiagaraParameterPanelCategory__Input = 0,
	ENiagaraParameterPanelCategory__Attributes = 1,
	ENiagaraParameterPanelCategory__Output = 2,
	ENiagaraParameterPanelCategory__Local = 3,
	ENiagaraParameterPanelCategory__User = 4,
	ENiagaraParameterPanelCategory__Engine = 5,
	ENiagaraParameterPanelCategory__Owner = 6,
	ENiagaraParameterPanelCategory__System = 7,
	ENiagaraParameterPanelCategory__Emitter = 8,
	ENiagaraParameterPanelCategory__Particles = 9,
	ENiagaraParameterPanelCategory__ScriptTransient = 10,
	ENiagaraParameterPanelCategory__StaticSwitch = 11,
	ENiagaraParameterPanelCategory__None = 12,
	ENiagaraParameterPanelCategory__Num = 13,
	ENiagaraParameterPanelCategory__ENiagaraParameterPanelCategory_MAX = 14
};


// Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
	ENiagaraScriptParameterUsage__Input = 0,
	ENiagaraScriptParameterUsage__Output = 1,
	ENiagaraScriptParameterUsage__Local = 2,
	ENiagaraScriptParameterUsage__InputOutput = 3,
	ENiagaraScriptParameterUsage__InitialValueInput = 4,
	ENiagaraScriptParameterUsage__None = 5,
	ENiagaraScriptParameterUsage__Num = 6,
	ENiagaraScriptParameterUsage__ENiagaraScriptParameterUsage_MAX = 7
};


// Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
	ENiagaraParameterScope__Input  = 0,
	ENiagaraParameterScope__User   = 1,
	ENiagaraParameterScope__Engine = 2,
	ENiagaraParameterScope__Owner  = 3,
	ENiagaraParameterScope__System = 4,
	ENiagaraParameterScope__Emitter = 5,
	ENiagaraParameterScope__Particles = 6,
	ENiagaraParameterScope__ScriptPersistent = 7,
	ENiagaraParameterScope__ScriptTransient = 8,
	ENiagaraParameterScope__Local  = 9,
	ENiagaraParameterScope__Custom = 10,
	ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch = 11,
	ENiagaraParameterScope__Output = 12,
	ENiagaraParameterScope__None   = 13,
	ENiagaraParameterScope__Num    = 14,
	ENiagaraParameterScope__ENiagaraParameterScope_MAX = 15
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active = 0,
	ENiagaraExecutionState__Inactive = 1,
	ENiagaraExecutionState__InactiveClear = 2,
	ENiagaraExecutionState__Complete = 3,
	ENiagaraExecutionState__Disabled = 4,
	ENiagaraExecutionState__Num    = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability = 0,
	ENiagaraExecutionStateSource__Internal = 1,
	ENiagaraExecutionStateSource__Owner = 2,
	ENiagaraExecutionStateSource__InternalCompletion = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	ENiagaraVariantMode__None      = 0,
	ENiagaraVariantMode__Object    = 1,
	ENiagaraVariantMode__DataInterface = 2,
	ENiagaraVariantMode__Bytes     = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
