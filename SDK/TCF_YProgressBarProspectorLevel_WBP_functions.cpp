// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YProgressBarProspectorLevel_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> IconImg                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            CurrentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ParentLevel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsInstant                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   AddText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UYProgressBarProspectorLevel_WBP_C::SetData(TSoftObjectPtr<class UTexture2D> IconImg, int CurrentValue, int MaxValue, int ParentLevel, bool IsInstant, const struct FText& AddText)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetData");

	struct
	{
		TSoftObjectPtr<class UTexture2D> IconImg;
		int                            CurrentValue;
		int                            MaxValue;
		int                            ParentLevel;
		bool                           IsInstant;
		struct FText                   AddText;
	} params;

	params.IconImg = IconImg;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.ParentLevel = ParentLevel;
	params.IsInstant = IsInstant;
	params.AddText = AddText;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.StopProgressAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYProgressBarProspectorLevel_WBP_C::StopProgressAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.StopProgressAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetProgressInstant
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYProgressBarProspectorLevel_WBP_C::SetProgressInstant(float progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetProgressInstant");

	struct
	{
		float                          progress;
	} params;

	params.progress = progress;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.GetCurrentPercentage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          retVal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYProgressBarProspectorLevel_WBP_C::GetCurrentPercentage(float* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.GetCurrentPercentage");

	struct
	{
		float                          retVal;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetProgressAnimated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewPercentageValue             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldPlayFromBeginning        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShouldSnapToEndImmediately     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReachedFull                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ReachedEmpty                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYProgressBarProspectorLevel_WBP_C::SetProgressAnimated(float NewPercentageValue, bool ShouldPlayFromBeginning, bool ShouldSnapToEndImmediately, bool* ReachedFull, bool* ReachedEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetProgressAnimated");

	struct
	{
		float                          NewPercentageValue;
		bool                           ShouldPlayFromBeginning;
		bool                           ShouldSnapToEndImmediately;
		bool                           ReachedFull;
		bool                           ReachedEmpty;
	} params;

	params.NewPercentageValue = NewPercentageValue;
	params.ShouldPlayFromBeginning = ShouldPlayFromBeginning;
	params.ShouldSnapToEndImmediately = ShouldSnapToEndImmediately;

	UObject::ProcessEvent(fn, &params);

	if (ReachedFull != nullptr)
		*ReachedFull = params.ReachedFull;
	if (ReachedEmpty != nullptr)
		*ReachedEmpty = params.ReachedEmpty;
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnLoaded_E2D980CE45FC423C70999B854316D04A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYProgressBarProspectorLevel_WBP_C::OnLoaded_E2D980CE45FC423C70999B854316D04A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnLoaded_E2D980CE45FC423C70999B854316D04A");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYProgressBarProspectorLevel_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYProgressBarProspectorLevel_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetBorderAndIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYProgressBarProspectorLevel_WBP_C::SetBorderAndIcon(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.SetBorderAndIcon");

	struct
	{
		int                            Level;
	} params;

	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYProgressBarProspectorLevel_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnAnimFinishedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYProgressBarProspectorLevel_WBP_C::OnAnimFinishedDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnAnimFinishedDelegate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.ExecuteUbergraph_YProgressBarProspectorLevel_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYProgressBarProspectorLevel_WBP_C::ExecuteUbergraph_YProgressBarProspectorLevel_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.ExecuteUbergraph_YProgressBarProspectorLevel_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnProgressBarAnimFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ProgressBarReachedFull         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ProgressBarReachedEmpty        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYProgressBarProspectorLevel_WBP_C::OnProgressBarAnimFinished__DelegateSignature(bool ProgressBarReachedFull, bool ProgressBarReachedEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProgressBarProspectorLevel_WBP.YProgressBarProspectorLevel_WBP_C.OnProgressBarAnimFinished__DelegateSignature");

	struct
	{
		bool                           ProgressBarReachedFull;
		bool                           ProgressBarReachedEmpty;
	} params;

	params.ProgressBarReachedFull = ProgressBarReachedFull;
	params.ProgressBarReachedEmpty = ProgressBarReachedEmpty;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
