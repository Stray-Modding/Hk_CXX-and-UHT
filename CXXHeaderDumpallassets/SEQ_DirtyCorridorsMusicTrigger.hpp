#ifndef UE4SS_SDK_SEQ_DirtyCorridorsMusicTrigger_HPP
#define UE4SS_SDK_SEQ_DirtyCorridorsMusicTrigger_HPP

class ASEQ_DirtyCorridorsMusicTrigger_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_DirtyCorridorsMusicTrigger(int32 EntryPoint);
}; // Size: 0x270

#endif
