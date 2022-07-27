#ifndef UE4SS_SDK_BP_CatFallOnToyo_HPP
#define UE4SS_SDK_BP_CatFallOnToyo_HPP

class ABP_CatFallOnToyo_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class AActor* JumpStart;                                                          // 0x02A8 (size: 0x8)
    class AActor* JumpEndOnRail;                                                      // 0x02B0 (size: 0x8)
    class ABP_SplineRail_C* Rail;                                                     // 0x02B8 (size: 0x8)
    bool End;                                                                         // 0x02C0 (size: 0x1)
    class AActor* JumpOnRail;                                                         // 0x02C8 (size: 0x8)
    class AActor* jumpEnd;                                                            // 0x02D0 (size: 0x8)
    class AActor* NewSpline;                                                          // 0x02D8 (size: 0x8)

    void Reset();
    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatFallOnToyo(int32 EntryPoint);
}; // Size: 0x2E0

#endif
