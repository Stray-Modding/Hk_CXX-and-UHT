#ifndef UE4SS_SDK_Seq_CatLookAt_HPP
#define UE4SS_SDK_Seq_CatLookAt_HPP

class ASeq_CatLookAt_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* LookAtZone;                                                  // 0x0270 (size: 0x8)
    bool Active;                                                                      // 0x0278 (size: 0x1)
    class AActor* Target;                                                             // 0x0280 (size: 0x8)
    bool UseTime;                                                                     // 0x0288 (size: 0x1)
    float Time;                                                                       // 0x028C (size: 0x4)
    bool CatInsideZone;                                                               // 0x0290 (size: 0x1)
    FName LookAtId;                                                                   // 0x0294 (size: 0x8)
    bool Do once?;                                                                    // 0x029C (size: 0x1)

    void SetLookAtTarget(class AActor* LookAtTarget);
    void ReceiveBeginPlay();
    void BndEvt__LookAtZone_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__LookAtZone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LogicTrigger();
    void ExecuteUbergraph_Seq_CatLookAt(int32 EntryPoint);
}; // Size: 0x29D

#endif
