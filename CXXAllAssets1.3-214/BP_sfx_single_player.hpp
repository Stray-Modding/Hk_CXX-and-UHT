#ifndef UE4SS_SDK_BP_sfx_single_player_HPP
#define UE4SS_SDK_BP_sfx_single_player_HPP

class ABP_sfx_single_player_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UDebugInputComponent* DebugInput;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    TArray<class USoundBase*> Playlist;                                               // 0x0248 (size: 0x10)
    int32 currentPlaylistIndex;                                                       // 0x0258 (size: 0x4)
    class USoundBase* sound base;                                                     // 0x0260 (size: 0x8)
    float base gain;                                                                  // 0x0268 (size: 0x4)
    TArray<FF_sfx_zone_type> zones;                                                   // 0x0270 (size: 0x10)
    float ideal pitch;                                                                // 0x0280 (size: 0x4)
    bool always play;                                                                 // 0x0284 (size: 0x1)
    bool play on meow_normal;                                                         // 0x0285 (size: 0x1)
    bool play on meow_inverted;                                                       // 0x0286 (size: 0x1)
    bool random offset;                                                               // 0x0287 (size: 0x1)
    float fade in (s);                                                                // 0x0288 (size: 0x4)
    float fade out (s);                                                               // 0x028C (size: 0x4)
    float wait before retrigger (s);                                                  // 0x0290 (size: 0x4)
    float stop after (s);                                                             // 0x0294 (size: 0x4)
    float delay before play (s);                                                      // 0x0298 (size: 0x4)
    bool only play once;                                                              // 0x029C (size: 0x1)
    bool mute;                                                                        // 0x029D (size: 0x1)
    class UAudioComponent* theSound;                                                  // 0x02A0 (size: 0x8)
    float totalCamValue;                                                              // 0x02A8 (size: 0x4)
    int32 nbOfTimesPlayed;                                                            // 0x02AC (size: 0x4)
    float timeSinceLastPlay;                                                          // 0x02B0 (size: 0x4)
    bool delayedPlayRequest;                                                          // 0x02B4 (size: 0x1)
    int32 exclusiveGroup;                                                             // 0x02B8 (size: 0x4)
    FString Identifier;                                                               // 0x02C0 (size: 0x10)
    TArray<bool> catInsideZones;                                                      // 0x02D0 (size: 0x10)
    float nextRandomDelay;                                                            // 0x02E0 (size: 0x4)
    bool PlayRandomly;                                                                // 0x02E4 (size: 0x1)
    float randomMinDelay;                                                             // 0x02E8 (size: 0x4)
    float randomMaxDelay;                                                             // 0x02EC (size: 0x4)
    bool Localized;                                                                   // 0x02F0 (size: 0x1)
    class ABP_sfx_synchronizer_C* Synchronized;                                       // 0x02F8 (size: 0x8)
    bool sync_waitingForStart;                                                        // 0x0300 (size: 0x1)
    bool sync_waitingForStop;                                                         // 0x0301 (size: 0x1)
    bool stop when zero volume;                                                       // 0x0302 (size: 0x1)
    bool start when positive volume;                                                  // 0x0303 (size: 0x1)
    bool restart on start;                                                            // 0x0304 (size: 0x1)
    bool restart on start if fading;                                                  // 0x0305 (size: 0x1)
    float onlyPlayIfNoMusicFor;                                                       // 0x0308 (size: 0x4)
    class UAudioComponent* tempSoundToDestroy;                                        // 0x0310 (size: 0x8)
    float wait timing multiplier;                                                     // 0x0318 (size: 0x4)
    bool startAllowed;                                                                // 0x031C (size: 0x1)
    bool recheck zones;                                                               // 0x031D (size: 0x1)
    bool sound would restart if spawned there;                                        // 0x031E (size: 0x1)
    bool auto restart on reload;                                                      // 0x031F (size: 0x1)

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
}; // Size: 0x320

#endif
