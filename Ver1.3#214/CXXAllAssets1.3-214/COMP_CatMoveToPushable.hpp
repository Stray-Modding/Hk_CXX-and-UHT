#ifndef UE4SS_SDK_COMP_CatMoveToPushable_HPP
#define UE4SS_SDK_COMP_CatMoveToPushable_HPP

class UCOMP_CatMoveToPushable_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UABP_Cat_PawPush_C* SubAnimInstance;                                        // 0x05A8 (size: 0x8)
    class UABP_Cat_New_C* AnimInstance;                                               // 0x05B0 (size: 0x8)
    float XAngle;                                                                     // 0x05B8 (size: 0x4)
    float YAngle;                                                                     // 0x05BC (size: 0x4)
    float PushTimer;                                                                  // 0x05C0 (size: 0x4)
    bool HasBroadcastedPushEvent;                                                     // 0x05C4 (size: 0x1)
    FCOMP_CatMoveToPushable_COnPawPushed OnPawPushed;                                 // 0x05C8 (size: 0x10)
    void OnPawPushed(class UCOMP_CatMoveToPushable_C* MoveToPushableComponent);
    float PushEventTime;                                                              // 0x05D8 (size: 0x4)
    bool UseRightPaw;                                                                 // 0x05DC (size: 0x1)
    float EarliestExitTime;                                                           // 0x05E0 (size: 0x4)
    bool ShouldExit;                                                                  // 0x05E4 (size: 0x1)
    TEnumAsByte<E_CatPaw> OverridePaw;                                                // 0x05E5 (size: 0x1)
    bool CanCancel;                                                                   // 0x05E6 (size: 0x1)
    bool ReTriggerPush;                                                               // 0x05E7 (size: 0x1)

    bool IsUseEnabled();
    bool ShouldDisplayFeedbackWhileUsing();
    bool CanMeow();
    void OnPawPushDone();
    void ReceiveTick(float DeltaSeconds);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void _OnAfterUseDone(class ACatPawn* _cat);
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    void _OnUseStarted(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_CatMoveToPushable(int32 EntryPoint);
    void OnPawPushed__DelegateSignature(class UCOMP_CatMoveToPushable_C* MoveToPushableComponent);
}; // Size: 0x5E8

#endif
