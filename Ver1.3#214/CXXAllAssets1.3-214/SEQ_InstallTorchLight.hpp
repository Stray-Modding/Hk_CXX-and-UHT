#ifndef UE4SS_SDK_SEQ_InstallTorchLight_HPP
#define UE4SS_SDK_SEQ_InstallTorchLight_HPP

class ASEQ_InstallTorchLight_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* DialogBox;                                                   // 0x0270 (size: 0x8)
    class ABP_Droid_C* Doc;                                                           // 0x0278 (size: 0x8)
    bool Activate;                                                                    // 0x0280 (size: 0x1)
    class ABP_WindowOneWay_C* Window;                                                 // 0x0288 (size: 0x8)
    class AActor* CatIsBackFromOutside_TriggerZone;                                   // 0x0290 (size: 0x8)
    class AActor* Droid_PosMiddleOfTheRoom;                                           // 0x0298 (size: 0x8)
    class AActor* Droid_PosFrontOfDeskTeleport;                                       // 0x02A0 (size: 0x8)
    class AActor* Droid_PosFrontOfDesk;                                               // 0x02A8 (size: 0x8)
    class AActor* Cat_Pos_0;                                                          // 0x02B0 (size: 0x8)
    class AActor* Cat_Pos_1;                                                          // 0x02B8 (size: 0x8)
    class AActor* Cat_Pos_2;                                                          // 0x02C0 (size: 0x8)
    class AActor* Cat_Pos_3;                                                          // 0x02C8 (size: 0x8)
    class AActor* Cat_Pos_4;                                                          // 0x02D0 (size: 0x8)
    class ACameraActor* Camera_Intro;                                                 // 0x02D8 (size: 0x8)
    class ABP_SplineCameraCine_WithFocal_C* Camera_Install_Travelling;                // 0x02E0 (size: 0x8)
    class ACineCameraActor* Camera_ZoomB12;                                           // 0x02E8 (size: 0x8)
    class ACameraActor* Camera_EndInstall;                                            // 0x02F0 (size: 0x8)
    class APointLight* LightSpark;                                                    // 0x02F8 (size: 0x8)
    int32 Light Loop;                                                                 // 0x0300 (size: 0x4)
    class ABP_ZurgPawn_Leader_C* ZurgToKill;                                          // 0x0308 (size: 0x8)
    class AActor* Drone_Pos0;                                                         // 0x0310 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Camera_Orient_0;                         // 0x0318 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Camera_Orient_3;                         // 0x0320 (size: 0x8)
    class ASEQ_DocCoverCat_C* SEQ_Cover;                                              // 0x0328 (size: 0x8)
    bool FirstDialogIsFinished;                                                       // 0x0330 (size: 0x1)
    bool WaitBeforeInstall;                                                           // 0x0331 (size: 0x1)
    bool InstallDialogIsFinished;                                                     // 0x0332 (size: 0x1)
    TEnumAsByte<InstallTorchlight_State> State;                                       // 0x0333 (size: 0x1)
    bool KillZurgDialogIsFinished;                                                    // 0x0334 (size: 0x1)
    bool GaugeIsEmpty;                                                                // 0x0335 (size: 0x1)
    bool RefillTutoIsDone;                                                            // 0x0336 (size: 0x1)
    class ASEQ_GoToTheSlumWithTorchlight_C* SEQ_GoOutside;                            // 0x0338 (size: 0x8)
    bool GoOutsideDialogIsFinished;                                                   // 0x0340 (size: 0x1)
    class ABP_DocDefluxor_C* Torchlight_InHand;                                       // 0x0348 (size: 0x8)
    class ABP_DocDefluxor_C* Torchlight_OnTable;                                      // 0x0350 (size: 0x8)
    bool ReadyForInstallation;                                                        // 0x0358 (size: 0x1)
    class ASEQ_DOC_Part1_C* SeqDocFirstPart;                                          // 0x0360 (size: 0x8)
    bool CatIsBackFromOutside;                                                        // 0x0368 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0370 (size: 0x8)
    class ABP_Drone_C* Drone;                                                         // 0x0378 (size: 0x8)
    bool Finished;                                                                    // 0x0380 (size: 0x1)
    bool DocTakeTorchlight;                                                           // 0x0381 (size: 0x1)
    bool Seq_CheckpointDone;                                                          // 0x0382 (size: 0x1)
    class ABP_SplineRail_C* SplineRail_OnTable_with_Torchlight;                       // 0x0388 (size: 0x8)
    class ABP_SplineRail_C* SplineRail_OnTable_without_Torchlight;                    // 0x0390 (size: 0x8)
    bool Torchlight_IsOnTable;                                                        // 0x0398 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA368D8711();
    void Tick_6246EF4646E19036986D72BA368D8711(float Ratio);
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ChangeState();
    void OnStartSequence();
    void BndEvt__CatIsBackFromOutside_TriggerZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_InstallTorchLight_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_InstallTorchLight(int32 EntryPoint);
}; // Size: 0x399

#endif
