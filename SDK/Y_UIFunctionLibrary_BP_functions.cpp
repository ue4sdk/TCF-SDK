// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Y_UIFunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Correct Amount
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CostAmout                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            itemAmount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CorrectAmount                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::Get_Correct_Amount(int CostAmout, int itemAmount, class UObject* __WorldContext, int* CorrectAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Correct Amount"));

	struct
	{
		int                            CostAmout;
		int                            itemAmount;
		class UObject*                 __WorldContext;
		int                            CorrectAmount;
	} params = {};

	params.CostAmout = CostAmout;
	params.itemAmount = itemAmount;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CorrectAmount != nullptr)
		*CorrectAmount = params.CorrectAmount;
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get if Not Enough Money
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 callerContext                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FYCostEntryRow          CostEntryRow                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            itemAmount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NotEnoughMoney                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UY_UIFunctionLibrary_BP_C::Get_if_Not_Enough_Money(class APlayerController* PlayerController, const struct FString& callerContext, const struct FYCostEntryRow& CostEntryRow, int itemAmount, class UObject* __WorldContext, bool* NotEnoughMoney)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get if Not Enough Money"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FString                 callerContext;
		struct FYCostEntryRow          CostEntryRow;
		int                            itemAmount;
		class UObject*                 __WorldContext;
		bool                           NotEnoughMoney;
	} params = {};

	params.PlayerController = PlayerController;
	params.callerContext = callerContext;
	params.CostEntryRow = CostEntryRow;
	params.itemAmount = itemAmount;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NotEnoughMoney != nullptr)
		*NotEnoughMoney = params.NotEnoughMoney;
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Update Customization State
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYQuickMenuSubScreen           QuickMenuSubScreen             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::Update_Customization_State(EYQuickMenuSubScreen QuickMenuSubScreen, class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Update Customization State"));

	struct
	{
		EYQuickMenuSubScreen           QuickMenuSubScreen;
		class APlayerController*       PlayerController;
		class UObject*                 __WorldContext;
	} params = {};

	params.QuickMenuSubScreen = QuickMenuSubScreen;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Filter Type from Vanity Type
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYVanityType                   vanityType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<En_FilterCategoryCollection> FilterType                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::Get_Filter_Type_from_Vanity_Type(EYVanityType vanityType, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Filter Type from Vanity Type"));

	struct
	{
		EYVanityType                   vanityType;
		class UObject*                 __WorldContext;
		TEnumAsByte<En_FilterCategoryCollection> FilterType;
	} params = {};

	params.vanityType = vanityType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FilterType != nullptr)
		*FilterType = params.FilterType;
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Filter Type from Customization Category
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYCustomizationCategory        vanityCustomizationType        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<En_FilterCategoryCollection> FilterType                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::Get_Filter_Type_from_Customization_Category(EYCustomizationCategory vanityCustomizationType, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Filter Type from Customization Category"));

	struct
	{
		EYCustomizationCategory        vanityCustomizationType;
		class UObject*                 __WorldContext;
		TEnumAsByte<En_FilterCategoryCollection> FilterType;
	} params = {};

	params.vanityCustomizationType = vanityCustomizationType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FilterType != nullptr)
		*FilterType = params.FilterType;
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Filter Type from Item Type
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemType                     ItemType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isTool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<En_FilterCategoryCollection> FilterType                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::Get_Filter_Type_from_Item_Type(EYItemType ItemType, bool isTool, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Get Filter Type from Item Type"));

	struct
	{
		EYItemType                     ItemType;
		bool                           isTool;
		class UObject*                 __WorldContext;
		TEnumAsByte<En_FilterCategoryCollection> FilterType;
	} params = {};

	params.ItemType = ItemType;
	params.isTool = isTool;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FilterType != nullptr)
		*FilterType = params.FilterType;
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Create Generic Tool Tip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_Generic_ToolTip_C*  Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::Create_Generic_Tool_Tip(const struct FText& Text, class UObject* __WorldContext, class UWBP_Generic_ToolTip_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.Create Generic Tool Tip"));

	struct
	{
		struct FText                   Text;
		class UObject*                 __WorldContext;
		class UWBP_Generic_ToolTip_C*  Widget;
	} params = {};

	params.Text = Text;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
