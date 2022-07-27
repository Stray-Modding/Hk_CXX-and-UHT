#ifndef UE4SS_SDK_BTS_Zurg_Leader_UpdateLogic_HPP
#define UE4SS_SDK_BTS_Zurg_Leader_UpdateLogic_HPP

class UBTS_Zurg_Leader_UpdateLogic_C : public UBTS_Zurg_Leader_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FBlackboardKeySelector CurrentState_KeySelector;                                  // 0x00B8 (size: 0x28)
    EZurgState CurrentState;                                                          // 0x00E0 (size: 0x1)
    FBlackboardKeySelector SeenActor_KeySelector;                                     // 0x00E8 (size: 0x28)
    FBlackboardKeySelector HearedActor_KeySelector;                                   // 0x0110 (size: 0x28)
    class AActor* SeenActor;                                                          // 0x0138 (size: 0x8)
    class AActor* HearedActor;                                                        // 0x0140 (size: 0x8)
    FBlackboardKeySelector SeenActorZurgDetector_KeySelector;                         // 0x0148 (size: 0x28)
    class AActor* SeenActorZurgDetector;                                              // 0x0170 (size: 0x8)
    FBlackboardKeySelector MoveToLocation_KeySelector;                                // 0x0178 (size: 0x28)
    FBlackboardKeySelector LastHearedLocation_KeySelector;                            // 0x01A0 (size: 0x28)
    FBlackboardKeySelector IsSeeingTarget_KeySelector;                                // 0x01C8 (size: 0x28)
    bool bIsSeeingTarget;                                                             // 0x01F0 (size: 0x1)
    FBlackboardKeySelector ProximitySensedActor_KeySelector;                          // 0x01F8 (size: 0x28)
    FBlackboardKeySelector ProximityZurgSensorActor_KeySelector;                      // 0x0220 (size: 0x28)
    class AActor* LastProximitySensedActor;                                           // 0x0248 (size: 0x8)
    class AActor* LastProximityZurgSensorActor;                                       // 0x0250 (size: 0x8)
    TArray<class AZurgPawnSlave*> ZurgsCloseFromTarget;                               // 0x0258 (size: 0x10)
    FBlackboardKeySelector CanAttackKeySelector;                                      // 0x0268 (size: 0x28)
    FBlackboardKeySelector bHasHearedSoundKeySelector;                                // 0x0290 (size: 0x28)
    FBlackboardKeySelector LastSeenActorLocation_KeySelector;                         // 0x02B8 (size: 0x28)
    FBlackboardKeySelector CustomDelay_KeySelector;                                   // 0x02E0 (size: 0x28)
    EZurgState TargetState;                                                           // 0x0308 (size: 0x1)
    EZurgState PreviousState;                                                         // 0x0309 (size: 0x1)
    FBlackboardKeySelector IsSlaveUnderLight_KeySelector;                             // 0x0310 (size: 0x28)
    bool bIsSlaveUnderLight;                                                          // 0x0338 (size: 0x1)
    FBlackboardKeySelector CurrentEnlightingLight_KeySelector;                        // 0x0340 (size: 0x28)
    FVector LockOnTargetMoveToLocation;                                               // 0x0368 (size: 0xC)
    FVector HearedLocation;                                                           // 0x0374 (size: 0xC)

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void TickRoutine();
    void TickChasing();
    void TickIdle();
    void TickSleeping();
    void TickAngry();
    void TickAlerted();
    void TickLockedOnTarget();
    void Alerted_Enter();
    void Alerted_Exit();
    void Angry_Enter();
    void Angry_Exit();
    void OnAngryToRoutineTimer();
    void ExecuteUbergraph_BTS_Zurg_Leader_UpdateLogic(int32 EntryPoint);
}; // Size: 0x380

#endif
