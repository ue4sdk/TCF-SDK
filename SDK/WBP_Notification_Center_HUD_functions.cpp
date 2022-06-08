// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Notification_Center_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Notification_Center_HUD.WBP_Notification_Center_HUD_C.OnShowNotification
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYNotificationDescription notificationDescription        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UYNotificationController* notificationController         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Center_HUD_C::OnShowNotification(const struct FYNotificationDescription& notificationDescription, class UYNotificationController* notificationController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Center_HUD.WBP_Notification_Center_HUD_C.OnShowNotification"));

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


// Function WBP_Notification_Center_HUD.WBP_Notification_Center_HUD_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Notification_Center_HUD_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Center_HUD.WBP_Notification_Center_HUD_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Notification_Center_HUD.WBP_Notification_Center_HUD_C.ExecuteUbergraph_WBP_Notification_Center_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Center_HUD_C::ExecuteUbergraph_WBP_Notification_Center_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Center_HUD.WBP_Notification_Center_HUD_C.ExecuteUbergraph_WBP_Notification_Center_HUD"));

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
