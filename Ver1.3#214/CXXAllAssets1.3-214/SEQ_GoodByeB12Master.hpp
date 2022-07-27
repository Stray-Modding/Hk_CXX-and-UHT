#ifndef UE4SS_SDK_SEQ_GoodByeB12Master_HPP
#define UE4SS_SDK_SEQ_GoodByeB12Master_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void PauseSequencer();
    void SequenceEvent_0();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
