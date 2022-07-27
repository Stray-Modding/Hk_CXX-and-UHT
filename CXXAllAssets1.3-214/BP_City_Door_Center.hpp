#ifndef UE4SS_SDK_BP_City_Door_Center_HPP
#define UE4SS_SDK_BP_City_Door_Center_HPP

class ABP_City_Door_Center_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UParticleSystemComponent* Central_Dust_Mass;                                // 0x0230 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0238 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0240 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem14;                                 // 0x0248 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem5;                                  // 0x0250 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x0258 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem6;                                  // 0x0260 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem2;                                  // 0x0268 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0270 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem8;                                  // 0x0278 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem13;                                 // 0x0280 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem9;                                  // 0x0288 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem10;                                 // 0x0290 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x0298 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem7;                                  // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem4;                                  // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem11;                                 // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem15;                                 // 0x02B8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem12;                                 // 0x02C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02D8 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x02E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E8 (size: 0x8)
    FVector Vertical_Mov;                                                             // 0x02F0 (size: 0xC)
    FVector Horizontal_Mov;                                                           // 0x02FC (size: 0xC)
    float H_Move;                                                                     // 0x0308 (size: 0x4)
    float v_Move;                                                                     // 0x030C (size: 0x4)

    void LogicTrigger();
    void Instant_open();
    void Open();
    void ExecuteUbergraph_BP_City_Door_Center(int32 EntryPoint);
}; // Size: 0x310

#endif
