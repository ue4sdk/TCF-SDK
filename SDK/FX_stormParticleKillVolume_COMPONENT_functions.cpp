// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FX_stormParticleKillVolume_COMPONENT_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.updateVolumes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFX_stormParticleKillVolume_COMPONENT_C::updateVolumes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.updateVolumes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.unregisterVolume
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFX_stormParticleKillVolume_Box01_BP_C* KillVolume                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFX_stormParticleKillVolume_COMPONENT_C::unregisterVolume(class AFX_stormParticleKillVolume_Box01_BP_C* KillVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.unregisterVolume"));

	struct
	{
		class AFX_stormParticleKillVolume_Box01_BP_C* KillVolume;
	} params = {};

	params.KillVolume = KillVolume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.registerVolume
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFX_stormParticleKillVolume_Box01_BP_C* KillVolume                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFX_stormParticleKillVolume_COMPONENT_C::registerVolume(class AFX_stormParticleKillVolume_Box01_BP_C* KillVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.registerVolume"));

	struct
	{
		class AFX_stormParticleKillVolume_Box01_BP_C* KillVolume;
	} params = {};

	params.KillVolume = KillVolume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFX_stormParticleKillVolume_COMPONENT_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.ExecuteUbergraph_FX_stormParticleKillVolume_COMPONENT
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFX_stormParticleKillVolume_COMPONENT_C::ExecuteUbergraph_FX_stormParticleKillVolume_COMPONENT(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_COMPONENT.FX_stormParticleKillVolume_COMPONENT_C.ExecuteUbergraph_FX_stormParticleKillVolume_COMPONENT"));

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
