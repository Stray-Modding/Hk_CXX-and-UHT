#ifndef UE4SS_SDK_BTT_ZurgStopSwarm_HPP
#define UE4SS_SDK_BTT_ZurgStopSwarm_HPP

class UBTT_ZurgStopSwarm_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ZurgStopSwarm(int32 EntryPoint);
};

#endif
