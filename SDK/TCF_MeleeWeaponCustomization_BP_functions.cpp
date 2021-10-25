// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MeleeWeaponCustomization_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeleeWeaponCustomization_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.OnLoaded_143A10034D179E9A18A9BEB9CD8A42EF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMeleeWeaponCustomization_BP_C::OnLoaded_143A10034D179E9A18A9BEB9CD8A42EF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.OnLoaded_143A10034D179E9A18A9BEB9CD8A42EF");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.OnLoaded_603C613442143C4DDF9B4FAA74FA4987
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMeleeWeaponCustomization_BP_C::OnLoaded_603C613442143C4DDF9B4FAA74FA4987(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.OnLoaded_603C613442143C4DDF9B4FAA74FA4987");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     oldRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FDataTableRowHandle     newRowHandle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AMeleeWeaponCustomization_BP_C::BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature");

	struct
	{
		struct FDataTableRowHandle     oldRowHandle;
		struct FDataTableRowHandle     newRowHandle;
	} params;

	params.oldRowHandle = oldRowHandle;
	params.newRowHandle = newRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.Preview
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeleeWeaponCustomization_BP_C::Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.Preview");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.ExecuteUbergraph_MeleeWeaponCustomization_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMeleeWeaponCustomization_BP_C::ExecuteUbergraph_MeleeWeaponCustomization_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C.ExecuteUbergraph_MeleeWeaponCustomization_BP");

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
