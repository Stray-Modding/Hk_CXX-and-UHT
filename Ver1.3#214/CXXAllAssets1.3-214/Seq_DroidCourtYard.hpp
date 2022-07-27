#ifndef UE4SS_SDK_Seq_DroidCourtYard_HPP
#define UE4SS_SDK_Seq_DroidCourtYard_HPP

class ASeq_DroidCourtYard_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool Activate;                                                                    // 0x0278 (size: 0x1)
    class ABP_Droid_C* Clementine;                                                    // 0x0280 (size: 0x8)
    class AActor* Clementine_DoorMiddlePart_POS;                                      // 0x0288 (size: 0x8)
    class AActor* Clementine_DoorCourtyard_POS;                                       // 0x0290 (size: 0x8)
    class AActor* TrapSentinelZone_FirstPart;                                         // 0x0298 (size: 0x8)
    class ABP_DoorWindowBase_C* CellDoor1;                                            // 0x02A0 (size: 0x8)
    class ABP_DoorWindowBase_C* CellDoor2;                                            // 0x02A8 (size: 0x8)
    float TimerTrap;                                                                  // 0x02B0 (size: 0x4)
    TEnumAsByte<Enum_CourtyardZone> Sequence;                                         // 0x02B4 (size: 0x1)
    bool SentinelsTrapped_FirstPart;                                                  // 0x02B5 (size: 0x1)
    bool Start_FirstPart;                                                             // 0x02B6 (size: 0x1)
    class ADial_Clementine_EscapeJail_C* dial_clementine;                             // 0x02B8 (size: 0x8)
    class ABP_DoorWindowBase_C* CourtYardDoor1;                                       // 0x02C0 (size: 0x8)
    class AActor* CatEnterCourtyard_FirstPart_Zone;                                   // 0x02C8 (size: 0x8)
    class AActor* DialogCourtyard_FirstPart_Zone;                                     // 0x02D0 (size: 0x8)
    bool Start_Dialog;                                                                // 0x02D8 (size: 0x1)
    class ABP_DoorWindowBase_C* MiddleCourtYardDoor1;                                 // 0x02E0 (size: 0x8)
    class ABP_DoorWindowBase_C* MiddleCourtYardDoor2;                                 // 0x02E8 (size: 0x8)
    bool Start_LastPart;                                                              // 0x02F0 (size: 0x1)
    bool SentinelsTrapped_LastPart;                                                   // 0x02F1 (size: 0x1)
    class AActor* CatEnterCourtyard_Part2_Zone;                                       // 0x02F8 (size: 0x8)
    class AActor* Clementine_OpenDoor4_POS;                                           // 0x0300 (size: 0x8)
    class AActor* TrapSentinelZone_LastPart;                                          // 0x0308 (size: 0x8)
    class ABP_CellDoor_Jail_C* CellDoor3;                                             // 0x0310 (size: 0x8)
    class ABP_CellDoor_Jail_C* CellDoor4;                                             // 0x0318 (size: 0x8)
    class ABP_CellDoor_Jail_C* CellDoor5;                                             // 0x0320 (size: 0x8)
    class ABP_CellDoor_Jail_C* CellDoor6;                                             // 0x0328 (size: 0x8)
    class ABP_Door_Courtyard_C* ExitCourtYardDoor;                                    // 0x0330 (size: 0x8)
    class AActor* ExitFromCourtyardDoor_POS;                                          // 0x0338 (size: 0x8)
    class AActor* ExitFromCourtyard_POS;                                              // 0x0340 (size: 0x8)
    class AActor* CloseCourtyardDoor_POS;                                             // 0x0348 (size: 0x8)
    class AActor* CatPassExitDoorCourtyard_Zone;                                      // 0x0350 (size: 0x8)
    bool CatIsBehindExitDoorCourtYard;                                                // 0x0358 (size: 0x1)
    class ABP_SwitchTrigger_C* SwitchDoor_1;                                          // 0x0360 (size: 0x8)
    class ABP_SwitchTrigger_C* SwitchDoor_2;                                          // 0x0368 (size: 0x8)
    class ABP_SwitchTrigger_C* SwitchDoor_3;                                          // 0x0370 (size: 0x8)
    class ABP_SwitchTrigger_C* SwitchDoor_4;                                          // 0x0378 (size: 0x8)
    class ABP_SwitchTrigger_C* SwitchDoor_5;                                          // 0x0380 (size: 0x8)
    class ABP_SwitchTrigger_C* SwitchDoor_6;                                          // 0x0388 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0390 (size: 0x8)
    class ASeq_DroidPrisonersInCourtYard_C* SEQ_Prisoner01;                           // 0x0398 (size: 0x8)
    bool CheckpointCourtYard_1;                                                       // 0x03A0 (size: 0x1)
    bool CheckpointCourtYard_2;                                                       // 0x03A1 (size: 0x1)
    class AActor* CollisionAntiRetour;                                                // 0x03A8 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__CatEnterCourtyard_FirstPart_Zone_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__DialogCourtyard_FirstPart_Zone_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void Change Sequence();
    void BndEvt__CatEnterCourtyard_Part2_Zone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__CatPassExitDoorCourtyard_Zone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__CatPassExitDoorCourtyard_Zone_K2Node_ComponentBoundEvent_4_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void DisableSwitchDoorFirstPart();
    void DisableSwitchDoorLastPart();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_5_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnStartFromCheckpoint();
    void SeqOver CheckpointStart();
    void Before First Part();
    void BeforeLastPart CheckpointStart();
    void Init_Dial();
    void BndEvt__Seq_DroidCourtYard_DialogCourtyard_FirstPart_Zone_K2Node_ComponentBoundEvent_6_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_Seq_DroidCourtYard(int32 EntryPoint);
}; // Size: 0x3B0

#endif
