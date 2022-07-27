#ifndef UE4SS_SDK_BTT_SentinelAI_SelectNextWaypoint_HPP
#define UE4SS_SDK_BTT_SentinelAI_SelectNextWaypoint_HPP

class UBTT_SentinelAI_SelectNextWaypoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_SentinelAI_C* BP_SentinelPawn;                                          // 0x00B0 (size: 0x8)
    class ABP_Sentinel_TargetPoint_C* CurrentWaypoint;                                // 0x00B8 (size: 0x8)
    FBlackboardKeySelector CurrentWaypointKeySelector;                                // 0x00C0 (size: 0x28)
    FBlackboardKeySelector MoveToLocationKeySelector;                                 // 0x00E8 (size: 0x28)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAI_SelectNextWaypoint(int32 EntryPoint);
}; // Size: 0x110

#endif
