#ifndef UE4SS_SDK_Metro_Red_Ground_Dynamic_HPP
#define UE4SS_SDK_Metro_Red_Ground_Dynamic_HPP

class AMetro_Red_Ground_Dynamic_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    FLinearColor Timeline_1_SI_OUT_B4ECEC2B4C08AEE3ADCF14A46906BC9E;                  // 0x0248 (size: 0x10)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_B4ECEC2B4C08AEE3ADCF14A46906BC9E; // 0x0258 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0260 (size: 0x8)
    FLinearColor Timeline_0_SI_IN_9D639C894BC31033C4AF889504281C82;                   // 0x0268 (size: 0x10)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9D639C894BC31033C4AF889504281C82; // 0x0278 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0280 (size: 0x8)
    class UMaterialInstanceDynamic* si;                                               // 0x0288 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Metro_Red_Ground_Dynamic(int32 EntryPoint);
}; // Size: 0x290

#endif
