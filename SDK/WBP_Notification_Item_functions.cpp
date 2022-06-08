// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Notification_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Notification_Item.WBP_Notification_Item_C.SetShowShadow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Notification_Item_C::SetShowShadow(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.SetShowShadow"));

	struct
	{
		bool                           Show;
	} params = {};

	params.Show = Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Item.WBP_Notification_Item_C.OnControllerTick
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Notification_Item_C::OnControllerTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.OnControllerTick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Item.WBP_Notification_Item_C.Init Notification Item
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYNotificationDescription Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           canExpire                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UYNotificationController* Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Item_C::Init_Notification_Item(const struct FYNotificationDescription& Description, bool canExpire, class UYNotificationController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.Init Notification Item"));

	struct
	{
		struct FYNotificationDescription Description;
		bool                           canExpire;
		class UYNotificationController* Controller;
	} params = {};

	params.Description = Description;
	params.canExpire = canExpire;
	params.Controller = Controller;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Item.WBP_Notification_Item_C.BndEvt__WBP_Notification_Item_WBP_ProgressBar_K2Node_ComponentBoundEvent_0_OnAnimationDone__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Notification_Item_C::BndEvt__WBP_Notification_Item_WBP_ProgressBar_K2Node_ComponentBoundEvent_0_OnAnimationDone__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.BndEvt__WBP_Notification_Item_WBP_ProgressBar_K2Node_ComponentBoundEvent_0_OnAnimationDone__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Item.WBP_Notification_Item_C.OnProgressBarComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Notification_Item_C::OnProgressBarComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.OnProgressBarComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Item.WBP_Notification_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Notification_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.PreConstruct"));

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


// Function WBP_Notification_Item.WBP_Notification_Item_C.ExecuteUbergraph_WBP_Notification_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Item_C::ExecuteUbergraph_WBP_Notification_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.ExecuteUbergraph_WBP_Notification_Item"));

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


// Function WBP_Notification_Item.WBP_Notification_Item_C.OnExpired__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Notification_Item_C::OnExpired__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Item.WBP_Notification_Item_C.OnExpired__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
