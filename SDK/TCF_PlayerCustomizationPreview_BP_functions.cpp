// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerCustomizationPreview_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.SetupEndOfMatchState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerCustomizationPreview_BP_C::SetupEndOfMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.SetupEndOfMatchState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.SetupForArchetype
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   archetypeId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerCustomizationPreview_BP_C::SetupForArchetype(const struct FName& archetypeId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.SetupForArchetype");

	struct
	{
		struct FName                   archetypeId;
	} params;

	params.archetypeId = archetypeId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.IsPreviewedPlayerDead
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool APlayerCustomizationPreview_BP_C::IsPreviewedPlayerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.IsPreviewedPlayerDead");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.RefreshActiveMontage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCustomizationCategory        Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerCustomizationPreview_BP_C::RefreshActiveMontage(EYCustomizationCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.RefreshActiveMontage");

	struct
	{
		EYCustomizationCategory        Category;
	} params;

	params.Category = Category;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_PlayCustomizationMontage
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYCustomizationCategory        Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerCustomizationPreview_BP_C::BP_PlayCustomizationMontage(class UAnimMontage* Montage, EYCustomizationCategory Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_PlayCustomizationMontage");

	struct
	{
		class UAnimMontage*            Montage;
		EYCustomizationCategory        Category;
	} params;

	params.Montage = Montage;
	params.Category = Category;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnShowCustomizationCategory
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYShowBodyTypeCategoryUpdateData customizationCategory          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void APlayerCustomizationPreview_BP_C::BP_OnShowCustomizationCategory(const struct FYShowBodyTypeCategoryUpdateData& customizationCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnShowCustomizationCategory");

	struct
	{
		struct FYShowBodyTypeCategoryUpdateData customizationCategory;
	} params;

	params.customizationCategory = customizationCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnResetRequest
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYCharacterVanityResetRequest  resetRequest                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerCustomizationPreview_BP_C::BP_OnResetRequest(EYCharacterVanityResetRequest resetRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnResetRequest");

	struct
	{
		EYCharacterVanityResetRequest  resetRequest;
	} params;

	params.resetRequest = resetRequest;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_SetDeathEmote
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYCharacterCustomizationRowBase deathEmoteRowBase              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APlayerCustomizationPreview_BP_C::BP_SetDeathEmote(const struct FYCharacterCustomizationRowBase& deathEmoteRowBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_SetDeathEmote");

	struct
	{
		struct FYCharacterCustomizationRowBase deathEmoteRowBase;
	} params;

	params.deathEmoteRowBase = deathEmoteRowBase;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_SetEmote
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYCharacterCustomizationRowBase deathEmoteRowBase              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void APlayerCustomizationPreview_BP_C::BP_SetEmote(const struct FYCharacterCustomizationRowBase& deathEmoteRowBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_SetEmote");

	struct
	{
		struct FYCharacterCustomizationRowBase deathEmoteRowBase;
	} params;

	params.deathEmoteRowBase = deathEmoteRowBase;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnEOMMapLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APlayerCustomizationPreview_BP_C::BP_OnEOMMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnEOMMapLoaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveCustomizationData newCustomizationData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void APlayerCustomizationPreview_BP_C::BP_OnActiveCustomizationDataChanged(const struct FYActiveCustomizationData& newCustomizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.BP_OnActiveCustomizationDataChanged");

	struct
	{
		struct FYActiveCustomizationData newCustomizationData;
	} params;

	params.newCustomizationData = newCustomizationData;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.OnEnteredQuickMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APlayerCustomizationPreview_BP_C::OnEnteredQuickMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.OnEnteredQuickMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APlayerCustomizationPreview_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.ExecuteUbergraph_PlayerCustomizationPreview_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void APlayerCustomizationPreview_BP_C::ExecuteUbergraph_PlayerCustomizationPreview_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCustomizationPreview_BP.PlayerCustomizationPreview_BP_C.ExecuteUbergraph_PlayerCustomizationPreview_BP");

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
