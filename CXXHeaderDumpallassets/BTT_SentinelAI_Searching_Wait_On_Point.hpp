#ifndef UE4SS_SDK_BTT_SentinelAI_Searching_Wait_On_Point_HPP
#define UE4SS_SDK_BTT_SentinelAI_Searching_Wait_On_Point_HPP

class UBTT_SentinelAI_Searching_Wait_On_Point_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_SentinelAI_C* SentinelPawn;                                             // 0x00B0 (size: 0x8)
    class ABP_Sentinel_AiController_C* SentinelAIController;                          // 0x00B8 (size: 0x8)
    FVector StartDirection;                                                           // 0x00C0 (size: 0xC)
    int32 CurrentScanCount;                                                           // 0x00CC (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ResetTask();
    void StartScaning();
    void ExecuteUbergraph_BTT_SentinelAI_Searching_Wait_On_Point(int32 EntryPoint);
}; // Size: 0xD0

#endif
