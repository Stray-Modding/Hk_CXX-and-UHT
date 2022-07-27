#ifndef UE4SS_SDK_SEQ_RunInjuredToBar_Afraid_HPP
#define UE4SS_SDK_SEQ_RunInjuredToBar_Afraid_HPP

class ASEQ_RunInjuredToBar_Afraid_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TMap<class ABP_Droid_C*, class UAnimSequence*> BP_Droid;                          // 0x0270 (size: 0x50)
    TMap<class ASkeletalMeshActor*, class UAnimSequence*> SkeletalMeshProps;          // 0x02C0 (size: 0x50)
    bool SeqDone;                                                                     // 0x0310 (size: 0x1)
    class AActor* RealDoor;                                                           // 0x0318 (size: 0x8)
    class AActor* DoorCol;                                                            // 0x0320 (size: 0x8)
    class AActor* ViewTarget;                                                         // 0x0328 (size: 0x8)

    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetSceneAfterAlarm();
    void OnStartSequence();
    void LogicTrigger();
    void ExecuteUbergraph_SEQ_RunInjuredToBar_Afraid(int32 EntryPoint);
}; // Size: 0x330

#endif
