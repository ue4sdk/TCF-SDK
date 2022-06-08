// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_CrosshairHitIndicator_HUD_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.TryPlayAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CrosshairHitIndicator_HUD_Item_C::TryPlayAnimation(class UWidgetAnimation* Animation, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.TryPlayAnimation"));

	struct
	{
		class UWidgetAnimation*        Animation;
		bool                           success;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (success != nullptr)
		*success = params.success;
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CrosshairHitIndicator_HUD_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_CritKill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CrosshairHitIndicator_HUD_Item_C::Play_CritKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_CritKill"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_HitKill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CrosshairHitIndicator_HUD_Item_C::Play_HitKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_HitKill"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_Crit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CrosshairHitIndicator_HUD_Item_C::Play_Crit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_Crit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_Hit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CrosshairHitIndicator_HUD_Item_C::Play_Hit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.Play_Hit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.SetDoubleHitmarkerEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CrosshairHitIndicator_HUD_Item_C::SetDoubleHitmarkerEnabled(bool newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.SetDoubleHitmarkerEnabled"));

	struct
	{
		bool                           newState;
	} params = {};

	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CrosshairHitIndicator_HUD_Item_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.ExecuteUbergraph_WBP_CrosshairHitIndicator_HUD_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CrosshairHitIndicator_HUD_Item_C::ExecuteUbergraph_WBP_CrosshairHitIndicator_HUD_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CrosshairHitIndicator_HUD_Item.WBP_CrosshairHitIndicator_HUD_Item_C.ExecuteUbergraph_WBP_CrosshairHitIndicator_HUD_Item"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
