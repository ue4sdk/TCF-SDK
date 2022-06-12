// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Dungeon_HelperFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dungeon_HelperFunctions.Dungeon_HelperFunctions_C.HighlightConnectedActorsDEBUG
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ConnectedActors                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  ThisActor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 DebugText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDungeon_HelperFunctions_C::HighlightConnectedActorsDEBUG(class AActor* ThisActor, const struct FString& DebugText, class UObject* __WorldContext, TArray<class AActor*>* ConnectedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_HelperFunctions.Dungeon_HelperFunctions_C.HighlightConnectedActorsDEBUG"));

	struct
	{
		TArray<class AActor*>          ConnectedActors;
		class AActor*                  ThisActor;
		struct FString                 DebugText;
		class UObject*                 __WorldContext;
	} params = {};

	params.ThisActor = ThisActor;
	params.DebugText = DebugText;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ConnectedActors != nullptr)
		*ConnectedActors = params.ConnectedActors;
}


// Function Dungeon_HelperFunctions.Dungeon_HelperFunctions_C.Register with Dungeon Manager
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxFindRange                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDungeon_HelperFunctions_C::Register_with_Dungeon_Manager(class AActor* Actor, float MaxFindRange, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_HelperFunctions.Dungeon_HelperFunctions_C.Register with Dungeon Manager"));

	struct
	{
		class AActor*                  Actor;
		float                          MaxFindRange;
		class UObject*                 __WorldContext;
	} params = {};

	params.Actor = Actor;
	params.MaxFindRange = MaxFindRange;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
