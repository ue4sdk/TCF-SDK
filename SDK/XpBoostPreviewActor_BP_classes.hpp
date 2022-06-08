#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "XpBoostPreviewActor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XpBoostPreviewActor_BP.XpBoostPreviewActor_BP_C
// 0x0014 (0x03E8 - 0x03D4)
class AXpBoostPreviewActor_BP_C : public AGenericItemPreviewActor_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UChildActorComponent*                        QuickMenu_FortunaPass_Normal_XpBoost;                     // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass XpBoostPreviewActor_BP.XpBoostPreviewActor_BP_C"));
		return ptr;
	}


	void OnLoaded_C782B4214A73EBD3BD87A29C0A4311FA(class UObject* Loaded);
	void OnLoaded_7887A01A4776A247D67A6AAF8FCDC274(class UObject* Loaded);
	void Set_Preview_Item_Id(const struct FString& ItemIdIn);
	void ExecuteUbergraph_XpBoostPreviewActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
