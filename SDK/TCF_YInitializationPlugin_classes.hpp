#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YInitializationPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YInitializationPlugin.YInitializationManager
// 0x0050 (0x0078 - 0x0028)
class UYInitializationManager : public UObject
{
public:
	TMap<int, struct FYInitializationRequestEntry>     m_requests;                                               // 0x0028(0x0050) (CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YInitializationPlugin.YInitializationManager");
		return ptr;
	}


	static int RequestCompleteInitializationCallbackBlueprint(class AActor* actorContext, const struct FScriptDelegate& Delegate, EYInitializationRequestSettingTypes Type, bool* outSuccess);
};


// Class YInitializationPlugin.YIInitializationRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UYIInitializationRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YInitializationPlugin.YIInitializationRetrievalInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
