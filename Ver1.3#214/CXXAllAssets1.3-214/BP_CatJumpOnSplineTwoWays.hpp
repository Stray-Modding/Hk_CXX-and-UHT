#ifndef UE4SS_SDK_BP_CatJumpOnSplineTwoWays_HPP
#define UE4SS_SDK_BP_CatJumpOnSplineTwoWays_HPP

class ABP_CatJumpOnSplineTwoWays_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A0 (size: 0x8)
    class USplineComponent* SplineDown;                                               // 0x02A8 (size: 0x8)
    class USplineComponent* SplineUp;                                                 // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)
    FVector UpLocation;                                                               // 0x02C0 (size: 0xC)
    FVector DownLocation;                                                             // 0x02CC (size: 0xC)
    bool JumpUp;                                                                      // 0x02D8 (size: 0x1)
    bool NeedToJump;                                                                  // 0x02D9 (size: 0x1)
    bool CanJump;                                                                     // 0x02DA (size: 0x1)
    bool CatIsInside;                                                                 // 0x02DB (size: 0x1)
    float LengthHysteresis;                                                           // 0x02DC (size: 0x4)
    bool Debug;                                                                       // 0x02E0 (size: 0x1)

    bool IsAllowedToJump();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CatJumpOnSplineTwoWays_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CatJumpOnSplineTwoWays(int32 EntryPoint);
}; // Size: 0x2E1

#endif
