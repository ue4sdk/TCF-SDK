#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioExtensions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.OcclusionPluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.ReverbPluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.SpatializationPluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.SoundfieldEncodingSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UAudioEndpointSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.AudioEndpointSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.DummyEndpointSettings
// 0x0000 (0x0030 - 0x0030)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.DummyEndpointSettings"));
		return ptr;
	}

};


// Class AudioExtensions.SoundModulatorBase
// 0x0000 (0x0030 - 0x0030)
class USoundModulatorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.SoundModulatorBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.SoundfieldEndpointSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.SoundfieldEffectSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (0x0038 - 0x0030)
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioExtensions.SoundfieldEffectBase"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
