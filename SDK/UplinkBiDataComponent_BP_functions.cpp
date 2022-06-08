// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UplinkBiDataComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UplinkBiDataComponent_BP.UplinkBiDataComponent_BP_C.SendBIDataEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EBIEventDataUplink_Enum> UplinkState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     HardDiskRowHandle              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UUplinkBiDataComponent_BP_C::SendBIDataEvent(class APlayerController* Controller, TEnumAsByte<EBIEventDataUplink_Enum> UplinkState, const struct FDataTableRowHandle& HardDiskRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UplinkBiDataComponent_BP.UplinkBiDataComponent_BP_C.SendBIDataEvent"));

	struct
	{
		class APlayerController*       Controller;
		TEnumAsByte<EBIEventDataUplink_Enum> UplinkState;
		struct FDataTableRowHandle     HardDiskRowHandle;
	} params = {};

	params.Controller = Controller;
	params.UplinkState = UplinkState;
	params.HardDiskRowHandle = HardDiskRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
