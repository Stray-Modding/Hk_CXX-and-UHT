#ifndef UE4SS_SDK_SEQ_ExitFromJailWithTruck_HPP
#define UE4SS_SDK_SEQ_ExitFromJailWithTruck_HPP

class ASEQ_ExitFromJailWithTruck_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Clementine;                                                    // 0x0278 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0280 (size: 0x8)
    class ASEQ_ClementineRoamExitZone_C* SEQ_ClementineRoam_ToDeactivate;             // 0x0288 (size: 0x8)
    class AActor* Clementine_GoToTheTruck_POS;                                        // 0x0290 (size: 0x8)
    class AActor* TruckLookAt;                                                        // 0x0298 (size: 0x8)
    class ACameraActor* camera_PlanTruck;                                             // 0x02A0 (size: 0x8)
    class ABP_TruckFollowSpline_C* PoliceTruck;                                       // 0x02A8 (size: 0x8)
    class ABP_JailExitDoor_C* BigDoor;                                                // 0x02B0 (size: 0x8)
    class ABP_SwitchWithJump_C* DoorSwitchJump;                                       // 0x02B8 (size: 0x8)
    class ABP_FlickLight_C* Alarms;                                                   // 0x02C0 (size: 0x8)
    bool TruckStart;                                                                  // 0x02C8 (size: 0x1)
    class ASeq_ActivateSentinelGate_C* SEQ_Sentinel_01;                               // 0x02D0 (size: 0x8)
    class ASeq_ActivateSentinelGate_C* SEQ_Sentinel_02;                               // 0x02D8 (size: 0x8)
    class ASeq_ActivateSentinelGate_C* SEQ_Sentinel_03;                               // 0x02E0 (size: 0x8)
    class ASeq_ActivateSentinelGate_C* SEQ_Sentinel_04;                               // 0x02E8 (size: 0x8)
    class ASeq_ActivateSentinelGate_C* SEQ_Sentinel_05;                               // 0x02F0 (size: 0x8)
    TArray<class ABP_SentinelAI_C*> Sentinels;                                        // 0x02F8 (size: 0x10)
    class AActor* CatPassTheGateZone;                                                 // 0x0308 (size: 0x8)
    class AActor* FirstSentinel_TriggerZone;                                          // 0x0310 (size: 0x8)
    class AActor* SecondSentinel_TriggerZone;                                         // 0x0318 (size: 0x8)
    class AActor* ExteriorSentinel_TriggerZone;                                       // 0x0320 (size: 0x8)
    class AActor* SentinelAttackCat_TriggerZone;                                      // 0x0328 (size: 0x8)
    class AActor* TruckStart_TriggerZone;                                             // 0x0330 (size: 0x8)
    class AActor* TruckPassDoor_TriggerZone;                                          // 0x0338 (size: 0x8)
    class ACameraActor* camera_PlanOpenDoor;                                          // 0x0340 (size: 0x8)
    class ACameraActor* camera_PlanAlarm;                                             // 0x0348 (size: 0x8)
    bool CatPassTheGate;                                                              // 0x0350 (size: 0x1)
    TArray<class ABP_CameraThirdPersonModifierZone_C*> Cam_Modifier_Pursuit;          // 0x0358 (size: 0x10)
    bool FirstSentinel_Spawn;                                                         // 0x0368 (size: 0x1)
    bool SecondSentinel_Spawn;                                                        // 0x0369 (size: 0x1)
    bool SentinelAttack_Cat;                                                          // 0x036A (size: 0x1)
    bool IsTruckCanStart;                                                             // 0x036B (size: 0x1)
    bool Activate;                                                                    // 0x036C (size: 0x1)
    TEnumAsByte<Enum_EscapeWithTruck> Sequence;                                       // 0x036D (size: 0x1)
    class ACameraActor* camera_PlanEndCine;                                           // 0x0370 (size: 0x8)
    class ADial_Clementine_JailExit_C* dial_clementine;                               // 0x0378 (size: 0x8)
    class AActor* CatOpenTruck_POS;                                                   // 0x0380 (size: 0x8)
    class AActor* Cat_TPLastPursuit_POS;                                              // 0x0388 (size: 0x8)
    bool CatEscape;                                                                   // 0x0390 (size: 0x1)
    class AActor* TruckTargetGrid;                                                    // 0x0398 (size: 0x8)
    class AActor* TruckTargetCatFinish;                                               // 0x03A0 (size: 0x8)
    class AActor* TargetTP;                                                           // 0x03A8 (size: 0x8)
    bool CatTeleported;                                                               // 0x03B0 (size: 0x1)
    bool IsTruckPassDoor;                                                             // 0x03B1 (size: 0x1)
    class AActor* Cat_FinishTriggerZone;                                              // 0x03B8 (size: 0x8)
    bool CatFinishZone;                                                               // 0x03C0 (size: 0x1)
    class AActor* CatEndTeleport_POS;                                                 // 0x03C8 (size: 0x8)
    class AActor* CatEndJump_POS;                                                     // 0x03D0 (size: 0x8)
    bool EndingCineStart;                                                             // 0x03D8 (size: 0x1)
    class AActor* CatPosOnTruck;                                                      // 0x03E0 (size: 0x8)
    class ABP_HKPlayerCameraManager_C* camera_Manager;                                // 0x03E8 (size: 0x8)
    bool Test_EndingCine;                                                             // 0x03F0 (size: 0x1)
    class ASEQ_EndingMetroInGame_C* SEQ_EndingMetro;                                  // 0x03F8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* cameraSpline_PlanOpenTruck;                  // 0x0400 (size: 0x8)
    float DistanceHysteresis;                                                         // 0x0408 (size: 0x4)
    class ABP_SplineCameraCine_Simple_C* cameraSpline_PlanJumpOnTruck;                // 0x0410 (size: 0x8)
    class AActor* TruckTargetExit;                                                    // 0x0418 (size: 0x8)
    class AActor* TruckTargetStartPursuit;                                            // 0x0420 (size: 0x8)
    class AActor* Sentinel_RageQuitZone;                                              // 0x0428 (size: 0x8)
    bool ExteriorSentinel_Spawn;                                                      // 0x0430 (size: 0x1)
    TArray<TSoftObjectPtr<UWorld>> Preloaded Levels;                                  // 0x0438 (size: 0x10)
    TArray<FName> Transition Groups;                                                  // 0x0448 (size: 0x10)
    bool CheckpointExitPursuit;                                                       // 0x0458 (size: 0x1)
    bool MoveCatForCine;                                                              // 0x0459 (size: 0x1)
    float DistanceToTarget;                                                           // 0x045C (size: 0x4)
    FVector CatOnTruckRailLocation;                                                   // 0x0460 (size: 0xC)
    bool CanJumpOnTruckForCine;                                                       // 0x046C (size: 0x1)
    class AActor* NonAggressiveZone;                                                  // 0x0470 (size: 0x8)
    FName StreamGroupToDeactivate;                                                    // 0x0478 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA943382B0();
    void Tick_6246EF4646E19036986D72BA943382B0(float Ratio);
    void Complete_6246EF4646E19036986D72BAB8528F7A();
    void Tick_6246EF4646E19036986D72BAB8528F7A(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__CatPassTheGateZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__FirstSentinel_TriggerZone_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SecondSentinel_TriggerZone_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__LastSentinel_TriggerZone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnStartSequence();
    void BndEvt__TruckStart_TriggerZone_K2Node_ComponentBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void LogicTrigger();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_5_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Change Sequence();
    void BndEvt__SEQ_ExitFromJailWithTruck_TruckPassDoor_TriggerZone_K2Node_ComponentBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_ExitFromJailWithTruck_Cat_FinishTriggerZone_K2Node_ComponentBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void CINE_JumpOnTruck();
    void CINE_EndTruck();
    void OnStartFromCheckpoint();
    void BndEvt__SEQ_ExitFromJailWithTruck_Sentinel_RageQuitZone_K2Node_ComponentBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_ExitFromJailWithTruck_ExteriorSentinel_TriggerZone_K2Node_ComponentBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BeforePursuit();
    void UpdateCatMove(FVector TargetLocation, float Distance);
    void BndEvt__SEQ_ExitFromJailWithTruck_NonAggressiveZone_K2Node_ComponentBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_ExitFromJailWithTruck_NonAggressiveZone_K2Node_ComponentBoundEvent_11_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void TestEndingCINE();
    void ExecuteUbergraph_SEQ_ExitFromJailWithTruck(int32 EntryPoint);
}; // Size: 0x480

#endif
