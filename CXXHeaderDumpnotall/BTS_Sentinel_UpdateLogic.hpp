#ifndef UE4SS_SDK_BTS_Sentinel_UpdateLogic_HPP
#define UE4SS_SDK_BTS_Sentinel_UpdateLogic_HPP

class UBTS_Sentinel_UpdateLogic_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* BP_SentinelPawn;
    class ABP_Sentinel_AiController_C* BP_SentinelAiController;
    class UABP_Sentinel_C* BP_SentinelAnimInstance;
    FBlackboardKeySelector TargetActorKeySelector;
    FBlackboardKeySelector HasDetectedSoundKeySelector;
    FBlackboardKeySelector CurrentStateKeySelector;
    bool bTargetIsVisible;
    bool bSoundHeared;
    TEnumAsByte<ENUM_SentinelAI_State> CurrentAiState;
    FBlackboardKeySelector CurrentMovementSpeedKeySelector;
    FBlackboardKeySelector MoveToTargetLocationKeySelector;
    FBlackboardKeySelector LastSoundDetectedLocation;
    FBlackboardKeySelector TargetAiStateKeySelector;
    FBlackboardKeySelector TargetDirectionKeySelector;
    FBlackboardKeySelector CurrentWaypointKeySelector;
    FBlackboardKeySelector IsReturnningToPatrolKeySelector;
    FBlackboardKeySelector WasChasingKeySelector;
    FBlackboardKeySelector TargetIsCurrentlyVisibleKeySelector;
    FBlackboardKeySelector LastVisibleTargetLocationKeySelector;
    FBlackboardKeySelector MoveToEqsLocationKeySelector;

    void SetAiState(TEnumAsByte<ENUM_SentinelAI_State> TargetState);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ClearSound();
    void TickPatrol();
    void TickChasing();
    void TickSearchViewing();
    void TickSearching();
    void TickDetect();
    void TickDetectVision();
    void TickDetectSound();
    void TickInactive();
    void TickLockedOnTarget();
    void ExecuteUbergraph_BTS_Sentinel_UpdateLogic(int32 EntryPoint);
};

#endif
