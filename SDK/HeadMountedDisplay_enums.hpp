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

// Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller      = 0,
	EXRVisualType__Hand            = 1,
	EXRVisualType__EXRVisualType_MAX = 2
};


// Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm            = 0,
	EHandKeypoint__Wrist           = 1,
	EHandKeypoint__ThumbMetacarpal = 2,
	EHandKeypoint__ThumbProximal   = 3,
	EHandKeypoint__ThumbDistal     = 4,
	EHandKeypoint__ThumbTip        = 5,
	EHandKeypoint__IndexMetacarpal = 6,
	EHandKeypoint__IndexProximal   = 7,
	EHandKeypoint__IndexIntermediate = 8,
	EHandKeypoint__IndexDistal     = 9,
	EHandKeypoint__IndexTip        = 10,
	EHandKeypoint__MiddleMetacarpal = 11,
	EHandKeypoint__MiddleProximal  = 12,
	EHandKeypoint__MiddleIntermediate = 13,
	EHandKeypoint__MiddleDistal    = 14,
	EHandKeypoint__MiddleTip       = 15,
	EHandKeypoint__RingMetacarpal  = 16,
	EHandKeypoint__RingProximal    = 17,
	EHandKeypoint__RingIntermediate = 18,
	EHandKeypoint__RingDistal      = 19,
	EHandKeypoint__RingTip         = 20,
	EHandKeypoint__LittleMetacarpal = 21,
	EHandKeypoint__LittleProximal  = 22,
	EHandKeypoint__LittleIntermediate = 23,
	EHandKeypoint__LittleDistal    = 24,
	EHandKeypoint__LittleTip       = 25,
	EHandKeypoint__EHandKeypoint_MAX = 26
};


// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay = 0,
	EXRTrackedDeviceType__Controller = 1,
	EXRTrackedDeviceType__TrackingReference = 2,
	EXRTrackedDeviceType__Other    = 3,
	EXRTrackedDeviceType__Invalid  = 4,
	EXRTrackedDeviceType__Any      = 5,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX = 6
};


// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8
};


// Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags        = 0,
	EXRSystemFlags__IsAR           = 1,
	EXRSystemFlags__IsTablet       = 2,
	EXRSystemFlags__IsHeadMounted  = 3,
	EXRSystemFlags__SupportsHandTracking = 4,
	EXRSystemFlags__EXRSystemFlags_MAX = 5
};


// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem = 0,
	EXRDeviceConnectionResult__FeatureNotSupported = 1,
	EXRDeviceConnectionResult__NoValidViewport = 2,
	EXRDeviceConnectionResult__MiscFailure = 3,
	EXRDeviceConnectionResult__Success = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX = 5
};


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3
};


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__Stage      = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 3
};


// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3
};


// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
};


// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None = 0,
	ESpatialInputGestureAxis__Manipulation = 1,
	ESpatialInputGestureAxis__Navigation = 2,
	ESpatialInputGestureAxis__NavigationRails = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
