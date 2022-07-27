#ifndef UE4SS_SDK_BTT_SentinelAi_Waits_SearchingView_To_Chasing_HPP
#define UE4SS_SDK_BTT_SentinelAi_Waits_SearchingView_To_Chasing_HPP

class UBTT_SentinelAi_Waits_SearchingView_To_Chasing_C : public UBTT_SentinelAi_Waits_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_Waits_SearchingView_To_Chasing(int32 EntryPoint);
};

#endif
