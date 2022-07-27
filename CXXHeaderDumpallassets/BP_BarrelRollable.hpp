#ifndef UE4SS_SDK_BP_BarrelRollable_HPP
#define UE4SS_SDK_BP_BarrelRollable_HPP

class ABP_BarrelRollable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UBoxComponent* BlockForwardSide1;                                           // 0x0248 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0250 (size: 0x8)
    class UBoxComponent* CatIsOutsideSide2;                                           // 0x0258 (size: 0x8)
    class UBoxComponent* CatIsOutsideSide1;                                           // 0x0260 (size: 0x8)
    class UStaticMeshComponent* WalkableCollision;                                    // 0x0268 (size: 0x8)
    class UBoxComponent* BlockBack;                                                   // 0x0270 (size: 0x8)
    class UBoxComponent* BlockBackSide;                                               // 0x0278 (size: 0x8)
    class UBoxComponent* BlockForwardSide;                                            // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0288 (size: 0x8)
    class UBoxComponent* CatIsInBarrel_Zone;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* barrel_roll_loop_01;                                       // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A0 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* BarrelMesh;                                                // 0x02B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    bool CatIsInBarrel;                                                               // 0x02C8 (size: 0x1)
    float Speed;                                                                      // 0x02CC (size: 0x4)
    float SpeedDot;                                                                   // 0x02D0 (size: 0x4)
    float SpeedNormalized;                                                            // 0x02D4 (size: 0x4)
    float Radius;                                                                     // 0x02D8 (size: 0x4)
    FVector Offset;                                                                   // 0x02DC (size: 0xC)
    float CurrentOffset;                                                              // 0x02E8 (size: 0x4)
    bool Collide;                                                                     // 0x02EC (size: 0x1)
    bool CollideGround;                                                               // 0x02ED (size: 0x1)
    bool CollideForward;                                                              // 0x02EE (size: 0x1)
    bool CollideBack;                                                                 // 0x02EF (size: 0x1)
    bool Cat is OnRail;                                                               // 0x02F0 (size: 0x1)
    bool Emit Sound;                                                                  // 0x02F1 (size: 0x1)
    float JumpOnRailSpeedFactor;                                                      // 0x02F4 (size: 0x4)
    bool CatPush;                                                                     // 0x02F8 (size: 0x1)
    float PushSpeedFactor;                                                            // 0x02FC (size: 0x4)
    float PushSpeedFactorOnRail;                                                      // 0x0300 (size: 0x4)
    TArray<class AActor*> ActorToIgnore;                                              // 0x0308 (size: 0x10)
    bool IsDynamicObstacle;                                                           // 0x0318 (size: 0x1)
    bool Debug;                                                                       // 0x0319 (size: 0x1)
    class ACatPawn* cat;                                                              // 0x0320 (size: 0x8)
    class UABP_Cat_New_C* ABP_Cat;                                                    // 0x0328 (size: 0x8)
    float AnimationFadeAlpha;                                                         // 0x0330 (size: 0x4)
    bool DoUpdateAnimation;                                                           // 0x0334 (size: 0x1)
    float SoundSpeedThreshold;                                                        // 0x0338 (size: 0x4)
    bool NeedToUpdate;                                                                // 0x033C (size: 0x1)
    float CatIsForward;                                                               // 0x0340 (size: 0x4)
    float OffsetIsForward;                                                            // 0x0344 (size: 0x4)
    TArray<class ABP_LaserBeam_C*> Laser;                                             // 0x0348 (size: 0x10)
    FBP_BarrelRollable_CEnterBarrel EnterBarrel;                                      // 0x0358 (size: 0x10)
    void EnterBarrel();
    FBP_BarrelRollable_CExitBarrel ExitBarrel;                                        // 0x0368 (size: 0x10)
    void ExitBarrel();

    void NeedToUpdateBarrel();
    void CalculateAndApplyOffset();
    void ApplyRotation();
    void Update Collision();
    void Complete_6246EF4646E19036986D72BADCE8ADCB();
    void Tick_6246EF4646E19036986D72BADCE8ADCB(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CatIsOutsideSide1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatIsOutsideSide1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CatIsOutsideSide2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CatIsOutsideSide2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_6_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ShowDebug();
    void UpdatePosition_whenCatIsInside();
    void UpdatePosition_WhenCatIsOutside();
    void Precompute Speed and offset();
    void UpdateAnimation(float dt);
    void Update Navmesh Obstacle();
    void Update Sound();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void AddImpulseWhenJumpIn();
    void AddImpulseWhenJumpOut();
    void ActivateDynamicObstacle();
    void DeactivateDynamicObstacle();
    void Update ForceFeedback(float Intensity);
    void ActivateSplineRail(bool _enabled);
    void ExecuteUbergraph_BP_BarrelRollable(int32 EntryPoint);
    void ExitBarrel__DelegateSignature();
    void EnterBarrel__DelegateSignature();
}; // Size: 0x378

#endif
