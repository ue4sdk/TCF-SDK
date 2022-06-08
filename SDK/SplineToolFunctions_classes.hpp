#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SplineToolFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SplineToolFunctions.SplineToolFunctions_C
// 0x0000 (0x0030 - 0x0030)
class USplineToolFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SplineToolFunctions.SplineToolFunctions_C"));
		return ptr;
	}


	static void Import(class USplineComponent* Spline, class UObject* __WorldContext, TArray<struct FSplinePoint>* SplinePoint);
	static void Export(class USplineComponent* Spline, class UObject* __WorldContext, TArray<struct FSplinePoint>* Points);
	static void AssignStartEndData(int CurrentIndex, int Spacing, class USplineComponent* Spline, float OffsetDistanceMin, float OffsetDistanceMax, class UObject* __WorldContext, float* StartDistance, float* EndDistance, struct FVector* StartLocation, struct FVector* StartTangent, struct FVector* EndLocation, struct FVector* EndTangent);
	static void AdjustLandscapeToSpline(class USplineComponent* Spline, float Width, float Falloff, float Offset, bool PushUp, bool PushDown, class UObject* __WorldContext);
	static void AdjustSplineToLandscape(class USplineComponent* Spline, bool PushDown, bool PushUp, float Offset, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
