#ifndef UE4SS_SDK_SEQ_DeadEndIntroTransition_HPP
#define UE4SS_SDK_SEQ_DeadEndIntroTransition_HPP

class ASEQ_DeadEndIntroTransition_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ACameraActor* Camera;                                                       // 0x0270 (size: 0x8)
    bool Start;                                                                       // 0x0278 (size: 0x1)
    class ABP_Droid_C* Roberto;                                                       // 0x0280 (size: 0x8)
    class AActor* InitPos;                                                            // 0x0288 (size: 0x8)
    class AActor* SecondDoorPos;                                                      // 0x0290 (size: 0x8)
    TArray<FName> Transition Groups;                                                  // 0x0298 (size: 0x10)
    TArray<TSoftObjectPtr<UWorld>> Preloaded Levels;                                  // 0x02A8 (size: 0x10)
    class AActor* SecondDoor;                                                         // 0x02B8 (size: 0x8)
    class ADial_RobertoInDeadEnd_C* RobertoDial;                                      // 0x02C0 (size: 0x8)
    class AActor* SplineActor;                                                        // 0x02C8 (size: 0x8)
    class AActor* TriggerZone;                                                        // 0x02D0 (size: 0x8)
    bool CatOnTriggerZone;                                                            // 0x02D8 (size: 0x1)
    class AActor* CheckpointPosition;                                                 // 0x02E0 (size: 0x8)

    void LogicTrigger();
    void OnStartSequence();
    void OnStartFromCheckpoint();
    void BndEvt__SEQ_DeadEndIntroTransition_TriggerZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_DeadEndIntroTransition_TriggerZone_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_DeadEndIntroTransition(int32 EntryPoint);
}; // Size: 0x2E8

#endif
