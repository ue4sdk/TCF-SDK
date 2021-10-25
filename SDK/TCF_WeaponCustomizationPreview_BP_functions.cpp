// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WeaponCustomizationPreview_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeaponCustomizationPreview_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeaponCustomizationPreview_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.BP_SetRotation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 rotationPivot                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYVanityType                   vanityType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeaponCustomizationPreview_BP_C::BP_SetRotation(const struct FVector& rotationPivot, EYVanityType vanityType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.BP_SetRotation"));

	struct
	{
		struct FVector                 rotationPivot;
		EYVanityType                   vanityType;
	} params;

	params.rotationPivot = rotationPivot;
	params.vanityType = vanityType;

	UObject::ProcessEvent(fn, &params);
}


// Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.BP_OnWeaponChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeaponCustomizationPreview_BP_C::BP_OnWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.BP_OnWeaponChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.ExecuteUbergraph_WeaponCustomizationPreview_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWeaponCustomizationPreview_BP_C::ExecuteUbergraph_WeaponCustomizationPreview_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponCustomizationPreview_BP.WeaponCustomizationPreview_BP_C.ExecuteUbergraph_WeaponCustomizationPreview_BP"));

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
