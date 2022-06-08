// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Tool_BinocularComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C.Init
// (FUNC_BlueprintEvent)
// Parameters:
// class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPlayerCharacterWeaponComponent* characterWeaponComponent       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTool_BinocularComponent_BP_C::Init(class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent, class UYPlayerCharacterWeaponComponent* characterWeaponComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C.Init"));

	struct
	{
		class UYWeaponPlayerControllerRuntimeComponent* weaponRuntimeComponent;
		class UYPlayerCharacterWeaponComponent* characterWeaponComponent;
	} params = {};

	params.weaponRuntimeComponent = weaponRuntimeComponent;
	params.characterWeaponComponent = characterWeaponComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C.OnAimDownSight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTool_BinocularComponent_BP_C::OnAimDownSight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C.OnAimDownSight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C.ExecuteUbergraph_Tool_BinocularComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTool_BinocularComponent_BP_C::ExecuteUbergraph_Tool_BinocularComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tool_BinocularComponent_BP.Tool_BinocularComponent_BP_C.ExecuteUbergraph_Tool_BinocularComponent_BP"));

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
