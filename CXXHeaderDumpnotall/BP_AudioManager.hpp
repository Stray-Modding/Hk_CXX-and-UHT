#ifndef UE4SS_SDK_BP_AudioManager_HPP
#define UE4SS_SDK_BP_AudioManager_HPP

class ABP_AudioManager_C : public AAudioManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    int32 ItemSelectorCounter;
    TArray<class AActor*> lastExclusiveSounds;
    TArray<class AActor*> musicStack;
    TArray<FString> lastExclusiveIdentifiers;
    float timeElapsedWithoutMusic;
    float dangerousSoundSfxCounter;
    float zurgStepMaxDistance;
    class USphereComponent* ZurgStepsDebugSphere;
    TArray<FF_reverb_slot> reverbs slots;
    bool debug zones;
    float reverbVolumeToBeSet;
    TMap<FString, int32> concurrenciesDebug;
    TMap<FString, int32> concurrenciesNotPlayingDebug;
    FString concurrencyNameToRegister;
    bool tempIsDiscretionZone;
    float extradiegetic ducker;
    float syncPersist_time;
    float syncPersist_lastTime;
    float syncPersist_timer;
    FString syncPersist_name;
    int32 number_of_zurg_suckers;
    float zurg locked angryness;
    int32 number_of_zurg_hisses;
    int32 number_of_bigeye_sounds;
    int32 number_of_angry_sounds;
    bool cat has been bound;
    int32 currentNumberOfPhysicsSfx;
    TArray<class USoundSubmix*> buses to mute during pause;
    class USoundSubmix* intrad bus to mute during pause;
    class USoundSubmix* extrad music bus to mute during pause;
    class USubmixEffectConvolutionReverbPreset* intrad music convo;
    class USoundSubmix* intrad bus;
    class USoundSubmix* PS5VibrationBus;
    class USoundSubmix* PS5ControllerBus;
    float start time of the last pause;
    float duration of the last pause margin;
    class USoundSubmix* automatable sfx bus;
    float sfx bus fade starting volume;
    class USoundSubmix* menu sliders music;
    bool IsSystemPaused;
    bool IsMenuPaused;
    TEnumAsByte<E_sfx_PauseState> PauseState;
    TMap<class USoundEffectSubmixPreset*, class USoundEffectSubmixPreset*> Convo to Cheap reverb;
    bool use PS4 optim;
    float automatable sfx bus volume;
    class UAudioComponent* cinematicSfxTrack;

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
};

#endif