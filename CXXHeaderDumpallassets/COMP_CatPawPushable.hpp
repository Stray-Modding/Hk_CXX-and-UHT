#ifndef UE4SS_SDK_COMP_CatPawPushable_HPP
#define UE4SS_SDK_COMP_CatPawPushable_HPP

class UCOMP_CatPawPushable_C : public UCatUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UABP_Cat_PawPush_C* SubAnimInstance;                                        // 0x0538 (size: 0x8)
    class UABP_Cat_New_C* AnimInstance;                                               // 0x0540 (size: 0x8)
    float PushTimer;                                                                  // 0x0548 (size: 0x4)
    bool HasBroadcastedPushEvent;                                                     // 0x054C (size: 0x1)
    FCOMP_CatPawPushable_COnPawPushed OnPawPushed;                                    // 0x0550 (size: 0x10)
    void OnPawPushed(class UCOMP_CatPawPushable_C* PawPushableComponent);
    float PushEventTime;                                                              // 0x0560 (size: 0x4)
    float EarliestExitTime;                                                           // 0x0564 (size: 0x4)
    bool ShouldExit;                                                                  // 0x0568 (size: 0x1)
    TEnumAsByte<E_CatPaw> OverridePaw;                                                // 0x0569 (size: 0x1)
    bool CanCancel;                                                                   // 0x056A (size: 0x1)
    bool ReTriggerPush;                                                               // 0x056B (size: 0x1)
    float PushDistance;                                                               // 0x056C (size: 0x4)
    FVector PushTarget;                                                               // 0x0570 (size: 0xC)
    float PushDistanceX;                                                              // 0x057C (size: 0x4)
    float PushDistanceY;                                                              // 0x0580 (size: 0x4)
    bool UseRightPaw;                                                                 // 0x0584 (size: 0x1)

    void SetPushTarget(FVector Target);
    bool IsUseEnabled();
    bool ShouldDisplayFeedbackWhileUsing();
    bool CanMeow();
    void OnPawPushDone();
    void ReceiveTick(float DeltaSeconds);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void _OnAfterUseDone(class ACatPawn* _cat);
    void ReceiveBeginPlay();
    void _OnUseStarted(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_CatPawPushable(int32 EntryPoint);
    void OnPawPushed__DelegateSignature(class UCOMP_CatPawPushable_C* PawPushableComponent);
}; // Size: 0x585

#endif
