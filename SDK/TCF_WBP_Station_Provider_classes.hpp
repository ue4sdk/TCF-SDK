#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Provider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_Station_Provider.WBP_Station_Provider_C
// 0x0008 (0x0070 - 0x0068)
class UWBP_Station_Provider_C : public UYWidgetProvider_Station
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WBP_Station_Provider.WBP_Station_Provider_C");
		return ptr;
	}


	void BP_ToggleInventoryMenu();
	void ExecuteUbergraph_WBP_Station_Provider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
