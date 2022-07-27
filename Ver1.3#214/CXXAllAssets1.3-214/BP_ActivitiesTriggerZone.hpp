#ifndef UE4SS_SDK_BP_ActivitiesTriggerZone_HPP
#define UE4SS_SDK_BP_ActivitiesTriggerZone_HPP

class ABP_ActivitiesTriggerZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    EObjective Objective;                                                             // 0x0248 (size: 0x1)

    void BndEvt__BP_ActivitiesTriggerZone_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_ActivitiesTriggerZone(int32 EntryPoint);
}; // Size: 0x249

#endif
