#ifndef UE4SS_SDK_BP_Sentinel_AiController_HPP
#define UE4SS_SDK_BP_Sentinel_AiController_HPP

class ABP_Sentinel_AiController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    FTransform InitialTransform;                                                      // 0x0340 (size: 0x30)
    class ABP_SentinelAI_C* BP_SentinelAI;                                            // 0x0370 (size: 0x8)
    FName Blackboard_CurrentAiState_KeyName;                                          // 0x0378 (size: 0x8)
    FName Blackboard_CurrentMovementSpeed_KeyName;                                    // 0x0380 (size: 0x8)
    FName Blackboard_CurrentWaypoint_KeyName;                                         // 0x0388 (size: 0x8)
    FName Blackboard_TargetActor_KeyName;                                             // 0x0390 (size: 0x8)
    FName Blackboard_MoveToLocation_KeyName;                                          // 0x0398 (size: 0x8)
    FName Blackboard_LastHearedSound_KeyName;                                         // 0x03A0 (size: 0x8)
    FName Blackboard_HasDetectedSound_KeyName;                                        // 0x03A8 (size: 0x8)
    FName Blackboard_LastTargetLocation_KeyName;                                      // 0x03B0 (size: 0x8)
    FBP_Sentinel_AiController_COnSentinelDetectCat OnSentinelDetectCat;               // 0x03B8 (size: 0x10)
    void OnSentinelDetectCat(class ACatPawn* CatPawn, class ABP_SentinelAI_C* BP Sentinel);

    void UpdateSettings(TEnumAsByte<ENUM_SentinelAI_State> Target State);
    void GetZOffsetByState(float& World Z Offset);
    void SetAiState(TEnumAsByte<ENUM_SentinelAI_State> TargetState);
    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void OnSentinelSettingsChanged();
    void OnSentinelActivityChanged(bool status);
    void OnSentinelLockedTargetChanged_Event_0(class AActor* _targetActor);
    void ExecuteUbergraph_BP_Sentinel_AiController(int32 EntryPoint);
    void OnSentinelDetectCat__DelegateSignature(class ACatPawn* CatPawn, class ABP_SentinelAI_C* BP Sentinel);
}; // Size: 0x3C8

#endif
