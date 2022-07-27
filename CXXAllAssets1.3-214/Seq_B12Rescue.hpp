#ifndef UE4SS_SDK_Seq_B12Rescue_HPP
#define UE4SS_SDK_Seq_B12Rescue_HPP

class ASeq_B12Rescue_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0278 (size: 0x8)
    TEnumAsByte<Enum_B12Rescue> Sequence_B12Zone;                                     // 0x0280 (size: 0x1)
    class ABP_Droid_C* Clementine;                                                    // 0x0288 (size: 0x8)
    bool Cat_CineB12Checkpoint;                                                       // 0x0290 (size: 0x1)
    class AActor* Cat_StartCineB12;                                                   // 0x0298 (size: 0x8)
    class AActor* Cat_TPOnSpline;                                                     // 0x02A0 (size: 0x8)
    class AActor* Clem_StartCineB12;                                                  // 0x02A8 (size: 0x8)
    class AActor* Clementine_OPenFirstDoor_POS;                                       // 0x02B0 (size: 0x8)
    class AActor* Clementine_OpenDoorPos;                                             // 0x02B8 (size: 0x8)
    class AActor* Clementine_StairSpline_01;                                          // 0x02C0 (size: 0x8)
    class AActor* Clementine_StairSpline_02;                                          // 0x02C8 (size: 0x8)
    class AActor* Clementine_DownStair_POS;                                           // 0x02D0 (size: 0x8)
    bool Activate;                                                                    // 0x02D8 (size: 0x1)
    class ABP_SplineCameraCine_Simple_C* Camera_Plan_Hall;                            // 0x02E0 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* camera_Plan_B12;                             // 0x02E8 (size: 0x8)
    bool CatInZone;                                                                   // 0x02F0 (size: 0x1)
    class AActor* B12;                                                                // 0x02F8 (size: 0x8)
    class AActor* CatCheckpointHall;                                                  // 0x0300 (size: 0x8)
    class ABP_DoorJail_CellZone_C* DoorStair;                                         // 0x0308 (size: 0x8)
    bool DroidLookTarget;                                                             // 0x0310 (size: 0x1)
    class AActor* CheckPointAfterDoor;                                                // 0x0318 (size: 0x8)
    bool CatPassTheDoor;                                                              // 0x0320 (size: 0x1)
    bool ClementineShowDirToB12;                                                      // 0x0321 (size: 0x1)
    class AActor* ShowDirZone;                                                        // 0x0328 (size: 0x8)
    bool CatIsInShowDirZone;                                                          // 0x0330 (size: 0x1)
    class AActor* DeactivateZone;                                                     // 0x0338 (size: 0x8)
    bool CatIsInDeactivateZone;                                                       // 0x0340 (size: 0x1)
    class AActor* LookAtTarget;                                                       // 0x0348 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0350 (size: 0x8)
    bool CatIsInDownStair;                                                            // 0x0358 (size: 0x1)
    class ABP_SplineCameraCine_Simple_C* camera_Plan_DownStairSentinel;               // 0x0360 (size: 0x8)
    class AActor* TargetSentinel;                                                     // 0x0368 (size: 0x8)
    class AActor* Cat_DownStair_POS;                                                  // 0x0370 (size: 0x8)
    bool DroidIsInDownStair;                                                          // 0x0378 (size: 0x1)
    class ABP_SplineCameraCine_Simple_C* camera_Plan_DownStairLookAt;                 // 0x0380 (size: 0x8)
    class AActor* Clementine_LookAround_POS;                                          // 0x0388 (size: 0x8)
    class AActor* LookAtTarget_Grillage;                                              // 0x0390 (size: 0x8)
    class AActor* LookAtTarget_Hall;                                                  // 0x0398 (size: 0x8)
    class AActor* LookAtTarget_Courtyard;                                             // 0x03A0 (size: 0x8)
    bool CatWalkThroughCheckPoint;                                                    // 0x03A8 (size: 0x1)
    class AActor* CatCheckpointHall_2;                                                // 0x03B0 (size: 0x8)
    class AActor* Cat_CineHall_POS;                                                   // 0x03B8 (size: 0x8)
    class AActor* Cat_CineHall_Wait_LookAt;                                           // 0x03C0 (size: 0x8)
    class AActor* Cat_ObserveB12_POS;                                                 // 0x03C8 (size: 0x8)
    class AActor* camera_FrontCat;                                                    // 0x03D0 (size: 0x8)
    bool CatWait;                                                                     // 0x03D8 (size: 0x1)
    class AActor* camera_FrontCat_2;                                                  // 0x03E0 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* camera_Plan_CatApproachB12;                  // 0x03E8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* camera_Plan_ClementineLookBehind;            // 0x03F0 (size: 0x8)
    class AActor* Cat_CallClementine_POS;                                             // 0x03F8 (size: 0x8)
    class AActor* Cat_TeleportBeforeSeeB12_POS;                                       // 0x0400 (size: 0x8)
    class AActor* Clementine_MoveToB12_POS;                                           // 0x0408 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* camera_LookBehind;                           // 0x0410 (size: 0x8)
    class AActor* Clementine_LookToTheCourtyard_POS;                                  // 0x0418 (size: 0x8)
    class AActor* CatIsDownStair_Zone;                                                // 0x0420 (size: 0x8)
    class AActor* Sentinel_Cine;                                                      // 0x0428 (size: 0x8)
    float SpeedModifier;                                                              // 0x0430 (size: 0x4)
    float SpeedModifier_Current;                                                      // 0x0434 (size: 0x4)
    class AActor* CatEndCine_POS;                                                     // 0x0438 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* camera_Plan_ClementineHide;                  // 0x0440 (size: 0x8)
    FTransform Clem_StartHide_Transform;                                              // 0x0450 (size: 0x30)
    class AActor* Clementine_OpenFirstDoor_ReversedRoot_POS;                          // 0x0480 (size: 0x8)
    bool CatWalkThroughCheckPoint_2;                                                  // 0x0488 (size: 0x1)
    class AActor* Clementine_OpenFirstDoor_TP_POS;                                    // 0x0490 (size: 0x8)
    bool Clem_CineB12Checkpoint;                                                      // 0x0498 (size: 0x1)
    class ABP_OrientCameraThirdPersonZone_C* CameraOrient_Door;                       // 0x04A0 (size: 0x8)
    class AActor* LookAtTarget_ClementineEnd;                                         // 0x04A8 (size: 0x8)
    bool Clem_LookAtCourtyardExit;                                                    // 0x04B0 (size: 0x1)
    bool AdjustCatSpeed;                                                              // 0x04B1 (size: 0x1)
    class AActor* AdjustCatSpeedZone;                                                 // 0x04B8 (size: 0x8)
    bool CatIsInAdjustZone;                                                           // 0x04C0 (size: 0x1)
    class UAudioComponent* key stuck sfx;                                             // 0x04C8 (size: 0x8)
    bool catShowB12Started;                                                           // 0x04D0 (size: 0x1)
    bool StopMeow;                                                                    // 0x04D1 (size: 0x1)
    class UCameraComponent* Target;                                                   // 0x04D8 (size: 0x8)
    class AActor* camera_LookBehind_2;                                                // 0x04E0 (size: 0x8)
    class UAnimSequence* Animation;                                                   // 0x04E8 (size: 0x8)
    bool CheckpointDone;                                                              // 0x04F0 (size: 0x1)
    class AActor* CollisionClem;                                                      // 0x04F8 (size: 0x8)
    bool StartCineDownStair;                                                          // 0x0500 (size: 0x1)
    bool MoveToDoorDone;                                                              // 0x0501 (size: 0x1)
    bool CancelMoveTo;                                                                // 0x0502 (size: 0x1)
    bool FirstMoveDone;                                                               // 0x0503 (size: 0x1)
    bool SecondMoveDone;                                                              // 0x0504 (size: 0x1)
    bool ThirdMoveStart;                                                              // 0x0505 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA20BFA89E();
    void Tick_6246EF4646E19036986D72BA20BFA89E(float Ratio);
    void Complete_6246EF4646E19036986D72BAC3C4EDBA();
    void Tick_6246EF4646E19036986D72BAC3C4EDBA(float Ratio);
    void Complete_6246EF4646E19036986D72BA135CAEEE();
    void Tick_6246EF4646E19036986D72BA135CAEEE(float Ratio);
    void Complete_6246EF4646E19036986D72BA9D62D3E6();
    void Tick_6246EF4646E19036986D72BA9D62D3E6(float Ratio);
    void Complete_6246EF4646E19036986D72BA66A2A8C6();
    void Tick_6246EF4646E19036986D72BA66A2A8C6(float Ratio);
    void Complete_6246EF4646E19036986D72BA4A5D017C();
    void Tick_6246EF4646E19036986D72BA4A5D017C(float Ratio);
    void Complete_6246EF4646E19036986D72BAC9BB771A();
    void Tick_6246EF4646E19036986D72BAC9BB771A(float Ratio);
    void OnStartSequence();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CheckPointAfterDoor_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void Change_Sequence();
    void BndEvt__ShowDirZone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__DeactivateZone_K2Node_ComponentBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__ShowDirZone_K2Node_ComponentBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_6_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CineDEBUG();
    void BndEvt__Seq_B12Rescue_StartCineZone_K2Node_ComponentBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Seq_B12Rescue_StartCineB12_K2Node_ComponentBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void CINE_CatShowB12();
    void BndEvt__Seq_B12Rescue_CatIsDownStair_Zone_K2Node_ComponentBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Seq_B12Rescue_CatCheckpointHall_2_K2Node_ComponentBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Seq_B12Rescue_Clem_StartCineB12_K2Node_ComponentBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Seq_B12Rescue_Cat_StartCineB12_K2Node_ComponentBoundEvent_12_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void Adjust Cat Speed();
    void BndEvt__Seq_B12Rescue_AdjustCatSpeedZone_K2Node_ComponentBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__Seq_B12Rescue_AdjustCatSpeedZone_K2Node_ComponentBoundEvent_14_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnStartFromCheckpoint();
    void ExecuteUbergraph_Seq_B12Rescue(int32 EntryPoint);
}; // Size: 0x506

#endif
