#ifndef UE4SS_SDK_Seq_JumpOnDroid_HPP
#define UE4SS_SDK_Seq_JumpOnDroid_HPP

class ASeq_JumpOnDroid_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UDebugInputComponent* DebugInput;                                           // 0x0278 (size: 0x8)
    class ABP_MovingSplineRail_C* SplineRail;                                         // 0x0280 (size: 0x8)
    class ABP_Droid_C* Clementine;                                                    // 0x0288 (size: 0x8)
    class AActor* Clementine_TryOpenDoor_POS;                                         // 0x0290 (size: 0x8)
    class AActor* Clementine_LookAtBrick_POS;                                         // 0x0298 (size: 0x8)
    class AActor* Clementine_TakeBrick_POS;                                           // 0x02A0 (size: 0x8)
    class AActor* Clementine_Throw_POS;                                               // 0x02A8 (size: 0x8)
    class AActor* Clementine_Jump_POS;                                                // 0x02B0 (size: 0x8)
    class AActor* Clementine_WaitDoorOpen_POS;                                        // 0x02B8 (size: 0x8)
    class AActor* Clementine_DoorOpen_POS;                                            // 0x02C0 (size: 0x8)
    bool Done;                                                                        // 0x02C8 (size: 0x1)
    bool Activate;                                                                    // 0x02C9 (size: 0x1)
    class ABP_DoorJail_C* Door;                                                       // 0x02D0 (size: 0x8)
    class ABP_BrickPushable_C* BrickFrottable;                                        // 0x02D8 (size: 0x8)
    class AActor* BrickToTake;                                                        // 0x02E0 (size: 0x8)
    bool WindowIsBroken;                                                              // 0x02E8 (size: 0x1)
    class ADestructibleActor* destructible mesh;                                      // 0x02F0 (size: 0x8)
    class ABP_SplineRail_C* SplineRail_Window;                                        // 0x02F8 (size: 0x8)
    bool DroidLookTarget;                                                             // 0x0300 (size: 0x1)
    class AActor* LookAtTarget;                                                       // 0x0308 (size: 0x8)
    bool CatCanJumpOnTheHead;                                                         // 0x0310 (size: 0x1)
    class ADial_Clementine_EscapeJail_C* dial_clementine;                             // 0x0318 (size: 0x8)
    class AActor* CatIsReadyToJumpZone;                                               // 0x0320 (size: 0x8)
    bool CatPassTheWindow;                                                            // 0x0328 (size: 0x1)
    bool Crouch;                                                                      // 0x0329 (size: 0x1)
    bool CatIsReadyToJump;                                                            // 0x032A (size: 0x1)
    class AActor* LookAtTarget_Trash;                                                 // 0x0330 (size: 0x8)
    class AActor* LookAtTarget_Brick;                                                 // 0x0338 (size: 0x8)
    class AActor* LookAtTarget_Glass;                                                 // 0x0340 (size: 0x8)
    class AActor* LookAtTarget_Switch;                                                // 0x0348 (size: 0x8)
    class AActor* PuzzleZone;                                                         // 0x0350 (size: 0x8)
    bool DroidIsAtDoor;                                                               // 0x0358 (size: 0x1)
    class ABP_DoorWindowBase_C* B12DoorNoReturn;                                      // 0x0360 (size: 0x8)
    class ASeq_DroidCourtYard_C* SEQ_Courtyard;                                       // 0x0368 (size: 0x8)
    bool CatISInPuzzleZone;                                                           // 0x0370 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0378 (size: 0x8)
    class ABP_SwitchWithJump_C* SWITCH;                                               // 0x0380 (size: 0x8)
    class ABP_CameraZone_C* CameraZone;                                               // 0x0388 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* PlanCam_Door_0;                              // 0x0390 (size: 0x8)
    TArray<class ABP_SentinelAI_C*> SentinelsToDeactivate;                            // 0x0398 (size: 0x10)
    bool CatIsOnHead;                                                                 // 0x03A8 (size: 0x1)

    void lookat(bool DroidLookTarget, class AActor* LookAtTarget);
    void Complete_6246EF4646E19036986D72BA1C35A744();
    void Tick_6246EF4646E19036986D72BA1C35A744(float Ratio);
    void Complete_6246EF4646E19036986D72BA0FA6474C();
    void Tick_6246EF4646E19036986D72BA0FA6474C(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void OnStartSequence();
    void LogicTrigger();
    void BndEvt__destructible mesh_K2Node_ComponentBoundEvent_2_ActorFractureSignature__DelegateSignature(const FVector& HitPoint, const FVector& HitDirection);
    void BndEvt__OnTheOtherSideOfTheDoor_TriggerZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void StandUp();
    void CrouchDown();
    void BndEvt__OnTheOtherSideOfTheDoor_TriggerZone_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__PuzzleZone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__PuzzleZone_K2Node_ComponentBoundEvent_6_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void CancelCrouch();
    void TakeBrickInHand();
    void BndEvt__Seq_JumpOnDroid_m_streamingComponent_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CameraBlendIn();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_Seq_JumpOnDroid(int32 EntryPoint);
}; // Size: 0x3A9

#endif
