#ifndef UE4SS_SDK_COMP_CatPawPushable_HPP
#define UE4SS_SDK_COMP_CatPawPushable_HPP

class UCOMP_CatPawPushable_C : public UCatUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UABP_Cat_PawPush_C* SubAnimInstance;
    class UABP_Cat_New_C* AnimInstance;
    float PushTimer;
    bool HasBroadcastedPushEvent;
    FCOMP_CatPawPushable_COnPawPushed OnPawPushed;
    void OnPawPushed(class UCOMP_CatPawPushable_C* PawPushableComponent);
    float PushEventTime;
    float EarliestExitTime;
    bool ShouldExit;
    TEnumAsByte<E_CatPaw> OverridePaw;
    bool CanCancel;
    bool ReTriggerPush;
    float PushDistance;
    FVector PushTarget;
    float PushDistanceX;
    float PushDistanceY;
    bool UseRightPaw;

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
};

#endif
