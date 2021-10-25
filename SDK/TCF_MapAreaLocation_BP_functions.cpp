// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MapAreaLocation_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapAreaLocation_BP.MapAreaLocation_BP_C.RemoveFromHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMapAreaLocation_BP_C::RemoveFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.RemoveFromHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.StartAnnounceArea
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  playerActorContext             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMapAreaLocation_BP_C::StartAnnounceArea(class AActor* playerActorContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.StartAnnounceArea");

	struct
	{
		class AActor*                  playerActorContext;
	} params;

	params.playerActorContext = playerActorContext;

	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.RetrieveLocationTag
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Tag                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMapAreaLocation_BP_C::RetrieveLocationTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.RetrieveLocationTag");

	struct
	{
		struct FName                   Tag;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.UpdateCharacterLocationTag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  playerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsBeginOverlap                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMapAreaLocation_BP_C::UpdateCharacterLocationTag(class AActor* playerCharacter, bool IsBeginOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.UpdateCharacterLocationTag");

	struct
	{
		class AActor*                  playerCharacter;
		bool                           IsBeginOverlap;
	} params;

	params.playerCharacter = playerCharacter;
	params.IsBeginOverlap = IsBeginOverlap;

	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlapActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsBeginOverlap                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMapAreaLocation_BP_C::OnOverlapUpdate(class AActor* OverlapActor, bool IsBeginOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapUpdate");

	struct
	{
		class AActor*                  OverlapActor;
		bool                           IsBeginOverlap;
	} params;

	params.OverlapActor = OverlapActor;
	params.IsBeginOverlap = IsBeginOverlap;

	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.SetupAreaName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMapAreaLocation_BP_C::SetupAreaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.SetupAreaName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.BP_CheckForErrors
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMapErrorInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FYMapErrorInfo AMapAreaLocation_BP_C::BP_CheckForErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.BP_CheckForErrors");

	struct
	{
		struct FYMapErrorInfo          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMapAreaLocation_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapBegin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMapAreaLocation_BP_C::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapBegin");

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params;

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMapAreaLocation_BP_C::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.OnOverlapEnd");

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params;

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.SetupMapMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMapAreaLocation_BP_C::SetupMapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.SetupMapMarker");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapAreaLocation_BP.MapAreaLocation_BP_C.ExecuteUbergraph_MapAreaLocation_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMapAreaLocation_BP_C::ExecuteUbergraph_MapAreaLocation_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapAreaLocation_BP.MapAreaLocation_BP_C.ExecuteUbergraph_MapAreaLocation_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
