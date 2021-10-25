// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_VehiclePlate_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehiclePlate_WBP.VehiclePlate_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVehiclePlate_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehiclePlate_WBP.VehiclePlate_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehiclePlate_WBP.VehiclePlate_WBP_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVehiclePlate_WBP_C::BP_InitializeFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehiclePlate_WBP.VehiclePlate_WBP_C.BP_InitializeFor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehiclePlate_WBP.VehiclePlate_WBP_C.OnRuntimeDataChangedDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeVehicleData    oldData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYRuntimeVehicleData    newData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UVehiclePlate_WBP_C::OnRuntimeDataChangedDelegate_Event_1(const struct FYRuntimeVehicleData& oldData, const struct FYRuntimeVehicleData& newData)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehiclePlate_WBP.VehiclePlate_WBP_C.OnRuntimeDataChangedDelegate_Event_1");

	struct
	{
		struct FYRuntimeVehicleData    oldData;
		struct FYRuntimeVehicleData    newData;
	} params;

	params.oldData = oldData;
	params.newData = newData;

	UObject::ProcessEvent(fn, &params);
}


// Function VehiclePlate_WBP.VehiclePlate_WBP_C.ExecuteUbergraph_VehiclePlate_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehiclePlate_WBP_C::ExecuteUbergraph_VehiclePlate_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehiclePlate_WBP.VehiclePlate_WBP_C.ExecuteUbergraph_VehiclePlate_WBP");

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
