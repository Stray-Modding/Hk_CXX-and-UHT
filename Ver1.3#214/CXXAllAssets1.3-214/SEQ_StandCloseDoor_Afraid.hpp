#ifndef UE4SS_SDK_SEQ_StandCloseDoor_Afraid_HPP
#define UE4SS_SDK_SEQ_StandCloseDoor_Afraid_HPP

class ASEQ_StandCloseDoor_Afraid_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TMap<class ABP_Droid_C*, class UAnimSequence*> BP_Droid;                          // 0x0270 (size: 0x50)
    bool SeqDone;                                                                     // 0x02C0 (size: 0x1)
    class ABP_Door_ElliotScratch_C* Door_Eliott;                                      // 0x02C8 (size: 0x8)
    class AActor* ViewTarget;                                                         // 0x02D0 (size: 0x8)

    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnStartSequence();
    void LogicTrigger();
    void SetSceneAfterAlarm();
    void ExecuteUbergraph_SEQ_StandCloseDoor_Afraid(int32 EntryPoint);
}; // Size: 0x2D8

#endif
