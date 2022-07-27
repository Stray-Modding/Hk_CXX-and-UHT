#ifndef UE4SS_SDK_COMP_CatMoveToAnim_HPP
#define UE4SS_SDK_COMP_CatMoveToAnim_HPP

class UCOMP_CatMoveToAnim_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimSequence* CustomAnim;
    FCOMP_CatMoveToAnim_CAnimationStarted AnimationStarted;
    void AnimationStarted();
    bool AnimStarted;
    bool DoOnce;
    bool RotateAnimAccordingToCat;
    bool BlendCatPositionDuringAnimation;
    float BlendTime;
    FCOMP_CatMoveToAnim_CBeforeOnUseStarted BeforeOnUseStarted;
    void BeforeOnUseStarted();
    FCOMP_CatMoveToAnim_CBeforeAfterMoveUseStarted BeforeAfterMoveUseStarted;
    void BeforeAfterMoveUseStarted();
    bool Enable Look At;

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
};

#endif
