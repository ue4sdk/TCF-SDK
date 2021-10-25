// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SplineToolFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SplineToolFunctions.SplineToolFunctions_C.Import
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FSplinePoint>    SplinePoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class USplineComponent*        Spline                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USplineToolFunctions_C::Import(class USplineComponent* Spline, class UObject* __WorldContext, TArray<struct FSplinePoint>* SplinePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineToolFunctions.SplineToolFunctions_C.Import");

	struct
	{
		TArray<struct FSplinePoint>    SplinePoint;
		class USplineComponent*        Spline;
		class UObject*                 __WorldContext;
	} params;

	params.Spline = Spline;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SplinePoint != nullptr)
		*SplinePoint = params.SplinePoint;
}


// Function SplineToolFunctions.SplineToolFunctions_C.Export
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FSplinePoint>    Points                         (CPF_Parm, CPF_OutParm)

void USplineToolFunctions_C::Export(class USplineComponent* Spline, class UObject* __WorldContext, TArray<struct FSplinePoint>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineToolFunctions.SplineToolFunctions_C.Export");

	struct
	{
		class USplineComponent*        Spline;
		class UObject*                 __WorldContext;
		TArray<struct FSplinePoint>    Points;
	} params;

	params.Spline = Spline;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Points != nullptr)
		*Points = params.Points;
}


// Function SplineToolFunctions.SplineToolFunctions_C.AssignStartEndData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Spacing                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USplineComponent*        Spline                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OffsetDistanceMin              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OffsetDistanceMax              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          StartDistance                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EndDistance                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 StartLocation                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 StartTangent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 EndLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 EndTangent                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USplineToolFunctions_C::AssignStartEndData(int CurrentIndex, int Spacing, class USplineComponent* Spline, float OffsetDistanceMin, float OffsetDistanceMax, class UObject* __WorldContext, float* StartDistance, float* EndDistance, struct FVector* StartLocation, struct FVector* StartTangent, struct FVector* EndLocation, struct FVector* EndTangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineToolFunctions.SplineToolFunctions_C.AssignStartEndData");

	struct
	{
		int                            CurrentIndex;
		int                            Spacing;
		class USplineComponent*        Spline;
		float                          OffsetDistanceMin;
		float                          OffsetDistanceMax;
		class UObject*                 __WorldContext;
		float                          StartDistance;
		float                          EndDistance;
		struct FVector                 StartLocation;
		struct FVector                 StartTangent;
		struct FVector                 EndLocation;
		struct FVector                 EndTangent;
	} params;

	params.CurrentIndex = CurrentIndex;
	params.Spacing = Spacing;
	params.Spline = Spline;
	params.OffsetDistanceMin = OffsetDistanceMin;
	params.OffsetDistanceMax = OffsetDistanceMax;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (StartDistance != nullptr)
		*StartDistance = params.StartDistance;
	if (EndDistance != nullptr)
		*EndDistance = params.EndDistance;
	if (StartLocation != nullptr)
		*StartLocation = params.StartLocation;
	if (StartTangent != nullptr)
		*StartTangent = params.StartTangent;
	if (EndLocation != nullptr)
		*EndLocation = params.EndLocation;
	if (EndTangent != nullptr)
		*EndTangent = params.EndTangent;
}


// Function SplineToolFunctions.SplineToolFunctions_C.AdjustLandscapeToSpline
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Falloff                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           PushUp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           PushDown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USplineToolFunctions_C::AdjustLandscapeToSpline(class USplineComponent* Spline, float Width, float Falloff, float Offset, bool PushUp, bool PushDown, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineToolFunctions.SplineToolFunctions_C.AdjustLandscapeToSpline");

	struct
	{
		class USplineComponent*        Spline;
		float                          Width;
		float                          Falloff;
		float                          Offset;
		bool                           PushUp;
		bool                           PushDown;
		class UObject*                 __WorldContext;
	} params;

	params.Spline = Spline;
	params.Width = Width;
	params.Falloff = Falloff;
	params.Offset = Offset;
	params.PushUp = PushUp;
	params.PushDown = PushDown;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function SplineToolFunctions.SplineToolFunctions_C.AdjustSplineToLandscape
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           PushDown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           PushUp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USplineToolFunctions_C::AdjustSplineToLandscape(class USplineComponent* Spline, bool PushDown, bool PushUp, float Offset, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineToolFunctions.SplineToolFunctions_C.AdjustSplineToLandscape");

	struct
	{
		class USplineComponent*        Spline;
		bool                           PushDown;
		bool                           PushUp;
		float                          Offset;
		class UObject*                 __WorldContext;
	} params;

	params.Spline = Spline;
	params.PushDown = PushDown;
	params.PushUp = PushUp;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
