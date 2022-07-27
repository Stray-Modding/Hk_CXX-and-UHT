#ifndef UE4SS_SDK_SEQ_PursuitZurgLockTarget_HPP
#define UE4SS_SDK_SEQ_PursuitZurgLockTarget_HPP

class ASEQ_PursuitZurgLockTarget_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0270 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* Zurgs;                                               // 0x0278 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SEQ_PursuitZurgLockTarget(int32 EntryPoint);
}; // Size: 0x280

#endif
