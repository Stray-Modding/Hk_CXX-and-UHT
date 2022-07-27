#ifndef UE4SS_SDK_BP_sfx_cardinal_spawner_HPP
#define UE4SS_SDK_BP_sfx_cardinal_spawner_HPP

class ABP_sfx_cardinal_spawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class USphereComponent* externalZoneNew;                                          // 0x0238 (size: 0x8)
    class USphereComponent* internalZone;                                             // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TArray<class UAudioComponent*> spawnedSounds;                                     // 0x0250 (size: 0x10)
    float zoneSize;                                                                   // 0x0260 (size: 0x4)
    float falloffSize;                                                                // 0x0264 (size: 0x4)
    float Gain;                                                                       // 0x0268 (size: 0x4)
    float Pitch;                                                                      // 0x026C (size: 0x4)
    class USoundBase* Cues;                                                           // 0x0270 (size: 0x8)
    bool spreadOffset;                                                                // 0x0278 (size: 0x1)
    bool mute;                                                                        // 0x0279 (size: 0x1)
    float totalSpaceDefaultValue;                                                     // 0x027C (size: 0x4)
    TArray<FF_sfx_zone_type> zone modifiers;                                          // 0x0280 (size: 0x10)
    float totalSpaceValue;                                                            // 0x0290 (size: 0x4)
    float timeSinceLastSpawn;                                                         // 0x0294 (size: 0x4)
    float minDelayBetweenSpawns;                                                      // 0x0298 (size: 0x4)
    float maxDelayBetweenSpawns;                                                      // 0x029C (size: 0x4)
    float nextDelayBetweenShots;                                                      // 0x02A0 (size: 0x4)
    bool scaryLocation;                                                               // 0x02A4 (size: 0x1)
    bool spawn allowed;                                                               // 0x02A5 (size: 0x1)
    bool continuously readjust volume;                                                // 0x02A6 (size: 0x1)
    bool recheck zones;                                                               // 0x02A7 (size: 0x1)
    bool cat inside;                                                                  // 0x02A8 (size: 0x1)
    bool camera is inside;                                                            // 0x02A9 (size: 0x1)
    bool requestLastTick;                                                             // 0x02AA (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void notify change();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_sfx_cardinal_spawner(int32 EntryPoint);
}; // Size: 0x2AB

#endif
