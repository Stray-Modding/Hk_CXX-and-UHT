#ifndef UE4SS_SDK_COMP_CatMoveToAnim_HPP
#define UE4SS_SDK_COMP_CatMoveToAnim_HPP

class UCOMP_CatMoveToAnim_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UAnimSequence* CustomAnim;                                                  // 0x05A8 (size: 0x8)
    FCOMP_CatMoveToAnim_CAnimationStarted AnimationStarted;                           // 0x05B0 (size: 0x10)
    void AnimationStarted();
    bool AnimStarted;                                                                 // 0x05C0 (size: 0x1)
    bool DoOnce;                                                                      // 0x05C1 (size: 0x1)
    bool RotateAnimAccordingToCat;                                                    // 0x05C2 (size: 0x1)
    bool BlendCatPositionDuringAnimation;                                             // 0x05C3 (size: 0x1)
    float BlendTime;                                                                  // 0x05C4 (size: 0x4)
    FCOMP_CatMoveToAnim_CBeforeOnUseStarted BeforeOnUseStarted;                       // 0x05C8 (size: 0x10)
    void BeforeOnUseStarted();
    FCOMP_CatMoveToAnim_CBeforeAfterMoveUseStarted BeforeAfterMoveUseStarted;         // 0x05D8 (size: 0x10)
    void BeforeAfterMoveUseStarted();
    bool Enable Look At;                                                              // 0x05E8 (size: 0x1)

    void IsPlayingAnimation(bool& IsPlayingAnimation);
    void SetMoveToLocation(class USceneComponent* MoveToLocation, FName MoveToLocationSocket);
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    void BreakDelayAnim();
    void ReceiveBeginPlay();
    void _OnUseStarted(class ACatPawn* _cat);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_CatMoveToAnim(int32 EntryPoint);
    void BeforeAfterMoveUseStarted__DelegateSignature();
    void BeforeOnUseStarted__DelegateSignature();
    void AnimationStarted__DelegateSignature();
}; // Size: 0x5E9

#endif
