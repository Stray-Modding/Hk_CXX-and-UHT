#ifndef UE4SS_SDK_BP_CatButton_MoveToAnim_HPP
#define UE4SS_SDK_BP_CatButton_MoveToAnim_HPP

class ABP_CatButton_MoveToAnim_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UAudioComponent* VibrationLick;                                             // 0x02A0 (size: 0x8)
    class UAudioComponent* VibrationFrottable;                                        // 0x02A8 (size: 0x8)
    class UBoxComponent* CancelZone;                                                  // 0x02B0 (size: 0x8)
    class UBoxComponent* ActiveZone;                                                  // 0x02B8 (size: 0x8)
    class USceneComponent* UiTarget;                                                  // 0x02C0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02C8 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatButtonMoveToAnim;                            // 0x02D0 (size: 0x8)
    class UAnimSequence* InitIdleAnimation;                                           // 0x02D8 (size: 0x8)
    class UAnimSequence* AnimationToPlayWithOtherCat;                                 // 0x02E0 (size: 0x8)
    class USceneComponent* Target;                                                    // 0x02E8 (size: 0x8)
    class AActor* StandPos;                                                           // 0x02F0 (size: 0x8)
    class ABP_SpeedAdaptor_C* SpeedAdaptator;                                         // 0x02F8 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifier;                           // 0x0300 (size: 0x8)
    bool MoveDone;                                                                    // 0x0308 (size: 0x1)
    bool AnimationDone;                                                               // 0x0309 (size: 0x1)
    class AActor* AfterUsePos;                                                        // 0x0310 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_MoveToAnim_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_MoveToAnim_FakeCatIntro_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_1_AnimationStarted__DelegateSignature();
    void BndEvt__BP_CatButton_MoveToAnim_FakeCatIntro_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void BndEvt__BP_CatButton_MoveToAnim_CancelZone_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cancel_Sequence();
    void ExecuteUbergraph_BP_CatButton_MoveToAnim(int32 EntryPoint);
}; // Size: 0x318

#endif
