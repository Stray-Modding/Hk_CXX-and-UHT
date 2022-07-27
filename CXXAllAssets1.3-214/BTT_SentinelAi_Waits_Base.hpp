#ifndef UE4SS_SDK_BTT_SentinelAi_Waits_Base_HPP
#define UE4SS_SDK_BTT_SentinelAi_Waits_Base_HPP

class UBTT_SentinelAi_Waits_Base_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_SentinelAI_C* BP_SentinelAI;                                            // 0x00B0 (size: 0x8)
    FTimerHandle WaitTimerHandle;                                                     // 0x00B8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void Wait(float Duration);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnTimerReached();
    void ExecuteUbergraph_BTT_SentinelAi_Waits_Base(int32 EntryPoint);
}; // Size: 0xC0

#endif
