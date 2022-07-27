#ifndef UE4SS_SDK_BTS_Sentinel_Vision_HPP
#define UE4SS_SDK_BTS_Sentinel_Vision_HPP

class UBTS_Sentinel_Vision_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* BP_Sentinel;
    class ABP_Sentinel_AiController_C* BP_Sentinel_AiController;
    TArray<class AActor*> ActorInVisionRange;
    FBlackboardKeySelector TargetActorKeySelector;
    FBlackboardKeySelector TargetIsCurrentlyVisibleKeySelector;
    FBlackboardKeySelector LastTargetLocationKeySelector;
    FBlackboardKeySelector LastTargetVelocityKeySelector;
    FBlackboardKeySelector CurrentStateKeySelector;
    class AActor* TempTargetActor;
    FBlackboardKeySelector WasChasingKeySelector;
    FTimerHandle LostVisionTimerHandle;
    FBlackboardKeySelector LastVisibleTargetLocation;

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void Timer_SetTargetNull_Event();
    void OnLostVisionTimerEvent();
    void ExecuteUbergraph_BTS_Sentinel_Vision(int32 EntryPoint);
};

#endif
