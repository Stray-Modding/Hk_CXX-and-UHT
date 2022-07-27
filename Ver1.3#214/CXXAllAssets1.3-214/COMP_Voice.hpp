#ifndef UE4SS_SDK_COMP_Voice_HPP
#define UE4SS_SDK_COMP_Voice_HPP

class UCOMP_Voice_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    float VoicePitch;                                                                 // 0x00B8 (size: 0x4)
    int32 maxSpokenLetters;                                                           // 0x00BC (size: 0x4)
    int32 CurrentLineCharIndex;                                                       // 0x00C0 (size: 0x4)
    class USceneComponent* SoundsLocation;                                            // 0x00C8 (size: 0x8)
    class USoundBase* loopBody;                                                       // 0x00D0 (size: 0x8)
    class UAudioComponent* loopBodyInstance01;                                        // 0x00D8 (size: 0x8)
    class UVoiceBank* VoiceBank;                                                      // 0x00E0 (size: 0x8)
    float bodyFadesTime;                                                              // 0x00E8 (size: 0x4)
    bool IsDialogueEnd;                                                               // 0x00EC (size: 0x1)
    FCOMP_Voice_CPhrase Started Play Phrase Started Play;                             // 0x00F0 (size: 0x10)
    void Phrase Started Play();
    FCOMP_Voice_CPhrase Stoppped Play Phrase Stoppped Play;                           // 0x0100 (size: 0x10)
    void Phrase Stoppped Play();
    bool IsPhrasePlaying;                                                             // 0x0110 (size: 0x1)
    TArray<FF_sfx_syllabe> phraseSequence;                                            // 0x0118 (size: 0x10)
    bool pending stop;                                                                // 0x0128 (size: 0x1)
    float Volume Multiplier;                                                          // 0x012C (size: 0x4)
    class USoundAttenuation* Attenuation Settings;                                    // 0x0130 (size: 0x8)
    TMap<class USoundBase*, class UVoiceBank*> VoiceLoopToVoiceBankMap;               // 0x0138 (size: 0x50)
    bool useSplitBanks;                                                               // 0x0188 (size: 0x1)
    class USceneComponent* force location comp;                                       // 0x0190 (size: 0x8)
    FName force location socket;                                                      // 0x0198 (size: 0x8)
    class USoundAttenuation* 2D attenuation;                                          // 0x01A0 (size: 0x8)

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
}; // Size: 0x1A8

#endif
