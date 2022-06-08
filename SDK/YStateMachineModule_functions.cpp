// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YStateMachineModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction YStateMachineModule.YHierarchicalStateBase.StateExitTransitionDoneSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYHierarchicalStateBase* exitedState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateBase::StateExitTransitionDoneSignature__DelegateSignature(class UYHierarchicalStateBase* exitedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction YStateMachineModule.YHierarchicalStateBase.StateExitTransitionDoneSignature__DelegateSignature"));

	struct
	{
		class UYHierarchicalStateBase* exitedState;
	} params = {};

	params.exitedState = exitedState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction YStateMachineModule.YHierarchicalStateBase.StateEnterTransitionDoneSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYHierarchicalStateBase* enteredState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateBase::StateEnterTransitionDoneSignature__DelegateSignature(class UYHierarchicalStateBase* enteredState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction YStateMachineModule.YHierarchicalStateBase.StateEnterTransitionDoneSignature__DelegateSignature"));

	struct
	{
		class UYHierarchicalStateBase* enteredState;
	} params = {};

	params.enteredState = enteredState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction YStateMachineModule.YHierarchicalStateBase.RequestStatePopSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYHierarchicalStateBase::RequestStatePopSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction YStateMachineModule.YHierarchicalStateBase.RequestStatePopSignature__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction YStateMachineModule.YHierarchicalStateBase.RequestStateChangeSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UYHierarchicalStateBase* newState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           emptyStack                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateBase::RequestStateChangeSignature__DelegateSignature(class UYHierarchicalStateBase* newState, bool emptyStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction YStateMachineModule.YHierarchicalStateBase.RequestStateChangeSignature__DelegateSignature"));

	struct
	{
		class UYHierarchicalStateBase* newState;
		bool                           emptyStack;
	} params = {};

	params.newState = newState;
	params.emptyStack = emptyStack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateBase.OnStateExitedEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYHierarchicalStateBase::OnStateExitedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateBase.OnStateExitedEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateBase.OnStateEnteredEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UYHierarchicalStateBase::OnStateEnteredEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateBase.OnStateEnteredEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.RequestStateStackPop
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           removeOnlyIfMoreThenOne        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateMachine::RequestStateStackPop(bool removeOnlyIfMoreThenOne)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.RequestStateStackPop"));

	struct
	{
		bool                           removeOnlyIfMoreThenOne;
	} params = {};

	params.removeOnlyIfMoreThenOne = removeOnlyIfMoreThenOne;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.RequestStateChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UYHierarchicalStateBase* newState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           emptyScreenStack               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateMachine::RequestStateChange(class UYHierarchicalStateBase* newState, bool emptyScreenStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.RequestStateChange"));

	struct
	{
		class UYHierarchicalStateBase* newState;
		bool                           emptyScreenStack;
	} params = {};

	params.newState = newState;
	params.emptyScreenStack = emptyScreenStack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.OnStateRequestRemovalFromStack
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UYHierarchicalStateMachine::OnStateRequestRemovalFromStack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.OnStateRequestRemovalFromStack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.OnStateExitDone
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UYHierarchicalStateBase* exitedState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateMachine::OnStateExitDone(class UYHierarchicalStateBase* exitedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.OnStateExitDone"));

	struct
	{
		class UYHierarchicalStateBase* exitedState;
	} params = {};

	params.exitedState = exitedState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.OnStateEnterPushDone
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UYHierarchicalStateBase* enteredState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateMachine::OnStateEnterPushDone(class UYHierarchicalStateBase* enteredState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.OnStateEnterPushDone"));

	struct
	{
		class UYHierarchicalStateBase* enteredState;
	} params = {};

	params.enteredState = enteredState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.OnStateEnterDone
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UYHierarchicalStateBase* enteredState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYHierarchicalStateMachine::OnStateEnterDone(class UYHierarchicalStateBase* enteredState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.OnStateEnterDone"));

	struct
	{
		class UYHierarchicalStateBase* enteredState;
	} params = {};

	params.enteredState = enteredState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YStateMachineModule.YHierarchicalStateMachine.GetStateFromStack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYHierarchicalStateBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYHierarchicalStateBase* UYHierarchicalStateMachine::GetStateFromStack(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.GetStateFromStack"));

	struct
	{
		int                            Index;
		class UYHierarchicalStateBase* ReturnValue;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YStateMachineModule.YHierarchicalStateMachine.GetNumberOfStatesOnStack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UYHierarchicalStateMachine::GetNumberOfStatesOnStack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.GetNumberOfStatesOnStack"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YStateMachineModule.YHierarchicalStateMachine.GetActiveState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UYHierarchicalStateBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYHierarchicalStateBase* UYHierarchicalStateMachine::GetActiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YStateMachineModule.YHierarchicalStateMachine.GetActiveState"));

	struct
	{
		class UYHierarchicalStateBase* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
