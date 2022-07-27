#ifndef UE4SS_SDK_BP_SequenceBase_HPP
#define UE4SS_SDK_BP_SequenceBase_HPP

class ABP_SequenceBase_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SequenceBase(int32 EntryPoint);
}; // Size: 0x270

#endif
