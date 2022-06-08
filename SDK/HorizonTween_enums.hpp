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

// Enum HorizonTween.EHorizonTweenLerpMode
enum class EHorizonTweenLerpMode : uint8_t
{
	EHorizonTweenLerpMode__Lerp    = 0,
	EHorizonTweenLerpMode__LerpStable = 1,
	EHorizonTweenLerpMode__InterpSinIn = 2,
	EHorizonTweenLerpMode__InterpSinOut = 3,
	EHorizonTweenLerpMode__InterpSinInOut = 4,
	EHorizonTweenLerpMode__InterpExpoIn = 5,
	EHorizonTweenLerpMode__InterpExpoOut = 6,
	EHorizonTweenLerpMode__InterpExpoInOut = 7,
	EHorizonTweenLerpMode__InterpCircularIn = 8,
	EHorizonTweenLerpMode__InterpCircularOut = 9,
	EHorizonTweenLerpMode__InterpCircularInOut = 10,
	EHorizonTweenLerpMode__InterpEaseIn = 11,
	EHorizonTweenLerpMode__InterpEaseOut = 12,
	EHorizonTweenLerpMode__InterpEaseInOut = 13,
	EHorizonTweenLerpMode__BounceIn = 14,
	EHorizonTweenLerpMode__BounceOut = 15,
	EHorizonTweenLerpMode__BounceInOut = 16,
	EHorizonTweenLerpMode__ElasticIn = 17,
	EHorizonTweenLerpMode__ElasticOut = 18,
	EHorizonTweenLerpMode__ElasticInOut = 19,
	EHorizonTweenLerpMode__BackIn  = 20,
	EHorizonTweenLerpMode__BackOut = 21,
	EHorizonTweenLerpMode__BackInOut = 22,
	EHorizonTweenLerpMode__QuadIn  = 23,
	EHorizonTweenLerpMode__QuadOut = 24,
	EHorizonTweenLerpMode__QuadInOut = 25,
	EHorizonTweenLerpMode__CubicIn = 26,
	EHorizonTweenLerpMode__CubicOut = 27,
	EHorizonTweenLerpMode__CubicInOut = 28,
	EHorizonTweenLerpMode__QuartIn = 29,
	EHorizonTweenLerpMode__QuartOut = 30,
	EHorizonTweenLerpMode__QuartInOut = 31,
	EHorizonTweenLerpMode__QuintIn = 32,
	EHorizonTweenLerpMode__QuintOut = 33,
	EHorizonTweenLerpMode__QuintInOut = 34,
	EHorizonTweenLerpMode__EHorizonTweenLerpMode_MAX = 35
};


// Enum HorizonTween.EHorizonTweenPlayMode
enum class EHorizonTweenPlayMode : uint8_t
{
	EHorizonTweenPlayMode__Forward = 0,
	EHorizonTweenPlayMode__Reverse = 1,
	EHorizonTweenPlayMode__PingPong = 2,
	EHorizonTweenPlayMode__EHorizonTweenPlayMode_MAX = 3
};


// Enum HorizonTween.EHorizonTweenCoordinateSpace
enum class EHorizonTweenCoordinateSpace : uint8_t
{
	EHorizonTweenCoordinateSpace__Local = 0,
	EHorizonTweenCoordinateSpace__World = 1,
	EHorizonTweenCoordinateSpace__EHorizonTweenCoordinateSpace_MAX = 2
};


// Enum HorizonTween.EHorizonTweenRotatorConstraints
enum class EHorizonTweenRotatorConstraints : uint8_t
{
	EHorizonTweenRotatorConstraints__None = 0,
	EHorizonTweenRotatorConstraints__RollOnly = 1,
	EHorizonTweenRotatorConstraints__PitchOnly = 2,
	EHorizonTweenRotatorConstraints__YawOnly = 3,
	EHorizonTweenRotatorConstraints__RollAndPitchOnly = 4,
	EHorizonTweenRotatorConstraints__PitchAndYawOnly = 5,
	EHorizonTweenRotatorConstraints__RollAndYawOnly = 6,
	EHorizonTweenRotatorConstraints__EHorizonTweenRotatorConstraints_MAX = 7
};


// Enum HorizonTween.EHorizonTweenVector2DConstraints
enum class EHorizonTweenVector2DConstraints : uint8_t
{
	EHorizonTweenVector2DConstraints__None = 0,
	EHorizonTweenVector2DConstraints__XOnly = 1,
	EHorizonTweenVector2DConstraints__YOnly = 2,
	EHorizonTweenVector2DConstraints__EHorizonTweenVector2DConstraints_MAX = 3
};


// Enum HorizonTween.EHorizonTweenVectorConstraints
enum class EHorizonTweenVectorConstraints : uint8_t
{
	EHorizonTweenVectorConstraints__None = 0,
	EHorizonTweenVectorConstraints__XOnly = 1,
	EHorizonTweenVectorConstraints__YOnly = 2,
	EHorizonTweenVectorConstraints__ZOnly = 3,
	EHorizonTweenVectorConstraints__XYPlane = 4,
	EHorizonTweenVectorConstraints__YZPlane = 5,
	EHorizonTweenVectorConstraints__XZPlane = 6,
	EHorizonTweenVectorConstraints__EHorizonTweenVectorConstraints_MAX = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
