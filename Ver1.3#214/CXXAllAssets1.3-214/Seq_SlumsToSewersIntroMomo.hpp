#ifndef UE4SS_SDK_Seq_SlumsToSewersIntroMomo_HPP
#define UE4SS_SDK_Seq_SlumsToSewersIntroMomo_HPP

class ASeq_SlumsToSewersIntroMomo_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0270 (size: 0x8)
    class ABP_SewerBark_C* sewerbark;                                                 // 0x0278 (size: 0x8)
    bool 1stTriggerCrossed;                                                           // 0x0280 (size: 0x1)

    void LogicTrigger();
    void ExecuteUbergraph_Seq_SlumsToSewersIntroMomo(int32 EntryPoint);
}; // Size: 0x281

#endif
