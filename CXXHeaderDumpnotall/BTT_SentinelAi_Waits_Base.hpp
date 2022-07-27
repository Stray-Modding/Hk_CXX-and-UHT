#ifndef UE4SS_SDK_BTT_SentinelAi_Waits_Base_HPP
#define UE4SS_SDK_BTT_SentinelAi_Waits_Base_HPP

class UBTT_SentinelAi_Waits_Base_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* BP_SentinelAI;
    FTimerHandle WaitTimerHandle;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void Wait(float Duration);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnTimerReached();
    void ExecuteUbergraph_BTT_SentinelAi_Waits_Base(int32 EntryPoint);
};

#endif
