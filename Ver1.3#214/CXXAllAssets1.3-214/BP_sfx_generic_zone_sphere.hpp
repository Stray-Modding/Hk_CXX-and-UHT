#ifndef UE4SS_SDK_BP_sfx_generic_zone_sphere_HPP
#define UE4SS_SDK_BP_sfx_generic_zone_sphere_HPP

class ABP_sfx_generic_zone_sphere_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* externalZone;                                             // 0x0230 (size: 0x8)
    class USphereComponent* internalZone;                                             // 0x0238 (size: 0x8)
    class UCOMP_reverb_setter_C* COMP_reverb_setter;                                  // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float zone size;                                                                  // 0x0250 (size: 0x4)
    float Falloff;                                                                    // 0x0254 (size: 0x4)
    bool infiniteFalloff;                                                             // 0x0258 (size: 0x1)
    float currentCameraValue;                                                         // 0x025C (size: 0x4)
    bool cat inside;                                                                  // 0x0260 (size: 0x1)
    bool cat was inside;                                                              // 0x0261 (size: 0x1)
    bool seeZonesIngame;                                                              // 0x0262 (size: 0x1)
    TEnumAsByte<E_sfx_miaou> Miaou;                                                   // 0x0263 (size: 0x1)
    float fadeAllMusic;                                                               // 0x0264 (size: 0x4)
    class USoundEffectSubmixPreset* reverb preset;                                    // 0x0268 (size: 0x8)
    float reverbSend;                                                                 // 0x0270 (size: 0x4)
    bool reverbIsFallback;                                                            // 0x0274 (size: 0x1)
    bool isDiscretionZone;                                                            // 0x0275 (size: 0x1)
    bool camera is inside;                                                            // 0x0276 (size: 0x1)
    bool requestLastTick;                                                             // 0x0277 (size: 0x1)
    TArray<class UObject*> linked actors;                                             // 0x0278 (size: 0x10)
    float previousCameraValue;                                                        // 0x0288 (size: 0x4)

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
    void ExecuteUbergraph_BP_sfx_generic_zone_sphere(int32 EntryPoint);
}; // Size: 0x28C

#endif
