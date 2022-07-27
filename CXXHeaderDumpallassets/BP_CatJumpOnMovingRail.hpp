#ifndef UE4SS_SDK_BP_CatJumpOnMovingRail_HPP
#define UE4SS_SDK_BP_CatJumpOnMovingRail_HPP

class ABP_CatJumpOnMovingRail_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class AActor* WaitPos;                                                            // 0x02A8 (size: 0x8)
    class AActor* JumpStart;                                                          // 0x02B0 (size: 0x8)
    class AActor* JumpRail;                                                           // 0x02B8 (size: 0x8)
    class ABP_MovingSplineRail_C* Rail;                                               // 0x02C0 (size: 0x8)
    float Speed;                                                                      // 0x02C8 (size: 0x4)
    class ABP_MovingSplineRail_C* Rail_2;                                             // 0x02D0 (size: 0x8)
    class AActor* JumpRail_2;                                                         // 0x02D8 (size: 0x8)
    class AActor* jumpEnd;                                                            // 0x02E0 (size: 0x8)
    class ABP_SplineRail_C* RailToyo;                                                 // 0x02E8 (size: 0x8)
    class AActor* JumpStartOnToyo;                                                    // 0x02F0 (size: 0x8)
    class AActor* JumpEndOnToyo;                                                      // 0x02F8 (size: 0x8)
    class AActor* FollowRailEnd;                                                      // 0x0300 (size: 0x8)
    FName LookAtModifierKey;                                                          // 0x0308 (size: 0x8)

    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatJumpOnMovingRail(int32 EntryPoint);
}; // Size: 0x310

#endif
