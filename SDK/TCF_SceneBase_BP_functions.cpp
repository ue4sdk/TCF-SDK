// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SceneBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SceneBase_BP.SceneBase_BP_C.BP_UnInitialize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASceneBase_BP_C::BP_UnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneBase_BP.SceneBase_BP_C.BP_UnInitialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SceneBase_BP.SceneBase_BP_C.BP_Initialize
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYSceneRuntimeInitializationData sceneRuntimeInitializationData (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ASceneBase_BP_C::BP_Initialize(const struct FYSceneRuntimeInitializationData& sceneRuntimeInitializationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneBase_BP.SceneBase_BP_C.BP_Initialize");

	struct
	{
		struct FYSceneRuntimeInitializationData sceneRuntimeInitializationData;
	} params;

	params.sceneRuntimeInitializationData = sceneRuntimeInitializationData;

	UObject::ProcessEvent(fn, &params);
}


// Function SceneBase_BP.SceneBase_BP_C.ExecuteUbergraph_SceneBase_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASceneBase_BP_C::ExecuteUbergraph_SceneBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SceneBase_BP.SceneBase_BP_C.ExecuteUbergraph_SceneBase_BP");

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
