// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InteriorProps_Server_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteriorProps_Server_BP.InteriorProps_Server_BP_C.Set Server Rack
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             DetailMesh                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInteriorProps_Server_BP_C::Set_Server_Rack(class UStaticMesh** DetailMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteriorProps_Server_BP.InteriorProps_Server_BP_C.Set Server Rack"));

	struct
	{
		class UStaticMesh*             DetailMesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DetailMesh != nullptr)
		*DetailMesh = params.DetailMesh;
}


// Function InteriorProps_Server_BP.InteriorProps_Server_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInteriorProps_Server_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteriorProps_Server_BP.InteriorProps_Server_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
