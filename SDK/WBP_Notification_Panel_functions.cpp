// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Notification_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Notification_Panel.WBP_Notification_Panel_C.OnNotificationExpired
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Notification_Panel_C::OnNotificationExpired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Panel.WBP_Notification_Panel_C.OnNotificationExpired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Panel.WBP_Notification_Panel_C.TryShowNotification
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYNotificationDescription notificationDescription        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UYNotificationController* notificationController         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Panel_C::TryShowNotification(const struct FYNotificationDescription& notificationDescription, class UYNotificationController* notificationController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Panel.WBP_Notification_Panel_C.TryShowNotification"));

	struct
	{
		struct FYNotificationDescription notificationDescription;
		class UYNotificationController* notificationController;
	} params = {};

	params.notificationDescription = notificationDescription;
	params.notificationController = notificationController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Panel.WBP_Notification_Panel_C.OnInitializationComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Notification_Panel_C::OnInitializationComplete(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Panel.WBP_Notification_Panel_C.OnInitializationComplete"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Panel.WBP_Notification_Panel_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Notification_Panel_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Panel.WBP_Notification_Panel_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Panel.WBP_Notification_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Notification_Panel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Panel.WBP_Notification_Panel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Panel.WBP_Notification_Panel_C.ExecuteUbergraph_WBP_Notification_Panel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Panel_C::ExecuteUbergraph_WBP_Notification_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Panel.WBP_Notification_Panel_C.ExecuteUbergraph_WBP_Notification_Panel"));

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
