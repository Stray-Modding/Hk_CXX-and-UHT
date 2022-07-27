#ifndef UE4SS_SDK_BP_Sentinel_AiController_HPP
#define UE4SS_SDK_BP_Sentinel_AiController_HPP

class ABP_Sentinel_AiController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTransform InitialTransform;
    class ABP_SentinelAI_C* BP_SentinelAI;
    FName Blackboard_CurrentAiState_KeyName;
    FName Blackboard_CurrentMovementSpeed_KeyName;
    FName Blackboard_CurrentWaypoint_KeyName;
    FName Blackboard_TargetActor_KeyName;
    FName Blackboard_MoveToLocation_KeyName;
    FName Blackboard_LastHearedSound_KeyName;
    FName Blackboard_HasDetectedSound_KeyName;
    FName Blackboard_LastTargetLocation_KeyName;
    FBP_Sentinel_AiController_COnSentinelDetectCat OnSentinelDetectCat;
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
};

#endif
