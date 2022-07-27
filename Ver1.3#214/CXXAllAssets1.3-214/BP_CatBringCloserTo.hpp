#ifndef UE4SS_SDK_BP_CatBringCloserTo_HPP
#define UE4SS_SDK_BP_CatBringCloserTo_HPP

class ABP_CatBringCloserTo_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    bool End;                                                                         // 0x02A8 (size: 0x1)
    bool DoOnce;                                                                      // 0x02A9 (size: 0x1)

    void Reset();
    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CatBringCloserTo(int32 EntryPoint);
}; // Size: 0x2AA

#endif
