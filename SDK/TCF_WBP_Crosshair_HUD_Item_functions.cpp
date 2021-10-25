// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Crosshair_HUD_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Crosshair_HUD_Item_C::CrossHairHit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHit"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHitCritical
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Crosshair_HUD_Item_C::CrossHairHitCritical()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.CrossHairHitCritical"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.PlayHitFeedback
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       YDealtDamageData               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_Crosshair_HUD_Item_C::PlayHitFeedback(const struct FYDealtDamageData& YDealtDamageData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.PlayHitFeedback"));

	struct
	{
		struct FYDealtDamageData       YDealtDamageData;
	} params;

	params.YDealtDamageData = YDealtDamageData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.TryPlayAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::TryPlayAnimation(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.TryPlayAnimation"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.BP_OnPlayHitTargetFeedback
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_Crosshair_HUD_Item_C::BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.BP_OnPlayHitTargetFeedback"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Crosshair_HUD_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.ExecuteUbergraph_WBP_Crosshair_HUD_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Crosshair_HUD_Item_C::ExecuteUbergraph_WBP_Crosshair_HUD_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Crosshair_HUD_Item.WBP_Crosshair_HUD_Item_C.ExecuteUbergraph_WBP_Crosshair_HUD_Item"));

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
