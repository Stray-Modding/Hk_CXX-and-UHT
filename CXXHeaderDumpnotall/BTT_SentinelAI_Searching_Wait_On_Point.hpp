#ifndef UE4SS_SDK_BTT_SentinelAI_Searching_Wait_On_Point_HPP
#define UE4SS_SDK_BTT_SentinelAI_Searching_Wait_On_Point_HPP

class UBTT_SentinelAI_Searching_Wait_On_Point_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* SentinelPawn;
    class ABP_Sentinel_AiController_C* SentinelAIController;
    FVector StartDirection;
    int32 CurrentScanCount;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ResetTask();
    void StartScaning();
    void ExecuteUbergraph_BTT_SentinelAI_Searching_Wait_On_Point(int32 EntryPoint);
};

#endif
