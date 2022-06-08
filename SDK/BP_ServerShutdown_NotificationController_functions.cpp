// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ServerShutdown_NotificationController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ServerShutdown_NotificationController.BP_ServerShutdown_NotificationController_C.PreprocessDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYNotificationDescription Description                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FYNotificationDescription ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYNotificationDescription UBP_ServerShutdown_NotificationController_C::PreprocessDescription(const struct FYNotificationDescription& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerShutdown_NotificationController.BP_ServerShutdown_NotificationController_C.PreprocessDescription"));

	struct
	{
		struct FYNotificationDescription Description;
		struct FYNotificationDescription ReturnValue;
	} params = {};

	params.Description = Description;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_ServerShutdown_NotificationController.BP_ServerShutdown_NotificationController_C.BP_ShouldShowNotification
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYNotificationDescription Description                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBP_ServerShutdown_NotificationController_C::BP_ShouldShowNotification(const struct FYNotificationDescription& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ServerShutdown_NotificationController.BP_ServerShutdown_NotificationController_C.BP_ShouldShowNotification"));

	struct
	{
		struct FYNotificationDescription Description;
		bool                           ReturnValue;
	} params = {};

	params.Description = Description;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
