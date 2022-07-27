#ifndef UE4SS_SDK_COMP_CatMoveToLoopAnim_HPP
#define UE4SS_SDK_COMP_CatMoveToLoopAnim_HPP

class UCOMP_CatMoveToLoopAnim_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    bool RotateAnimAccordingToCat;                                                    // 0x05A8 (size: 0x1)
    bool BlendCatPositionDuringAnimation;                                             // 0x05A9 (size: 0x1)
    class UAnimSequence* Animation_Start;                                             // 0x05B0 (size: 0x8)
    class UAnimSequence* Animation_Loop;                                              // 0x05B8 (size: 0x8)
    class UAnimSequence* Animation_Stop;                                              // 0x05C0 (size: 0x8)
    bool EnterAnimStarted;                                                            // 0x05C8 (size: 0x1)
    bool LoopAnimStarted;                                                             // 0x05C9 (size: 0x1)
    bool StopAnimStarted;                                                             // 0x05CA (size: 0x1)
    bool ShouldExit;                                                                  // 0x05CB (size: 0x1)
    FCOMP_CatMoveToLoopAnim_COnStart OnStart;                                         // 0x05D0 (size: 0x10)
    void OnStart();
    FCOMP_CatMoveToLoopAnim_COnLoopStart OnLoopStart;                                 // 0x05E0 (size: 0x10)
    void OnLoopStart();
    FCOMP_CatMoveToLoopAnim_COnLoopEnd OnLoopEnd;                                     // 0x05F0 (size: 0x10)
    void OnLoopEnd();
    bool IsInLoop;                                                                    // 0x0600 (size: 0x1)
    float BlendTime;                                                                  // 0x0604 (size: 0x4)
    FCOMP_CatMoveToLoopAnim_COnEnd OnEnd;                                             // 0x0608 (size: 0x10)
    void OnEnd();

    void ExitInteraction();
    void SetAnimSpot(class USceneComponent* Anim Spot, FName Anim Spot Socket);
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    void _OnUseStarted(class ACatPawn* _cat);
    void ReceiveTick(float DeltaSeconds);
    void End Animation();
    void BreakAllDelayAnim();
    void UpdateActionDisplay();
    void ReceiveBeginPlay();
    void Reset Exit();
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_CatMoveToLoopAnim(int32 EntryPoint);
    void OnEnd__DelegateSignature();
    void OnStart__DelegateSignature();
    void OnLoopEnd__DelegateSignature();
    void OnLoopStart__DelegateSignature();
}; // Size: 0x618

#endif
