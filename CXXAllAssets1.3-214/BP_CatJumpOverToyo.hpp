#ifndef UE4SS_SDK_BP_CatJumpOverToyo_HPP
#define UE4SS_SDK_BP_CatJumpOverToyo_HPP

class ABP_CatJumpOverToyo_C : public ABP_CatSequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class AActor* InitMove;                                                           // 0x02A8 (size: 0x8)
    class AActor* JumpStart_Rail1;                                                    // 0x02B0 (size: 0x8)
    class AActor* JumpEnd_Rail1;                                                      // 0x02B8 (size: 0x8)
    class AActor* JumpStart_Rail2;                                                    // 0x02C0 (size: 0x8)
    class AActor* JumpEnd_Rail2;                                                      // 0x02C8 (size: 0x8)
    class AActor* jumpEnd;                                                            // 0x02D0 (size: 0x8)
    class ABP_SplineRail_C* Rail_1;                                                   // 0x02D8 (size: 0x8)
    class ABP_SplineRail_C* Rail_2;                                                   // 0x02E0 (size: 0x8)
    bool End;                                                                         // 0x02E8 (size: 0x1)
    FName LookAtModifierKey;                                                          // 0x02EC (size: 0x8)
    class AActor* WaitPos;                                                            // 0x02F8 (size: 0x8)
    FBP_CatJumpOverToyo_CCheckpointDispatch CheckpointDispatch;                       // 0x0300 (size: 0x10)
    void CheckpointDispatch();

    void Reset();
    void ActivateSequence();
    void SetCatPawn(class ABP_CatPawn_C* cat);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnStartSequence();
    void ExecuteUbergraph_BP_CatJumpOverToyo(int32 EntryPoint);
    void CheckpointDispatch__DelegateSignature();
}; // Size: 0x310

#endif
