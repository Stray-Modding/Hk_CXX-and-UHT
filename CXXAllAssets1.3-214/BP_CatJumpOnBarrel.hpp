#ifndef UE4SS_SDK_BP_CatJumpOnBarrel_HPP
#define UE4SS_SDK_BP_CatJumpOnBarrel_HPP

class ABP_CatJumpOnBarrel_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class AActor* Start;                                                              // 0x02A8 (size: 0x8)
    class ABP_SplineRail_C* Barrel_1;                                                 // 0x02B0 (size: 0x8)
    class ABP_SplineRail_C* Barrel_2;                                                 // 0x02B8 (size: 0x8)
    class ABP_SplineRail_C* Wall;                                                     // 0x02C0 (size: 0x8)
    class AActor* End;                                                                // 0x02C8 (size: 0x8)

    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatJumpOnBarrel(int32 EntryPoint);
}; // Size: 0x2D0

#endif
