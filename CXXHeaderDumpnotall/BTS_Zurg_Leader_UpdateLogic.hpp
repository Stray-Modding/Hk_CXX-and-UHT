#ifndef UE4SS_SDK_BTS_Zurg_Leader_UpdateLogic_HPP
#define UE4SS_SDK_BTS_Zurg_Leader_UpdateLogic_HPP

class UBTS_Zurg_Leader_UpdateLogic_C : public UBTS_Zurg_Leader_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector CurrentState_KeySelector;
    EZurgState CurrentState;
    FBlackboardKeySelector SeenActor_KeySelector;
    FBlackboardKeySelector HearedActor_KeySelector;
    class AActor* SeenActor;
    class AActor* HearedActor;
    FBlackboardKeySelector SeenActorZurgDetector_KeySelector;
    class AActor* SeenActorZurgDetector;
    FBlackboardKeySelector MoveToLocation_KeySelector;
    FBlackboardKeySelector LastHearedLocation_KeySelector;
    FBlackboardKeySelector IsSeeingTarget_KeySelector;
    bool bIsSeeingTarget;
    FBlackboardKeySelector ProximitySensedActor_KeySelector;
    FBlackboardKeySelector ProximityZurgSensorActor_KeySelector;
    class AActor* LastProximitySensedActor;
    class AActor* LastProximityZurgSensorActor;
    TArray<class AZurgPawnSlave*> ZurgsCloseFromTarget;
    FBlackboardKeySelector CanAttackKeySelector;
    FBlackboardKeySelector bHasHearedSoundKeySelector;
    FBlackboardKeySelector LastSeenActorLocation_KeySelector;
    FBlackboardKeySelector CustomDelay_KeySelector;
    EZurgState TargetState;
    EZurgState PreviousState;
    FBlackboardKeySelector IsSlaveUnderLight_KeySelector;
    bool bIsSlaveUnderLight;
    FBlackboardKeySelector CurrentEnlightingLight_KeySelector;
    FVector LockOnTargetMoveToLocation;
    FVector HearedLocation;

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
};

#endif
