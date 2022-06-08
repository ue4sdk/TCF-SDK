// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_TextOfferPrice_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.BP_AssociatedOffers
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         offerIds                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_TextOfferPrice_WBP_C::BP_AssociatedOffers(TArray<struct FString> offerIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.BP_AssociatedOffers"));

	struct
	{
		TArray<struct FString>         offerIds;
	} params = {};

	params.offerIds = offerIds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.UpdateUnavailableText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYOfferUnavailableReason       unavailableReason              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   unavailableReasonText          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_TextOfferPrice_WBP_C::UpdateUnavailableText(EYOfferUnavailableReason unavailableReason, struct FText* unavailableReasonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.UpdateUnavailableText"));

	struct
	{
		EYOfferUnavailableReason       unavailableReason;
		struct FText                   unavailableReasonText;
	} params = {};

	params.unavailableReason = unavailableReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (unavailableReasonText != nullptr)
		*unavailableReasonText = params.unavailableReasonText;
}


// Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.BP_Update
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// bool                           canPurchaseOffer               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// EYOfferUnavailableReason       unavailableReason              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   unavailableReasonText          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_TextOfferPrice_WBP_C::BP_Update(bool canPurchaseOffer, EYOfferUnavailableReason unavailableReason, const struct FText& unavailableReasonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.BP_Update"));

	struct
	{
		bool                           canPurchaseOffer;
		EYOfferUnavailableReason       unavailableReason;
		struct FText                   unavailableReasonText;
	} params = {};

	params.canPurchaseOffer = canPurchaseOffer;
	params.unavailableReason = unavailableReason;
	params.unavailableReasonText = unavailableReasonText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.ExecuteUbergraph_ItemComponent_TextOfferPrice_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_TextOfferPrice_WBP_C::ExecuteUbergraph_ItemComponent_TextOfferPrice_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ItemComponent_TextOfferPrice_WBP.ItemComponent_TextOfferPrice_WBP_C.ExecuteUbergraph_ItemComponent_TextOfferPrice_WBP"));

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
