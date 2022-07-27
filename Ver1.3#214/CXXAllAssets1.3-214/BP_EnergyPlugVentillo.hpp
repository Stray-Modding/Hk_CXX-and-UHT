#ifndef UE4SS_SDK_BP_EnergyPlugVentillo_HPP
#define UE4SS_SDK_BP_EnergyPlugVentillo_HPP

class ABP_EnergyPlugVentillo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Blockable_Fan_NoFrame;                                // 0x0230 (size: 0x8)
    class UBoxComponent* ActivationZone;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Blockable_Fan_Blade;                                  // 0x0240 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0248 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0250 (size: 0x8)
    class UBoxComponent* VentCollider;                                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* CableStartIndicator;                                  // 0x0260 (size: 0x8)
    class USceneComponent* Vent_Pivot;                                                // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    class ACACA_Electric_Plug_Female_C* FemalePlug;                                   // 0x0278 (size: 0x8)
    float Speed;                                                                      // 0x0280 (size: 0x4)
    bool HasStarted;                                                                  // 0x0284 (size: 0x1)
    bool IsStartingOrStopping;                                                        // 0x0285 (size: 0x1)
    bool isPlugged;                                                                   // 0x0286 (size: 0x1)
    bool WaitingForGoodRotationToStop;                                                // 0x0287 (size: 0x1)
    float DecelerationDuration;                                                       // 0x0288 (size: 0x4)
    float AccelerationDuration;                                                       // 0x028C (size: 0x4)
    class UAudioComponent* StopSound;                                                 // 0x0290 (size: 0x8)
    class AActor* ActorToTriggerWhenStop;                                             // 0x0298 (size: 0x8)
    float currentSpeed;                                                               // 0x02A0 (size: 0x4)
    float SpeedTargetBeforeBlend;                                                     // 0x02A4 (size: 0x4)
    float RotationBeforeBlend;                                                        // 0x02A8 (size: 0x4)
    float VentilloRotationX;                                                          // 0x02AC (size: 0x4)
    bool CatIsInZone;                                                                 // 0x02B0 (size: 0x1)
    bool Debug;                                                                       // 0x02B1 (size: 0x1)
    float Delta Seconds;                                                              // 0x02B4 (size: 0x4)
    float Timer;                                                                      // 0x02B8 (size: 0x4)
    float AngleBeforeStop;                                                            // 0x02BC (size: 0x4)

    void Complete_6246EF4646E19036986D72BA8EDE5BBD();
    void Tick_6246EF4646E19036986D72BA8EDE5BBD(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void StartVent();
    void StopVent();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnPlugFemaleEvent_Event_0(class AActor* ItemConnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    void OnUnplugFemalEvent_Event_0(class AActor* ItemDisconnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    void Reset();
    void BndEvt__BP_EnergyPlugVentillo_ActivationZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_EnergyPlugVentillo_ActivationZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LogicTrigger();
    void ShowDebug();
    void RotateVentillo();
    void Progressive Deceleration();
    void Precise Stop();
    void ExecuteUbergraph_BP_EnergyPlugVentillo(int32 EntryPoint);
}; // Size: 0x2C0

#endif
