#ifndef UE4SS_SDK_MagicLeapAudio_HPP
#define UE4SS_SDK_MagicLeapAudio_HPP

class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetOnAudioJackUnpluggedDelegate(const FSetOnAudioJackUnpluggedDelegateResultDelegate& ResultDelegate);
    bool SetOnAudioJackPluggedDelegate(const FSetOnAudioJackPluggedDelegateResultDelegate& ResultDelegate);
    bool SetMicMute(bool IsMuted);
    bool IsMicMuted();
};

struct FMagicLeapAudioDummyStruct
{
};

#endif
