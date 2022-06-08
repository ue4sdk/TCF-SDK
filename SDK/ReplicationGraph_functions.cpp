// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ReplicationGraph_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// class UClass* /*UObject*/      Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PeriodFrame                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* /*UObject*/ Class, int PeriodFrame)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass"));

	struct
	{
		class UClass* /*UObject*/      Class;
		int                            PeriodFrame;
	} params = {};

	params.Class = Class;
	params.PeriodFrame = PeriodFrame;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// class UClass* /*UObject*/      Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          CullDistance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* /*UObject*/ Class, float CullDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass"));

	struct
	{
		class UClass* /*UObject*/      Class;
		float                          CullDistance;
	} params = {};

	params.Class = Class;
	params.CullDistance = CullDistance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint"));

	struct
	{
		class AActor*                  Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)

void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// struct FString                 Str                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo"));

	struct
	{
		struct FString                 Str;
	} params = {};

	params.Str = Str;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_NetClient)
// Parameters:
// struct FVector                 CellLocation                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 CellExtent                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          actors                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo"));

	struct
	{
		struct FVector                 CellLocation;
		struct FVector                 CellExtent;
		TArray<class AActor*>          actors;
	} params = {};

	params.CellLocation = CellLocation;
	params.CellExtent = CellExtent;
	params.actors = actors;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
