#ifndef UE4SS_SDK_COMP_CatMoveToPushable_HPP
#define UE4SS_SDK_COMP_CatMoveToPushable_HPP

class UCOMP_CatMoveToPushable_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UABP_Cat_PawPush_C* SubAnimInstance;
    class UABP_Cat_New_C* AnimInstance;
    float XAngle;
    float YAngle;
    float PushTimer;
    bool HasBroadcastedPushEvent;
    FCOMP_CatMoveToPushable_COnPawPushed OnPawPushed;
    void OnPawPushed(class UCOMP_CatMoveToPushable_C* MoveToPushableComponent);
    float PushEventTime;
    bool UseRightPaw;
    float EarliestExitTime;
    bool ShouldExit;
    TEnumAsByte<E_CatPaw> OverridePaw;
    bool CanCancel;
    bool ReTriggerPush;

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
};

#endif
