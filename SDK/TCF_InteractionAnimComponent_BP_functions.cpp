// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_InteractionAnimComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SpawnPickUpMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::SpawnPickUpMesh(class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SpawnPickUpMesh");

	struct
	{
		class UStaticMesh*             StaticMesh;
	} params;

	params.StaticMesh = StaticMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnNotifyEnd_EAEB331B430B0C93C3C593A0F4ABDF02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::OnNotifyEnd_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnNotifyEnd_EAEB331B430B0C93C3C593A0F4ABDF02");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnNotifyBegin_EAEB331B430B0C93C3C593A0F4ABDF02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::OnNotifyBegin_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnNotifyBegin_EAEB331B430B0C93C3C593A0F4ABDF02");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInterrupted_EAEB331B430B0C93C3C593A0F4ABDF02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::OnInterrupted_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInterrupted_EAEB331B430B0C93C3C593A0F4ABDF02");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnBlendOut_EAEB331B430B0C93C3C593A0F4ABDF02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::OnBlendOut_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnBlendOut_EAEB331B430B0C93C3C593A0F4ABDF02");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnCompleted_EAEB331B430B0C93C3C593A0F4ABDF02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::OnCompleted_EAEB331B430B0C93C3C593A0F4ABDF02(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnCompleted_EAEB331B430B0C93C3C593A0F4ABDF02");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.PlaySpecialPickupAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYItemRarityType               itemRarity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::PlaySpecialPickupAnimation(class UStaticMesh* StaticMesh, EYItemRarityType itemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.PlaySpecialPickupAnimation");

	struct
	{
		class UStaticMesh*             StaticMesh;
		EYItemRarityType               itemRarity;
	} params;

	params.StaticMesh = StaticMesh;
	params.itemRarity = itemRarity;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryDestroyPickUpItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::TryDestroyPickUpItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryDestroyPickUpItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ExecuteUbergraph_InteractionAnimComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::ExecuteUbergraph_InteractionAnimComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ExecuteUbergraph_InteractionAnimComponent_BP");

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
