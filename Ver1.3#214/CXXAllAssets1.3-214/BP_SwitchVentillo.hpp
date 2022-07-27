#ifndef UE4SS_SDK_BP_SwitchVentillo_HPP
#define UE4SS_SDK_BP_SwitchVentillo_HPP

class ABP_SwitchVentillo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Blockable_Fan_Blade;                                  // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class UBoxComponent* VentCollider;                                                // 0x0248 (size: 0x8)
    class UStaticMeshComponent* CableStartIndicator;                                  // 0x0250 (size: 0x8)
    class USceneComponent* Vent_Pivot;                                                // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    float Timeline_0_Rotation_X_07597822497BE0CC00BD75AFBF661E72;                     // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_07597822497BE0CC00BD75AFBF661E72; // 0x026C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0270 (size: 0x8)
    float Speed;                                                                      // 0x0278 (size: 0x4)
    bool WaitingForGoodRotationToStop;                                                // 0x027C (size: 0x1)
    float DecelerationDuration;                                                       // 0x0280 (size: 0x4)
    float AccelerationDuration;                                                       // 0x0284 (size: 0x4)
    class UAudioComponent* StopSound;                                                 // 0x0288 (size: 0x8)
    bool IsStartingOrStopping;                                                        // 0x0290 (size: 0x1)
    bool HasStarted;                                                                  // 0x0291 (size: 0x1)
    bool isPlugged;                                                                   // 0x0292 (size: 0x1)
    class AActor* Actor to Trigger when Stop;                                         // 0x0298 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__25%__EventFunc();
    void Complete_6246EF4646E19036986D72BADC1F8960();
    void Tick_6246EF4646E19036986D72BADC1F8960(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void StartVent();
    void StopVent();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void StopTimeline();
    void LogicTrigger();
    void ExecuteUbergraph_BP_SwitchVentillo(int32 EntryPoint);
}; // Size: 0x2A0

#endif
