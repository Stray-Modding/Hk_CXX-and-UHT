#ifndef UE4SS_SDK_BP_CatSequencialJump_HPP
#define UE4SS_SDK_BP_CatSequencialJump_HPP

class ABP_CatSequencialJump_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class AActor* JumpStart;                                                          // 0x02A8 (size: 0x8)
    class AActor* jumpEnd;                                                            // 0x02B0 (size: 0x8)
    int32 Number;                                                                     // 0x02B8 (size: 0x4)
    class ABP_SplineRail_C* Rail_0;                                                   // 0x02C0 (size: 0x8)
    class ABP_SplineRail_C* Rail_1;                                                   // 0x02C8 (size: 0x8)
    class ABP_SplineRail_C* Rail_2;                                                   // 0x02D0 (size: 0x8)
    class ABP_SplineRail_C* Rail_3;                                                   // 0x02D8 (size: 0x8)
    FName SpeedModifierKey;                                                           // 0x02E0 (size: 0x8)
    class AActor* WaitPos;                                                            // 0x02E8 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x02F0 (size: 0x10)

    bool JumpOnRailIsDOne(class ABP_SplineRail_C* Target);
    void JumpOnRail(class ABP_SplineRail_C* Rail, bool& JumpDone);
    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatSequencialJump(int32 EntryPoint);
}; // Size: 0x300

#endif
