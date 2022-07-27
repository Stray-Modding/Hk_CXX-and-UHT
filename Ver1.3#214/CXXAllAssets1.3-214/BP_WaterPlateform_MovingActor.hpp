#ifndef UE4SS_SDK_BP_WaterPlateform_MovingActor_HPP
#define UE4SS_SDK_BP_WaterPlateform_MovingActor_HPP

class ABP_WaterPlateform_MovingActor_C : public ABP_WaterPlateform_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UBoxComponent* CatIsOnPlateformZone;                                        // 0x02D0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_WaterPlateform_Base_CatIsOnPlateformZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_WaterPlateform_Base_CatIsOnPlateformZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_WaterPlateform_MovingActor(int32 EntryPoint);
}; // Size: 0x2D8

#endif
