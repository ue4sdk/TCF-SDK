#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0058 - 0x0030)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSignedObject"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0040 (0x0098 - 0x0058)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0058(0x0004) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005C(0x0001) MISSED OFFSET
	bool                                               bIsEvalDisabled;                                          // 0x005D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	TArray<int>                                        RowsDisabled;                                             // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0070(0x0004) MISSED OFFSET
	struct FGuid                                       EvaluationFieldGuid;                                      // 0x0074(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FMovieSceneTrackEvaluationField             EvaluationField;                                          // 0x0088(0x0010) (CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneNameableTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0098 (0x00F0 - 0x0058)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0058(0x0002) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0060(0x0038) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       SectionRange;                                             // 0x0098(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FFrameNumber                                PreRollFrames;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FFrameNumber                                PostRollFrames;                                           // 0x00AC(0x0004) (CPF_Edit, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                RowIndex;                                                 // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                OverlapPriority;                                          // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive : 1;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bIsLocked : 1;                                            // 0x00B8(0x0001) (CPF_Edit, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              EndTime;                                                  // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PrerollTime;                                              // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              PostrollTime;                                             // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00CC(0x0001) (CPF_Deprecated, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	bool                                               bSupportsInfiniteRange;                                   // 0x00D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x00D1(0x0002) (CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x1D];                                      // 0x00D3(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSection"));
		return ptr;
	}


	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
	void SetBlendType(EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
	EMovieSceneCompletionMode GetCompletionMode();
	struct FOptionalMovieSceneBlendType GetBlendType();
};


// Class MovieScene.MovieSceneSequence
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*                     CompiledData;                                             // 0x0058(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                    // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bParentContextsAreSignificant;                            // 0x0061(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bPlayableDirectly;                                        // 0x0062(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EMovieSceneSequenceFlags                           SequenceFlags;                                            // 0x0063(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSequence"));
		return ptr;
	}


	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName);
	struct FMovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName);
};


// Class MovieScene.MovieSceneHookSection
// 0x0018 (0x0108 - 0x00F0)
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	unsigned char                                      bRequiresRangedHook : 1;                                  // 0x0100(0x0001) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bRequiresTriggerHooks : 1;                                // 0x0100(0x0001) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneHookSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x04C0 (0x04F0 - 0x0030)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0030(0x0238) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPlay;                                                   // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPlayReverse;                                            // 0x0278(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnStop;                                                   // 0x0288(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnPause;                                                  // 0x0298(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OnFinished;                                               // 0x02A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x02B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback : 1;                                     // 0x02BC(0x0001) (CPF_Net, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FFrameNumber                                StartTime;                                                // 0x02C8(0x0004) (CPF_Net, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                DurationFrames;                                           // 0x02CC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              DurationSubFrames;                                        // 0x02D0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                CurrentNumLoops;                                          // 0x02D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x02D8(0x0014) (CPF_Net, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x02F0(0x00E8) (CPF_Transient, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x68];                                      // 0x03D8(0x0068) MISSED OFFSET
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                             // 0x0440(0x0010) (CPF_Net, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TScriptInterface<class UMovieScenePlaybackClient>  PlaybackClient;                                           // 0x0450(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_NativeAccessSpecifierProtected)
	class UMovieSceneSequenceTickManager*              TickManager;                                              // 0x0460(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x88];                                      // 0x0468(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSequencePlayer"));
		return ptr;
	}


	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration, float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void RestoreState();
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	class UMovieSceneSequence* GetSequence();
	float GetPlayRate();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSubSection
// 0x0080 (0x0170 - 0x00F0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x00F0(0x0024) (CPF_Edit, CPF_BlueprintVisible, CPF_Config, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              StartOffset;                                              // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              TimeScale;                                                // 0x0118(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	float                                              PrerollTime;                                              // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      NetworkMask;                                              // 0x0120(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0130(0x001C) (CPF_Edit, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FString                                     TargetSequenceName;                                       // 0x0150(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0160(0x0010) (CPF_Edit, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSubSection"));
		return ptr;
	}


	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};


// Class MovieScene.MovieSceneEntitySystem
// 0x0018 (0x0048 - 0x0030)
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEntitySystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x00A8 - 0x0098)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSubTrack"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCustomClockSource
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneCustomClockSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneCustomClockSource"));
		return ptr;
	}


	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};


// Class MovieScene.MovieSceneDeterminismSource
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneDeterminismSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneDeterminismSource"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEntityProvider
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneEntityProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEntityProvider"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvaluationHook
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneEvaluationHook : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEvaluationHook"));
		return ptr;
	}

};


// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (0x0030 - 0x0030)
class UMovieScenePlaybackClient : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieScenePlaybackClient"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackTemplateProducer
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneTrackTemplateProducer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneTrackTemplateProducer"));
		return ptr;
	}

};


// Class MovieScene.NodeAndChannelMappings
// 0x0000 (0x0030 - 0x0030)
class UNodeAndChannelMappings : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.NodeAndChannelMappings"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNodeGroup
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneNodeGroup : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneNodeGroup"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneNodeGroupCollection
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneNodeGroupCollection"));
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x00F8 (0x0150 - 0x0058)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                            // 0x0088(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00D8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       SelectionRange;                                           // 0x00F0(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       PlaybackRange;                                            // 0x0100(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FFrameRate                                  TickResolution;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FFrameRate                                  DisplayRate;                                              // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EMovieSceneEvaluationType                          EvaluationType;                                           // 0x0120(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EUpdateClockSource                                 ClockSource;                                              // 0x0121(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0122(0x0006) MISSED OFFSET
	struct FSoftObjectPath                             CustomClockSourcePath;                                    // 0x0128(0x0018) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                             // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieScene"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (0x0098 - 0x0030)
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBindingOverrides"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBindingOwnerInterface"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBlenderSystem
// 0x0028 (0x0070 - 0x0048)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBlenderSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBoolSection
// 0x0098 (0x0188 - 0x00F0)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                             // 0x00F0(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FMovieSceneBoolChannel                      BoolCurve;                                                // 0x00F8(0x0090) (CPF_Protected, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBoolSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEntityInstantiatorSystem
// 0x0000 (0x0048 - 0x0048)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEntityInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// 0x0000 (0x0048 - 0x0048)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneGenericBoundObjectInstantiator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// 0x0000 (0x0048 - 0x0048)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBoundSceneComponentInstantiator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSceneComponentImpersonator
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneSceneComponentImpersonator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSceneComponentImpersonator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCompiledData
// 0x03D0 (0x0400 - 0x0030)
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate               EvaluationTemplate;                                       // 0x0030(0x0160) (CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x0190(0x0118) (CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneEntityComponentField             EntityComponentField;                                     // 0x02A8(0x00F0) (CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationField                  TrackTemplateField;                                       // 0x0398(0x0030) (CPF_NativeAccessSpecifierPrivate)
	TArray<struct FFrameTime>                          DeterminismFences;                                        // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	struct FGuid                                       CompiledSignature;                                        // 0x03D8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FGuid                                       CompilerVersion;                                          // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceCompilerMaskStruct       AccumulatedMask;                                          // 0x03F8(0x0001) (CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceCompilerMaskStruct       AllocatedMask;                                            // 0x03F9(0x0001) (CPF_NoDestructor, CPF_NativeAccessSpecifierPrivate)
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                         // 0x03FA(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneCompiledData"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCompiledDataManager
// 0x0208 (0x0238 - 0x0030)
class UMovieSceneCompiledDataManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET
	TMap<int, struct FMovieSceneSequenceHierarchy>     Hierarchies;                                              // 0x00E0(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TMap<int, struct FMovieSceneEvaluationTemplate>    TrackTemplates;                                           // 0x0130(0x0050) (CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TMap<int, struct FMovieSceneEvaluationField>       TrackTemplateFields;                                      // 0x0180(0x0050) (CPF_NativeAccessSpecifierPrivate)
	TMap<int, struct FMovieSceneEntityComponentField>  EntityComponentFields;                                    // 0x01D0(0x0050) (CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneCompiledDataManager"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneFloatDecomposer
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneFloatDecomposer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneFloatDecomposer"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0040 - 0x0030)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneBuiltInEasingFunction"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0040 - 0x0030)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEasingExternalCurve"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEasingFunction"));
		return ptr;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneEntitySystemLinker
// 0x04C8 (0x04F8 - 0x0030)
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x0030(0x0270) MISSED OFFSET
	struct FMovieSceneEntitySystemGraph                SystemGraph;                                              // 0x02A0(0x0138) (CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x120];                                     // 0x03D8(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEntitySystemLinker"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvalTimeSystem
// 0x0010 (0x0058 - 0x0048)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEvalTimeSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvaluationHookSystem
// 0x0050 (0x0098 - 0x0048)
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                              // 0x0048(0x0050) (CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneEvaluationHookSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0078 - 0x0030)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0038(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0048(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneFolder"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneKeyProxy : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneKeyProxy"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneMasterInstantiatorSystem
// 0x0000 (0x0048 - 0x0048)
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneMasterInstantiatorSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// 0x0000 (0x0030 - 0x0030)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieScenePreAnimatedStateSystemInterface"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// 0x0020 (0x0068 - 0x0048)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneCachePreAnimatedStateSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// 0x0010 (0x0058 - 0x0048)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequenceActor
// 0x0000 (0x0030 - 0x0030)
class UMovieSceneSequenceActor : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSequenceActor"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequenceTickManager
// 0x00A8 (0x00D8 - 0x0030)
class UMovieSceneSequenceTickManager : public UObject
{
public:
	TArray<struct FMovieSceneSequenceActorPointers>    SequenceActors;                                           // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_NativeAccessSpecifierPrivate)
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0048(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSequenceTickManager"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnablesSystem
// 0x0000 (0x0048 - 0x0048)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSpawnablesSystem"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnSection
// 0x0008 (0x0190 - 0x0188)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSpawnSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnTrack
// 0x0020 (0x00B8 - 0x0098)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	struct FGuid                                       ObjectGuid;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneSpawnTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneTrack
// 0x0020 (0x00B8 - 0x0098)
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	bool                                               bHighPassFilter;                                          // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x00A8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSection
// 0x0000 (0x00F0 - 0x00F0)
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneSection"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSequence
// 0x0008 (0x0070 - 0x0068)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0068(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneSequence"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubTrack
// 0x0010 (0x00B8 - 0x00A8)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x00A8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneSubTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubSection
// 0x0000 (0x0170 - 0x0170)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneSubSection"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneEvalHookTrack
// 0x0010 (0x00A8 - 0x0098)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0098(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneEvalHookTrack"));
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneEvalHookSection
// 0x0018 (0x0120 - 0x0108)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0108(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.TestMovieSceneEvalHookSection"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstance
// 0x0028 (0x0058 - 0x0030)
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                                     AnimatedObject;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bIsMasterTrackInstance;                                   // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneTrackInstanceInput>       Inputs;                                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneTrackInstance"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstanceInstantiator
// 0x00B0 (0x00F8 - 0x0048)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0048(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneTrackInstanceInstantiator"));
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstanceSystem
// 0x0008 (0x0050 - 0x0048)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*        Instantiator;                                             // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MovieScene.MovieSceneTrackInstanceSystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
