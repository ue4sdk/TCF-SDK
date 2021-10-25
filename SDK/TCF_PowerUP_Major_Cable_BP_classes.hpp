#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PowerUP_Major_Cable_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PowerUP_Major_Cable_BP.PowerUP_Major_Cable_BP_C
// 0x0000 (0x0471 - 0x0471)
class APowerUP_Major_Cable_BP_C : public APowerCableSpline_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PowerUP_Major_Cable_BP.PowerUP_Major_Cable_BP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
