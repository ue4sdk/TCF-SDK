// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CharacterCustomizationPreview_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.TryPlayArchetypeAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   archetypeId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::TryPlayArchetypeAnimation(const struct FName& archetypeId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.TryPlayArchetypeAnimation"));

	struct
	{
		struct FName                   archetypeId;
	} params;

	params.archetypeId = archetypeId;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACharacterCustomizationPreview_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.OnOnCustomizationCategoryChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYCustomizationCategory        newCategory                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::OnOnCustomizationCategoryChanged(EYCustomizationCategory newCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.OnOnCustomizationCategoryChanged"));

	struct
	{
		EYCustomizationCategory        newCategory;
	} params;

	params.newCategory = newCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveCustomizationData newCustomizationData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ACharacterCustomizationPreview_BP_C::BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged"));

	struct
	{
		struct FYActiveCustomizationData newCustomizationData;
	} params;

	params.newCustomizationData = newCustomizationData;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ExecuteUbergraph_CharacterCustomizationPreview_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::ExecuteUbergraph_CharacterCustomizationPreview_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ExecuteUbergraph_CharacterCustomizationPreview_BP"));

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
