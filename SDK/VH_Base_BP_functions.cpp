// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VH_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VH_Base_BP.VH_Base_BP_C.RefreshMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AVH_Base_BP_C::RefreshMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.RefreshMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.BP_RuntimeDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYVehicleStateType             oldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYVehicleStateType             newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVH_Base_BP_C::BP_RuntimeDataChanged(EYVehicleStateType oldState, EYVehicleStateType newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.BP_RuntimeDataChanged"));

	struct
	{
		EYVehicleStateType             oldState;
		EYVehicleStateType             newState;
	} params = {};

	params.oldState = oldState;
	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVH_Base_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AVH_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_0_OnPlayerInteractionStarted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVH_Base_BP_C::BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_0_OnPlayerInteractionStarted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.BndEvt__m_interactionComponent_K2Node_ComponentBoundEvent_0_OnPlayerInteractionStarted__DelegateSignature"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
	} params = {};

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.BP_OnMovementModeChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYMovementModeDataChanged newData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AVH_Base_BP_C::BP_OnMovementModeChanged(const struct FYMovementModeDataChanged& newData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.BP_OnMovementModeChanged"));

	struct
	{
		struct FYMovementModeDataChanged newData;
	} params = {};

	params.newData = newData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.BP_OnImpact
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AVH_Base_BP_C::BP_OnImpact(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.BP_OnImpact"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.BP_OnBoostState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AVH_Base_BP_C::BP_OnBoostState(bool newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.BP_OnBoostState"));

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


// Function VH_Base_BP.VH_Base_BP_C.BP_OnInventoryItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AVH_Base_BP_C::BP_OnInventoryItem(const struct FYInventoryItem& inventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.BP_OnInventoryItem"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
	} params = {};

	params.inventoryItem = inventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_Base_BP.VH_Base_BP_C.ExecuteUbergraph_VH_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AVH_Base_BP_C::ExecuteUbergraph_VH_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_Base_BP.VH_Base_BP_C.ExecuteUbergraph_VH_Base_BP"));

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
