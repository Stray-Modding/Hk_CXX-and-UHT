#ifndef UE4SS_SDK_BP_SolarCaptor_HPP
#define UE4SS_SDK_BP_SolarCaptor_HPP

class ABP_SolarCaptor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class ULightableComponent* lightable;                                             // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0250 (size: 0x8)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x0258 (size: 0x10)
    bool OnLight;                                                                     // 0x0268 (size: 0x1)
    bool FullCharged;                                                                 // 0x0269 (size: 0x1)
    float Charge;                                                                     // 0x026C (size: 0x4)
    float ChargeSpeed;                                                                // 0x0270 (size: 0x4)
    float MaxCharge;                                                                  // 0x0274 (size: 0x4)
    float DischargeSpeed;                                                             // 0x0278 (size: 0x4)
    bool Broken;                                                                      // 0x027C (size: 0x1)
    bool LightAuto;                                                                   // 0x027D (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Fill();
    void ExecuteUbergraph_BP_SolarCaptor(int32 EntryPoint);
}; // Size: 0x27E

#endif
