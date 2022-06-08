#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YFileSender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YFileSender.YFileSenderHandler
// 0x0000 (0x0030 - 0x0030)
class UYFileSenderHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YFileSender.YFileSenderHandler"));
		return ptr;
	}

};


// Class YFileSender.YFileSenderHelperFunctions
// 0x0000 (0x0030 - 0x0030)
class UYFileSenderHelperFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YFileSender.YFileSenderHelperFunctions"));
		return ptr;
	}

};


// Class YFileSender.YFileSenderManager
// 0x0030 (0x0060 - 0x0030)
class UYFileSenderManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YFileSender.YFileSenderManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
