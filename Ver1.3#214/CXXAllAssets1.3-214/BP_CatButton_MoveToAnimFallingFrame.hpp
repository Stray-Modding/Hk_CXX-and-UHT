#ifndef UE4SS_SDK_BP_CatButton_MoveToAnimFallingFrame_HPP
#define UE4SS_SDK_BP_CatButton_MoveToAnimFallingFrame_HPP

class ABP_CatButton_MoveToAnimFallingFrame_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class UArrowComponent* StepBackDir;                                               // 0x0240 (size: 0x8)
    class USceneComponent* FrameRoot;                                                 // 0x0248 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0250 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0258 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0260 (size: 0x8)
    class UArrowComponent* CatPos;                                                    // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    float StepBack_Alpha_65C7C3674FD062E62DB41BAF2E293138;                            // 0x0278 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StepBack__Direction_65C7C3674FD062E62DB41BAF2E293138; // 0x027C (size: 0x1)
    class UTimelineComponent* StepBack;                                               // 0x0280 (size: 0x8)
    float StepBackDistance;                                                           // 0x0288 (size: 0x4)
    TArray<class AActor*> ActorsToTriggerOnFall;                                      // 0x0290 (size: 0x10)
    bool fallen;                                                                      // 0x02A0 (size: 0x1)
    FBP_CatButton_MoveToAnimFallingFrame_COnFall OnFall;                              // 0x02A8 (size: 0x10)
    void OnFall();
    class UAnimSequence* RepelAnim;                                                   // 0x02B8 (size: 0x8)
    FBP_CatButton_MoveToAnimFallingFrame_CAfterUseDone AfterUseDone;                  // 0x02C0 (size: 0x10)
    void AfterUseDone();
    class USoundWave* RepelVibe;                                                      // 0x02D0 (size: 0x8)

    void StepBack__FinishedFunc();
    void StepBack__UpdateFunc();
    void Complete_578069E64FB8DCA8E1905FB733AFF241();
    void Tick_578069E64FB8DCA8E1905FB733AFF241(float Ratio);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void WigglingFrame();
    void BndEvt__BP_CatButton_MoveToAnimFallingFrame_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_0_AnimationStarted__DelegateSignature();
    void Falling();
    void MuteCatRepell();
    void ExecuteUbergraph_BP_CatButton_MoveToAnimFallingFrame(int32 EntryPoint);
    void AfterUseDone__DelegateSignature();
    void OnFall__DelegateSignature();
}; // Size: 0x2D8

#endif
