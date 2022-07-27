#ifndef UE4SS_SDK_BP_CatsPlayingTogether_HPP
#define UE4SS_SDK_BP_CatsPlayingTogether_HPP

class ABP_CatsPlayingTogether_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A0 (size: 0x8)
    class USceneComponent* SecondaryCatPos;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* CatPos;                                                    // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)
    bool Synchronized;                                                                // 0x02C0 (size: 0x1)
    bool Animfinished;                                                                // 0x02C1 (size: 0x1)
    class UAnimSequence* Animation_Cat;                                               // 0x02C8 (size: 0x8)
    class UAnimSequence* Animation_SecondaryCat;                                      // 0x02D0 (size: 0x8)
    bool CatIsInZone;                                                                 // 0x02D8 (size: 0x1)
    bool SecondaryCatIsInZone;                                                        // 0x02D9 (size: 0x1)

    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void BndEvt__BP_CatsPlayingTogether_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CatsPlayingTogether(int32 EntryPoint);
}; // Size: 0x2DA

#endif
