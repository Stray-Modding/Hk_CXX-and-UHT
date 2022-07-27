#ifndef UE4SS_SDK_BTT_ZurgSetState_HPP
#define UE4SS_SDK_BTT_ZurgSetState_HPP

class UBTT_ZurgSetState_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    EZurgState NewSwarmState;                                                         // 0x00C8 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ZurgSetState(int32 EntryPoint);
}; // Size: 0xC9

#endif
