// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapCursor_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapCursor_WBP.MapCursor_WBP_C.OnMapCursorMoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MouseX                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MouseY                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MapTexWidth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MapTexHeight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapCursor_WBP_C::OnMapCursorMoved(float MouseX, float MouseY, float MapTexWidth, float MapTexHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCursor_WBP.MapCursor_WBP_C.OnMapCursorMoved");

	struct
	{
		float                          MouseX;
		float                          MouseY;
		float                          MapTexWidth;
		float                          MapTexHeight;
	} params;

	params.MouseX = MouseX;
	params.MouseY = MouseY;
	params.MapTexWidth = MapTexWidth;
	params.MapTexHeight = MapTexHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function MapCursor_WBP.MapCursor_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMapCursor_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCursor_WBP.MapCursor_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MapCursor_WBP.MapCursor_WBP_C.ExecuteUbergraph_MapCursor_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMapCursor_WBP_C::ExecuteUbergraph_MapCursor_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapCursor_WBP.MapCursor_WBP_C.ExecuteUbergraph_MapCursor_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
