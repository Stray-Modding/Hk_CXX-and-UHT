#ifndef UE4SS_SDK_SEQ_EmitSound_HPP
#define UE4SS_SDK_SEQ_EmitSound_HPP

class ASEQ_EmitSound_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0238 (size: 0x8)
    class AActor* SoundActor;                                                         // 0x0240 (size: 0x8)
    float Radius;                                                                     // 0x0248 (size: 0x4)
    float Growing Time;                                                               // 0x024C (size: 0x4)
    float Delay Before Emit;                                                          // 0x0250 (size: 0x4)

    void BndEvt__SEQ_EmitSound_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SEQ_EmitSound(int32 EntryPoint);
}; // Size: 0x254

#endif
