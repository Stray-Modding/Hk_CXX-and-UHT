#ifndef UE4SS_SDK_COMP_CatScratchableComponent_HPP
#define UE4SS_SDK_COMP_CatScratchableComponent_HPP

class UCOMP_CatScratchableComponent_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_ScratchableMode> Mode;
    bool HasEntered;
    bool ShouldExit;
    class UForceFeedbackComponent* ForceFeedback;
    float LeftAxisValue;
    float RightAxisValue;
    class UUMG_Contextual_Triggers_C* HUDWidget;
    FCOMP_CatScratchableComponent_COnScratched OnScratched;
    void OnScratched(class UCOMP_CatScratchableComponent_C* Scratchable);
    bool AlignWithTarget;
    float PreviousTotalScratchedAmount;
    float TotalScratchedAmount;
    float PreviousProgression;
    class AActor* DroneSocket;
    float PreviousLeftAxisValue;
    float PreviousRightAxisValue;
    float UseTime;
    float ScratchFactor;
    float FeedbackPeriod;
    float ExitTime;
    class UAnimSequence* InAnimation;
    class UAnimSequence* LoopAnimation;
    class UAnimSequence* OutAnimation;
    FSmootherFloat PlayRateDecaySmoother;
    bool Use Default Scratch Sound;
    class USoundCue* SfxScratchCueOverride;
    bool PS5LeftTriggerActivated;
    bool PS5RightTriggerActivated;
    class UAudioComponent* PS5Vibration;
    FVector FXLocation;
    FRotator DecalRotation;
    bool ScratchDecals;
    bool ScratchParticles;
    FTransform MoveToTarget;

    void SetPS5TriggerActivated(bool State, EPS5TriggersSide Side);
    void ResetTotalScratchedAmount();
    void GetTotalScratchedAmount(float& TotalScratchedAmount);
    void isBeingScratched(bool& isBeingScratched);
    void SetScratchingPoint(class USceneComponent* ScratchingPoint, FName ScratchingPointSocket);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void _OnUseStarted(class ACatPawn* _cat);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    void UpdateActionDisplay();
    void _OnAfterUseDone(class ACatPawn* _cat);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StopAllAnimations();
    void ExitScratch();
    void OnScratchSoundEvent(float Velocity);
    void ExecuteUbergraph_COMP_CatScratchableComponent(int32 EntryPoint);
    void OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
};

#endif
