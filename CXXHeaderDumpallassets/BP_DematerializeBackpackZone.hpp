#ifndef UE4SS_SDK_BP_DematerializeBackpackZone_HPP
#define UE4SS_SDK_BP_DematerializeBackpackZone_HPP

class ABP_DematerializeBackpackZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Zone;                                                        // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool Active;                                                                      // 0x0240 (size: 0x1)

    void BndEvt__BP_DematerializeBackpackZone_Zone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DematerializeBackpackZone(int32 EntryPoint);
}; // Size: 0x241

#endif
