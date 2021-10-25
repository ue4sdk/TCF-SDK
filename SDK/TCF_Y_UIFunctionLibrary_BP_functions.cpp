// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Y_UIFunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.GetFilterTypeFromItemType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EYItemType                     ItemType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isTool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<En_FilterCategoryCollection> FilterType                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::GetFilterTypeFromItemType(EYItemType ItemType, bool isTool, class UObject* __WorldContext, TEnumAsByte<En_FilterCategoryCollection>* FilterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.GetFilterTypeFromItemType");

	struct
	{
		EYItemType                     ItemType;
		bool                           isTool;
		class UObject*                 __WorldContext;
		TEnumAsByte<En_FilterCategoryCollection> FilterType;
	} params;

	params.ItemType = ItemType;
	params.isTool = isTool;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FilterType != nullptr)
		*FilterType = params.FilterType;
}


// Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.CreateGenericToolTip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_Generic_ToolTip_C*  Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UY_UIFunctionLibrary_BP_C::CreateGenericToolTip(const struct FText& Text, class UObject* __WorldContext, class UWBP_Generic_ToolTip_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Y_UIFunctionLibrary_BP.Y_UIFunctionLibrary_BP_C.CreateGenericToolTip");

	struct
	{
		struct FText                   Text;
		class UObject*                 __WorldContext;
		class UWBP_Generic_ToolTip_C*  Widget;
	} params;

	params.Text = Text;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
