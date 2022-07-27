#ifndef UE4SS_SDK_SEQ_IntroBroomDroid_HPP
#define UE4SS_SDK_SEQ_IntroBroomDroid_HPP

class ASEQ_IntroBroomDroid_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TMap<class ABP_Droid_C*, class UAnimSequence*> BP_Droid;                          // 0x0270 (size: 0x50)
    TMap<class ASkeletalMeshActor*, class UAnimSequence*> SkeletalMeshProps;          // 0x02C0 (size: 0x50)
    class AActor* Broom;                                                              // 0x0310 (size: 0x8)
    bool SeqDone;                                                                     // 0x0318 (size: 0x1)
    class ASeq_Slum_intro_Alarm_C* SeqIntroAlarm;                                     // 0x0320 (size: 0x8)

    void LogicTrigger();
    void BndEvt__m_saveComponent_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void SetSceneAfterAlarm();
    void ExecuteUbergraph_SEQ_IntroBroomDroid(int32 EntryPoint);
}; // Size: 0x328

#endif
