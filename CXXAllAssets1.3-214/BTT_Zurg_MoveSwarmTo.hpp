#ifndef UE4SS_SDK_BTT_Zurg_MoveSwarmTo_HPP
#define UE4SS_SDK_BTT_Zurg_MoveSwarmTo_HPP

class UBTT_Zurg_MoveSwarmTo_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector MoveToLocation_KeySelector;                                // 0x00C8 (size: 0x28)
    float AcceptanceRadius;                                                           // 0x00F0 (size: 0x4)
    bool WaitReachGoal;                                                               // 0x00F4 (size: 0x1)
    bool DisplayDebug;                                                                // 0x00F5 (size: 0x1)
    float WaitReachGoalMaximumDelay;                                                  // 0x00F8 (size: 0x4)
    FBlackboardKeySelector HasReachedMovetoGoal_KeySelector;                          // 0x0100 (size: 0x28)
    FVector ClosestPointToMoveToLocation;                                             // 0x0128 (size: 0xC)

    void GetClosestNavigableLocationToLocation(FVector Location, int32 Steps, FVector& Closest Location);
    void MoveSwarmToPoint(FVector _newLocation, bool& Success);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void Finish();
    void OnQueryFinishedEvent_Event_0(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void ExecuteUbergraph_BTT_Zurg_MoveSwarmTo(int32 EntryPoint);
}; // Size: 0x134

#endif
