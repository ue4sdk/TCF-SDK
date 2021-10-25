// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PrefabricatorRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void APrefabActor::SavePrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.SavePrefab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRandomStream           InRandom                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bRecursive                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APrefabActor::RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.RandomizeSeed");

	struct
	{
		struct FRandomStream           InRandom;
		bool                           bRecursive;
	} params;

	params.InRandom = InRandom;
	params.bRecursive = bRecursive;

	UObject::ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void APrefabActor::LoadPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.LoadPrefab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool APrefabActor::IsPrefabOutdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPrefabricatorAsset*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset");

	struct
	{
		class UPrefabricatorAsset*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InSeed                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APrefabRandomizer::Randomize(int InSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabRandomizer.Randomize");

	struct
	{
		int                            InSeed;
	} params;

	params.InSeed = InSeed;

	UObject::ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APrefabActor*            Prefab                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPrefabricatorEventListener::PostSpawn(class APrefabActor* Prefab)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn");

	struct
	{
		class APrefabActor*            Prefab;
	} params;

	params.Prefab = Prefab;

	UObject::ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APrefabActor*            PrefabActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::UnlinkPrefab(class APrefabActor* PrefabActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab");

	struct
	{
		class APrefabActor*            PrefabActor;
	} params;

	params.PrefabActor = PrefabActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface* Prefab                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APrefabActor*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APrefabActor* UPrefabricatorBlueprintLibrary::SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab");

	struct
	{
		class UObject*                 WorldContextObject;
		class UPrefabricatorAssetInterface* Prefab;
		struct FTransform              Transform;
		int                            Seed;
		class APrefabActor*            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Prefab = Prefab;
	params.Transform = Transform;
	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APrefabActor*            PrefabActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface* Prefab                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bReloadPrefab                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset");

	struct
	{
		class APrefabActor*            PrefabActor;
		class UPrefabricatorAssetInterface* Prefab;
		bool                           bReloadPrefab;
	} params;

	params.PrefabActor = PrefabActor;
	params.Prefab = Prefab;
	params.bReloadPrefab = bReloadPrefab;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class APrefabActor*            PrefabActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRandomStream           InRandom                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab");

	struct
	{
		class APrefabActor*            PrefabActor;
		struct FRandomStream           InRandom;
	} params;

	params.PrefabActor = PrefabActor;
	params.InRandom = InRandom;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Prefab                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          AttachedActors                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors");

	struct
	{
		class AActor*                  Prefab;
		TArray<class AActor*>          AttachedActors;
	} params;

	params.Prefab = Prefab;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AttachedActors != nullptr)
		*AttachedActors = params.AttachedActors;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APrefabActor*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APrefabActor* UPrefabricatorBlueprintLibrary::FindTopMostPrefabActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor");

	struct
	{
		class AActor*                  InActor;
		class APrefabActor*            ReturnValue;
	} params;

	params.InActor = InActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
