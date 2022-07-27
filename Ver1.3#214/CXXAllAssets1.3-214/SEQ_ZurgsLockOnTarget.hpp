#ifndef UE4SS_SDK_SEQ_ZurgsLockOnTarget_HPP
#define UE4SS_SDK_SEQ_ZurgsLockOnTarget_HPP

class ASEQ_ZurgsLockOnTarget_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> Zurgs;                                       // 0x0270 (size: 0x10)
    class ABP_DoorGrid_Rooftop_C* BP_Door;                                            // 0x0280 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0288 (size: 0x8)
    bool Activate;                                                                    // 0x0290 (size: 0x1)
    class ABP_Zurg_Counter_C* ZurgCounter;                                            // 0x0298 (size: 0x8)
    int32 Count;                                                                      // 0x02A0 (size: 0x4)
    class AActor* BidonOverlap;                                                       // 0x02A8 (size: 0x8)
    bool BarrelBlocked;                                                               // 0x02B0 (size: 0x1)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SEQ_ZurgsLockOnTarget_BidonOverlap_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_ZurgsLockOnTarget_BidonOverlap_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_ZurgsLockOnTarget(int32 EntryPoint);
}; // Size: 0x2B1

#endif
