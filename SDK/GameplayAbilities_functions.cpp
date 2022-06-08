// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameplayAbilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayAbilities.AbilityAsync.EndAction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilityAsync::EndAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityAsync.EndAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ListenForPeriodicEffect        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayEffectApplied* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayEffectApplied* UAbilityAsync_WaitGameplayEffectApplied::WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayTargetDataFilterHandle SourceFilter;
		struct FGameplayTagRequirements SourceTagRequirements;
		struct FGameplayTagRequirements TargetTagRequirements;
		bool                           TriggerOnce;
		bool                           ListenForPeriodicEffect;
		class UAbilityAsync_WaitGameplayEffectApplied* ReturnValue;
	} params = {};

	params.TargetActor = TargetActor;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class AActor*                  Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityAsync_WaitGameplayEffectApplied::OnAppliedDelegate__DelegateSignature(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature"));

	struct
	{
		class AActor*                  Source;
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FActiveGameplayEffectHandle ActiveHandle;
	} params = {};

	params.Source = Source;
	params.SpecHandle = SpecHandle;
	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            EventTag                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyMatchExact                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayEvent* UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayTag            EventTag;
		bool                           OnlyTriggerOnce;
		bool                           OnlyMatchExact;
		class UAbilityAsync_WaitGameplayEvent* ReturnValue;
	} params = {};

	params.TargetActor = TargetActor;
	params.EventTag = EventTag;
	params.OnlyTriggerOnce = OnlyTriggerOnce;
	params.OnlyMatchExact = OnlyMatchExact;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FGameplayEventData      Payload                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilityAsync_WaitGameplayEvent::EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature"));

	struct
	{
		struct FGameplayEventData      Payload;
	} params = {};

	params.Payload = Payload;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagAdded* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagAdded* UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayTag            Tag;
		bool                           OnlyTriggerOnce;
		class UAbilityAsync_WaitGameplayTagAdded* ReturnValue;
	} params = {};

	params.TargetActor = TargetActor;
	params.Tag = Tag;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagRemoved* UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayTag            Tag;
		bool                           OnlyTriggerOnce;
		class UAbilityAsync_WaitGameplayTagRemoved* ReturnValue;
	} params = {};

	params.TargetActor = TargetActor;
	params.Tag = Tag;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		bool                           ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle HitResult;
		int                            Index;
		bool                           ReturnValue;
	} params = {};

	params.HitResult = HitResult;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		bool                           ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		bool                           ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            StackCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		int                            StackCount;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		float                          Duration;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            EventTag                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEventData      Payload                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayTag            EventTag;
		struct FGameplayEventData      Payload;
	} params = {};

	params.Actor = Actor;
	params.EventTag = EventTag;
	params.Payload = Payload;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAttribute      AttributeA                     (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      AttributeB                     (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute"));

	struct
	{
		struct FGameplayAttribute      AttributeA;
		struct FGameplayAttribute      AttributeB;
		bool                           ReturnValue;
	} params = {};

	params.AttributeA = AttributeA;
	params.AttributeB = AttributeB;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UGameplayEffect*         InGameplayEffect               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  inInstigator                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InEffectCauser                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InLevel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* inInstigator, class AActor* InEffectCauser, float InLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle"));

	struct
	{
		class UGameplayEffect*         InGameplayEffect;
		class AActor*                  inInstigator;
		class AActor*                  InEffectCauser;
		float                          InLevel;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.InGameplayEffect = InGameplayEffect;
	params.inInstigator = inInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          NormalizedMagnitude            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          RawMagnitude                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            MatchedTagName                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            OriginalTag                    (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   AggregatedSourceTags           (CPF_Parm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   AggregatedTargetTags           (CPF_Parm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  EffectCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 SourceObject                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPhysicalMaterial*       PhysicalMaterial               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            AbilityLevel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         TargetAttachComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bReplicateLocationWhenUsingMinimalRepProxy (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int GameplayEffectLevel, int AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters"));

	struct
	{
		float                          NormalizedMagnitude;
		float                          RawMagnitude;
		struct FGameplayEffectContextHandle EffectContext;
		struct FGameplayTag            MatchedTagName;
		struct FGameplayTag            OriginalTag;
		struct FGameplayTagContainer   AggregatedSourceTags;
		struct FGameplayTagContainer   AggregatedTargetTags;
		struct FVector                 Location;
		struct FVector                 Normal;
		class AActor*                  Instigator;
		class AActor*                  EffectCauser;
		class UObject*                 SourceObject;
		class UPhysicalMaterial*       PhysicalMaterial;
		int                            GameplayEffectLevel;
		int                            AbilityLevel;
		class USceneComponent*         TargetAttachComponent;
		bool                           bReplicateLocationWhenUsingMinimalRepProxy;
		struct FGameplayCueParameters  ReturnValue;
	} params = {};

	params.NormalizedMagnitude = NormalizedMagnitude;
	params.RawMagnitude = RawMagnitude;
	params.EffectContext = EffectContext;
	params.MatchedTagName = MatchedTagName;
	params.OriginalTag = OriginalTag;
	params.AggregatedSourceTags = AggregatedSourceTags;
	params.AggregatedTargetTags = AggregatedTargetTags;
	params.Location = Location;
	params.Normal = Normal;
	params.Instigator = Instigator;
	params.EffectCauser = EffectCauser;
	params.SourceObject = SourceObject;
	params.PhysicalMaterial = PhysicalMaterial;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.AbilityLevel = AbilityLevel;
	params.TargetAttachComponent = TargetAttachComponent;
	params.bReplicateLocationWhenUsingMinimalRepProxy = bReplicateLocationWhenUsingMinimalRepProxy;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter Filter                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  FilterActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle"));

	struct
	{
		struct FGameplayTargetDataFilter Filter;
		class AActor*                  FilterActor;
		struct FGameplayTargetDataFilterHandle ReturnValue;
	} params = {};

	params.Filter = Filter;
	params.FilterActor = FilterActor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsValid(const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid"));

	struct
	{
		struct FGameplayAttribute      Attribute;
		bool                           ReturnValue;
	} params = {};

	params.Attribute = Attribute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		struct FTransform              ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		struct FTransform              ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		struct FVector                 ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FVector                 ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayAttribute      Attribute;
		float                          ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.Attribute = Attribute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FTransform              ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		class AActor*                  ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle HitResult;
		int                            Index;
		struct FHitResult              ReturnValue;
	} params = {};

	params.HitResult = HitResult;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FHitResult              ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayCueParameters  Parameters;
		struct FVector                 Location;
		struct FVector                 Normal;
		bool                           ReturnValue;
	} params = {};

	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection"));

	struct
	{
		class AActor*                  TargetActor;
		struct FGameplayCueParameters  Parameters;
		struct FVector                 Direction;
		bool                           ReturnValue;
	} params = {};

	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent"));

	struct
	{
		class UAbilitySystemComponent* AbilitySystem;
		struct FGameplayAttribute      Attribute;
		bool                           bSuccessfullyFoundAttribute;
		float                          ReturnValue;
	} params = {};

	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent"));

	struct
	{
		class UAbilitySystemComponent* AbilitySystemComponent;
		struct FGameplayAttribute      Attribute;
		bool                           bSuccessfullyFoundAttribute;
		float                          ReturnValue;
	} params = {};

	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Attribute = Attribute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayAttribute      Attribute;
		bool                           bSuccessfullyFoundAttribute;
		float                          ReturnValue;
	} params = {};

	params.Actor = Actor;
	params.Attribute = Attribute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccessfullyFoundAttribute    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayAttribute      Attribute;
		bool                           bSuccessfullyFoundAttribute;
		float                          ReturnValue;
	} params = {};

	params.Actor = Actor;
	params.Attribute = Attribute;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayEffectContextHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            ReturnValue;
	} params = {};

	params.TargetData = TargetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FGameplayEffectSpecHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		TArray<struct FGameplayEffectSpecHandle> ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		TArray<class AActor*>          ReturnValue;
	} params = {};

	params.TargetData = TargetData;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		TArray<class AActor*>          ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		int                            ReturnValue;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		int                            Index;
		class AActor*                  ReturnValue;
	} params = {};

	params.Parameters = Parameters;
	params.Index = Index;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		float                          ReturnValue;
	} params = {};

	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		float                          ReturnValue;
	} params = {};

	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		int                            ReturnValue;
	} params = {};

	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		int                            ReturnValue;
	} params = {};

	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FActiveGameplayEffectHandle ActiveHandle;
		float                          ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		float                          ReturnValue;
	} params = {};

	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		struct FString                 ReturnValue;
	} params = {};

	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent"));

	struct
	{
		class AActor*                  Actor;
		class UAbilitySystemComponent* ReturnValue;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayCueInterface> TargetCueInterface             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget"));

	struct
	{
		TScriptInterface<class UGameplayCueInterface> TargetCueInterface;
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params = {};

	params.TargetCueInterface = TargetCueInterface;
	params.EventType = EventType;
	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle ActorFilterClass               (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetDataHandle;
		struct FGameplayTargetDataFilterHandle ActorFilterClass;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params = {};

	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   SourceTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   TargetTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// float                          baseValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float baseValue, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase"));

	struct
	{
		class UAbilitySystemComponent* AbilitySystem;
		struct FGameplayAttribute      Attribute;
		struct FGameplayTagContainer   SourceTags;
		struct FGameplayTagContainer   TargetTags;
		float                          baseValue;
		bool                           bSuccess;
		float                          ReturnValue;
	} params = {};

	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;
	params.baseValue = baseValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   SourceTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   TargetTags                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags"));

	struct
	{
		class UAbilitySystemComponent* AbilitySystem;
		struct FGameplayAttribute      Attribute;
		struct FGameplayTagContainer   SourceTags;
		struct FGameplayTagContainer   TargetTags;
		bool                           bSuccess;
		float                          ReturnValue;
	} params = {};

	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAttribute      AttributeA                     (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      AttributeB                     (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute"));

	struct
	{
		struct FGameplayAttribute      AttributeA;
		struct FGameplayAttribute      AttributeB;
		bool                           ReturnValue;
	} params = {};

	params.AttributeA = AttributeA;
	params.AttributeB = AttributeB;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		struct FVector                 Origin;
	} params = {};

	params.EffectContext = EffectContext;
	params.Origin = Origin;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		bool                           ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		bool                           ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		bool                           ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class UObject*                 ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class AActor*                  ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		struct FVector                 ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class AActor*                  ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		struct FHitResult              ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		class AActor*                  ReturnValue;
	} params = {};

	params.EffectContext = EffectContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              HitResult                      (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           bReset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult"));

	struct
	{
		struct FGameplayEffectContextHandle EffectContext;
		struct FHitResult              HitResult;
		bool                           bReset;
	} params = {};

	params.EffectContext = EffectContext;
	params.HitResult = HitResult;
	params.bReset = bReset;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		int                            Index;
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements SourceTagReqs                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements TargetTagReqs                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		struct FGameplayTagRequirements SourceTagReqs;
		struct FGameplayTagRequirements TargetTagReqs;
		bool                           ReturnValue;
	} params = {};

	params.Parameters = Parameters;
	params.SourceTagReqs = SourceTagReqs;
	params.TargetTagReqs = TargetTagReqs;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  InNewInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InEffectCauser                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle"));

	struct
	{
		class AActor*                  InNewInstigator;
		class AActor*                  InEffectCauser;
		struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.InNewInstigator = InNewInstigator;
	params.InEffectCauser = InEffectCauser;
	params.GameplayEffectSpecHandle_Clone = GameplayEffectSpecHandle_Clone;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// float                          NormalizedMagnitude            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          RawMagnitude                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            MatchedTagName                 (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            OriginalTag                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   AggregatedSourceTags           (CPF_Parm, CPF_OutParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   AggregatedTargetTags           (CPF_Parm, CPF_OutParm, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  EffectCauser                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 SourceObject                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPhysicalMaterial*       PhysicalMaterial               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            AbilityLevel                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USceneComponent*         TargetAttachComponent          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bReplicateLocationWhenUsingMinimalRepProxy (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int* GameplayEffectLevel, int* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters"));

	struct
	{
		struct FGameplayCueParameters  Parameters;
		float                          NormalizedMagnitude;
		float                          RawMagnitude;
		struct FGameplayEffectContextHandle EffectContext;
		struct FGameplayTag            MatchedTagName;
		struct FGameplayTag            OriginalTag;
		struct FGameplayTagContainer   AggregatedSourceTags;
		struct FGameplayTagContainer   AggregatedTargetTags;
		struct FVector                 Location;
		struct FVector                 Normal;
		class AActor*                  Instigator;
		class AActor*                  EffectCauser;
		class UObject*                 SourceObject;
		class UPhysicalMaterial*       PhysicalMaterial;
		int                            GameplayEffectLevel;
		int                            AbilityLevel;
		class USceneComponent*         TargetAttachComponent;
		bool                           bReplicateLocationWhenUsingMinimalRepProxy;
	} params = {};

	params.Parameters = Parameters;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NormalizedMagnitude != nullptr)
		*NormalizedMagnitude = params.NormalizedMagnitude;
	if (RawMagnitude != nullptr)
		*RawMagnitude = params.RawMagnitude;
	if (EffectContext != nullptr)
		*EffectContext = params.EffectContext;
	if (MatchedTagName != nullptr)
		*MatchedTagName = params.MatchedTagName;
	if (OriginalTag != nullptr)
		*OriginalTag = params.OriginalTag;
	if (AggregatedSourceTags != nullptr)
		*AggregatedSourceTags = params.AggregatedSourceTags;
	if (AggregatedTargetTags != nullptr)
		*AggregatedTargetTags = params.AggregatedTargetTags;
	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Instigator != nullptr)
		*Instigator = params.Instigator;
	if (EffectCauser != nullptr)
		*EffectCauser = params.EffectCauser;
	if (SourceObject != nullptr)
		*SourceObject = params.SourceObject;
	if (PhysicalMaterial != nullptr)
		*PhysicalMaterial = params.PhysicalMaterial;
	if (GameplayEffectLevel != nullptr)
		*GameplayEffectLevel = params.GameplayEffectLevel;
	if (AbilityLevel != nullptr)
		*AbilityLevel = params.AbilityLevel;
	if (TargetAttachComponent != nullptr)
		*TargetAttachComponent = params.TargetAttachComponent;
	if (bReplicateLocationWhenUsingMinimalRepProxy != nullptr)
		*bReplicateLocationWhenUsingMinimalRepProxy = params.bReplicateLocationWhenUsingMinimalRepProxy;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            DataTag                        (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTag            DataTag;
		float                          Magnitude;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.DataTag = DataTag;
	params.Magnitude = Magnitude;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FName                   DataName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Magnitude                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FName                   DataName;
		float                          Magnitude;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetHandle                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle HandleToAdd                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetHandle;
		struct FGameplayAbilityTargetDataHandle HandleToAdd;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params = {};

	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec       (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UGameplayEffect*/ LinkedGameplayEffect           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* /*UGameplayEffect*/ LinkedGameplayEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		class UClass* /*UGameplayEffect*/ LinkedGameplayEffect;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffect = LinkedGameplayEffect;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   NewGameplayTags                (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTagContainer   NewGameplayTags;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            NewGameplayTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTag            NewGameplayTag;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   NewGameplayTags                (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTagContainer   NewGameplayTags;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            NewGameplayTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FGameplayTag            NewGameplayTag;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo SourceLocation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfo TargetLocation                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations"));

	struct
	{
		struct FGameplayAbilityTargetingLocationInfo SourceLocation;
		struct FGameplayAbilityTargetingLocationInfo TargetLocation;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params = {};

	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult"));

	struct
	{
		struct FHitResult              HitResult;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params = {};

	params.HitResult = HitResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class AActor*>          ActorArray                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           OneTargetPerHandle             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray"));

	struct
	{
		TArray<class AActor*>          ActorArray;
		bool                           OneTargetPerHandle;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params = {};

	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor"));

	struct
	{
		class AActor*                  Actor;
		struct FGameplayAbilityTargetDataHandle ReturnValue;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UGameplayAbility*/ InAbilityToActivate            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowRemoteActivation         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* /*UGameplayAbility*/ InAbilityToActivate, bool bAllowRemoteActivation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass"));

	struct
	{
		class UClass* /*UGameplayAbility*/ InAbilityToActivate;
		bool                           bAllowRemoteActivation;
		bool                           ReturnValue;
	} params = {};

	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bAllowRemoteActivation         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag"));

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		bool                           bAllowRemoteActivation;
		bool                           ReturnValue;
	} params = {};

	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilitySystemComponent::TargetConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilitySystemComponent::TargetCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetCancel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewInhibit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited"));

	struct
	{
		bool                           NewInhibit;
	} params = {};

	params.NewInhibit = NewInhibit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectQuery    Query                          (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// int                            NewLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery"));

	struct
	{
		struct FGameplayEffectQuery    Query;
		int                            NewLevel;
	} params = {};

	params.Query = Query;
	params.NewLevel = NewLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewLevel                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel"));

	struct
	{
		struct FActiveGameplayEffectHandle ActiveHandle;
		int                            NewLevel;
	} params = {};

	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InputPressed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEventData      TriggerEventData               (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		bool                           InputPressed;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEventData      TriggerEventData;
	} params = {};

	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InputPressed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		bool                           InputPressed;
		struct FPredictionKey          PredictionKey;
	} params = {};

	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FPredictionKey          CurrentPredictionKey;
	} params = {};

	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            ApplicationTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle;
		struct FGameplayTag            ApplicationTag;
		struct FPredictionKey          CurrentPredictionKey;
	} params = {};

	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector_NetQuantize100  VectorPayload                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload"));

	struct
	{
		TEnumAsByte<EAbilityGenericReplicatedEvent> EventType;
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FPredictionKey          CurrentPredictionKey;
		struct FVector_NetQuantize100  VectorPayload;
	} params = {};

	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;
	params.VectorPayload = VectorPayload;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          CurrentPredictionKey           (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent"));

	struct
	{
		TEnumAsByte<EAbilityGenericReplicatedEvent> EventType;
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
		struct FPredictionKey          CurrentPredictionKey;
	} params = {};

	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
	} params = {};

	params.AbilityHandle = AbilityHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityHandle;
	} params = {};

	params.AbilityHandle = AbilityHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// TArray<struct FString>         Strings                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings"));

	struct
	{
		TArray<struct FString>         Strings;
	} params = {};

	params.Strings = Strings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToEnd;
		struct FGameplayAbilityActivationInfo ActivationInfo;
		struct FPredictionKey          PredictionKey;
	} params = {};

	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InPlayRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate"));

	struct
	{
		class UAnimMontage*            ClientAnimMontage;
		float                          InPlayRate;
	} params = {};

	params.ClientAnimMontage = ClientAnimMontage;
	params.InPlayRate = InPlayRate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClientPosition                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   NextSectionName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName"));

	struct
	{
		class UAnimMontage*            ClientAnimMontage;
		float                          ClientPosition;
		struct FName                   SectionName;
		struct FName                   NextSectionName;
	} params = {};

	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName"));

	struct
	{
		class UAnimMontage*            ClientAnimMontage;
		struct FName                   SectionName;
	} params = {};

	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToCancel;
		struct FGameplayAbilityActivationInfo ActivationInfo;
	} params = {};

	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FGameplayAbilities_FServerAbilityRPCBatch BatchInfo                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct FGameplayAbilities_FServerAbilityRPCBatch& BatchInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch"));

	struct
	{
		struct FGameplayAbilities_FServerAbilityRPCBatch BatchInfo;
	} params = {};

	params.BatchInfo = BatchInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UGameplayEffect*/ GameplayEffect                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* InstigatorAbilitySystemComponent (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* /*UGameplayEffect*/ GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect"));

	struct
	{
		class UClass* /*UGameplayEffect*/ GameplayEffect;
		class UAbilitySystemComponent* InstigatorAbilitySystemComponent;
		int                            StacksToRemove;
	} params = {};

	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect"));

	struct
	{
		struct FActiveGameplayEffectHandle Handle;
		int                            StacksToRemove;
		bool                           ReturnValue;
	} params = {};

	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags"));

	struct
	{
		struct FGameplayTagContainer   Tags;
		int                            ReturnValue;
	} params = {};

	params.Tags = Tags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags"));

	struct
	{
		struct FGameplayTagContainer   Tags;
		int                            ReturnValue;
	} params = {};

	params.Tags = Tags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags"));

	struct
	{
		struct FGameplayTagContainer   Tags;
		int                            ReturnValue;
	} params = {};

	params.Tags = Tags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags"));

	struct
	{
		struct FGameplayTagContainer   Tags;
		int                            ReturnValue;
	} params = {};

	params.Tags = Tags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
// (FUNC_Native, FUNC_Public)

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (FUNC_Native, FUNC_Protected)

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
// (FUNC_Native, FUNC_Public)

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (FUNC_Native, FUNC_Protected)

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams"));

	struct
	{
		struct FGameplayTagContainer   GameplayCueTags;
		struct FPredictionKey          PredictionKey;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params = {};

	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted"));

	struct
	{
		struct FGameplayTagContainer   GameplayCueTags;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEffectContextHandle EffectContext;
	} params = {};

	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams"));

	struct
	{
		struct FGameplayTagContainer   GameplayCueTags;
		struct FPredictionKey          PredictionKey;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params = {};

	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec"));

	struct
	{
		struct FGameplayEffectSpecForRPC Spec;
		struct FPredictionKey          PredictionKey;
	} params = {};

	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEffectContextHandle EffectContext;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec"));

	struct
	{
		struct FGameplayEffectSpecForRPC Spec;
		struct FPredictionKey          PredictionKey;
	} params = {};

	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayCueParameters  Parameters;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEffectContextHandle EffectContext;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass* /*UGameplayEffect*/ GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* /*UGameplayEffect*/ GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec"));

	struct
	{
		class UClass* /*UGameplayEffect*/ GameplayEffectClass;
		float                          Level;
		struct FGameplayEffectContextHandle Context;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext"));

	struct
	{
		struct FGameplayEffectContextHandle ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UAttributeSet*/ Attributes                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDataTable*              DataTable                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::K2_InitStats(class UClass* /*UAttributeSet*/ Attributes, class UDataTable* DataTable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats"));

	struct
	{
		class UClass* /*UAttributeSet*/ Attributes;
		class UDataTable*              DataTable;
	} params = {};

	params.Attributes = Attributes;
	params.DataTable = DataTable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		bool                           ReturnValue;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude"));

	struct
	{
		struct FActiveGameplayEffectHandle Handle;
		struct FGameplayAttribute      Attribute;
		float                          ReturnValue;
	} params = {};

	params.Handle = Handle;
	params.Attribute = Attribute;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*UGameplayEffect*/ SourceGameplayEffect           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* OptionalInstigatorFilterComponent (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bEnforceOnGoingCheck           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UAbilitySystemComponent::GetGameplayEffectCount(class UClass* /*UGameplayEffect*/ SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount"));

	struct
	{
		class UClass* /*UGameplayEffect*/ SourceGameplayEffect;
		class UAbilitySystemComponent* OptionalInstigatorFilterComponent;
		bool                           bEnforceOnGoingCheck;
		int                            ReturnValue;
	} params = {};

	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	params.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   Tags                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags"));

	struct
	{
		struct FGameplayTagContainer   Tags;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params = {};

	params.Tags = Tags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FGameplayEffectQuery    Query                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(const struct FGameplayEffectQuery& Query)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects"));

	struct
	{
		struct FGameplayEffectQuery    Query;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params = {};

	params.Query = Query;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
	} params = {};

	params.AbilityToActivate = AbilityToActivate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          AbilityOriginalPredictionKey   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent"));

	struct
	{
		TEnumAsByte<EAbilityGenericReplicatedEvent> EventType;
		struct FGameplayAbilitySpecHandle AbilityHandle;
		struct FPredictionKey          AbilityOriginalPredictionKey;
	} params = {};

	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<struct FString>         Strings                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            GameFlags                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response"));

	struct
	{
		TArray<struct FString>         Strings;
		int                            GameFlags;
	} params = {};

	params.Strings = Strings;
	params.GameFlags = GameFlags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToEnd;
		struct FGameplayAbilityActivationInfo ActivationInfo;
	} params = {};

	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToCancel;
		struct FGameplayAbilityActivationInfo ActivationInfo;
	} params = {};

	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEventData      TriggerEventData               (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		struct FPredictionKey          PredictionKey;
		struct FGameplayEventData      TriggerEventData;
	} params = {};

	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPredictionKey          PredictionKey                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		struct FPredictionKey          PredictionKey;
	} params = {};

	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int16_t                        PredictionKey                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed"));

	struct
	{
		struct FGameplayAbilitySpecHandle AbilityToActivate;
		int16_t                        PredictionKey;
	} params = {};

	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UGameplayEffect*/ GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* /*UGameplayEffect*/ GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget"));

	struct
	{
		class UClass* /*UGameplayEffect*/ GameplayEffectClass;
		class UAbilitySystemComponent* Target;
		float                          Level;
		struct FGameplayEffectContextHandle Context;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params = {};

	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UGameplayEffect*/ GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle EffectContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* /*UGameplayEffect*/ GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf"));

	struct
	{
		class UClass* /*UGameplayEffect*/ GameplayEffectClass;
		float                          Level;
		struct FGameplayEffectContextHandle EffectContext;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params = {};

	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		class UAbilitySystemComponent* Target;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;
	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf"));

	struct
	{
		struct FGameplayEffectSpecHandle SpecHandle;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params = {};

	params.SpecHandle = SpecHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            InputID                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature"));

	struct
	{
		int                            InputID;
	} params = {};

	params.InputID = InputID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 AbilityNameMatch               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerEndPlayerAbility(const struct FString& AbilityNameMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility"));

	struct
	{
		struct FString                 AbilityNameMatch;
	} params = {};

	params.AbilityNameMatch = AbilityNameMatch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 AbilityNameMatch               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerCancelPlayerAbility(const struct FString& AbilityNameMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility"));

	struct
	{
		struct FString                 AbilityNameMatch;
	} params = {};

	params.AbilityNameMatch = AbilityNameMatch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 AbilityNameMatch               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerActivatePlayerAbility(const struct FString& AbilityNameMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility"));

	struct
	{
		struct FString                 AbilityNameMatch;
	} params = {};

	params.AbilityNameMatch = AbilityNameMatch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void UAbilitySystemGlobals::ListPlayerAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 WorldDirection                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Strength                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsAdditive                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             StrengthOverTime               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bEnableGravity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionConstantForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		struct FVector                 WorldDirection;
		float                          Strength;
		float                          Duration;
		bool                           bIsAdditive;
		class UCurveFloat*             StrengthOverTime;
		ERootMotionFinishVelocityMode  VelocityOnFinishMode;
		struct FVector                 SetVelocityOnFinish;
		float                          ClampVelocityOnFinish;
		bool                           bEnableGravity;
		class UAbilityTask_ApplyRootMotionConstantForce* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.WorldDirection = WorldDirection;
	params.Strength = Strength;
	params.Duration = Duration;
	params.bIsAdditive = bIsAdditive;
	params.StrengthOverTime = StrengthOverTime;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.bEnableGravity = bEnableGravity;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinimumLandedTriggerTime       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bFinishOnLanded                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TimeMappingCurve               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionJumpForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		struct FRotator                Rotation;
		float                          Distance;
		float                          Height;
		float                          Duration;
		float                          MinimumLandedTriggerTime;
		bool                           bFinishOnLanded;
		ERootMotionFinishVelocityMode  VelocityOnFinishMode;
		struct FVector                 SetVelocityOnFinish;
		float                          ClampVelocityOnFinish;
		class UCurveVector*            PathOffsetCurve;
		class UCurveFloat*             TimeMappingCurve;
		class UAbilityTask_ApplyRootMotionJumpForce* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Rotation = Rotation;
	params.Distance = Distance;
	params.Height = Height;
	params.Duration = Duration;
	params.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
	params.bFinishOnLanded = bFinishOnLanded;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  OriginalTarget                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  NewTarget                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped"));

	struct
	{
		class AActor*                  OriginalTarget;
		class AActor*                  NewTarget;
	} params = {};

	params.OriginalTarget = OriginalTarget;
	params.NewTarget = NewTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            TargetDataIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TargetActorIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TargetLocationOffset           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionMoveToActorTargetOffsetType OffsetAlignment                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TargetLerpSpeedHorizontal      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TargetLerpSpeedVertical        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSetNewMovementMode            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EMovementMode>     MovementMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bRestrictSpeedToExpected       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TimeMappingCurve               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDisableDestinationReachedInterrupt (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int TargetDataIndex, int TargetActorIndex, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		struct FGameplayAbilityTargetDataHandle TargetDataHandle;
		int                            TargetDataIndex;
		int                            TargetActorIndex;
		struct FVector                 TargetLocationOffset;
		ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
		float                          Duration;
		class UCurveFloat*             TargetLerpSpeedHorizontal;
		class UCurveFloat*             TargetLerpSpeedVertical;
		bool                           bSetNewMovementMode;
		TEnumAsByte<EMovementMode>     MovementMode;
		bool                           bRestrictSpeedToExpected;
		class UCurveVector*            PathOffsetCurve;
		class UCurveFloat*             TimeMappingCurve;
		ERootMotionFinishVelocityMode  VelocityOnFinishMode;
		struct FVector                 SetVelocityOnFinish;
		float                          ClampVelocityOnFinish;
		bool                           bDisableDestinationReachedInterrupt;
		class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetDataHandle = TargetDataHandle;
	params.TargetDataIndex = TargetDataIndex;
	params.TargetActorIndex = TargetActorIndex;
	params.TargetLocationOffset = TargetLocationOffset;
	params.OffsetAlignment = OffsetAlignment;
	params.Duration = Duration;
	params.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	params.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TargetLocationOffset           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionMoveToActorTargetOffsetType OffsetAlignment                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TargetLerpSpeedHorizontal      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TargetLerpSpeedVertical        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSetNewMovementMode            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EMovementMode>     MovementMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bRestrictSpeedToExpected       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             TimeMappingCurve               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDisableDestinationReachedInterrupt (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		class AActor*                  TargetActor;
		struct FVector                 TargetLocationOffset;
		ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
		float                          Duration;
		class UCurveFloat*             TargetLerpSpeedHorizontal;
		class UCurveFloat*             TargetLerpSpeedVertical;
		bool                           bSetNewMovementMode;
		TEnumAsByte<EMovementMode>     MovementMode;
		bool                           bRestrictSpeedToExpected;
		class UCurveVector*            PathOffsetCurve;
		class UCurveFloat*             TimeMappingCurve;
		ERootMotionFinishVelocityMode  VelocityOnFinishMode;
		struct FVector                 SetVelocityOnFinish;
		float                          ClampVelocityOnFinish;
		bool                           bDisableDestinationReachedInterrupt;
		class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetActor = TargetActor;
	params.TargetLocationOffset = TargetLocationOffset;
	params.OffsetAlignment = OffsetAlignment;
	params.Duration = Duration;
	params.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	params.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TargetLocation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSetNewMovementMode            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EMovementMode>     MovementMode                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bRestrictSpeedToExpected       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveVector*            PathOffsetCurve                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		struct FVector                 TargetLocation;
		float                          Duration;
		bool                           bSetNewMovementMode;
		TEnumAsByte<EMovementMode>     MovementMode;
		bool                           bRestrictSpeedToExpected;
		class UCurveVector*            PathOffsetCurve;
		ERootMotionFinishVelocityMode  VelocityOnFinishMode;
		struct FVector                 SetVelocityOnFinish;
		float                          ClampVelocityOnFinish;
		class UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetLocation = TargetLocation;
	params.Duration = Duration;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  LocationActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Strength                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsPush                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsAdditive                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bNoZForce                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             StrengthDistanceFalloff        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             StrengthOverTime               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bUseFixedWorldDirection        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                FixedWorldDirection            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SetVelocityOnFinish            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ClampVelocityOnFinish          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionRadialForce* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		struct FVector                 Location;
		class AActor*                  LocationActor;
		float                          Strength;
		float                          Duration;
		float                          Radius;
		bool                           bIsPush;
		bool                           bIsAdditive;
		bool                           bNoZForce;
		class UCurveFloat*             StrengthDistanceFalloff;
		class UCurveFloat*             StrengthOverTime;
		bool                           bUseFixedWorldDirection;
		struct FRotator                FixedWorldDirection;
		ERootMotionFinishVelocityMode  VelocityOnFinishMode;
		struct FVector                 SetVelocityOnFinish;
		float                          ClampVelocityOnFinish;
		class UAbilityTask_ApplyRootMotionRadialForce* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.LocationActor = LocationActor;
	params.Strength = Strength;
	params.Duration = Duration;
	params.Radius = Radius;
	params.bIsPush = bIsPush;
	params.bIsAdditive = bIsAdditive;
	params.bNoZForce = bNoZForce;
	params.StrengthDistanceFalloff = StrengthDistanceFalloff;
	params.StrengthOverTime = StrengthOverTime;
	params.bUseFixedWorldDirection = bUseFixedWorldDirection;
	params.FixedWorldDirection = FixedWorldDirection;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveFloat*             OptionalInterpolationCurve     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCurveVector*            OptionalVectorInterpolationCurve (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_MoveToLocation* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		struct FVector                 Location;
		float                          Duration;
		class UCurveFloat*             OptionalInterpolationCurve;
		class UCurveVector*            OptionalVectorInterpolationCurve;
		class UAbilityTask_MoveToLocation* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EAbilityTaskNetSyncType        SyncType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		EAbilityTaskNetSyncType        SyncType;
		class UAbilityTask_NetworkSyncPoint* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SyncType = SyncType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params = {};

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params = {};

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   StartSection                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bStopWhenAbilityEnds           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          AnimRootMotionTranslationScale (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          StartTimeSeconds               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_PlayMontageAndWait* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		class UAnimMontage*            MontageToPlay;
		float                          Rate;
		struct FName                   StartSection;
		bool                           bStopWhenAbilityEnds;
		float                          AnimRootMotionTranslationScale;
		float                          StartTimeSeconds;
		class UAbilityTask_PlayMontageAndWait* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;
	params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	params.StartTimeSeconds = StartTimeSeconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TimeBetweenActions             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TotalActionCount               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_Repeat*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		float                          TimeBetweenActions;
		int                            TotalActionCount;
		class UAbilityTask_Repeat*     ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AActor*/       Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_SpawnActor* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* /*AActor*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UClass* /*AActor*/       Class;
		class UAbilityTask_SpawnActor* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAbilityTargetDataHandle TargetData;
		class AActor*                  SpawnedActor;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AActor*/       Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* /*AActor*/ Class, class AActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UClass* /*AActor*/       Class;
		class AActor*                  SpawnedActor;
		bool                           ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   StateName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bEndCurrentState               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_StartAbilityState* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   StateName;
		bool                           bEndCurrentState;
		class UAbilityTask_StartAbilityState* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class AGameplayAbilityTargetActor* TargetActor;
		struct FName                   TaskInstanceName;
		float                          Duration;
		class UAbilityTask_VisualizeTargeting* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AGameplayAbilityTargetActor*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* /*AGameplayAbilityTargetActor*/ Class, const struct FName& TaskInstanceName, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UClass* /*AGameplayAbilityTargetActor*/ Class;
		struct FName                   TaskInstanceName;
		float                          Duration;
		class UAbilityTask_VisualizeTargeting* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class AGameplayAbilityTargetActor* SpawnedActor;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SpawnedActor = SpawnedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AGameplayAbilityTargetActor*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* /*AGameplayAbilityTargetActor*/ Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UClass* /*AGameplayAbilityTargetActor*/ Class;
		class AGameplayAbilityTargetActor* SpawnedActor;
		bool                           ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements TagRequirements                (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IncludeTriggeredAbilities      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTagRequirements TagRequirements;
		bool                           IncludeTriggeredAbilities;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityActivate* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TagRequirements = TagRequirements;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       Query                          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IncludeTriggeredAbilities      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTagQuery       Query;
		bool                           IncludeTriggeredAbilities;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityActivate* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Query = Query;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            WithTag                        (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            WithoutTag                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IncludeTriggeredAbilities      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTag            WithTag;
		struct FGameplayTag            WithoutTag;
		bool                           IncludeTriggeredAbilities;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityActivate* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate"));

	struct
	{
		class UGameplayAbility*        ActivatedAbility;
	} params = {};

	params.ActivatedAbility = ActivatedAbility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       Query                          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTagQuery       Query;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityCommit* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Query = Query;
	params.TriggerOnce = TriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            WithTag                        (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            WithoutTage                    (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTag            WithTag;
		struct FGameplayTag            WithoutTage;
		bool                           TriggerOnce;
		class UAbilityTask_WaitAbilityCommit* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit"));

	struct
	{
		class UGameplayAbility*        ActivatedAbility;
	} params = {};

	params.ActivatedAbility = ActivatedAbility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      InAttribute                    (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            InWithTag                      (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            InWithoutTag                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InComparisonValue              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAttribute      InAttribute;
		struct FGameplayTag            InWithTag;
		struct FGameplayTag            InWithoutTag;
		TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType;
		float                          InComparisonValue;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		class UAbilityTask_WaitAttributeChange* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            WithSrcTag                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            WithoutSrcTag                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAttribute      Attribute;
		struct FGameplayTag            WithSrcTag;
		struct FGameplayTag            WithoutSrcTag;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		class UAbilityTask_WaitAttributeChange* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      AttributeNumerator             (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      AttributeDenominator           (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ComparisonValue                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTriggerOnce                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAttribute      AttributeNumerator;
		struct FGameplayAttribute      AttributeDenominator;
		TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType;
		float                          ComparisonValue;
		bool                           bTriggerOnce;
		class AActor*                  OptionalExternalOwner;
		class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.AttributeNumerator = AttributeNumerator;
	params.AttributeDenominator = AttributeDenominator;
	params.ComparisonType = ComparisonType;
	params.ComparisonValue = ComparisonValue;
	params.bTriggerOnce = bTriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ComparisonValue                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTriggerOnce                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeThreshold* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayAttribute      Attribute;
		TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType;
		float                          ComparisonValue;
		bool                           bTriggerOnce;
		class AActor*                  OptionalExternalOwner;
		class UAbilityTask_WaitAttributeChangeThreshold* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Attribute = Attribute;
	params.ComparisonType = ComparisonType;
	params.ComparisonValue = ComparisonValue;
	params.bTriggerOnce = bTriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitCancel* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UGameplayAbility* OwningAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UAbilityTask_WaitCancel* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirm* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UGameplayAbility* OwningAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UAbilityTask_WaitConfirm* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameplayAbility*        InAbility                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback"));

	struct
	{
		class UGameplayAbility*        InAbility;
	} params = {};

	params.InAbility = InAbility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirmCancel* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UGameplayAbility* OwningAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UAbilityTask_WaitConfirmCancel* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitDelay*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		float                          Time;
		class UAbilityTask_WaitDelay*  ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Time = Time;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UAbilitySystemComponent* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec     SpecApplied                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                   (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback"));

	struct
	{
		class UAbilitySystemComponent* Target;
		struct FGameplayEffectSpec     SpecApplied;
		struct FActiveGameplayEffectHandle ActiveHandle;
	} params = {};

	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       SourceTagQuery                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       TargetTagQuery                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ListenForPeriodicEffect        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTargetDataFilterHandle SourceFilter;
		struct FGameplayTagQuery       SourceTagQuery;
		struct FGameplayTagQuery       TargetTagQuery;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		bool                           ListenForPeriodicEffect;
		class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagQuery = SourceTagQuery;
	params.TargetTagQuery = TargetTagQuery;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ListenForPeriodicEffect        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTargetDataFilterHandle SourceFilter;
		struct FGameplayTagRequirements SourceTagRequirements;
		struct FGameplayTagRequirements TargetTagRequirements;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		bool                           ListenForPeriodicEffect;
		class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       SourceTagQuery                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagQuery       TargetTagQuery                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ListenForPeriodicEffect        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTargetDataFilterHandle SourceFilter;
		struct FGameplayTagQuery       SourceTagQuery;
		struct FGameplayTagQuery       TargetTagQuery;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		bool                           ListenForPeriodicEffect;
		class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagQuery = SourceTagQuery;
	params.TargetTagQuery = TargetTagQuery;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandle TargetFilter                   (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           TriggerOnce                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalOwner          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ListenForPeriodicEffects       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTargetDataFilterHandle TargetFilter;
		struct FGameplayTagRequirements SourceTagRequirements;
		struct FGameplayTagRequirements TargetTagRequirements;
		bool                           TriggerOnce;
		class AActor*                  OptionalExternalOwner;
		bool                           ListenForPeriodicEffects;
		class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffects = ListenForPeriodicEffects;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements SourceTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements TargetTagRequirements          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalTarget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTagRequirements SourceTagRequirements;
		struct FGameplayTagRequirements TargetTagRequirements;
		class AActor*                  OptionalExternalTarget;
		bool                           OnlyTriggerOnce;
		class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FActiveGameplayEffectHandle Handle;
		class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Handle = Handle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved"));

	struct
	{
		struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo;
	} params = {};

	params.InGameplayEffectRemovalInfo = InGameplayEffectRemovalInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectStackChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FActiveGameplayEffectHandle Handle;
		class UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Handle = Handle;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OldCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange"));

	struct
	{
		struct FActiveGameplayEffectHandle Handle;
		int                            NewCount;
		int                            OldCount;
	} params = {};

	params.Handle = Handle;
	params.NewCount = NewCount;
	params.OldCount = OldCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            EventTag                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OptionalExternalTarget         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyMatchExact                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEvent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTag            EventTag;
		class AActor*                  OptionalExternalTarget;
		bool                           OnlyTriggerOnce;
		bool                           OnlyMatchExact;
		class UAbilityTask_WaitGameplayEvent* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.EventTag = EventTag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;
	params.OnlyMatchExact = OnlyMatchExact;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback"));

	struct
	{
		struct FGameplayTag            Tag;
		int                            NewCount;
	} params = {};

	params.Tag = Tag;
	params.NewCount = NewCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InOptionalExternalTarget       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTag            Tag;
		class AActor*                  InOptionalExternalTarget;
		bool                           OnlyTriggerOnce;
		class UAbilityTask_WaitGameplayTagAdded* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            Tag                            (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InOptionalExternalTarget       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OnlyTriggerOnce                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FGameplayTag            Tag;
		class AActor*                  InOptionalExternalTarget;
		bool                           OnlyTriggerOnce;
		class UAbilityTask_WaitGameplayTagRemoved* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestAlreadyPressed            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputPress* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		bool                           bTestAlreadyPressed;
		class UAbilityTask_WaitInputPress* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTestAlreadyReleased           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputRelease* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		bool                           bTestAlreadyReleased;
		class UAbilityTask_WaitInputRelease* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class ACharacter*              Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  PreviousCustomMode             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange"));

	struct
	{
		class ACharacter*              Character;
		TEnumAsByte<EMovementMode>     PrevMovementMode;
		unsigned char                  PreviousCustomMode;
	} params = {};

	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EMovementMode>     NewMode                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitMovementModeChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		TEnumAsByte<EMovementMode>     NewMode;
		class UAbilityTask_WaitMovementModeChange* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.NewMode = NewMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitOverlap* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UGameplayAbility* OwningAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UAbilityTask_WaitOverlap* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback"));

	struct
	{
		class UPrimitiveComponent*     HitComp;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType;
		class AGameplayAbilityTargetActor* TargetActor;
		class UAbilityTask_WaitTargetData* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AGameplayAbilityTargetActor*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* /*AGameplayAbilityTargetActor*/ Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FName                   TaskInstanceName;
		TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType;
		class UClass* /*AGameplayAbilityTargetActor*/ Class;
		class UAbilityTask_WaitTargetData* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTag            ActivationTag                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle Data;
		struct FGameplayTag            ActivationTag;
	} params = {};

	params.Data = Data;
	params.ActivationTag = ActivationTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class AGameplayAbilityTargetActor* SpawnedActor;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.SpawnedActor = SpawnedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AGameplayAbilityTargetActor*/ Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* /*AGameplayAbilityTargetActor*/ Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		class UClass* /*AGameplayAbilityTargetActor*/ Class;
		class AGameplayAbilityTargetActor* SpawnedActor;
		bool                           ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Class = Class;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MinimumMagnitude               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilityTask_WaitVelocityChange* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange"));

	struct
	{
		class UGameplayAbility*        OwningAbility;
		struct FVector                 Direction;
		float                          MinimumMagnitude;
		class UAbilityTask_WaitVelocityChange* ReturnValue;
	} params = {};

	params.OwningAbility = OwningAbility;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldBlockAbilities          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities"));

	struct
	{
		bool                           bShouldBlockAbilities;
	} params = {};

	params.bShouldBlockAbilities = bShouldBlockAbilities;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bCanBeCanceled                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled"));

	struct
	{
		bool                           bCanBeCanceled;
	} params = {};

	params.bCanBeCanceled = bCanBeCanceled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            EventTag                       (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEventData      Payload                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SendGameplayEvent"));

	struct
	{
		struct FGameplayTag            EventTag;
		struct FGameplayEventData      Payload;
	} params = {};

	params.EventTag = EventTag;
	params.Payload = Payload;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayAbility::RemoveGrantedByEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          OverrideBlendOutTime           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageStop"));

	struct
	{
		float                          OverrideBlendOutTime;
	} params = {};

	params.OverrideBlendOutTime = OverrideBlendOutTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   FromSectionName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ToSectionName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName"));

	struct
	{
		struct FName                   FromSectionName;
		struct FName                   ToSectionName;
	} params = {};

	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::MontageJumpToSection(const struct FName& SectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageJumpToSection"));

	struct
	{
		struct FName                   SectionName;
	} params = {};

	params.SectionName = SectionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent"));

	struct
	{
		struct FName                   SocketName;
		struct FGameplayAbilityTargetingLocationInfo ReturnValue;
	} params = {};

	params.SocketName = SocketName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor"));

	struct
	{
		struct FGameplayAbilityTargetingLocationInfo ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass* /*UGameplayEffect*/ GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* /*UGameplayEffect*/ GameplayEffectClass, float Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec"));

	struct
	{
		class UClass* /*UGameplayEffect*/ GameplayEffectClass;
		float                          Level;
		struct FGameplayEffectSpecHandle ReturnValue;
	} params = {};

	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEventData      Payload                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent"));

	struct
	{
		struct FGameplayAbilityActorInfo ActorInfo;
		struct FGameplayEventData      Payload;
		bool                           ReturnValue;
	} params = {};

	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility"));

	struct
	{
		bool                           bWasCancelled;
	} params = {};

	params.bWasCancelled = bWasCancelled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_HasAuthority
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_HasAuthority()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_HasAuthority"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  GameplayCueParameters          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayCueParameters  GameplayCueParameters;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayEffectContextHandle Context;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UGameplayAbility::K2_EndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_EndAbility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameplayAbility::K2_CommitExecute()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitExecute"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost"));

	struct
	{
		bool                           BroadcastCommitEvent;
		bool                           ReturnValue;
	} params = {};

	params.BroadcastCommitEvent = BroadcastCommitEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceCooldown                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown"));

	struct
	{
		bool                           BroadcastCommitEvent;
		bool                           ForceCooldown;
		bool                           ReturnValue;
	} params = {};

	params.BroadcastCommitEvent = BroadcastCommitEvent;
	params.ForceCooldown = ForceCooldown;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbility"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayAbility::K2_CancelAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CancelAbility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle Handle                         (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   RelevantTags                   (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility"));

	struct
	{
		struct FGameplayAbilityActorInfo ActorInfo;
		struct FGameplayAbilitySpecHandle Handle;
		struct FGameplayTagContainer   RelevantTags;
		bool                           ReturnValue;
	} params = {};

	params.ActorInfo = ActorInfo;
	params.Handle = Handle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget"));

	struct
	{
		struct FGameplayEffectSpecHandle EffectSpecHandle;
		struct FGameplayAbilityTargetDataHandle TargetData;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params = {};

	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner"));

	struct
	{
		struct FGameplayEffectSpecHandle EffectSpecHandle;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params = {};

	params.EffectSpecHandle = EffectSpecHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  GameplayCueParameter           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           bRemoveOnAbilityEnd            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayCueParameters  GameplayCueParameter;
		bool                           bRemoveOnAbilityEnd;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle Context                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bRemoveOnAbilityEnd            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue"));

	struct
	{
		struct FGameplayTag            GameplayCueTag;
		struct FGameplayEffectContextHandle Context;
		bool                           bRemoveOnAbilityEnd;
	} params = {};

	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayEventData      eventData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& eventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent"));

	struct
	{
		struct FGameplayEventData      eventData;
	} params = {};

	params.eventData = eventData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGameplayAbility::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.IsLocallyControlled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayAbility::IsLocallyControlled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.IsLocallyControlled"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)

void UGameplayAbility::InvalidateClientPredictionKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetSourceObject_BP"));

	struct
	{
		struct FGameplayAbilitySpecHandle Handle;
		struct FGameplayAbilityActorInfo ActorInfo;
		class UObject*                 ReturnValue;
	} params = {};

	params.Handle = Handle;
	params.ActorInfo = ActorInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo"));

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo"));

	struct
	{
		class AActor*                  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext"));

	struct
	{
		struct FGameplayEffectContextHandle ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject"));

	struct
	{
		class UObject*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentMontage"));

	struct
	{
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UGameplayAbility::GetCooldownTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandle OptionalTargetData             (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetContextFromOwner"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle OptionalTargetData;
		struct FGameplayEffectContextHandle ReturnValue;
	} params = {};

	params.OptionalTargetData = OptionalTargetData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo"));

	struct
	{
		class AActor*                  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayAbilityActorInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetActorInfo"));

	struct
	{
		struct FGameplayAbilityActorInfo ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UAbilitySystemComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo"));

	struct
	{
		class UAbilitySystemComponent* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayAbilityActorInfo ActorInfo                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UGameplayAbility::GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP"));

	struct
	{
		struct FGameplayAbilitySpecHandle Handle;
		struct FGameplayAbilityActorInfo ActorInfo;
		int                            ReturnValue;
	} params = {};

	params.Handle = Handle;
	params.ActorInfo = ActorInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UGameplayAbility::GetAbilityLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAbilityLevel"));

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


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::EndTaskByInstanceName(const struct FName& InstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName"));

	struct
	{
		struct FName                   InstanceName;
	} params = {};

	params.InstanceName = InstanceName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   OptionalStateNameToEnd         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::EndAbilityState(const struct FName& OptionalStateNameToEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndAbilityState"));

	struct
	{
		struct FName                   OptionalStateNameToEnd;
	} params = {};

	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bEndTask                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName"));

	struct
	{
		struct FName                   InstanceName;
		bool                           bEndTask;
	} params = {};

	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::CancelTaskByInstanceName(const struct FName& InstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName"));

	struct
	{
		struct FName                   InstanceName;
	} params = {};

	params.InstanceName = InstanceName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle"));

	struct
	{
		struct FActiveGameplayEffectHandle Handle;
		int                            StacksToRemove;
	} params = {};

	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithGrantedTags                (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags"));

	struct
	{
		struct FGameplayTagContainer   WithGrantedTags;
		int                            StacksToRemove;
	} params = {};

	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithAssetTags                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            StacksToRemove                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags"));

	struct
	{
		struct FGameplayTagContainer   WithAssetTags;
		int                            StacksToRemove;
	} params = {};

	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UGameplayEffect*/ GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Stacks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* /*UGameplayEffect*/ GameplayEffectClass, int GameplayEffectLevel, int Stacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget"));

	struct
	{
		struct FGameplayAbilityTargetDataHandle TargetData;
		class UClass* /*UGameplayEffect*/ GameplayEffectClass;
		int                            GameplayEffectLevel;
		int                            Stacks;
		TArray<struct FActiveGameplayEffectHandle> ReturnValue;
	} params = {};

	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.Stacks = Stacks;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UGameplayEffect*/ GameplayEffectClass            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GameplayEffectLevel            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Stacks                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* /*UGameplayEffect*/ GameplayEffectClass, int GameplayEffectLevel, int Stacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner"));

	struct
	{
		class UClass* /*UGameplayEffect*/ GameplayEffectClass;
		int                            GameplayEffectLevel;
		int                            Stacks;
		struct FActiveGameplayEffectHandle ReturnValue;
	} params = {};

	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.Stacks = Stacks;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (FUNC_Native, FUNC_Public)

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (FUNC_Native, FUNC_Public)

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector"));

	struct
	{
		struct FName                   ParamName;
		struct FVector                 Value;
	} params = {};

	params.ParamName = ParamName;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const struct FName& ParamName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat"));

	struct
	{
		struct FName                   ParamName;
		float                          Value;
	} params = {};

	params.ParamName = ParamName;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged"));

	struct
	{
		bool                           bNewValue;
	} params = {};

	params.bNewValue = bNewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor"));

	struct
	{
		bool                           bNewValue;
	} params = {};

	params.bNewValue = bNewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bFaceIn2D                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource"));

	struct
	{
		bool                           bFaceIn2D;
	} params = {};

	params.bFaceIn2D = bFaceIn2D;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler"));

	struct
	{
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params = {};

	params.EventType = EventType;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params = {};

	params.DestroyedActor = DestroyedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue"));

	struct
	{
		class AActor*                  MyTarget;
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params = {};

	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnActive"));

	struct
	{
		class AActor*                  MyTarget;
		struct FGameplayCueParameters  Parameters;
		bool                           ReturnValue;
	} params = {};

	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AActor*                  MyTarget                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EGameplayCueEvent> EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  Parameters                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue"));

	struct
	{
		class AActor*                  MyTarget;
		TEnumAsByte<EGameplayCueEvent> EventType;
		struct FGameplayCueParameters  Parameters;
	} params = {};

	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec     Spec                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* ASC                            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect"));

	struct
	{
		class UGameplayEffect*         GameplayEffect;
		struct FGameplayEffectSpec     Spec;
		class UAbilitySystemComponent* ASC;
		bool                           ReturnValue;
	} params = {};

	params.GameplayEffect = GameplayEffect;
	params.Spec = Spec;
	params.ASC = ASC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters ExecutionParams                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FGameplayEffectCustomExecutionOutput OutExecutionOutput             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute"));

	struct
	{
		struct FGameplayEffectCustomExecutionParameters ExecutionParams;
		struct FGameplayEffectCustomExecutionOutput OutExecutionOutput;
	} params = {};

	params.ExecutionParams = ExecutionParams;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude"));

	struct
	{
		struct FGameplayEffectSpec     Spec;
		float                          ReturnValue;
	} params = {};

	params.Spec = Spec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAbilitySystemComponent* ASC                            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            idx                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent"));

	struct
	{
		struct FGameplayTag            Tag;
		int                            NewCount;
		class UAbilitySystemComponent* ASC;
		int                            idx;
	} params = {};

	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.idx = idx;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InGameplayCueTrackHandler      (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMovieSceneGameplayCueTrack::SetSequencerTrackHandler(const struct FScriptDelegate& InGameplayCueTrackHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler"));

	struct
	{
		struct FScriptDelegate         InGameplayCueTrackHandler;
	} params = {};

	params.InGameplayCueTrackHandler = InGameplayCueTrackHandler;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
