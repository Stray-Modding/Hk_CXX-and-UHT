#ifndef UE4SS_SDK_BTT_SentinelAI_Moveto_HPP
#define UE4SS_SDK_BTT_SentinelAI_Moveto_HPP

class UBTT_SentinelAI_MoveTo_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* BP_SentinelPawn;
    class ABP_Sentinel_AiController_C* BP_SentinelAIC;
    bool RotateToVelocity;
    FBlackboardKeySelector MoveToLocationKeySelector;
    float SentinelVelocityStuckErrorTolerance;
    bool DrawDebug;
    bool bRunMoveToVisiblePoint_EQS;
    float EQS_Interval;
    FVector MoveToEqsLocation;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void Event_SentinelIsStuck();
    void OnQueryFinishedEvent_Event_0(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void RunEQS();
    void ExecuteUbergraph_BTT_SentinelAI_MoveTo(int32 EntryPoint);
};

#endif
