#ifndef UE4SS_SDK_BP_sfx_generic_zone_box_HPP
#define UE4SS_SDK_BP_sfx_generic_zone_box_HPP

class ABP_sfx_generic_zone_box_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* externalZone;                                                // 0x0230 (size: 0x8)
    class UCOMP_reverb_setter_C* COMP_reverb_setter;                                  // 0x0238 (size: 0x8)
    class UBoxComponent* internalZone;                                                // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FVector Scale;                                                                    // 0x0250 (size: 0xC)
    FVector shift_boundaries_A;                                                       // 0x025C (size: 0xC)
    FVector shift_boundaries_B;                                                       // 0x0268 (size: 0xC)
    TEnumAsByte<E_sfx_falloff_type> falloff type;                                     // 0x0274 (size: 0x1)
    float Falloff;                                                                    // 0x0278 (size: 0x4)
    FVector vector falloff;                                                           // 0x027C (size: 0xC)
    float currentCameraValue;                                                         // 0x0288 (size: 0x4)
    bool cat inside;                                                                  // 0x028C (size: 0x1)
    bool cat was inside;                                                              // 0x028D (size: 0x1)
    bool seeZonesIngame;                                                              // 0x028E (size: 0x1)
    TEnumAsByte<E_sfx_miaou> Miaou;                                                   // 0x028F (size: 0x1)
    float fadeAllMusic;                                                               // 0x0290 (size: 0x4)
    class USoundEffectSubmixPreset* reverb preset;                                    // 0x0298 (size: 0x8)
    float reverbSend;                                                                 // 0x02A0 (size: 0x4)
    bool reverbIsFallback;                                                            // 0x02A4 (size: 0x1)
    bool isDiscretionZone;                                                            // 0x02A5 (size: 0x1)
    bool camera is inside;                                                            // 0x02A6 (size: 0x1)
    bool requestLastTick;                                                             // 0x02A7 (size: 0x1)
    TArray<class UObject*> linked actors;                                             // 0x02A8 (size: 0x10)
    float previousCameraValue;                                                        // 0x02B8 (size: 0x4)

    void is discretion zone(bool& is discretion zone);
    void is cat inside(bool& is cat inside);
    void camera value(float& camera value);
    void miaou type(TEnumAsByte<E_sfx_miaou>& miaou type);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void register(class UObject* actor linked to the zone);
    void Notify change to linked actors();
    void unregister(class UObject* actor linked to the zone);
    void inform cat of miaou type();
    void ExecuteUbergraph_BP_sfx_generic_zone_box(int32 EntryPoint);
}; // Size: 0x2BC

#endif
