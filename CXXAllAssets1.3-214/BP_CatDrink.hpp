#ifndef UE4SS_SDK_BP_CatDrink_HPP
#define UE4SS_SDK_BP_CatDrink_HPP

class ABP_CatDrink_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* CancelZone;                                                  // 0x02A0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A8 (size: 0x8)
    class UBoxComponent* ActiveZone;                                                  // 0x02B0 (size: 0x8)
    class UAnimSequence* Drink_Start;                                                 // 0x02B8 (size: 0x8)
    class UAnimSequence* Drink_Loop;                                                  // 0x02C0 (size: 0x8)
    class UAnimSequence* Drink_End;                                                   // 0x02C8 (size: 0x8)
    float DrinkDuration;                                                              // 0x02D0 (size: 0x4)
    bool PlayerPassThroughCancelZone;                                                 // 0x02D4 (size: 0x1)

    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void BndEvt__BP_CatDrink_CancelZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CatDrink(int32 EntryPoint);
}; // Size: 0x2D5

#endif
