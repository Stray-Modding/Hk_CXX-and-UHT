#ifndef UE4SS_SDK_SEQ_MomoBarIntro_HPP
#define UE4SS_SDK_SEQ_MomoBarIntro_HPP

class ASEQ_MomoBarIntro_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0270 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_MomoBarIntro(int32 EntryPoint);
}; // Size: 0x278

#endif
