#ifndef UE4SS_SDK_DIAL_Zbir_Elevator_HPP
#define UE4SS_SDK_DIAL_Zbir_Elevator_HPP

class ADIAL_Zbir_Elevator_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0340 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0348 (size: 0x8)
    class ABP_Droid_C* Droid_Cop;                                                     // 0x0350 (size: 0x8)
    class ABP_Droid_C* Other droid;                                                   // 0x0358 (size: 0x8)
    class ABP_Catbutton_Frottable_C* Frottable;                                       // 0x0360 (size: 0x8)
    bool isScared;                                                                    // 0x0368 (size: 0x1)
    class UAnimSequence* Idle;                                                        // 0x0370 (size: 0x8)
    bool IsCatNear;                                                                   // 0x0378 (size: 0x1)

    void OnDialogBegan();
    void OnFrotted_Event_0(class UCatFrottableComponent* _component);
    void BndEvt__DIAL_Zbir_Elevator_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Droid scared();
    void Droid return to normal();
    void BndEvt__DIAL_Zbir_Elevator_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DIAL_Zbir_Elevator_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DIAL_Zbir_Elevator(int32 EntryPoint);
}; // Size: 0x379

#endif
