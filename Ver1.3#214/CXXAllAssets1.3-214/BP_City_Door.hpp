#ifndef UE4SS_SDK_BP_City_Door_HPP
#define UE4SS_SDK_BP_City_Door_HPP

class ABP_City_Door_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UParticleSystemComponent* Central_Dust_Mass;                                // 0x0230 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem39;                                 // 0x0238 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem36;                                 // 0x0240 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem35;                                 // 0x0248 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem34;                                 // 0x0250 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem33;                                 // 0x0258 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem28;                                 // 0x0260 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem32;                                 // 0x0268 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem31;                                 // 0x0270 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem30;                                 // 0x0278 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem29;                                 // 0x0280 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem27;                                 // 0x0288 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem24;                                 // 0x0290 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem26;                                 // 0x0298 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem25;                                 // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem23;                                 // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem22;                                 // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem21;                                 // 0x02B8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem20;                                 // 0x02C0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem19;                                 // 0x02C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem18;                                 // 0x02D0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem17;                                 // 0x02D8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem12;                                 // 0x02E0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem13;                                 // 0x02E8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem16;                                 // 0x02F0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem15;                                 // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem14;                                 // 0x0300 (size: 0x8)
    class UStaticMeshComponent* City_Door_06;                                         // 0x0308 (size: 0x8)
    class UStaticMeshComponent* City_Door_05;                                         // 0x0310 (size: 0x8)
    class UStaticMeshComponent* City_Door_04;                                         // 0x0318 (size: 0x8)
    class UStaticMeshComponent* City_Door_03;                                         // 0x0320 (size: 0x8)
    class UStaticMeshComponent* City_Door_02;                                         // 0x0328 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0330 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0338 (size: 0x8)
    class UAudioComponent* Impact_VIBE;                                               // 0x0340 (size: 0x8)
    class UStaticMeshComponent* City_Door_01;                                         // 0x0348 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0350 (size: 0x8)
    bool [Editor] Opened;                                                             // 0x0358 (size: 0x1)
    bool [Editor] Static;                                                             // 0x0359 (size: 0x1)
    float Speed_Factor;                                                               // 0x035C (size: 0x4)
    float Duration_Vertical_Mvt;                                                      // 0x0360 (size: 0x4)
    FVector Vertical_Mov;                                                             // 0x0364 (size: 0xC)
    float Duration_Horizontal_Mvt;                                                    // 0x0370 (size: 0x4)
    FVector Horizontal_Mov;                                                           // 0x0374 (size: 0xC)
    bool Start_opening;                                                               // 0x0380 (size: 0x1)
    bool Finished;                                                                    // 0x0381 (size: 0x1)
    FBP_City_Door_CImpactDoorVibration ImpactDoorVibration;                           // 0x0388 (size: 0x10)
    void ImpactDoorVibration();

    void UserConstructionScript();
    void LogicTrigger();
    void ReceiveBeginPlay();
    void CamShake1();
    void CamShake2();
    void Start_Moving();
    void Stop_moving();
    void ExecuteUbergraph_BP_City_Door(int32 EntryPoint);
    void ImpactDoorVibration__DelegateSignature();
}; // Size: 0x398

#endif
