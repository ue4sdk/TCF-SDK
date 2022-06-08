#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SceneCharacterSelection_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SceneCharacterSelection_BP.SceneCharacterSelection_BP_C
// 0x0000 (0x0438 - 0x0438)
class ASceneCharacterSelection_BP_C : public ASceneBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SceneCharacterSelection_BP.SceneCharacterSelection_BP_C"));
		return ptr;
	}


	int EvaluateStackPop();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
