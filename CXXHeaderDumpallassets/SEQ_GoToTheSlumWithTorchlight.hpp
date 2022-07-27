#ifndef UE4SS_SDK_SEQ_GoToTheSlumWithTorchlight_HPP
#define UE4SS_SDK_SEQ_GoToTheSlumWithTorchlight_HPP

class ASEQ_GoToTheSlumWithTorchlight_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Doc;                                                           // 0x0270 (size: 0x8)
    bool Activate;                                                                    // 0x0278 (size: 0x1)
    class AActor* Droid_PosExitDoor;                                                  // 0x0280 (size: 0x8)
    class AActor* Droid_FirstDoor_Pos;                                                // 0x0288 (size: 0x8)
    class AActor* Droid_ElectricDoor_Pos;                                             // 0x0290 (size: 0x8)
    class AActor* Droid_BeforeZurgGrid_POS;                                           // 0x0298 (size: 0x8)
    class AActor* Droid_OpenGrid_POS;                                                 // 0x02A0 (size: 0x8)
    class ABP_Door_DocFlat_C* Door;                                                   // 0x02A8 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgsBehindGate;                                     // 0x02B0 (size: 0x8)
    class ABP_DoorDeadEndTorchlight_C* DoorZurg;                                      // 0x02B8 (size: 0x8)
    TEnumAsByte<GoToTheSlumWithTorchlight_State> SequenceState;                       // 0x02C0 (size: 0x1)
    bool CatIsNearFirstDoor;                                                          // 0x02C1 (size: 0x1)
    class ADialog* DialogDroid;                                                       // 0x02C8 (size: 0x8)
    class AActor* Droid_ThinkingElectricDoor_Pos;                                     // 0x02D0 (size: 0x8)
    class AActor* Chair;                                                              // 0x02D8 (size: 0x8)
    TArray<class AActor*> Chair_Collision;                                            // 0x02E0 (size: 0x10)
    class AActor* ZoneDetectionCat;                                                   // 0x02F0 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02F8 (size: 0x8)
    class AActor* Droid_StartSequence;                                                // 0x0300 (size: 0x8)
    class AActor* OpenDoor_TriggerZone;                                               // 0x0308 (size: 0x8)
    bool DialCanStart;                                                                // 0x0310 (size: 0x1)
    class AActor* StartDialog_TriggerZone;                                            // 0x0318 (size: 0x8)
    bool CanStartDial;                                                                // 0x0320 (size: 0x1)
    class AActor* Droid_ElectricDoorDial_Zone;                                        // 0x0328 (size: 0x8)
    class ABP_Zurg_Counter_C* ZurgCounterZone;                                        // 0x0330 (size: 0x8)
    class ABP_TutoZone_C* TutoZone;                                                   // 0x0338 (size: 0x8)
    class ABP_HKPlayerStart_C* Checkpoint;                                            // 0x0340 (size: 0x8)
    bool ChairCollisionOff;                                                           // 0x0348 (size: 0x1)
    class AActor* DOC_InspectElectricityBox_POS;                                      // 0x0350 (size: 0x8)
    class AActor* Chair_Collision_On;                                                 // 0x0358 (size: 0x8)
    class AActor* RedButton;                                                          // 0x0360 (size: 0x8)
    FVector RedbuttonLocation;                                                        // 0x0368 (size: 0xC)
    class AActor* Cat_InFrontOfStore_POS;                                             // 0x0378 (size: 0x8)
    class AActor* PlanCam_Door;                                                       // 0x0380 (size: 0x8)
    bool ZurkAlreadyKill;                                                             // 0x0388 (size: 0x1)
    class AActor* SplineToDoor;                                                       // 0x0390 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAA3365804();
    void Tick_6246EF4646E19036986D72BAA3365804(float Ratio);
    void LogicTrigger();
    void Change State();
    void OnStartSequence();
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_ZoneDetectionCat_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_m_streamingComponent_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_OpenDoorTrigger_Zone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_StartDialog_TriggerZone_K2Node_ComponentBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_StartDialog_TriggerZone_K2Node_ComponentBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_Droid_ElectricDoorDial_Zone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_Droid_ElectricDoorDial_Zone_K2Node_ComponentBoundEvent_6_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_GoToTheSlumWithTorchlight_m_saveComponent_K2Node_ComponentBoundEvent_7_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void DOCRoaming();
    void DeactivateSequence();
    void PressRedButton();
    void ExecuteUbergraph_SEQ_GoToTheSlumWithTorchlight(int32 EntryPoint);
}; // Size: 0x398

#endif
