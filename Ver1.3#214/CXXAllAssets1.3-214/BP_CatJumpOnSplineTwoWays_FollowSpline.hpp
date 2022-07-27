#ifndef UE4SS_SDK_BP_CatJumpOnSplineTwoWays_FollowSpline_HPP
#define UE4SS_SDK_BP_CatJumpOnSplineTwoWays_FollowSpline_HPP

class ABP_CatJumpOnSplineTwoWays_FollowSpline_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A0 (size: 0x8)
    class USplineComponent* SplineDown;                                               // 0x02A8 (size: 0x8)
    class USplineComponent* SplineUp;                                                 // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)
    FVector UpLocation;                                                               // 0x02C0 (size: 0xC)
    FVector DownLocation;                                                             // 0x02CC (size: 0xC)
    bool JumpUp;                                                                      // 0x02D8 (size: 0x1)
    bool CatIsInside;                                                                 // 0x02D9 (size: 0x1)
    class ABP_SplineRail_C* SplineRail;                                               // 0x02E0 (size: 0x8)
    class AActor* EndPosOnRail;                                                       // 0x02E8 (size: 0x8)
    float EndDistanceOnSpline;                                                        // 0x02F0 (size: 0x4)
    class AActor* EndJumpPOS;                                                         // 0x02F8 (size: 0x8)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatJumpOnSplineTwoWays_FollowSpline(int32 EntryPoint);
}; // Size: 0x300

#endif
