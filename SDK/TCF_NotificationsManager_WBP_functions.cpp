// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NotificationsManager_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotificationsManager_WBP.NotificationsManager_WBP_C.BP_CreateAndAddNotificationWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYSocialNotification    notificationData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UYWidget_Notification*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_Notification* UNotificationsManager_WBP_C::BP_CreateAndAddNotificationWidget(const struct FYSocialNotification& notificationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationsManager_WBP.NotificationsManager_WBP_C.BP_CreateAndAddNotificationWidget");

	struct
	{
		struct FYSocialNotification    notificationData;
		class UYWidget_Notification*   ReturnValue;
	} params;

	params.notificationData = notificationData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
