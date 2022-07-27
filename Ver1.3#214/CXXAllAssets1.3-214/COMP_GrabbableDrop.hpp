#ifndef UE4SS_SDK_COMP_GrabbableDrop_HPP
#define UE4SS_SDK_COMP_GrabbableDrop_HPP

class UCOMP_GrabbableDrop_C : public UCatUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    UClass* Grabbable_to_detect;                                                      // 0x0538 (size: 0x8)
    bool DopZone_Valid;                                                               // 0x0540 (size: 0x1)
    FCOMP_GrabbableDrop_CReleaseGrabbable_InZone ReleaseGrabbable_InZone;             // 0x0548 (size: 0x10)
    void ReleaseGrabbable_InZone(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    FCOMP_GrabbableDrop_CGrabGrabbable_InZone GrabGrabbable_InZone;                   // 0x0558 (size: 0x10)
    void GrabGrabbable_InZone(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    class AActor* ObjectCurrentlyDropped;                                             // 0x0568 (size: 0x8)
    bool Debug;                                                                       // 0x0570 (size: 0x1)

    bool CanInteract(class ACatPawn* _cat);
    bool IsEnabled();
    bool CanBeUsedWhileSameButtonIsUsed();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnReleaseInFemalePlug(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void OnGrabInFemalePlug(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void ExecuteUbergraph_COMP_GrabbableDrop(int32 EntryPoint);
    void GrabGrabbable_InZone__DelegateSignature(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void ReleaseGrabbable_InZone__DelegateSignature(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
}; // Size: 0x571

#endif
