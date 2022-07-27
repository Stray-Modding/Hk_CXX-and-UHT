#ifndef UE4SS_SDK_SEQ_CameraReset_HPP
#define UE4SS_SDK_SEQ_CameraReset_HPP

class ASEQ_CameraReset_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UB12_hack_sfx_C* B12_hack_sfx;                                              // 0x0270 (size: 0x8)
    class UBoxComponent* Finish_Zone;                                                 // 0x0278 (size: 0x8)
    bool Active;                                                                      // 0x0280 (size: 0x1)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__End_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SEQ_CameraReset(int32 EntryPoint);
}; // Size: 0x281

#endif
