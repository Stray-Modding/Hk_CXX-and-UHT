#ifndef UE4SS_SDK_Seq_musicEnd_HPP
#define UE4SS_SDK_Seq_musicEnd_HPP

class ASeq_musicEnd_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_Seq_musicEnd(int32 EntryPoint);
}; // Size: 0x270

#endif
