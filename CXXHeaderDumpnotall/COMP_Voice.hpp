#ifndef UE4SS_SDK_COMP_Voice_HPP
#define UE4SS_SDK_COMP_Voice_HPP

class UCOMP_Voice_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float VoicePitch;
    int32 maxSpokenLetters;
    int32 CurrentLineCharIndex;
    class USceneComponent* SoundsLocation;
    class USoundBase* loopBody;
    class UAudioComponent* loopBodyInstance01;
    class UVoiceBank* VoiceBank;
    float bodyFadesTime;
    bool IsDialogueEnd;
    FCOMP_Voice_CPhrase Started Play Phrase Started Play;
    void Phrase Started Play();
    FCOMP_Voice_CPhrase Stoppped Play Phrase Stoppped Play;
    void Phrase Stoppped Play();
    bool IsPhrasePlaying;
    TArray<FF_sfx_syllabe> phraseSequence;
    bool pending stop;
    float Volume Multiplier;
    class USoundAttenuation* Attenuation Settings;
    TMap<class USoundBase*, class UVoiceBank*> VoiceLoopToVoiceBankMap;
    bool useSplitBanks;
    class USceneComponent* force location comp;
    FName force location socket;
    class USoundAttenuation* 2D attenuation;

    void IsPlayingPhrase(bool& IsPlayingPhrase);
    void GetSoundLocation(class USceneComponent*& SceneComponent, FName& Socket);
    void ReceiveBeginPlay();
    void EmergencyStopLoopBodies();
    void PlayPhrase(FString Phrase);
    void StopPhraseRequest();
    void playRandomTimedPhrase(float Duration);
    void actually stop phrase();
    void PlayTimedPhrase(FString Phrase);
    void respawn loop body(class USoundBase* Sound, class USceneComponent* AttachToComponent, FName AttachPointName);
    void ExecuteUbergraph_COMP_Voice(int32 EntryPoint);
    void Phrase Stoppped Play__DelegateSignature();
    void Phrase Started Play__DelegateSignature();
};

#endif
