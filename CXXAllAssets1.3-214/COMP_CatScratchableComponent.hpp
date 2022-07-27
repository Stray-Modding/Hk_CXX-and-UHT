#ifndef UE4SS_SDK_COMP_CatScratchableComponent_HPP
#define UE4SS_SDK_COMP_CatScratchableComponent_HPP

class UCOMP_CatScratchableComponent_C : public UCatMoveToUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    TEnumAsByte<E_ScratchableMode> Mode;                                              // 0x05A8 (size: 0x1)
    bool HasEntered;                                                                  // 0x05A9 (size: 0x1)
    bool ShouldExit;                                                                  // 0x05AA (size: 0x1)
    class UForceFeedbackComponent* ForceFeedback;                                     // 0x05B0 (size: 0x8)
    float LeftAxisValue;                                                              // 0x05B8 (size: 0x4)
    float RightAxisValue;                                                             // 0x05BC (size: 0x4)
    class UUMG_Contextual_Triggers_C* HUDWidget;                                      // 0x05C0 (size: 0x8)
    FCOMP_CatScratchableComponent_COnScratched OnScratched;                           // 0x05C8 (size: 0x10)
    void OnScratched(class UCOMP_CatScratchableComponent_C* Scratchable);
    bool AlignWithTarget;                                                             // 0x05D8 (size: 0x1)
    float PreviousTotalScratchedAmount;                                               // 0x05DC (size: 0x4)
    float TotalScratchedAmount;                                                       // 0x05E0 (size: 0x4)
    float PreviousProgression;                                                        // 0x05E4 (size: 0x4)
    class AActor* DroneSocket;                                                        // 0x05E8 (size: 0x8)
    float PreviousLeftAxisValue;                                                      // 0x05F0 (size: 0x4)
    float PreviousRightAxisValue;                                                     // 0x05F4 (size: 0x4)
    float UseTime;                                                                    // 0x05F8 (size: 0x4)
    float ScratchFactor;                                                              // 0x05FC (size: 0x4)
    float FeedbackPeriod;                                                             // 0x0600 (size: 0x4)
    float ExitTime;                                                                   // 0x0604 (size: 0x4)
    class UAnimSequence* InAnimation;                                                 // 0x0608 (size: 0x8)
    class UAnimSequence* LoopAnimation;                                               // 0x0610 (size: 0x8)
    class UAnimSequence* OutAnimation;                                                // 0x0618 (size: 0x8)
    FSmootherFloat PlayRateDecaySmoother;                                             // 0x0620 (size: 0xC)
    bool Use Default Scratch Sound;                                                   // 0x062C (size: 0x1)
    class USoundCue* SfxScratchCueOverride;                                           // 0x0630 (size: 0x8)
    bool PS5LeftTriggerActivated;                                                     // 0x0638 (size: 0x1)
    bool PS5RightTriggerActivated;                                                    // 0x0639 (size: 0x1)
    class UAudioComponent* PS5Vibration;                                              // 0x0640 (size: 0x8)
    FVector FXLocation;                                                               // 0x0648 (size: 0xC)
    FRotator DecalRotation;                                                           // 0x0654 (size: 0xC)
    bool ScratchDecals;                                                               // 0x0660 (size: 0x1)
    bool ScratchParticles;                                                            // 0x0661 (size: 0x1)
    FTransform MoveToTarget;                                                          // 0x0670 (size: 0x30)

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
}; // Size: 0x6A0

#endif
