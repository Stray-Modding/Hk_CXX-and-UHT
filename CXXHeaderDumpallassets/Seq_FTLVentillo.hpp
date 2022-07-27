#ifndef UE4SS_SDK_Seq_FTLVentillo_HPP
#define UE4SS_SDK_Seq_FTLVentillo_HPP

class ASeq_FTLVentillo_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0270 (size: 0x8)
    class AActor* PalesVentillo;                                                      // 0x0278 (size: 0x8)

    void BndEvt__Seq_FTLVentillo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Seq_FTLVentillo(int32 EntryPoint);
}; // Size: 0x280

#endif
