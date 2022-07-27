#ifndef UE4SS_SDK_BTT_Zurg_MoveSwarmTo_HPP
#define UE4SS_SDK_BTT_Zurg_MoveSwarmTo_HPP

class UBTT_Zurg_MoveSwarmTo_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector MoveToLocation_KeySelector;
    float AcceptanceRadius;
    bool WaitReachGoal;
    bool DisplayDebug;
    float WaitReachGoalMaximumDelay;
    FBlackboardKeySelector HasReachedMovetoGoal_KeySelector;
    FVector ClosestPointToMoveToLocation;

    void GetClosestNavigableLocationToLocation(FVector Location, int32 Steps, FVector& Closest Location);
    void MoveSwarmToPoint(FVector _newLocation, bool& Success);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void Finish();
    void OnQueryFinishedEvent_Event_0(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void ExecuteUbergraph_BTT_Zurg_MoveSwarmTo(int32 EntryPoint);
};

#endif
