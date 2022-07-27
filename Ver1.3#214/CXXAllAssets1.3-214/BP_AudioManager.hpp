#ifndef UE4SS_SDK_BP_AudioManager_HPP
#define UE4SS_SDK_BP_AudioManager_HPP

class ABP_AudioManager_C : public AAudioManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    int32 ItemSelectorCounter;                                                        // 0x0260 (size: 0x4)
    TArray<class AActor*> lastExclusiveSounds;                                        // 0x0268 (size: 0x10)
    TArray<class AActor*> musicStack;                                                 // 0x0278 (size: 0x10)
    TArray<FString> lastExclusiveIdentifiers;                                         // 0x0288 (size: 0x10)
    float timeElapsedWithoutMusic;                                                    // 0x0298 (size: 0x4)
    float dangerousSoundSfxCounter;                                                   // 0x029C (size: 0x4)
    float zurgStepMaxDistance;                                                        // 0x02A0 (size: 0x4)
    class USphereComponent* ZurgStepsDebugSphere;                                     // 0x02A8 (size: 0x8)
    TArray<FF_reverb_slot> reverbs slots;                                             // 0x02B0 (size: 0x10)
    bool debug zones;                                                                 // 0x02C0 (size: 0x1)
    float reverbVolumeToBeSet;                                                        // 0x02C4 (size: 0x4)
    TMap<FString, int32> concurrenciesDebug;                                          // 0x02C8 (size: 0x50)
    TMap<FString, int32> concurrenciesNotPlayingDebug;                                // 0x0318 (size: 0x50)
    FString concurrencyNameToRegister;                                                // 0x0368 (size: 0x10)
    bool tempIsDiscretionZone;                                                        // 0x0378 (size: 0x1)
    float extradiegetic ducker;                                                       // 0x037C (size: 0x4)
    float syncPersist_time;                                                           // 0x0380 (size: 0x4)
    float syncPersist_lastTime;                                                       // 0x0384 (size: 0x4)
    float syncPersist_timer;                                                          // 0x0388 (size: 0x4)
    FString syncPersist_name;                                                         // 0x0390 (size: 0x10)
    int32 number_of_zurg_suckers;                                                     // 0x03A0 (size: 0x4)
    float zurg locked angryness;                                                      // 0x03A4 (size: 0x4)
    int32 number_of_zurg_hisses;                                                      // 0x03A8 (size: 0x4)
    int32 number_of_bigeye_sounds;                                                    // 0x03AC (size: 0x4)
    int32 number_of_angry_sounds;                                                     // 0x03B0 (size: 0x4)
    bool cat has been bound;                                                          // 0x03B4 (size: 0x1)
    int32 currentNumberOfPhysicsSfx;                                                  // 0x03B8 (size: 0x4)
    TArray<class USoundSubmix*> buses to mute during pause;                           // 0x03C0 (size: 0x10)
    class USoundSubmix* intrad bus to mute during pause;                              // 0x03D0 (size: 0x8)
    class USoundSubmix* extrad music bus to mute during pause;                        // 0x03D8 (size: 0x8)
    class USubmixEffectConvolutionReverbPreset* intrad music convo;                   // 0x03E0 (size: 0x8)
    class USoundSubmix* intrad bus;                                                   // 0x03E8 (size: 0x8)
    class USoundSubmix* PS5VibrationBus;                                              // 0x03F0 (size: 0x8)
    class USoundSubmix* PS5ControllerBus;                                             // 0x03F8 (size: 0x8)
    float start time of the last pause;                                               // 0x0400 (size: 0x4)
    float duration of the last pause margin;                                          // 0x0404 (size: 0x4)
    class USoundSubmix* automatable sfx bus;                                          // 0x0408 (size: 0x8)
    float sfx bus fade starting volume;                                               // 0x0410 (size: 0x4)
    class USoundSubmix* menu sliders music;                                           // 0x0418 (size: 0x8)
    bool IsSystemPaused;                                                              // 0x0420 (size: 0x1)
    bool IsMenuPaused;                                                                // 0x0421 (size: 0x1)
    TEnumAsByte<E_sfx_PauseState> PauseState;                                         // 0x0422 (size: 0x1)
    TMap<class USoundEffectSubmixPreset*, class USoundEffectSubmixPreset*> Convo to Cheap reverb; // 0x0428 (size: 0x50)
    bool use PS4 optim;                                                               // 0x0478 (size: 0x1)
    float automatable sfx bus volume;                                                 // 0x047C (size: 0x4)
    class UAudioComponent* cinematicSfxTrack;                                         // 0x0480 (size: 0x8)

    void Can I Play One More Physics Sfx(bool& Yes);
    void is cat in a discretion zone(bool& is discretion zone);
    void SpawnSoundAtLocation(class USoundCue* Sound, FVector Location, FRotator Rotation, float Gain, float Pitch, float Start, class USoundAttenuation* Attenuation, class USoundConcurrency* Concurrency, bool Auto destroy, bool Play sound, class UAudioComponent*& Instance);
    void initLoopSequence(class AActor* Owner, class USoundBase* Start, class USoundBase* loop, class USoundBase* Stop, float Gain, float Pitch, float Start Loop Overlap, float gain attack dur, float gain release dur, bool random loop offset, bool Debug, FString custom name, bool bind destroy to parent destroy, class ABP_sfx_Play_Loop_Sequence_C*& Sequence);
    void debugLog(class AActor* Actor, FString Text);
    void Complete_6246EF4646E19036986D72BAE0588124();
    void Tick_6246EF4646E19036986D72BAE0588124(float Ratio);
    void inform sync is dying(float Time, float lastTime, float Timer, FString Name);
    void sync tick();
    void ZonesBeginPlay();
    void setReverbVolume(int32 Index, float Volume, bool isFallbackReverb);
    void setReverbPreset(class USoundEffectSubmixPreset* ReverbPreset, TScriptInterface<class II_reverb_setter_C> setter);
    void Free_ReverbSlot(int32 Index);
    void Zones_tick();
    void informReverbSetterEndPlay(class UCOMP_reverb_setter_C* setter);
    void Various tick(float Delta);
    void spawn dangerous sound attached(float VolumeMultiplier, class USoundBase* Sound, class USceneComponent* AttachToComponent, float Pitch, float max per seconds);
    void Spawn Zurg State Sound(class USceneComponent* attach to component, EZurgState ID);
    void Zurg_Step(class USceneComponent* attach to component, float Velocity, float Distance);
    void Zurg suck(bool does it suck);
    void ZurgsBeginPlay();
    void ZurgTick();
    void Zurg blink(FVector Location);
    void Zurg idle cry(FVector Location);
    void Zurg Eyes Gargles(FVector Location);
    void Zurg_aggressive _shout(FVector Location);
    void Zurg_land(FVector Location, float Velocity);
    void Zurg_fall(FVector Location);
    void Zurg_ejected(FVector Location);
    void Zurg_jump(FVector Location);
    void Zurg_explode(FVector Location, float Volume, float Pitch);
    void Zurg_before_eclosion(FVector Location, float Volume, float Pitch);
    void Zurg_eclosion(FVector Location, float Volume, float Pitch);
    void Zurg_mouth(FVector Location);
    void Zurg_add_hiss(int32 Number);
    void Zurg_add_bigeye_sound(int32 Number);
    void Zurg wet land(FVector Location);
    void informExclusivePlay(class AActor* Player, int32 Group, FString Identifier);
    void MusicManager_tick(float Delta);
    void fadeOutAllMusic(float Duration);
    void start player by ActorId(FName ActorId);
    void Play Velocity Sfx(class AActor* Owner, FVector Location, const TArray<class USoundBase*>& Cues, float Velocity, float Attenuation factor, float minimumVelocity, float Pitch, float Gain);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void On Pause(bool CausedByMenu);
    void On Unpause(bool CausedByMenu);
    void death(class ACatPawn* _catPawn);
    void try to bind events to cat();
    void Closest Interaction Changed(class ACatPawn* _catPawn, TEnumAsByte<EUsableInteractionButton> _button, class UCatUsableComponentBase* _usable);
    void pause music(bool Pause);
    void fade sfx bus(float Duration, float target volume);
    void SetPauseState(TEnumAsByte<E_sfx_PauseState> PauseState);
    void startCinematicSfxTrack(class USoundBase* sound base);
    void ExecuteUbergraph_BP_AudioManager(int32 EntryPoint);
}; // Size: 0x488

#endif
