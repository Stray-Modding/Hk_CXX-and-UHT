#ifndef UE4SS_SDK_BP_CatButton_MoveToAnimFallingFrame_HPP
#define UE4SS_SDK_BP_CatButton_MoveToAnimFallingFrame_HPP

class ABP_CatButton_MoveToAnimFallingFrame_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Frame;
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;
    class UArrowComponent* StepBackDir;
    class USceneComponent* FrameRoot;
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;
    class USaveComponent* Save;
    class UStreamingComponent* Streaming;
    class UArrowComponent* CatPos;
    class USceneComponent* DefaultSceneRoot;
    float StepBack_Alpha_65C7C3674FD062E62DB41BAF2E293138;
    TEnumAsByte<ETimelineDirection::Type> StepBack__Direction_65C7C3674FD062E62DB41BAF2E293138;
    class UTimelineComponent* StepBack;
    float StepBackDistance;
    TArray<class AActor*> ActorsToTriggerOnFall;
    bool fallen;
    FBP_CatButton_MoveToAnimFallingFrame_COnFall OnFall;
    void OnFall();
    class UAnimSequence* RepelAnim;
    FBP_CatButton_MoveToAnimFallingFrame_CAfterUseDone AfterUseDone;
    void AfterUseDone();
    class USoundWave* RepelVibe;

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
};

#endif
