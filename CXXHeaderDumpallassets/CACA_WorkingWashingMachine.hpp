#ifndef UE4SS_SDK_CACA_WorkingWashingMachine_HPP
#define UE4SS_SDK_CACA_WorkingWashingMachine_HPP

class ACACA_WorkingWashingMachine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0238 (size: 0x8)
    class UCOMP_UsableDroneTimer_C* UsableTimerComponent;                             // 0x0240 (size: 0x8)
    class USceneComponent* DroneAnchor;                                               // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Washing_Machine;                                      // 0x0258 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0260 (size: 0x8)
    float Timeline_0_PlayRate_CDE8C5CC4454DC32D2A591A5BBAB8488;                       // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CDE8C5CC4454DC32D2A591A5BBAB8488; // 0x026C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0270 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x0278 (size: 0x8)
    bool IsDestroyed;                                                                 // 0x0280 (size: 0x1)
    bool Washing;                                                                     // 0x0281 (size: 0x1)
    FRotator InitialRotation;                                                         // 0x0284 (size: 0xC)
    class ABP_sfx_Play_Loop_Sequence_C* sfxLoop01;                                    // 0x0290 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__UsableTimerComponent_K2Node_ComponentBoundEvent_1_UseSuccessDelegate__DelegateSignature();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CACA_WorkingWashingMachine(int32 EntryPoint);
}; // Size: 0x298

#endif
