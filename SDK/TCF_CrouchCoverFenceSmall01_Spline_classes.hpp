#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CrouchCoverFenceSmall01_Spline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrouchCoverFenceSmall01_Spline.CrouchCoverFenceSmall01_Spline_C
// 0x0000 (0x03F8 - 0x03F8)
class ACrouchCoverFenceSmall01_Spline_C : public ABaseSpline_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CrouchCoverFenceSmall01_Spline.CrouchCoverFenceSmall01_Spline_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
