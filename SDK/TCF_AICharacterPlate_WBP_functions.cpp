// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AICharacterPlate_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UAICharacterPlate_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAICharacterPlate_WBP_C::BP_InitializeFor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_InitializeFor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_UpdatePerks
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAICharacterPlate_WBP_C::BP_UpdatePerks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.BP_UpdatePerks");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.OnCurrentHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacterPlate_WBP_C::OnCurrentHealthChanged(float CurrentHealth, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.OnCurrentHealthChanged");

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params;

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.RefreshGameplayTags
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAICharacterPlate_WBP_C::RefreshGameplayTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.RefreshGameplayTags");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAICharacterPlate_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.ExecuteUbergraph_AICharacterPlate_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAICharacterPlate_WBP_C::ExecuteUbergraph_AICharacterPlate_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICharacterPlate_WBP.AICharacterPlate_WBP_C.ExecuteUbergraph_AICharacterPlate_WBP");

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
