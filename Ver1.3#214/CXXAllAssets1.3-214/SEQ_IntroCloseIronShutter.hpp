#ifndef UE4SS_SDK_SEQ_IntroCloseIronShutter_HPP
#define UE4SS_SDK_SEQ_IntroCloseIronShutter_HPP

class ASEQ_IntroCloseIronShutter_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TMap<class ABP_Droid_C*, class UAnimSequence*> BP_Droid;                          // 0x0270 (size: 0x50)
    TMap<class ASkeletalMeshActor*, class UAnimSequence*> SkeletalMeshProps;          // 0x02C0 (size: 0x50)
    bool ScenePlayed;                                                                 // 0x0310 (size: 0x1)
    bool SceneAfterAlarm;                                                             // 0x0311 (size: 0x1)
    class AActor* ViewTarget;                                                         // 0x0318 (size: 0x8)
    class AActor* Collision;                                                          // 0x0320 (size: 0x8)

    void LogicTrigger();
    void OnStartSequence();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetSceneToPlayed();
    void SetSceneToAfterAlarm();
    void PlayScene();
    void ExecuteUbergraph_SEQ_IntroCloseIronShutter(int32 EntryPoint);
}; // Size: 0x328

#endif
