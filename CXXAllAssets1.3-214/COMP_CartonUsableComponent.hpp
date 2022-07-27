#ifndef UE4SS_SDK_COMP_CartonUsableComponent_HPP
#define UE4SS_SDK_COMP_CartonUsableComponent_HPP

class UCOMP_CartonUsableComponent_C : public UCartonUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class USceneComponent* HideSpot;                                                  // 0x0548 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0550 (size: 0x8)
    bool Debug;                                                                       // 0x0558 (size: 0x1)
    class USkeletalMeshComponent* Carton;                                             // 0x0560 (size: 0x8)
    TEnumAsByte<E_CartonUsableState> State;                                           // 0x0568 (size: 0x1)
    bool exitEnabled;                                                                 // 0x0569 (size: 0x1)
    FName JumpOutActionDisplayName;                                                   // 0x056C (size: 0x8)
    bool IsInside;                                                                    // 0x0574 (size: 0x1)
    TEnumAsByte<E_CartonUsableState> AnimationState;                                  // 0x0575 (size: 0x1)
    class UABP_Carton_C* ABP;                                                         // 0x0578 (size: 0x8)
    FCOMP_CartonUsableComponent_CCartonImpact_Enter CartonImpact_Enter;               // 0x0580 (size: 0x10)
    void CartonImpact_Enter();
    FCOMP_CartonUsableComponent_CCartonImpact_Leave CartonImpact_Leave;               // 0x0590 (size: 0x10)
    void CartonImpact_Leave();

    bool CanInteract(class ACatPawn* _cat);
    void IsExitEnabled(bool& Enabled);
    void SetExitEnabled(bool Enabled);
    void Init(class USceneComponent* HideSpot, class USplineComponent* SplineComponent, class USkeletalMeshComponent* Carton);
    TEnumAsByte<EUsableInteractionButton> GetInteractionButton();
    void _OnUseStarted(class ACatPawn* _cat);
    void ReceiveTick(float DeltaSeconds);
    void ComputeEntrySpline();
    void SetState(TEnumAsByte<E_CartonUsableState> State);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void ComputeExitSpline(FVector Direction);
    void StopEnterAnimations();
    void SetInside(bool Inside);
    void StopExitAnimations();
    void ExecuteUbergraph_COMP_CartonUsableComponent(int32 EntryPoint);
    void CartonImpact_Leave__DelegateSignature();
    void CartonImpact_Enter__DelegateSignature();
}; // Size: 0x5A0

#endif
