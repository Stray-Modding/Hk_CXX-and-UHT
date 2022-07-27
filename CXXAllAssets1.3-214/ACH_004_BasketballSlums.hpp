#ifndef UE4SS_SDK_ACH_004_BasketballSlums_HPP
#define UE4SS_SDK_ACH_004_BasketballSlums_HPP

class AACH_004_BasketballSlums_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* TriggerZone;                                                 // 0x0270 (size: 0x8)

    void LogicTrigger();
    void BndEvt__ACH_004_BasketballSlums_TriggerZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ACH_004_BasketballSlums_TriggerZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_ACH_004_BasketballSlums(int32 EntryPoint);
}; // Size: 0x278

#endif
