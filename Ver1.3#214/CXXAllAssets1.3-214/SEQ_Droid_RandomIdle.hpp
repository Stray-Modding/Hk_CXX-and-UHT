#ifndef UE4SS_SDK_SEQ_Droid_RandomIdle_HPP
#define UE4SS_SDK_SEQ_Droid_RandomIdle_HPP

class ASEQ_Droid_RandomIdle_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0270 (size: 0x8)
    TArray<class UAnimSequence*> Idles;                                               // 0x0278 (size: 0x10)
    class UAnimSequence* SelectedIdle;                                                // 0x0288 (size: 0x8)

    void ReceiveBeginPlay();
    void OnIdlePlayEnd();
    void ExecuteUbergraph_SEQ_Droid_RandomIdle(int32 EntryPoint);
}; // Size: 0x290

#endif
