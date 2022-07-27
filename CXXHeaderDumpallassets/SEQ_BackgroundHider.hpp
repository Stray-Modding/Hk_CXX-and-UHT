#ifndef UE4SS_SDK_SEQ_BackgroundHider_HPP
#define UE4SS_SDK_SEQ_BackgroundHider_HPP

class ASEQ_BackgroundHider_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class AActor*> ActorsToHide;                                               // 0x0270 (size: 0x10)
    bool ActorsHidden;                                                                // 0x0280 (size: 0x1)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void HideOverlappingBackgroundInDeadEnd();
    void UnhideOverlappingBackgroundInDeadEnd();
    void BndEvt__SEQ_BackgroundHider_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_BackgroundHider(int32 EntryPoint);
}; // Size: 0x281

#endif
