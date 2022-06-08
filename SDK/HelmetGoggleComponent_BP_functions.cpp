// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HelmetGoggleComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.Bind to Armor Updated Event
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldBind                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHelmetGoggleComponent_BP_C::Bind_to_Armor_Updated_Event(bool ShouldBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.Bind to Armor Updated Event"));

	struct
	{
		bool                           ShouldBind;
	} params = {};

	params.ShouldBind = ShouldBind;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.SetNewBlendableMat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      NewMat                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::SetNewBlendableMat(class UMaterialInterface* NewMat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.SetNewBlendableMat"));

	struct
	{
		class UMaterialInterface*      NewMat;
	} params = {};

	params.NewMat = NewMat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.BindToItemRemovedEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldBind                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHelmetGoggleComponent_BP_C::BindToItemRemovedEvent(bool ShouldBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.BindToItemRemovedEvent"));

	struct
	{
		bool                           ShouldBind;
	} params = {};

	params.ShouldBind = ShouldBind;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.EnableNV
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      NewMat                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::EnableNV(class UMaterialInterface* NewMat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.EnableNV"));

	struct
	{
		class UMaterialInterface*      NewMat;
	} params = {};

	params.NewMat = NewMat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.OnItemRemoved
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYPlayerSetType                equippedSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::OnItemRemoved(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.OnItemRemoved"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
		EYPlayerSetType                equippedSetType;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;
	params.equippedSetType = equippedSetType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.OnArmorUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYArmorComponent*        armorComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::OnArmorUpdated(class UYArmorComponent* armorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.OnArmorUpdated"));

	struct
	{
		class UYArmorComponent*        armorComponent;
	} params = {};

	params.armorComponent = armorComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ToggleNightVision
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHelmetGoggleComponent_BP_C::ToggleNightVision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ToggleNightVision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ExecuteUbergraph_HelmetGoggleComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHelmetGoggleComponent_BP_C::ExecuteUbergraph_HelmetGoggleComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HelmetGoggleComponent_BP.HelmetGoggleComponent_BP_C.ExecuteUbergraph_HelmetGoggleComponent_BP"));

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
