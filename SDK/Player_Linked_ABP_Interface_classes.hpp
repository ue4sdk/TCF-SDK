#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Player_Linked_ABP_Interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C
// 0x0000 (0x0030 - 0x0030)
class UPlayer_Linked_ABP_Interface_C : public UAnimLayerInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass Player_Linked_ABP_Interface.Player_Linked_ABP_Interface_C"));
		return ptr;
	}


	void TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody);
	void TPP_Loco(struct FPoseLink* TPP_Loco);
	void TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
