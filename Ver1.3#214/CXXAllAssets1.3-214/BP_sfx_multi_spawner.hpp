#ifndef UE4SS_SDK_BP_sfx_multi_spawner_HPP
#define UE4SS_SDK_BP_sfx_multi_spawner_HPP

class ABP_sfx_multi_spawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* tick zone;                                                // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class USoundBase* SoundBase;                                                      // 0x0248 (size: 0x8)
    float base gain;                                                                  // 0x0250 (size: 0x4)
    TArray<FF_sfx_zone_type> zones;                                                   // 0x0258 (size: 0x10)
    float ideal pitch;                                                                // 0x0268 (size: 0x4)
    bool random offset;                                                               // 0x026C (size: 0x1)
    float fade in (s);                                                                // 0x0270 (size: 0x4)
    float fade out (s);                                                               // 0x0274 (size: 0x4)
    float wait before retrigger (s);                                                  // 0x0278 (size: 0x4)
    float stop after (s);                                                             // 0x027C (size: 0x4)
    float delay before play (s);                                                      // 0x0280 (size: 0x4)
    bool only play once;                                                              // 0x0284 (size: 0x1)
    bool mute;                                                                        // 0x0285 (size: 0x1)
    TArray<class UAudioComponent*> theSounds;                                         // 0x0288 (size: 0x10)
    int32 nbOfTimesPlayed;                                                            // 0x0298 (size: 0x4)
    float timeSinceLastPlay;                                                          // 0x029C (size: 0x4)
    bool delayedPlayRequest;                                                          // 0x02A0 (size: 0x1)
    int32 exclusiveGroup;                                                             // 0x02A4 (size: 0x4)
    bool PlayRandomly;                                                                // 0x02A8 (size: 0x1)
    float randomMinDelay;                                                             // 0x02AC (size: 0x4)
    float randomMaxDelay;                                                             // 0x02B0 (size: 0x4)
    float nextRandomDelay;                                                            // 0x02B4 (size: 0x4)
    int32 maxNbInstances;                                                             // 0x02B8 (size: 0x4)
    TArray<bool> catInsideZones;                                                      // 0x02C0 (size: 0x10)
    float totalCamValue;                                                              // 0x02D0 (size: 0x4)
    bool recheck zones;                                                               // 0x02D4 (size: 0x1)
    bool cat inside;                                                                  // 0x02D5 (size: 0x1)
    bool camera is inside;                                                            // 0x02D6 (size: 0x1)
    bool requestLastTick;                                                             // 0x02D7 (size: 0x1)
    FVector randomize location;                                                       // 0x02D8 (size: 0xC)

    void getAudioComponent(class UAudioComponent*& Component);
    void request sound start();
    void request sound stop();
    void ReceiveTick(float DeltaSeconds);
    void Check Zones();
    void CheckAutoTriggers();
    void EmergencyStop(float Duration);
    void StartSound();
    void StopSound();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void clean sounds array();
    void notify change();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_sfx_multi_spawner(int32 EntryPoint);
}; // Size: 0x2E4

#endif
