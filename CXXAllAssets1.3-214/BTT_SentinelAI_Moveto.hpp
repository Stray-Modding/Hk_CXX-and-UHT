#ifndef UE4SS_SDK_BTT_SentinelAI_Moveto_HPP
#define UE4SS_SDK_BTT_SentinelAI_Moveto_HPP

class UBTT_SentinelAI_MoveTo_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_SentinelAI_C* BP_SentinelPawn;                                          // 0x00B0 (size: 0x8)
    class ABP_Sentinel_AiController_C* BP_SentinelAIC;                                // 0x00B8 (size: 0x8)
    bool RotateToVelocity;                                                            // 0x00C0 (size: 0x1)
    FBlackboardKeySelector MoveToLocationKeySelector;                                 // 0x00C8 (size: 0x28)
    float SentinelVelocityStuckErrorTolerance;                                        // 0x00F0 (size: 0x4)
    bool DrawDebug;                                                                   // 0x00F4 (size: 0x1)
    bool bRunMoveToVisiblePoint_EQS;                                                  // 0x00F5 (size: 0x1)
    float EQS_Interval;                                                               // 0x00F8 (size: 0x4)
    FVector MoveToEqsLocation;                                                        // 0x00FC (size: 0xC)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void Event_SentinelIsStuck();
    void OnQueryFinishedEvent_Event_0(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void RunEQS();
    void ExecuteUbergraph_BTT_SentinelAI_MoveTo(int32 EntryPoint);
}; // Size: 0x108

#endif
