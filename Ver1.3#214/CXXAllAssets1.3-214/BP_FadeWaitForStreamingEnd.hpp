#ifndef UE4SS_SDK_BP_FadeWaitForStreamingEnd_HPP
#define UE4SS_SDK_BP_FadeWaitForStreamingEnd_HPP

class ABP_FadeWaitForStreamingEnd_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)

    void BndEvt__BP_FadeWaitForStreamingEnd_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_FadeWaitForStreamingEnd(int32 EntryPoint);
}; // Size: 0x238

#endif
