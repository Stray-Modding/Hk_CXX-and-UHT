#ifndef UE4SS_SDK_BTT_SentinelAI_WaitOnCurrentWaypoint_HPP
#define UE4SS_SDK_BTT_SentinelAI_WaitOnCurrentWaypoint_HPP

class UBTT_SentinelAI_WaitOnCurrentWaypoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* SentinelPawn;
    class ABP_Sentinel_AiController_C* SentinelAIController;
    FBlackboardKeySelector CurrentWaypointKeySelector;
    class ABP_Sentinel_TargetPoint_C* CurrentWaypoint;
    int32 ScanCount;
    float FirstRotationTime;
    FSmootherFloat RotationSmoother;
    float RotationSmootherValue;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void StartScaning();
    void ResetDoOnce();
    void StopRotation();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAI_WaitOnCurrentWaypoint(int32 EntryPoint);
};

#endif
