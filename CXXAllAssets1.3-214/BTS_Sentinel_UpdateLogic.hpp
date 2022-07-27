#ifndef UE4SS_SDK_BTS_Sentinel_UpdateLogic_HPP
#define UE4SS_SDK_BTS_Sentinel_UpdateLogic_HPP

class UBTS_Sentinel_UpdateLogic_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    class ABP_SentinelAI_C* BP_SentinelPawn;                                          // 0x00A0 (size: 0x8)
    class ABP_Sentinel_AiController_C* BP_SentinelAiController;                       // 0x00A8 (size: 0x8)
    class UABP_Sentinel_C* BP_SentinelAnimInstance;                                   // 0x00B0 (size: 0x8)
    FBlackboardKeySelector TargetActorKeySelector;                                    // 0x00B8 (size: 0x28)
    FBlackboardKeySelector HasDetectedSoundKeySelector;                               // 0x00E0 (size: 0x28)
    FBlackboardKeySelector CurrentStateKeySelector;                                   // 0x0108 (size: 0x28)
    bool bTargetIsVisible;                                                            // 0x0130 (size: 0x1)
    bool bSoundHeared;                                                                // 0x0131 (size: 0x1)
    TEnumAsByte<ENUM_SentinelAI_State> CurrentAiState;                                // 0x0132 (size: 0x1)
    FBlackboardKeySelector CurrentMovementSpeedKeySelector;                           // 0x0138 (size: 0x28)
    FBlackboardKeySelector MoveToTargetLocationKeySelector;                           // 0x0160 (size: 0x28)
    FBlackboardKeySelector LastSoundDetectedLocation;                                 // 0x0188 (size: 0x28)
    FBlackboardKeySelector TargetAiStateKeySelector;                                  // 0x01B0 (size: 0x28)
    FBlackboardKeySelector TargetDirectionKeySelector;                                // 0x01D8 (size: 0x28)
    FBlackboardKeySelector CurrentWaypointKeySelector;                                // 0x0200 (size: 0x28)
    FBlackboardKeySelector IsReturnningToPatrolKeySelector;                           // 0x0228 (size: 0x28)
    FBlackboardKeySelector WasChasingKeySelector;                                     // 0x0250 (size: 0x28)
    FBlackboardKeySelector TargetIsCurrentlyVisibleKeySelector;                       // 0x0278 (size: 0x28)
    FBlackboardKeySelector LastVisibleTargetLocationKeySelector;                      // 0x02A0 (size: 0x28)
    FBlackboardKeySelector MoveToEqsLocationKeySelector;                              // 0x02C8 (size: 0x28)

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
}; // Size: 0x2F0

#endif
