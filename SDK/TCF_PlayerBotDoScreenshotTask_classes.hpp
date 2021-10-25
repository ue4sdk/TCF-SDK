#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerBotDoScreenshotTask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerBotDoScreenshotTask.PlayerBotDoScreenshotTask_C
// 0x0008 (0x00B0 - 0x00A8)
class UPlayerBotDoScreenshotTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PlayerBotDoScreenshotTask.PlayerBotDoScreenshotTask_C");
		return ptr;
	}


	void ReceiveExecute(class AActor* ownerActor);
	void ExecuteUbergraph_PlayerBotDoScreenshotTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
