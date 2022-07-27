#ifndef UE4SS_SDK_Check_If_Cat_In_Streets_During_ProcQuest_HPP
#define UE4SS_SDK_Check_If_Cat_In_Streets_During_ProcQuest_HPP

class ACheck_If_Cat_In_Streets_During_ProcQuest_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0250 (size: 0x8)
    class ABP_TutoZone_C* TutoB12Help;                                                // 0x0258 (size: 0x8)
    bool TutoActivated;                                                               // 0x0260 (size: 0x1)

    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Check_If_Cat_In_Streets_During_ProcQuest(int32 EntryPoint);
}; // Size: 0x261

#endif
