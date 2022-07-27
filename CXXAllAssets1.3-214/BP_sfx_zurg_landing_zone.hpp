#ifndef UE4SS_SDK_BP_sfx_zurg_landing_zone_HPP
#define UE4SS_SDK_BP_sfx_zurg_landing_zone_HPP

class ABP_sfx_zurg_landing_zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void BndEvt__BP_sfx_zurg_landing_zone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_sfx_zurg_landing_zone(int32 EntryPoint);
}; // Size: 0x240

#endif
