#ifndef UE4SS_SDK_SEQ_trigger_Antiretour_HPP
#define UE4SS_SDK_SEQ_trigger_Antiretour_HPP

class ASEQ_trigger_Antiretour_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0270 (size: 0x8)
    class AActor* CollisionAntiRetour;                                                // 0x0278 (size: 0x8)

    void LogicTrigger();
    void BndEvt__SEQ_trigger_Antiretour_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SEQ_trigger_Antiretour(int32 EntryPoint);
}; // Size: 0x280

#endif
