#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPickup_Ammo_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPickup_Ammo_BP.YPickup_Ammo_BP_C
// 0x0001 (0x048D - 0x048C)
class AYPickup_Ammo_BP_C : public AYPickup_Base_BP_C
{
public:
	bool                                               IsDisabled;                                               // 0x048C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YPickup_Ammo_BP.YPickup_Ammo_BP_C");
		return ptr;
	}


	struct FText BP_GetInteractionBlockedMessage(int numInputBindings);
	struct FText BP_GetInteractionAvailableMessage(int numInputBindings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
