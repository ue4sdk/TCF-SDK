// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FortunaPassItem_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortunaPassItem_WBP.FortunaPassItem_WBP_C.OnLoaded_16A3C47745B197862DEEE5A07F751988
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFortunaPassItem_WBP_C::OnLoaded_16A3C47745B197862DEEE5A07F751988(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassItem_WBP.FortunaPassItem_WBP_C.OnLoaded_16A3C47745B197862DEEE5A07F751988"));

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassItem_WBP.FortunaPassItem_WBP_C.UpdateItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFortunaPassItemData    inData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFortunaPassItem_WBP_C::UpdateItem(const struct FFortunaPassItemData& inData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassItem_WBP.FortunaPassItem_WBP_C.UpdateItem"));

	struct
	{
		struct FFortunaPassItemData    inData;
	} params;

	params.inData = inData;

	UObject::ProcessEvent(fn, &params);
}


// Function FortunaPassItem_WBP.FortunaPassItem_WBP_C.ExecuteUbergraph_FortunaPassItem_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFortunaPassItem_WBP_C::ExecuteUbergraph_FortunaPassItem_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FortunaPassItem_WBP.FortunaPassItem_WBP_C.ExecuteUbergraph_FortunaPassItem_WBP"));

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
