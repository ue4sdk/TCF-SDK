#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Station_P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Station_P.Station_P_C
// 0x0018 (0x02D8 - 0x02C0)
class AStation_P_C : public AYLevelScript
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class APlayerCustomizationPreview_BP_C*            PlayerCustomizationPreview_BP_2_ExecuteUbergraph_Station_P_RefProperty;// 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACharacterCustomizationPreviewGeneric_BP_C*  CharacterCustomizationPreviewGeneric_BP_2_ExecuteUbergraph_Station_P_RefProperty;// 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Station_P.Station_P_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Station_P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
