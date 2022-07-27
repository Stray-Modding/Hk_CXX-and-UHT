#ifndef UE4SS_SDK_COMP_Grabbable_HPP
#define UE4SS_SDK_COMP_Grabbable_HPP

class UCOMP_Grabbable_C : public UCatUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPrimitiveComponent* BodyComponent;                                         // 0x0538 (size: 0x8)
    FCOMP_Grabbable_COnGrabbed OnGrabbed;                                             // 0x0540 (size: 0x10)
    void OnGrabbed(class UCOMP_Grabbable_C* Grabbable);
    FCOMP_Grabbable_COnDropped OnDropped;                                             // 0x0550 (size: 0x10)
    void OnDropped(class UCOMP_Grabbable_C* Grabbable);
    FTransform InterpolationStart;                                                    // 0x0560 (size: 0x30)
    FName ActionDisplayName;                                                          // 0x0590 (size: 0x8)
    TEnumAsByte<E_GrabbableAnimationState> AnimationState;                            // 0x0598 (size: 0x1)
    TEnumAsByte<E_Grabbable_GrabbedState> GrabbedState;                               // 0x0599 (size: 0x1)
    FCOMP_Grabbable_COnInterpolationStarted OnInterpolationStarted;                   // 0x05A0 (size: 0x10)
    void OnInterpolationStarted(class UCOMP_Grabbable_C* Grabbable);
    FCOMP_Grabbable_COnInterpolationStopped OnInterpolationStopped;                   // 0x05B0 (size: 0x10)
    void OnInterpolationStopped(class UCOMP_Grabbable_C* Grabbable);
    class USceneComponent* GrabPivot;                                                 // 0x05C0 (size: 0x8)
    FName GrabPivotSocket;                                                            // 0x05C8 (size: 0x8)

    bool ShouldStopBeforeTeleport();
    void GetGrabPivotLocalTransform(FTransform& Transform);
    void SetGrabPivot(class USceneComponent* Component, FName Socket);
    void CanDrop(bool& CanDrop);
    bool CanMeow();
    void Complete_6246EF4646E19036986D72BA8F540181();
    void Tick_6246EF4646E19036986D72BA8F540181(float Ratio);
    void ReceiveBeginPlay();
    void _OnUseStarted(class ACatPawn* _cat);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void ReceiveTick(float DeltaSeconds);
    void SetAnimationState(TEnumAsByte<E_GrabbableAnimationState> State);
    void SetGrabbedState(TEnumAsByte<E_Grabbable_GrabbedState> State);
    void Drop();
    void Break All Delays();
    void UpdateHUD();
    void ExecuteUbergraph_COMP_Grabbable(int32 EntryPoint);
    void OnInterpolationStopped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void OnInterpolationStarted__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
}; // Size: 0x5D0

#endif
