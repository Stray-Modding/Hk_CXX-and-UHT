#ifndef UE4SS_SDK_BTT_ZurgSetState_HPP
#define UE4SS_SDK_BTT_ZurgSetState_HPP

class UBTT_ZurgSetState_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    EZurgState NewSwarmState;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ZurgSetState(int32 EntryPoint);
};

#endif
