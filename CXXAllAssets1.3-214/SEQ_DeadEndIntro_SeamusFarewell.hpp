#ifndef UE4SS_SDK_SEQ_DeadEndIntro_SeamusFarewell_HPP
#define UE4SS_SDK_SEQ_DeadEndIntro_SeamusFarewell_HPP

class ASEQ_DeadEndIntro_SeamusFarewell_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Start;                                                                       // 0x0270 (size: 0x1)
    class ABP_Droid_C* Roberto;                                                       // 0x0278 (size: 0x8)
    class AActor* DeactivationZone;                                                   // 0x0280 (size: 0x8)
    bool Deactivate;                                                                  // 0x0288 (size: 0x1)

    void LogicTrigger();
    void OnStartSequence();
    void BndEvt__SEQ_DeadEndIntro_SeamusFarewell_DeactivationZone_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_DeadEndIntro_SeamusFarewell_m_streamingComponent_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_DeadEndIntro_SeamusFarewell(int32 EntryPoint);
}; // Size: 0x289

#endif
