#ifndef UE4SS_SDK_BP_Swing_HPP
#define UE4SS_SDK_BP_Swing_HPP

class ABP_Swing_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* SwingVibe;                                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_06;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_03;                                       // 0x0240 (size: 0x8)
    class UStaticMeshComponent* cylinder_cable_27;                                    // 0x0248 (size: 0x8)
    class UStaticMeshComponent* cylinder_cable_26;                                    // 0x0250 (size: 0x8)
    class UStaticMeshComponent* cylinder_cable_25;                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* cylinder_cable_24;                                    // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_02;                                       // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_01;                                       // 0x0270 (size: 0x8)
    class UStaticMeshComponent* CableSupport_02;                                      // 0x0278 (size: 0x8)
    class UStaticMeshComponent* CableSupport_01;                                      // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_05;                                       // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_04;                                       // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02A0 (size: 0x8)
    class USpringFloat_C* Rotation;                                                   // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* HangingNeon;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* MainAnchor;                                                // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    class ABP_MovingSplineRail_C* SplineRail;                                         // 0x02C8 (size: 0x8)
    float Length;                                                                     // 0x02D0 (size: 0x4)
    float ForceToApply;                                                               // 0x02D4 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x02D8 (size: 0x8)
    bool catIsOnSwing;                                                                // 0x02E0 (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void AttachSplineRail();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Swing(int32 EntryPoint);
}; // Size: 0x2E1

#endif
