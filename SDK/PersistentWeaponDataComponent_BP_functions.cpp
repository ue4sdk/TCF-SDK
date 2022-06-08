// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PersistentWeaponDataComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.DestroyOldestPostActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPersistentWeaponDataComponent_BP_C::DestroyOldestPostActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.DestroyOldestPostActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.AddMessagePostsActor
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MessagePostActor               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxAllowed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPersistentWeaponDataComponent_BP_C::AddMessagePostsActor(class AActor* MessagePostActor, int MaxAllowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.AddMessagePostsActor"));

	struct
	{
		class AActor*                  MessagePostActor;
		int                            MaxAllowed;
	} params = {};

	params.MessagePostActor = MessagePostActor;
	params.MaxAllowed = MaxAllowed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.OnDestroyed_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPersistentWeaponDataComponent_BP_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.OnDestroyed_Event_1"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.ExecuteUbergraph_PersistentWeaponDataComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPersistentWeaponDataComponent_BP_C::ExecuteUbergraph_PersistentWeaponDataComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PersistentWeaponDataComponent_BP.PersistentWeaponDataComponent_BP_C.ExecuteUbergraph_PersistentWeaponDataComponent_BP"));

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
