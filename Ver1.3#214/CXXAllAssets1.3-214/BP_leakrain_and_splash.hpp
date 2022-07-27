#ifndef UE4SS_SDK_BP_leakrain_and_splash_HPP
#define UE4SS_SDK_BP_leakrain_and_splash_HPP

class ABP_leakrain_and_splash_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UParticleSystemComponent* FX_splash;                                        // 0x0238 (size: 0x8)
    class UParticleSystemComponent* FX_Rain2;                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    bool splashes;                                                                    // 0x0250 (size: 0x1)
    bool Ripples ?;                                                                   // 0x0251 (size: 0x1)
    class USoundBase* splash sound;                                                   // 0x0258 (size: 0x8)
    float Volume;                                                                     // 0x0260 (size: 0x4)
    float Pitch;                                                                      // 0x0264 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_leakrain_and_splash(int32 EntryPoint);
}; // Size: 0x268

#endif
