#ifndef UE4SS_SDK_BP_sfx_clubManager_HPP
#define UE4SS_SDK_BP_sfx_clubManager_HPP

class ABP_sfx_clubManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UAudioComponent* audio_scratch;                                             // 0x0240 (size: 0x8)
    class UActorIdComponent* ActorId;                                                 // 0x0248 (size: 0x8)
    class UAudioComponent* audio_track;                                               // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    class AActor* Zone;                                                               // 0x0260 (size: 0x8)
    TArray<class AAmbientSound*> busses;                                              // 0x0268 (size: 0x10)
    int32 currentIndexPlayed;                                                         // 0x0278 (size: 0x4)
    bool is playing;                                                                  // 0x027C (size: 0x1)
    bool Is_Playlist_Vinyl_Selected;                                                  // 0x027D (size: 0x1)
    bool Go_Back_To_Standard_Automatically;                                           // 0x027E (size: 0x1)
    float Delay_Switch_Back;                                                          // 0x0280 (size: 0x4)
    bool Is_Cat_Sratching;                                                            // 0x0284 (size: 0x1)
    TArray<class USoundBase*> Playlist_Standard;                                      // 0x0288 (size: 0x10)
    TArray<class USoundBase*> Playlist_Vinyl;                                         // 0x0298 (size: 0x10)
    class USoundBase* scratch base;                                                   // 0x02A8 (size: 0x8)
    class USoundBase* scratch base wave;                                              // 0x02B0 (size: 0x8)
    FBP_sfx_clubManager_COnSwapTrack OnSwapTrack;                                     // 0x02B8 (size: 0x10)
    void OnSwapTrack(bool Is_Vinyl, int32 Index);
    float Music_Volume;                                                               // 0x02C8 (size: 0x4)
    float Scratch_Transition_time;                                                    // 0x02CC (size: 0x4)

    void Complete_6246EF4646E19036986D72BADD480FE3();
    void Tick_6246EF4646E19036986D72BADD480FE3(float Ratio);
    void Complete_6246EF4646E19036986D72BAA356622F();
    void Tick_6246EF4646E19036986D72BAA356622F(float Ratio);
    void Play_turntable();
    void Stop_turntable();
    void Switch_To_Vinyl_Playlist();
    void scratch();
    void notify change();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_sfx_clubManager_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnAudioFinished_Event_0();
    void Switch_Back_To_Standard_Playlist();
    void ExecuteUbergraph_BP_sfx_clubManager(int32 EntryPoint);
    void OnSwapTrack__DelegateSignature(bool Is_Vinyl, int32 Index);
}; // Size: 0x2D0

#endif
