#ifndef UE4SS_SDK_BP_CatButton_SurpriseBucketThrower_HPP
#define UE4SS_SDK_BP_CatButton_SurpriseBucketThrower_HPP

class ABP_CatButton_SurpriseBucketThrower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UArrowComponent* Spot;                                                      // 0x0238 (size: 0x8)
    class UCOMP_CatMoveToLoopAnim_C* COMP_CatMoveToLoopAnim;                          // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class AActor* Camera;                                                             // 0x0250 (size: 0x8)
    class ASeq_BucketThrower_C* Seq_BucketThrower;                                    // 0x0258 (size: 0x8)
    class UUserWidget* HUDWidget;                                                     // 0x0260 (size: 0x8)
    bool IsCatInPlace;                                                                // 0x0268 (size: 0x1)
    bool Timing_Meow;                                                                 // 0x0269 (size: 0x1)
    float In Opacity;                                                                 // 0x026C (size: 0x4)

    void OnNoised_Event_0(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void BndEvt__BP_CatButton_SurpriseBucketThrower_Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_CatButton_SurpriseBucketThrower_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_4_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_SurpriseBucketThrower_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_5_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_SurpriseBucketThrower_Seq_BucketThrower_K2Node_ComponentBoundEvent_2_Start_Timing_Meow__DelegateSignature();
    void BndEvt__BP_CatButton_SurpriseBucketThrower_Seq_BucketThrower_K2Node_ComponentBoundEvent_6_End_Timing_Meow__DelegateSignature();
    void BndEvt__BP_CatButton_SurpriseBucketThrower_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_7_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_SurpriseBucketThrower_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_0_OnLoopStart__DelegateSignature();
    void UpdateWidgetOpacity();
    void ExecuteUbergraph_BP_CatButton_SurpriseBucketThrower(int32 EntryPoint);
}; // Size: 0x270

#endif
