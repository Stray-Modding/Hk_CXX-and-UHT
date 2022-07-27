#ifndef UE4SS_SDK_RobertoAndMomoBarSequence_HPP
#define UE4SS_SDK_RobertoAndMomoBarSequence_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_6();
    void SequenceEvent__ENTRYPOINTSequenceDirector_5();
    void SequenceEvent__ENTRYPOINTSequenceDirector_4();
    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Pause Sequencer();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
