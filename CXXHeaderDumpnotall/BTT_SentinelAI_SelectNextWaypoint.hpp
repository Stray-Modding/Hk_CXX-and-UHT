#ifndef UE4SS_SDK_BTT_SentinelAI_SelectNextWaypoint_HPP
#define UE4SS_SDK_BTT_SentinelAI_SelectNextWaypoint_HPP

class UBTT_SentinelAI_SelectNextWaypoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* BP_SentinelPawn;
    class ABP_Sentinel_TargetPoint_C* CurrentWaypoint;
    FBlackboardKeySelector CurrentWaypointKeySelector;
    FBlackboardKeySelector MoveToLocationKeySelector;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAI_SelectNextWaypoint(int32 EntryPoint);
};

#endif
