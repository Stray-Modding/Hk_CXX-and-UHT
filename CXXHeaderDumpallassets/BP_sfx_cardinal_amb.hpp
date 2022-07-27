#ifndef UE4SS_SDK_BP_sfx_cardinal_amb_HPP
#define UE4SS_SDK_BP_sfx_cardinal_amb_HPP

class ABP_sfx_cardinal_amb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* externalZone;                                             // 0x0230 (size: 0x8)
    class USphereComponent* internalZone;                                             // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TArray<class UAudioComponent*> spawnedSounds;                                     // 0x0250 (size: 0x10)
    float zoneSize;                                                                   // 0x0260 (size: 0x4)
    float falloffSize;                                                                // 0x0264 (size: 0x4)
    int32 nbSources;                                                                  // 0x0268 (size: 0x4)
    TArray<class USoundWave*> Cues;                                                   // 0x0270 (size: 0x10)
    TArray<float> Volumes;                                                            // 0x0280 (size: 0x10)
    TArray<float> pitches;                                                            // 0x0290 (size: 0x10)
    float angleOffset;                                                                // 0x02A0 (size: 0x4)
    float multiply distance;                                                          // 0x02A4 (size: 0x4)
    bool spreadOffset;                                                                // 0x02A8 (size: 0x1)
    bool mute;                                                                        // 0x02A9 (size: 0x1)
    float totalSpaceDefaultValue;                                                     // 0x02AC (size: 0x4)
    TArray<FF_sfx_zone_type> zone modifiers;                                          // 0x02B0 (size: 0x10)
    float totalSpaceValue;                                                            // 0x02C0 (size: 0x4)
    bool view zones ingame;                                                           // 0x02C4 (size: 0x1)
    int32 nbProbes;                                                                   // 0x02C8 (size: 0x4)
    float tmpBestDistance;                                                            // 0x02CC (size: 0x4)
    FVector tmpBestLocation;                                                          // 0x02D0 (size: 0xC)
    float currentVolume;                                                              // 0x02DC (size: 0x4)
    bool use stereo source;                                                           // 0x02E0 (size: 0x1)
    float hasBeenOnSince;                                                             // 0x02E4 (size: 0x4)
    float has been playing in total;                                                  // 0x02E8 (size: 0x4)
    bool cat inside;                                                                  // 0x02EC (size: 0x1)
    bool camera is inside;                                                            // 0x02ED (size: 0x1)
    bool requestLastTick;                                                             // 0x02EE (size: 0x1)
    bool recheck zones;                                                               // 0x02EF (size: 0x1)
    float spread power;                                                               // 0x02F0 (size: 0x4)
    class USoundEffectSourcePresetChain* Source Effect Chain;                         // 0x02F8 (size: 0x8)
    class USourceEffectPannerPreset* panner effect;                                   // 0x0300 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void notify change();
    void update volumes();
    void try to recheck zones();
    void BndEvt__BP_sfx_cardinal_amb_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_sfx_cardinal_amb_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_sfx_cardinal_amb(int32 EntryPoint);
}; // Size: 0x308

#endif
