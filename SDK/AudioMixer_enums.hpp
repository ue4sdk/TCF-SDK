#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C            = 0,
	EMusicalNoteName__Db           = 1,
	EMusicalNoteName__D            = 2,
	EMusicalNoteName__Eb           = 3,
	EMusicalNoteName__E            = 4,
	EMusicalNoteName__F            = 5,
	EMusicalNoteName__Gb           = 6,
	EMusicalNoteName__G            = 7,
	EMusicalNoteName__Ab           = 8,
	EMusicalNoteName__A            = 9,
	EMusicalNoteName__Bb           = 10,
	EMusicalNoteName__B            = 11,
	EMusicalNoteName__EMusicalNoteName_MAX = 12
};


// Enum AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
	ESubmixEffectDynamicsKeySource__Default = 0,
	ESubmixEffectDynamicsKeySource__AudioBus = 1,
	ESubmixEffectDynamicsKeySource__Submix = 2,
	ESubmixEffectDynamicsKeySource__Count = 3,
	ESubmixEffectDynamicsKeySource__ESubmixEffectDynamicsKeySource_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
};


// Enum AudioMixer.EQuarztClockManagerType
enum class EQuarztClockManagerType : uint8_t
{
	EQuarztClockManagerType__AudioEngine = 0,
	EQuarztClockManagerType__QuartzSubsystem = 1,
	EQuarztClockManagerType__Count = 2,
	EQuarztClockManagerType__EQuarztClockManagerType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
