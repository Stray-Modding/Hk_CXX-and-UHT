#ifndef UE4SS_SDK_BP_DisableJumpZone_HPP
#define UE4SS_SDK_BP_DisableJumpZone_HPP

class ABP_DisableJumpZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    bool Activate;                                                                    // 0x0240 (size: 0x1)
    bool push;                                                                        // 0x0241 (size: 0x1)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Deactivate();
    void ExecuteUbergraph_BP_DisableJumpZone(int32 EntryPoint);
}; // Size: 0x242

#endif
