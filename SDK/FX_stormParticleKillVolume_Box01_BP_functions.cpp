// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FX_stormParticleKillVolume_Box01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_stormParticleKillVolume_Box01_BP.FX_stormParticleKillVolume_Box01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_stormParticleKillVolume_Box01_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_Box01_BP.FX_stormParticleKillVolume_Box01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_stormParticleKillVolume_Box01_BP.FX_stormParticleKillVolume_Box01_BP_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFX_stormParticleKillVolume_Box01_BP_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_Box01_BP.FX_stormParticleKillVolume_Box01_BP_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function FX_stormParticleKillVolume_Box01_BP.FX_stormParticleKillVolume_Box01_BP_C.ExecuteUbergraph_FX_stormParticleKillVolume_Box01_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_stormParticleKillVolume_Box01_BP_C::ExecuteUbergraph_FX_stormParticleKillVolume_Box01_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FX_stormParticleKillVolume_Box01_BP.FX_stormParticleKillVolume_Box01_BP_C.ExecuteUbergraph_FX_stormParticleKillVolume_Box01_BP"));

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
