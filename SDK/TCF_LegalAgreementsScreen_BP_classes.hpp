#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LegalAgreementsScreen_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LegalAgreementsScreen_BP.LegalAgreementsScreen_BP_C
// 0x0000 (0x00C0 - 0x00C0)
class ULegalAgreementsScreen_BP_C : public UYMenuScreenLegalAgreements
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LegalAgreementsScreen_BP.LegalAgreementsScreen_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
