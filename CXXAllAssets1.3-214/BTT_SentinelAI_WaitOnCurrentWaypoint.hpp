#ifndef UE4SS_SDK_BTT_SentinelAI_WaitOnCurrentWaypoint_HPP
#define UE4SS_SDK_BTT_SentinelAI_WaitOnCurrentWaypoint_HPP

class UBTT_SentinelAI_WaitOnCurrentWaypoint_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_SentinelAI_C* SentinelPawn;                                             // 0x00B0 (size: 0x8)
    class ABP_Sentinel_AiController_C* SentinelAIController;                          // 0x00B8 (size: 0x8)
    FBlackboardKeySelector CurrentWaypointKeySelector;                                // 0x00C0 (size: 0x28)
    class ABP_Sentinel_TargetPoint_C* CurrentWaypoint;                                // 0x00E8 (size: 0x8)
    int32 ScanCount;                                                                  // 0x00F0 (size: 0x4)
    float FirstRotationTime;                                                          // 0x00F4 (size: 0x4)
    FSmootherFloat RotationSmoother;                                                  // 0x00F8 (size: 0xC)
    float RotationSmootherValue;                                                      // 0x0104 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void StartScaning();
    void ResetDoOnce();
    void StopRotation();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAI_WaitOnCurrentWaypoint(int32 EntryPoint);
}; // Size: 0x108

#endif
