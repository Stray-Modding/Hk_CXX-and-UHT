#ifndef UE4SS_SDK_SEQ_ActivateZurgsBeforeSlums_HPP
#define UE4SS_SDK_SEQ_ActivateZurgsBeforeSlums_HPP

class ASEQ_ActivateZurgsBeforeSlums_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> Zurgs;                                       // 0x0278 (size: 0x10)
    class AActor* TriggerZone_LockOnTarget;                                           // 0x0288 (size: 0x8)
    bool Activate;                                                                    // 0x0290 (size: 0x1)
    bool ChangeTarget;                                                                // 0x0291 (size: 0x1)
    class AActor* LockOnTarget;                                                       // 0x0298 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void OnStartSequence();
    void BndEvt__TriggerZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_ActivateZurgsBeforeSlums(int32 EntryPoint);
}; // Size: 0x2A0

#endif
