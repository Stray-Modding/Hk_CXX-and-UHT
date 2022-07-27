#ifndef UE4SS_SDK_BP_Zurg_KillZone_Box_HPP
#define UE4SS_SDK_BP_Zurg_KillZone_Box_HPP

class ABP_Zurg_KillZone_Box_C : public ABP_Zurg_KillZone_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Zurg_KillZone_Box(int32 EntryPoint);
}; // Size: 0x2A8

#endif
