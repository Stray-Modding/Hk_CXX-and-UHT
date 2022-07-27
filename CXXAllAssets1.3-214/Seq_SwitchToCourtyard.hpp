#ifndef UE4SS_SDK_Seq_SwitchToCourtyard_HPP
#define UE4SS_SDK_Seq_SwitchToCourtyard_HPP

class ASeq_SwitchToCourtyard_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_Seq_SwitchToCourtyard(int32 EntryPoint);
}; // Size: 0x278

#endif
