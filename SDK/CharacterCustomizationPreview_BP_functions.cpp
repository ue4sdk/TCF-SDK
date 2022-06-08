// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CharacterCustomizationPreview_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Get Context String
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FunctionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 contextString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::Get_Context_String(const struct FString& FunctionName, struct FString* contextString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Get Context String"));

	struct
	{
		struct FString                 FunctionName;
		struct FString                 contextString;
	} params = {};

	params.FunctionName = FunctionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (contextString != nullptr)
		*contextString = params.contextString;
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Customization Category Changed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCustomizationCategory        newCategory                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::Customization_Category_Changed(EYCustomizationCategory newCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Customization Category Changed"));

	struct
	{
		EYCustomizationCategory        newCategory;
	} params = {};

	params.newCategory = newCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Set Default Cameras
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterCustomizationPreview_BP_C::Set_Default_Cameras()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Set Default Cameras"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Try Play Archetype Animation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   archetypeId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::Try_Play_Archetype_Animation(const struct FName& archetypeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.Try Play Archetype Animation"));

	struct
	{
		struct FName                   archetypeId;
	} params = {};

	params.archetypeId = archetypeId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACharacterCustomizationPreview_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.OnOnCustomizationCategoryChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYCustomizationCategory        newCategory                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::OnOnCustomizationCategoryChanged(EYCustomizationCategory newCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.OnOnCustomizationCategoryChanged"));

	struct
	{
		EYCustomizationCategory        newCategory;
	} params = {};

	params.newCategory = newCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveCustomizationData newCustomizationData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ACharacterCustomizationPreview_BP_C::BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged"));

	struct
	{
		struct FYActiveCustomizationData newCustomizationData;
	} params = {};

	params.newCustomizationData = newCustomizationData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.BP_OnEmoteWheelChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     emote                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ACharacterCustomizationPreview_BP_C::BP_OnEmoteWheelChanged(const struct FDataTableRowHandle& emote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.BP_OnEmoteWheelChanged"));

	struct
	{
		struct FDataTableRowHandle     emote;
	} params = {};

	params.emote = emote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ExecuteUbergraph_CharacterCustomizationPreview_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACharacterCustomizationPreview_BP_C::ExecuteUbergraph_CharacterCustomizationPreview_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CharacterCustomizationPreview_BP.CharacterCustomizationPreview_BP_C.ExecuteUbergraph_CharacterCustomizationPreview_BP"));

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
