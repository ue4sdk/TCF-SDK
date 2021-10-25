#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_EndOfMatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndOfMatch.EndOfMatch_C
// 0x0020 (0x0268 - 0x0248)
class AEndOfMatch_C : public AYEndOfMatchLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ACineCameraActor*                            Camera_EvacSuccess_ExecuteUbergraph_EndOfMatch_RefProperty;// 0x0250(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            Camera_EvacFailed_ExecuteUbergraph_EndOfMatch_RefProperty;// 0x0258(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ASkeletalMeshActor*                          CH_FoamGuy01_BlendShape_SK_6_ExecuteUbergraph_EndOfMatch_RefProperty;// 0x0260(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EndOfMatch.EndOfMatch_C"));
		return ptr;
	}


	void BP_ShowEOM(class APlayerController* PlayerController);
	void ExecuteUbergraph_EndOfMatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
