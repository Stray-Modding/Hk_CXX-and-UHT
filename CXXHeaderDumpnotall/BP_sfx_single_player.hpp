#ifndef UE4SS_SDK_BP_sfx_single_player_HPP
#define UE4SS_SDK_BP_sfx_single_player_HPP

class ABP_sfx_single_player_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UDebugInputComponent* DebugInput;
    class USceneComponent* DefaultSceneRoot;
    TArray<class USoundBase*> Playlist;
    int32 currentPlaylistIndex;
    class USoundBase* sound base;
    float base gain;
    TArray<FF_sfx_zone_type> zones;
    float ideal pitch;
    bool always play;
    bool play on meow_normal;
    bool play on meow_inverted;
    bool random offset;
    float fade in (s);
    float fade out (s);
    float wait before retrigger (s);
    float stop after (s);
    float delay before play (s);
    bool only play once;
    bool mute;
    class UAudioComponent* theSound;
    float totalCamValue;
    int32 nbOfTimesPlayed;
    float timeSinceLastPlay;
    bool delayedPlayRequest;
    int32 exclusiveGroup;
    FString Identifier;
    TArray<bool> catInsideZones;
    float nextRandomDelay;
    bool PlayRandomly;
    float randomMinDelay;
    float randomMaxDelay;
    bool Localized;
    class ABP_sfx_synchronizer_C* Synchronized;
    bool sync_waitingForStart;
    bool sync_waitingForStop;
    bool stop when zero volume;
    bool start when positive volume;
    bool restart on start;
    bool restart on start if fading;
    float onlyPlayIfNoMusicFor;
    class UAudioComponent* tempSoundToDestroy;
    float wait timing multiplier;
    bool startAllowed;
    bool recheck zones;
    bool sound would restart if spawned there;
    bool auto restart on reload;

    void getAudioComponent(class UAudioComponent*& Component);
    void ReceiveBeginPlay();
    void request sound start();
    void request sound stop();
    void ReceiveTick(float DeltaSeconds);
    void Check Zones();
    void CheckAutoTriggers();
    void EmergencyStop(float Duration);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void sync_Tick();
    void BndEvt__DebugInput_K2Node_ComponentBoundEvent_0_InputDelegate__DelegateSignature();
    void BndEvt__DebugInput_K2Node_ComponentBoundEvent_1_InputDelegate__DelegateSignature();
    void StartSound();
    void StopSound();
    void spawnNextSoundInPlaylist();
    void AllowFadeOut();
    void actually start (private)();
    void actually stop (private)();
    void LogicTrigger();
    void notify change();
    void BndEvt__Save_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void sound stopped by itself();
    void ExecuteUbergraph_BP_sfx_single_player(int32 EntryPoint);
};

#endif
