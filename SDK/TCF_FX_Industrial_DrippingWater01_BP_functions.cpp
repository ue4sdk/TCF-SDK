// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_Industrial_DrippingWater01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.spawnImpact
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_Industrial_DrippingWater01_BP_C::spawnImpact(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.spawnImpact"));

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.spawnDrop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_Industrial_DrippingWater01_BP_C::spawnDrop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.spawnDrop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_Industrial_DrippingWater01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_Industrial_DrippingWater01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_Industrial_DrippingWater01_BP_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.CustomEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.dropImpact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ParticleTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_Industrial_DrippingWater01_BP_C::dropImpact(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.dropImpact"));

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleTime;
		struct FVector                 Location;
		struct FVector                 Velocity;
		struct FVector                 Direction;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


// Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.ExecuteUbergraph_FX_Industrial_DrippingWater01_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_Industrial_DrippingWater01_BP_C::ExecuteUbergraph_FX_Industrial_DrippingWater01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_Industrial_DrippingWater01_BP.FX_Industrial_DrippingWater01_BP_C.ExecuteUbergraph_FX_Industrial_DrippingWater01_BP"));

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
