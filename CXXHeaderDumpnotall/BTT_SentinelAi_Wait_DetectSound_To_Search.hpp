#ifndef UE4SS_SDK_BTT_SentinelAi_Wait_DetectSound_To_Search_HPP
#define UE4SS_SDK_BTT_SentinelAi_Wait_DetectSound_To_Search_HPP

class UBTT_SentinelAi_Wait_DetectSound_To_Search_C : public UBTT_SentinelAi_Waits_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_Wait_DetectSound_To_Search(int32 EntryPoint);
};

#endif
