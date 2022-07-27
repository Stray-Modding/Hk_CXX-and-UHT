#ifndef UE4SS_SDK_BP_CatPlayAnimation_HPP
#define UE4SS_SDK_BP_CatPlayAnimation_HPP

class ABP_CatPlayAnimation_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A8 (size: 0x8)
    class UAnimSequence* Animation_Cat;                                               // 0x02B0 (size: 0x8)
    FName AttitudeModifierKey;                                                        // 0x02B8 (size: 0x8)
    FName SpeedModifierKey;                                                           // 0x02C0 (size: 0x8)
    TEnumAsByte<ECatAttitude> Attitude;                                               // 0x02C8 (size: 0x1)
    float Move Speed;                                                                 // 0x02CC (size: 0x4)
    float TimeTo Change Speed;                                                        // 0x02D0 (size: 0x4)

    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatPlayAnimation(int32 EntryPoint);
}; // Size: 0x2D4

#endif
