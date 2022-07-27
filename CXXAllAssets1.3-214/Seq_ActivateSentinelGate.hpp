#ifndef UE4SS_SDK_Seq_ActivateSentinelGate_HPP
#define UE4SS_SDK_Seq_ActivateSentinelGate_HPP

class ASeq_ActivateSentinelGate_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool activated;                                                                   // 0x0278 (size: 0x1)
    TArray<class ABP_SentinelAI_C*> Sentinel;                                         // 0x0280 (size: 0x10)
    class ABP_DoorWindowBase_C* Door;                                                 // 0x0290 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0298 (size: 0x8)
    class AActor* zone;                                                               // 0x02A0 (size: 0x8)
    class AActor* Target;                                                             // 0x02A8 (size: 0x8)
    float delayBeforeTriggered;                                                       // 0x02B0 (size: 0x4)

    void LogicTrigger();
    void BndEvt__Seq_ActivateSentinelGate_Zone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void Finish Pursuit();
    void SlowDown();
    void ChangeTarget(class AActor* Target);
    void ExecuteUbergraph_Seq_ActivateSentinelGate(int32 EntryPoint);
}; // Size: 0x2B4

#endif
