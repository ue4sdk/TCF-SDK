#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DisconnectedScreen_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DisconnectedScreen_BP.DisconnectedScreen_BP_C
// 0x0000 (0x00D0 - 0x00D0)
class UDisconnectedScreen_BP_C : public UYMenuScreenDisconnected
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DisconnectedScreen_BP.DisconnectedScreen_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
