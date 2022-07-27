#ifndef UE4SS_SDK_CACA_ZurgIEM_koola_HPP
#define UE4SS_SDK_CACA_ZurgIEM_koola_HPP

class ACACA_ZurgIEM_koola_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0230 (size: 0x8)
    class USphereComponent* RepelCol;                                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cylinder2;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x0248 (size: 0x8)
    class UDebugInputComponent* DebugInput;                                           // 0x0250 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    float CoolDownTime;                                                               // 0x0270 (size: 0x4)
    float TimeSinceLastHit;                                                           // 0x0274 (size: 0x4)
    bool KillZurgActive;                                                              // 0x0278 (size: 0x1)
    float TimeForKillingZurgActive;                                                   // 0x027C (size: 0x4)
    bool PowerAvailable;                                                              // 0x0280 (size: 0x1)
    float TimeSinceActivation;                                                        // 0x0284 (size: 0x4)
    class UPostProcessComponent* postp;                                               // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* Mat inst;                                         // 0x0290 (size: 0x8)
    bool AutoCharge;                                                                  // 0x0298 (size: 0x1)
    bool TorchlightFPS;                                                               // 0x0299 (size: 0x1)
    bool FlashIEM;                                                                    // 0x029A (size: 0x1)
    bool PacManIEM;                                                                   // 0x029B (size: 0x1)
    bool PacManOn;                                                                    // 0x029C (size: 0x1)
    float PacManTime;                                                                 // 0x02A0 (size: 0x4)
    float Pacmanjauge;                                                                // 0x02A4 (size: 0x4)
    bool AutoPacManUnfill;                                                            // 0x02A8 (size: 0x1)
    TArray<class AZurgPawnSlave*> ZurgsinAOE;                                         // 0x02B0 (size: 0x10)
    float IEMCharge;                                                                  // 0x02C0 (size: 0x4)
    float IEMChargeSpeedMultiplier;                                                   // 0x02C4 (size: 0x4)
    float previousIEMCharge;                                                          // 0x02C8 (size: 0x4)

    void Complete_6246EF4646E19036986D72BA8F4D83D5();
    void Tick_6246EF4646E19036986D72BA8F4D83D5(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Charge();
    void Discharge();
    void PackMan On();
    void PackMan Off();
    void BndEvt__RepelCol_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__RepelCol_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void StartGravityGrab();
    void BndEvt__DebugInput_K2Node_ComponentBoundEvent_4_InputDelegate__DelegateSignature();
    void ExecuteUbergraph_CACA_ZurgIEM_koola(int32 EntryPoint);
}; // Size: 0x2CC

#endif
