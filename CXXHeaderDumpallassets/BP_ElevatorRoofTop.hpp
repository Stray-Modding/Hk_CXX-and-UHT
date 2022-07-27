#ifndef UE4SS_SDK_BP_ElevatorRoofTop_HPP
#define UE4SS_SDK_BP_ElevatorRoofTop_HPP

class ABP_ElevatorRoofTop_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* StoolBlock_1;                                                // 0x0230 (size: 0x8)
    class UBoxComponent* StoolBlock;                                                  // 0x0238 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint15;                               // 0x0240 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint14;                               // 0x0248 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint13;                               // 0x0250 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint12;                               // 0x0258 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint11;                               // 0x0260 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint10;                               // 0x0268 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint9;                                // 0x0270 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint8;                                // 0x0278 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint7;                                // 0x0280 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint6;                                // 0x0288 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint5;                                // 0x0290 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint4;                                // 0x0298 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint3;                                // 0x02A0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint2;                                // 0x02A8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint1;                                // 0x02B0 (size: 0x8)
    class UZurgAttackPointManagerComponent* ZurgAttackPointManager;                   // 0x02B8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint;                                 // 0x02C0 (size: 0x8)
    class USceneComponent* AttackPoints;                                              // 0x02C8 (size: 0x8)
    class USceneComponent* SwitchAttach;                                              // 0x02D0 (size: 0x8)
    class USceneComponent* MovingSplineAttach;                                        // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Chair_02;                                             // 0x02E0 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02E8 (size: 0x8)
    class UBoxComponent* NoJump;                                                      // 0x02F0 (size: 0x8)
    class UAudioComponent* big_elevator_stop_01;                                      // 0x02F8 (size: 0x8)
    class UAudioComponent* big_elevator_amb_loop_01;                                  // 0x0300 (size: 0x8)
    class UAudioComponent* big_elevator_loop_01;                                      // 0x0308 (size: 0x8)
    class UAudioComponent* big_elevator_start_01;                                     // 0x0310 (size: 0x8)
    class UBoxComponent* Box7;                                                        // 0x0318 (size: 0x8)
    class UBoxComponent* Box6;                                                        // 0x0320 (size: 0x8)
    class UBoxComponent* CatIsInsideZone;                                             // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_13;                                       // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_09;                                      // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_12;                                       // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_14;                                       // 0x0348 (size: 0x8)
    class UBoxComponent* Box5;                                                        // 0x0350 (size: 0x8)
    class UBoxComponent* Box4;                                                        // 0x0358 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0360 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0368 (size: 0x8)
    class UBoxComponent* Ground;                                                      // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0378 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0380 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0388 (size: 0x8)
    float Timeline_0_NewTrack_0_51062FCC47144AFBEB2A96975F9FC175;                     // 0x0390 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_51062FCC47144AFBEB2A96975F9FC175; // 0x0394 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0398 (size: 0x8)
    bool Down;                                                                        // 0x03A0 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x03B0 (size: 0x30)
    FTransform CurrentTransform;                                                      // 0x03E0 (size: 0x30)
    FTransform Offset;                                                                // 0x0410 (size: 0x30)
    float MovingDownDuration;                                                         // 0x0440 (size: 0x4)
    bool Triggered;                                                                   // 0x0444 (size: 0x1)
    float MovingUpDuration;                                                           // 0x0448 (size: 0x4)
    float DownRatio;                                                                  // 0x044C (size: 0x4)
    TArray<class AActor*> Lights;                                                     // 0x0450 (size: 0x10)
    bool CatIsInside;                                                                 // 0x0460 (size: 0x1)
    bool IsMoving;                                                                    // 0x0461 (size: 0x1)
    class ABP_SwitchTrigger_C* SwitchTrigger;                                         // 0x0468 (size: 0x8)
    class ABP_MovingSplineRail_C* SplineRail;                                         // 0x0470 (size: 0x8)
    class ABP_MovingSplineRail_C* SplineRail_Chair;                                   // 0x0478 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* Cam_Modifier_Move;                     // 0x0480 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* Cam_Modifier_Static;                   // 0x0488 (size: 0x8)
    TArray<class USceneComponent*> AttackPointsOnElevator;                            // 0x0490 (size: 0x10)
    int32 AttackCount_iterator;                                                       // 0x04A0 (size: 0x4)
    int32 AttackCount;                                                                // 0x04A4 (size: 0x4)
    float Timer;                                                                      // 0x04A8 (size: 0x4)
    float UpdateTime;                                                                 // 0x04AC (size: 0x4)
    bool Debug;                                                                       // 0x04B0 (size: 0x1)
    bool MoveUp;                                                                      // 0x04B1 (size: 0x1)

    void GetDownRatio(float& openRatio);
    void IsDown(bool& Open);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__CatIsInsideZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatIsInsideZone_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void start sfx();
    void stop sfx();
    void TriggerMusic();
    void Trigger Lights();
    void Force feedback On joystick();
    void DeactivateElevator();
    void MoveElevator(float openRatio);
    void Attach SplineRail();
    void Trigger SFX();
    void BndEvt__BP_ElevatorRoofTop_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void EnableSpline(bool _enabled);
    void UpdateForcefeedback();
    void OnZurgAttached(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    void ActivateAttackPoints(bool _active);
    void UpdateAttackPoints();
    void SHOW_DEBUG();
    void MoveDown();
    void ExecuteUbergraph_BP_ElevatorRoofTop(int32 EntryPoint);
}; // Size: 0x4B2

#endif
