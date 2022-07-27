#ifndef UE4SS_SDK_COMP_CatPaperBag_HPP
#define UE4SS_SDK_COMP_CatPaperBag_HPP

class UCOMP_CatPaperBag_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class ABP_CatButtonPaperBag_C* Owner;                                             // 0x05A8 (size: 0x8)
    bool IsUsed;                                                                      // 0x05B0 (size: 0x1)
    FTransform TargetBagTransform;                                                    // 0x05C0 (size: 0x30)
    FSmootherTransform TargetBagTransformSmoother;                                    // 0x05F0 (size: 0x70)
    class USoundBase* Stop Interaction Sound;                                         // 0x0660 (size: 0x8)

    bool IsEnabled();
    void ReceiveBeginPlay();
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    void _OnUseStarted(class ACatPawn* _cat);
    void ReceiveTick(float DeltaSeconds);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void BreakAllDelays();
    void ExecuteUbergraph_COMP_CatPaperBag(int32 EntryPoint);
}; // Size: 0x668

#endif
