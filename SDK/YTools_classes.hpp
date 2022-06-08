#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YTools_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YTools.YToolsBPLibrary
// 0x0000 (0x0030 - 0x0030)
class UYToolsBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YTools.YToolsBPLibrary"));
		return ptr;
	}


	static bool TestFileWriter(const struct FString& FolderName, const struct FString& Filename, const struct FString& BaseStringToSave, int Iterations, float Delay);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
