// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerRenderTargetVfxManagerComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.UpdateCurrent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::UpdateCurrent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.UpdateCurrent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.UpdateRelevantEntities
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::UpdateRelevantEntities()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.UpdateRelevantEntities"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.InsertEntityDistanceAndMovementComponent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPlayerRenderTargetVfxMovementComponent_BP_C* RenderTargetMovementComponent  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaximumArrayLength             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::InsertEntityDistanceAndMovementComponent(float Distance, class UYPlayerRenderTargetVfxMovementComponent_BP_C* RenderTargetMovementComponent, int MaximumArrayLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.InsertEntityDistanceAndMovementComponent"));

	struct
	{
		float                          Distance;
		class UYPlayerRenderTargetVfxMovementComponent_BP_C* RenderTargetMovementComponent;
		int                            MaximumArrayLength;
	} params = {};

	params.Distance = Distance;
	params.RenderTargetMovementComponent = RenderTargetMovementComponent;
	params.MaximumArrayLength = MaximumArrayLength;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.SetVectorParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurentIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::SetVectorParameters(const struct FVector& Position, float Size, float Opacity, int CurentIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.SetVectorParameters"));

	struct
	{
		struct FVector                 Position;
		float                          Size;
		float                          Opacity;
		int                            CurentIndex;
	} params = {};

	params.Position = Position;
	params.Size = Size;
	params.Opacity = Opacity;
	params.CurentIndex = CurentIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.DrawToRendertarget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::DrawToRendertarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.DrawToRendertarget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.BP_DrawToPlayerRenderTargetVfxManager
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::BP_DrawToPlayerRenderTargetVfxManager(const struct FVector& Position, float Size, float Opacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.BP_DrawToPlayerRenderTargetVfxManager"));

	struct
	{
		struct FVector                 Position;
		float                          Size;
		float                          Opacity;
	} params = {};

	params.Position = Position;
	params.Size = Size;
	params.Opacity = Opacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.OnSettingsApplied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::OnSettingsApplied()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.OnSettingsApplied"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.requestRenderTargetUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPlayerRenderTargetVfxMovementComponent_BP_C* NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::requestRenderTargetUpdate(class UYPlayerRenderTargetVfxMovementComponent_BP_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.requestRenderTargetUpdate"));

	struct
	{
		class UYPlayerRenderTargetVfxMovementComponent_BP_C* NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.RemoveRequest
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPlayerRenderTargetVfxMovementComponent_BP_C* Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::RemoveRequest(class UYPlayerRenderTargetVfxMovementComponent_BP_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.RemoveRequest"));

	struct
	{
		class UYPlayerRenderTargetVfxMovementComponent_BP_C* Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.FindClosestEnemies
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::FindClosestEnemies()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.FindClosestEnemies"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ExecuteUbergraph_YPlayerRenderTargetVfxManagerComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerRenderTargetVfxManagerComponent_BP_C::ExecuteUbergraph_YPlayerRenderTargetVfxManagerComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerRenderTargetVfxManagerComponent_BP.YPlayerRenderTargetVfxManagerComponent_BP_C.ExecuteUbergraph_YPlayerRenderTargetVfxManagerComponent_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
