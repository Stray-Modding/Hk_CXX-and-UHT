#ifndef UE4SS_SDK_BP_CatButton_MoveToAnim_FakeCatIntro_HPP
#define UE4SS_SDK_BP_CatButton_MoveToAnim_FakeCatIntro_HPP

class ABP_CatButton_MoveToAnim_FakeCatIntro_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* VibrationPlayerCat;                                        // 0x0230 (size: 0x8)
    class UAudioComponent* Vibration2;                                                // 0x0238 (size: 0x8)
    class UAudioComponent* Vibration1;                                                // 0x0240 (size: 0x8)
    class USceneComponent* UiTarget;                                                  // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0250 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatButtonMoveToAnim;                            // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    class ABP_CatFollow_C* CatToAnimate;                                              // 0x0268 (size: 0x8)
    class AActor* CatTargetMoveTo;                                                    // 0x0270 (size: 0x8)
    class UAnimSequence* InitIdleAnimation;                                           // 0x0278 (size: 0x8)
    class UAnimSequence* AnimationToPlayWithOtherCat;                                 // 0x0280 (size: 0x8)
    bool DestinationReached;                                                          // 0x0288 (size: 0x1)
    bool MoveToStarted;                                                               // 0x0289 (size: 0x1)
    class ABP_CatButton_MoveToAnim_FakeCatIntro_C* FirstOtherCatButton;               // 0x0290 (size: 0x8)
    class ABP_CatButton_MoveToAnim_FakeCatIntro_C* SecondOtherCatButton;              // 0x0298 (size: 0x8)
    bool UseVibration1;                                                               // 0x02A0 (size: 0x1)
    float DelayVibration1;                                                            // 0x02A4 (size: 0x4)
    class USoundWave* Sound Vibration1;                                               // 0x02A8 (size: 0x8)
    bool UseVibration2;                                                               // 0x02B0 (size: 0x1)
    float DelayVibration2;                                                            // 0x02B4 (size: 0x4)
    class USoundWave* Sound Vibration2;                                               // 0x02B8 (size: 0x8)
    bool UseVibrationPlayer;                                                          // 0x02C0 (size: 0x1)
    float DelayVibrationPlayer;                                                       // 0x02C4 (size: 0x4)
    class USoundWave* Sound VibrationPlayer;                                          // 0x02C8 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_MoveToAnim_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_MoveToAnim_FakeCatIntro_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_1_AnimationStarted__DelegateSignature();
    void BndEvt__BP_CatButton_MoveToAnim_FakeCatIntro_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_CatButton_MoveToAnim_FakeCatIntro(int32 EntryPoint);
}; // Size: 0x2D0

#endif
