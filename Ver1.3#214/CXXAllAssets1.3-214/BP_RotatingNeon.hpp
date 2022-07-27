#ifndef UE4SS_SDK_BP_RotatingNeon_HPP
#define UE4SS_SDK_BP_RotatingNeon_HPP

class ABP_RotatingNeon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_05;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_04;                                       // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_02;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Ceiling_cup_01;                                       // 0x0258 (size: 0x8)
    class USpringFloat_C* Rotation;                                                   // 0x0260 (size: 0x8)
    class UStaticMeshComponent* CableSupport_02;                                      // 0x0268 (size: 0x8)
    class UStaticMeshComponent* CableSupport_01;                                      // 0x0270 (size: 0x8)
    class UStaticMeshComponent* HangingNeon;                                          // 0x0278 (size: 0x8)
    class USceneComponent* MainAnchor;                                                // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    class ABP_MovingSplineRail_C* SplineRail;                                         // 0x0290 (size: 0x8)
    float Length;                                                                     // 0x0298 (size: 0x4)
    float ForceToApply;                                                               // 0x029C (size: 0x4)
    class ACatPawn* cat;                                                              // 0x02A0 (size: 0x8)
    bool CatIsOnSplineRail;                                                           // 0x02A8 (size: 0x1)
    bool NeedToUpdate;                                                                // 0x02A9 (size: 0x1)

    void RotationNeedToUpdate();
    void UserConstructionScript();
    void AttachSplineRail();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveBeginPlay();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void AddImpulse(float Force);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_RotatingNeon(int32 EntryPoint);
}; // Size: 0x2AA

#endif
