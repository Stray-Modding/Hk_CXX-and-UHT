#ifndef UE4SS_SDK_BP_TruckFollowSpline_HPP
#define UE4SS_SDK_BP_TruckFollowSpline_HPP

class ABP_TruckFollowSpline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Truck_Chassis;                                               // 0x0230 (size: 0x8)
    class UBoxComponent* Truck_BumperR;                                               // 0x0238 (size: 0x8)
    class UBoxComponent* Truck_BumperL;                                               // 0x0240 (size: 0x8)
    class UBoxComponent* Truck_Tarpin;                                                // 0x0248 (size: 0x8)
    class UBoxComponent* Truck_cockpit;                                               // 0x0250 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0258 (size: 0x8)
    class USceneComponent* FX_WheelL;                                                 // 0x0260 (size: 0x8)
    class USceneComponent* FX_WheelR;                                                 // 0x0268 (size: 0x8)
    class UAudioComponent* truck_02_driving_acceleration_loop;                        // 0x0270 (size: 0x8)
    class UAudioComponent* truck_02_driving_idle;                                     // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Lock1;                                                // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Lock;                                                 // 0x0288 (size: 0x8)
    class USceneComponent* AttachRail;                                                // 0x0290 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0298 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x02A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B0 (size: 0x8)
    class UBoxComponent* BackRailCollision;                                           // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Truck_Tarp1;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Truck_Tarp;                                           // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02D0 (size: 0x8)
    class UBoxComponent* UnderTruck;                                                  // 0x02D8 (size: 0x8)
    class UBoxComponent* RWheel_Col;                                                  // 0x02E0 (size: 0x8)
    class UBoxComponent* LWheel_Col;                                                  // 0x02E8 (size: 0x8)
    class UBoxComponent* FrontWheel_Col;                                              // 0x02F0 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x02F8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Cockpit;                                              // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Front_Bumper;                                         // 0x0310 (size: 0x8)
    class USpotLightComponent* LightL;                                                // 0x0318 (size: 0x8)
    class USpotLightComponent* LightR;                                                // 0x0320 (size: 0x8)
    class USceneComponent* Scene_Bumper_R;                                            // 0x0328 (size: 0x8)
    class USceneComponent* Scene_Bumper_L;                                            // 0x0330 (size: 0x8)
    class USceneComponent* Gameplay_Truck;                                            // 0x0338 (size: 0x8)
    class USkeletalMeshComponent* SKM_Truck_Rig;                                      // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Guidon;                                               // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Wheel_Front;                                          // 0x0350 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0358 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Scaffold_WoodPlank_b;                                 // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Bumper_L;                                             // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Bumper_R;                                             // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Attach_Bumper_L;                                      // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Attach_Bumper_R;                                      // 0x0388 (size: 0x8)
    class USpringFloat_C* TransZ;                                                     // 0x0390 (size: 0x8)
    class USpringFloat_C* RotY;                                                       // 0x0398 (size: 0x8)
    class USpringFloat_C* RotX;                                                       // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Wheel_R;                                              // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* Wheel_L;                                              // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Door_R;                                               // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Door_L;                                               // 0x03C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03C8 (size: 0x8)
    float Timer;                                                                      // 0x03D0 (size: 0x4)
    class ABP_MovingSplineRail_C* MovingSpline;                                       // 0x03D8 (size: 0x8)
    float Speed;                                                                      // 0x03E0 (size: 0x4)
    float Acceleration;                                                               // 0x03E4 (size: 0x4)
    float SpeedTarget;                                                                // 0x03E8 (size: 0x4)
    float Offset;                                                                     // 0x03EC (size: 0x4)
    class USplineComponent* Spline;                                                   // 0x03F0 (size: 0x8)
    class AActor* SplineToFollow;                                                     // 0x03F8 (size: 0x8)
    float centripete;                                                                 // 0x0400 (size: 0x4)
    FVector InitRelativeLoc;                                                          // 0x0404 (size: 0xC)
    float WheelSpeed;                                                                 // 0x0410 (size: 0x4)
    class AActor* TargetOnSpline;                                                     // 0x0418 (size: 0x8)
    float TargetDistance;                                                             // 0x0420 (size: 0x4)
    float CurrentDistance;                                                            // 0x0424 (size: 0x4)
    float RadiusApprochBrake;                                                         // 0x0428 (size: 0x4)
    bool Brake;                                                                       // 0x042C (size: 0x1)
    float AccelerationFactor;                                                         // 0x0430 (size: 0x4)
    float DistanceToTarget;                                                           // 0x0434 (size: 0x4)
    float SpeedBeforeBrake;                                                           // 0x0438 (size: 0x4)
    float SpeedForward;                                                               // 0x043C (size: 0x4)
    float SpeedBackward;                                                              // 0x0440 (size: 0x4)
    bool CatOnTruck;                                                                  // 0x0444 (size: 0x1)
    bool CatNeedToBeOnTruckToMove;                                                    // 0x0445 (size: 0x1)
    FRotator InitGuidonRotator;                                                       // 0x0448 (size: 0xC)
    class ABP_Droid_C* Droid;                                                         // 0x0458 (size: 0x8)
    class UMaterialInstanceDynamic* BrakeMaterial;                                    // 0x0460 (size: 0x8)
    class UMaterialInstanceDynamic* LightMaterial;                                    // 0x0468 (size: 0x8)
    FRotator InitFrontBumperRotator;                                                  // 0x0470 (size: 0xC)
    bool DroidIsInCar;                                                                // 0x047C (size: 0x1)
    class AActor* SequenceToTrigger;                                                  // 0x0480 (size: 0x8)
    int32 NumberScratch;                                                              // 0x0488 (size: 0x4)
    bool GameplayTruck;                                                               // 0x048C (size: 0x1)
    FLookAtData Look at Data;                                                         // 0x0490 (size: 0x38)
    class ABP_CatPawn_C* cat;                                                         // 0x04C8 (size: 0x8)
    bool isBackRailCollision;                                                         // 0x04D0 (size: 0x1)
    bool Debug;                                                                       // 0x04D1 (size: 0x1)
    float Distance;                                                                   // 0x04D4 (size: 0x4)
    float Time to accelerate;                                                         // 0x04D8 (size: 0x4)
    class ABP_TruckKey_C* Key;                                                        // 0x04E0 (size: 0x8)
    float SpeedRatio;                                                                 // 0x04E8 (size: 0x4)
    bool BurningWheel;                                                                // 0x04EC (size: 0x1)
    bool JumpDisableOnRail;                                                           // 0x04ED (size: 0x1)
    bool PushJump;                                                                    // 0x04EE (size: 0x1)
    bool LookAtCat;                                                                   // 0x04EF (size: 0x1)
    class UParticleSystemComponent* FX_DustWheelR;                                    // 0x04F0 (size: 0x8)
    class UParticleSystemComponent* FX_DustWheelL;                                    // 0x04F8 (size: 0x8)
    bool CineEndMode;                                                                 // 0x0500 (size: 0x1)

    void GetBackRailComponent(class USplineRailComponent*& SplineRail);
    void SetTarget(class AActor* TargetOnSpline);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void Attach_Rail();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void EnterCar(class ABP_Droid_C* Droid);
    void ShowTruckRig(bool Show);
    void ShowGameplayTruck(bool Show);
    void ActivateGameplayTruck();
    void sfx motor off();
    void sfx motor on();
    void Turn Light(bool OnOff);
    void ActivateBackRailCollision();
    void DeactivateBackRailCollision();
    void NeedBackRailCollision(bool Actif);
    void Move Truck();
    void Cockpit Update();
    void Rear Bumper Update();
    void Wheel Update();
    void Droid Behavior();
    void Speed Update();
    void Brake Light();
    void Guidon Update();
    void Instant EnterCar(class ABP_Droid_C* Droid);
    void UpdateMotorSound();
    void FX_Update();
    void Init_FX();
    void SetCineMode();
    void BndEvt__BP_TruckFollowSpline_Save_K2Node_ComponentBoundEvent_2_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void UpdateForcefeedback();
    void Start Feedback();
    void Stop Feedback();
    void ExecuteUbergraph_BP_TruckFollowSpline(int32 EntryPoint);
}; // Size: 0x501

#endif
