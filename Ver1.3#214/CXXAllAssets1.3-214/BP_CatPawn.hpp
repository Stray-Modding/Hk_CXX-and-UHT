#ifndef UE4SS_SDK_BP_CatPawn_HPP
#define UE4SS_SDK_BP_CatPawn_HPP

class ABP_CatPawn_C : public ACatPawn
{
    class UForceFeedbackComponent* ForceFeedback;                                     // 0x37B8 (size: 0x8)
    class UAudioComponent* PS5VibrationSound_ZurkSucking;                             // 0x37C0 (size: 0x8)
    class UAudioComponent* PS5Vibration_ZurkSucking;                                  // 0x37C8 (size: 0x8)
    class UAudioComponent* PS5Vibration_ZurkGrab;                                     // 0x37D0 (size: 0x8)
    class UAudioComponent* PS5Vibration_Jump;                                         // 0x37D8 (size: 0x8)
    class UArrowComponent* OnDeathDroneSocket;                                        // 0x37E0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x37E8 (size: 0x8)
    class UAudioComponent* sfx zurg sucking;                                          // 0x37F0 (size: 0x8)
    class USceneComponent* GrabSocket;                                                // 0x37F8 (size: 0x8)
    class UDrawMovementComponent* DrawMovement3;                                      // 0x3800 (size: 0x8)
    class UDrawMovementComponent* DrawMovement2;                                      // 0x3808 (size: 0x8)
    class UDrawMovementComponent* DrawMovement1;                                      // 0x3810 (size: 0x8)
    class UAudioComponent* cat_drift_loop_01;                                         // 0x3818 (size: 0x8)
    class UCapsuleComponent* Capsule1;                                                // 0x3820 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x3828 (size: 0x8)
    class UGFurComponent* GFur;                                                       // 0x3830 (size: 0x8)
    class UArrowComponent* Arrow5;                                                    // 0x3838 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x3840 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x3848 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x3850 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x3858 (size: 0x8)
    class USpringArmComponent* SpringArm1;                                            // 0x3860 (size: 0x8)
    class UPointLightComponent* LightRig4;                                            // 0x3868 (size: 0x8)
    class UPointLightComponent* LightRig3;                                            // 0x3870 (size: 0x8)
    class UPointLightComponent* LightRig2;                                            // 0x3878 (size: 0x8)
    class USphereComponent* Sphere_drone_view_target;                                 // 0x3880 (size: 0x8)
    class USphereComponent* Sphere_drone;                                             // 0x3888 (size: 0x8)
    class UCapsuleComponent* BackLegPhysicCollider;                                   // 0x3890 (size: 0x8)
    class UCapsuleComponent* FrontLegPhysicCollider;                                  // 0x3898 (size: 0x8)
    bool Pilot On/Off;                                                                // 0x38A0 (size: 0x1)
    FVector Pad Input Unfiltered;                                                     // 0x38A4 (size: 0xC)
    float MeowRange;                                                                  // 0x38B0 (size: 0x4)
    bool DisplayMeow;                                                                 // 0x38B4 (size: 0x1)
    FVector Pad Input Direction Smooth;                                               // 0x38B8 (size: 0xC)
    FVector Pad Input Speed Smooth;                                                   // 0x38C4 (size: 0xC)
    float BlendAfterJump;                                                             // 0x38D0 (size: 0x4)
    bool Meowing;                                                                     // 0x38D4 (size: 0x1)
    class UABP_Cat_New_C* ABP;                                                        // 0x38D8 (size: 0x8)
    FVector PadInput for Test Jump Detect;                                            // 0x38E0 (size: 0xC)
    float Time Blend Rotation After Jump;                                             // 0x38EC (size: 0x4)
    float All Collision Average Distance;                                             // 0x38F0 (size: 0x4)
    float All Collision Average Distance Sum;                                         // 0x38F4 (size: 0x4)
    class UCurveFloat* Cat_InputMeshAngleDelta_SpeedRatio;                            // 0x38F8 (size: 0x8)
    class UCurveFloat* SmoothedDirectionAgainstDirection_RotationRatioMultiplier;     // 0x3900 (size: 0x8)
    FSmootherVector InputPreSmoother;                                                 // 0x3908 (size: 0x1C)
    FSmootherFloat AngleSpeedRatioSmoother;                                           // 0x3924 (size: 0xC)
    FSmootherVector SmoothedDirection;                                                // 0x3930 (size: 0x1C)
    bool IsCinematic;                                                                 // 0x394C (size: 0x1)
    float Distance Ratio To Rail Edge for Slowdown;                                   // 0x3950 (size: 0x4)
    float Max Rail length for Slowdown;                                               // 0x3954 (size: 0x4)
    FVector JumpUpBeginLocation;                                                      // 0x3958 (size: 0xC)
    FVector JumpUpEndLocation;                                                        // 0x3964 (size: 0xC)
    FVector JumpDownBeginLocation;                                                    // 0x3970 (size: 0xC)
    FVector JumpDownEndLocation;                                                      // 0x397C (size: 0xC)
    bool HasJumpUp;                                                                   // 0x3988 (size: 0x1)
    bool HasJumpDown;                                                                 // 0x3989 (size: 0x1)
    class UForceFeedbackComponent* ForceFeedback On Hit;                              // 0x3990 (size: 0x8)
    float Life frame+1;                                                               // 0x3998 (size: 0x4)
    class UPostProcessComponent* PostProcess On Hit;                                  // 0x39A0 (size: 0x8)
    class UMaterialBillboardComponent* Smash A Billboard;                             // 0x39A8 (size: 0x8)
    float Pilot_addrotation;                                                          // 0x39B0 (size: 0x4)
    TArray<FVector> Pilot_DirectionsNoCol;                                            // 0x39B8 (size: 0x10)
    float Pilot_DotTraceDirectionPadDirection;                                        // 0x39C8 (size: 0x4)
    FVector Pilot_FinalDirection;                                                     // 0x39CC (size: 0xC)
    float Pilot_DistancetoColRatio_pad;                                               // 0x39D8 (size: 0x4)
    float Pilot_StartTrace;                                                           // 0x39DC (size: 0x4)
    FVector Pilot_TraceDirection;                                                     // 0x39E0 (size: 0xC)
    float Pilot_MinDistanceRatio;                                                     // 0x39EC (size: 0x4)
    float sound drift amount;                                                         // 0x39F0 (size: 0x4)
    FVector DialogLookAtTargetLocation;                                               // 0x39F4 (size: 0xC)
    E_sfx_miaou lastRequestedMeow;                                                    // 0x3A00 (size: 0x1)
    TArray<FVector> Pilot_AllDirections;                                              // 0x3A08 (size: 0x10)
    float Pilot SpeedMultiplier;                                                      // 0x3A18 (size: 0x4)
    bool Custom LookAt On/Off;                                                        // 0x3A1C (size: 0x1)
    FVector CinematicVelocityVector;                                                  // 0x3A20 (size: 0xC)
    float CinematicBlend;                                                             // 0x3A2C (size: 0x4)
    float Cinematic Blend To Gameplay TimeTo90Percent;                                // 0x3A30 (size: 0x4)
    bool HiddenInGameplay;                                                            // 0x3A34 (size: 0x1)
    float TurnHardness;                                                               // 0x3A38 (size: 0x4)
    FDebugFloatHistory DebugFloatGraph;                                               // 0x3A40 (size: 0x20)
    bool RandomControls;                                                              // 0x3A60 (size: 0x1)
    bool OneJump Up and Down;                                                         // 0x3A61 (size: 0x1)
    bool RandomLookAtEnabled;                                                         // 0x3A62 (size: 0x1)
    bool DoRandomLookAt;                                                              // 0x3A63 (size: 0x1)
    FRotator RandomLookAtRotation;                                                    // 0x3A64 (size: 0xC)
    FName LookAtAvailableJumpsID;                                                     // 0x3A70 (size: 0x8)
    class USceneComponent* NewVar_0;                                                  // 0x3A78 (size: 0x8)
    bool OneJump Up;                                                                  // 0x3A80 (size: 0x1)
    bool OneJump Down;                                                                // 0x3A81 (size: 0x1)
    bool OneJump Favor Down;                                                          // 0x3A82 (size: 0x1)
    float closestDangerDistance;                                                      // 0x3A84 (size: 0x4)
    bool IsZurgNearAndAwake;                                                          // 0x3A88 (size: 0x1)
    E_sfx_miaou current miaou;                                                        // 0x3A89 (size: 0x1)
    float miaouDensity;                                                               // 0x3A8C (size: 0x4)
    float lastMiaouRequestTimer;                                                      // 0x3A90 (size: 0x4)
    E_sfx_miaou lastMiaouRequest;                                                     // 0x3A94 (size: 0x1)
    class UCatUsableComponent* GrabbedObject;                                         // 0x3A98 (size: 0x8)
    FBP_CatPawn_COnObjectGrabbed OnObjectGrabbed;                                     // 0x3AA0 (size: 0x10)
    void OnObjectGrabbed(class ABP_CatPawn_C* bpp__Cat__pf, class UCatUsableComponent* bpp__Grabbable__pf);
    FBP_CatPawn_COnObjectDropped OnObjectDropped;                                     // 0x3AB0 (size: 0x10)
    void OnObjectDropped(class ABP_CatPawn_C* bpp__Cat__pf, class UCatUsableComponent* bpp__Grabbable__pf);
    float miaou density;                                                              // 0x3AC0 (size: 0x4)
    int32 number of zurgs attached;                                                   // 0x3AC4 (size: 0x4)
    E_sfx_miaou zoned miaou;                                                          // 0x3AC8 (size: 0x1)
    FVector LastFrameMovementInput;                                                   // 0x3ACC (size: 0xC)
    float DistanceToColl;                                                             // 0x3AD8 (size: 0x4)
    bool CrawlHighTraceHit;                                                           // 0x3ADC (size: 0x1)
    bool CrawlLowTraceHit;                                                            // 0x3ADD (size: 0x1)
    bool CrawlBoxTraceHit;                                                            // 0x3ADE (size: 0x1)
    FHitResult PilotSphereHitResult;                                                  // 0x3AE0 (size: 0x88)
    bool PilotLineHasHit;                                                             // 0x3B68 (size: 0x1)
    TArray<class ACatPawn*> OtherCats;                                                // 0x3B70 (size: 0x10)
    FVector CatSize;                                                                  // 0x3B80 (size: 0xC)
    bool OtherCatRegistered;                                                          // 0x3B8C (size: 0x1)
    FBP_CatPawn_COnZurkEnterGrabbed OnZurkEnterGrabbed;                               // 0x3B90 (size: 0x10)
    void OnZurkEnterGrabbed();
    FBP_CatPawn_COnZurkExitGrabbed OnZurkExitGrabbed;                                 // 0x3BA0 (size: 0x10)
    void OnZurkExitGrabbed();
    bool K2Node_CustomEvent_HasHit_5;                                                 // 0x3BB0 (size: 0x1)
    FHitResult K2Node_CustomEvent_Hit_6;                                              // 0x3BB4 (size: 0x88)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x3C3C (size: 0x10)
    void JoyAsyncTraceSingleDone(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    FHitResult Temp_struct_Variable;                                                  // 0x3C4C (size: 0x88)
    bool Temp_bool_Variable;                                                          // 0x3CD4 (size: 0x1)
    bool K2Node_CustomEvent_HasHit_4;                                                 // 0x3CD5 (size: 0x1)
    FHitResult K2Node_CustomEvent_Hit_5;                                              // 0x3CD8 (size: 0x88)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x3D60 (size: 0x10)
    void JoyAsyncTraceSingleDone(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    FHitResult Temp_struct_Variable_1;                                                // 0x3D70 (size: 0x88)
    bool Temp_bool_Variable_1;                                                        // 0x3DF8 (size: 0x1)
    bool K2Node_CustomEvent_HasHit_3;                                                 // 0x3DF9 (size: 0x1)
    FHitResult K2Node_CustomEvent_Hit_4;                                              // 0x3DFC (size: 0x88)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x3E84 (size: 0x10)
    void JoyAsyncTraceSingleDone(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    FHitResult Temp_struct_Variable_2;                                                // 0x3E94 (size: 0x88)
    bool Temp_bool_Variable_2;                                                        // 0x3F1C (size: 0x1)
    bool K2Node_CustomEvent_HasHit_2;                                                 // 0x3F1D (size: 0x1)
    FHitResult K2Node_CustomEvent_Hit_3;                                              // 0x3F20 (size: 0x88)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x3FA8 (size: 0x10)
    void JoyAsyncTraceSingleDone(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    FHitResult Temp_struct_Variable_3;                                                // 0x3FB8 (size: 0x88)
    bool Temp_bool_Variable_3;                                                        // 0x4040 (size: 0x1)
    bool K2Node_CustomEvent_HasHit_1;                                                 // 0x4041 (size: 0x1)
    FHitResult K2Node_CustomEvent_Hit_2;                                              // 0x4044 (size: 0x88)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x40CC (size: 0x10)
    void JoyAsyncTraceSingleDone(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    FHitResult Temp_struct_Variable_4;                                                // 0x40DC (size: 0x88)
    bool Temp_bool_Variable_4;                                                        // 0x4164 (size: 0x1)
    bool CallFunc_BreakHitResult_bBlockingHit;                                        // 0x4165 (size: 0x1)
    bool CallFunc_BreakHitResult_bInitialOverlap;                                     // 0x4166 (size: 0x1)
    float CallFunc_BreakHitResult_Time;                                               // 0x4168 (size: 0x4)
    float CallFunc_BreakHitResult_Distance;                                           // 0x416C (size: 0x4)
    FVector CallFunc_BreakHitResult_Location;                                         // 0x4170 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactPoint;                                      // 0x417C (size: 0xC)
    FVector CallFunc_BreakHitResult_Normal;                                           // 0x4188 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactNormal;                                     // 0x4194 (size: 0xC)
    class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                         // 0x41A0 (size: 0x8)
    class AActor* CallFunc_BreakHitResult_HitActor;                                   // 0x41A8 (size: 0x8)
    class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;                  // 0x41B0 (size: 0x8)
    FName CallFunc_BreakHitResult_HitBoneName;                                        // 0x41B8 (size: 0x8)
    int32 CallFunc_BreakHitResult_HitItem;                                            // 0x41C0 (size: 0x4)
    int32 CallFunc_BreakHitResult_ElementIndex;                                       // 0x41C4 (size: 0x4)
    int32 CallFunc_BreakHitResult_FaceIndex;                                          // 0x41C8 (size: 0x4)
    FVector CallFunc_BreakHitResult_TraceStart;                                       // 0x41CC (size: 0xC)
    FVector CallFunc_BreakHitResult_TraceEnd;                                         // 0x41D8 (size: 0xC)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5; // 0x41E4 (size: 0x10)
    void JoyAsyncTraceSingleDone(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    bool K2Node_CustomEvent_HasHit;                                                   // 0x41F4 (size: 0x1)
    FHitResult K2Node_CustomEvent_Hit_1;                                              // 0x41F8 (size: 0x88)
    FHitResult Temp_struct_Variable_5;                                                // 0x4280 (size: 0x88)
    bool CallFunc_BreakHitResult_bBlockingHit_1;                                      // 0x4308 (size: 0x1)
    bool CallFunc_BreakHitResult_bInitialOverlap_1;                                   // 0x4309 (size: 0x1)
    float CallFunc_BreakHitResult_Time_1;                                             // 0x430C (size: 0x4)
    float CallFunc_BreakHitResult_Distance_1;                                         // 0x4310 (size: 0x4)
    FVector CallFunc_BreakHitResult_Location_1;                                       // 0x4314 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactPoint_1;                                    // 0x4320 (size: 0xC)
    FVector CallFunc_BreakHitResult_Normal_1;                                         // 0x432C (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactNormal_1;                                   // 0x4338 (size: 0xC)
    class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1;                       // 0x4348 (size: 0x8)
    class AActor* CallFunc_BreakHitResult_HitActor_1;                                 // 0x4350 (size: 0x8)
    class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1;                // 0x4358 (size: 0x8)
    FName CallFunc_BreakHitResult_HitBoneName_1;                                      // 0x4360 (size: 0x8)
    int32 CallFunc_BreakHitResult_HitItem_1;                                          // 0x4368 (size: 0x4)
    int32 CallFunc_BreakHitResult_ElementIndex_1;                                     // 0x436C (size: 0x4)
    int32 CallFunc_BreakHitResult_FaceIndex_1;                                        // 0x4370 (size: 0x4)
    FVector CallFunc_BreakHitResult_TraceStart_1;                                     // 0x4374 (size: 0xC)
    FVector CallFunc_BreakHitResult_TraceEnd_1;                                       // 0x4380 (size: 0xC)
    bool Temp_bool_Variable_5;                                                        // 0x438C (size: 0x1)
    float CallFunc_BreakRotator_Roll;                                                 // 0x4390 (size: 0x4)
    float CallFunc_BreakRotator_Pitch;                                                // 0x4394 (size: 0x4)
    float CallFunc_BreakRotator_Yaw;                                                  // 0x4398 (size: 0x4)
    bool Temp_bool_Variable_6;                                                        // 0x439C (size: 0x1)
    class USoundBase* Temp_object_Variable;                                           // 0x43A0 (size: 0x8)
    bool Temp_bool_Variable_7;                                                        // 0x43A8 (size: 0x1)
    class USoundAttenuation* Temp_object_Variable_1;                                  // 0x43B0 (size: 0x8)
    class USoundAttenuation* Temp_object_Variable_2;                                  // 0x43B8 (size: 0x8)
    bool Temp_bool_IsClosed_Variable;                                                 // 0x43C0 (size: 0x1)
    int32 CallFunc_InternalBreakableDelay_ReturnValue;                                // 0x43C4 (size: 0x4)
    class USoundBase* Temp_object_Variable_3;                                         // 0x43C8 (size: 0x8)
    int32 CallFunc_InternalBreakableDelay_ReturnValue_1;                              // 0x43D0 (size: 0x4)
    class USoundBase* Temp_object_Variable_4;                                         // 0x43D8 (size: 0x8)
    class UPrimitiveComponent* K2Node_CustomEvent_HitComponent;                       // 0x43E0 (size: 0x8)
    class AActor* K2Node_CustomEvent_OtherActor;                                      // 0x43E8 (size: 0x8)
    class UPrimitiveComponent* K2Node_CustomEvent_OtherComp;                          // 0x43F0 (size: 0x8)
    FVector K2Node_CustomEvent_NormalImpulse;                                         // 0x43F8 (size: 0xC)
    FHitResult K2Node_CustomEvent_Hit;                                                // 0x4404 (size: 0x88)
    bool CallFunc_BreakHitResult_bBlockingHit_2;                                      // 0x448C (size: 0x1)
    bool CallFunc_BreakHitResult_bInitialOverlap_2;                                   // 0x448D (size: 0x1)
    float CallFunc_BreakHitResult_Time_2;                                             // 0x4490 (size: 0x4)
    float CallFunc_BreakHitResult_Distance_2;                                         // 0x4494 (size: 0x4)
    FVector CallFunc_BreakHitResult_Location_2;                                       // 0x4498 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactPoint_2;                                    // 0x44A4 (size: 0xC)
    FVector CallFunc_BreakHitResult_Normal_2;                                         // 0x44B0 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactNormal_2;                                   // 0x44BC (size: 0xC)
    class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;                       // 0x44C8 (size: 0x8)
    class AActor* CallFunc_BreakHitResult_HitActor_2;                                 // 0x44D0 (size: 0x8)
    class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;                // 0x44D8 (size: 0x8)
    FName CallFunc_BreakHitResult_HitBoneName_2;                                      // 0x44E0 (size: 0x8)
    int32 CallFunc_BreakHitResult_HitItem_2;                                          // 0x44E8 (size: 0x4)
    int32 CallFunc_BreakHitResult_ElementIndex_2;                                     // 0x44EC (size: 0x4)
    int32 CallFunc_BreakHitResult_FaceIndex_2;                                        // 0x44F0 (size: 0x4)
    FVector CallFunc_BreakHitResult_TraceStart_2;                                     // 0x44F4 (size: 0xC)
    FVector CallFunc_BreakHitResult_TraceEnd_2;                                       // 0x4500 (size: 0xC)
    class UPrimitiveComponent* K2Node_Event__otherComponent;                          // 0x4510 (size: 0x8)
    FVector K2Node_Event__collisionNormal;                                            // 0x4518 (size: 0xC)
    float K2Node_Event__collisionDepth;                                               // 0x4524 (size: 0x4)
    float K2Node_Event_DeltaSeconds;                                                  // 0x4528 (size: 0x4)
    bool K2Node_Event__isGameplayMeow;                                                // 0x452C (size: 0x1)
    int32 Temp_int_Loop_Counter_Variable;                                             // 0x4530 (size: 0x4)
    class UABP_Cat_New_C* K2Node_DynamicCast_AsABP_Cat_New;                           // 0x4538 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x4540 (size: 0x1)
    class USoundBase* Temp_object_Variable_5;                                         // 0x4548 (size: 0x8)
    bool Temp_bool_Has_Been_Initd_Variable;                                           // 0x4550 (size: 0x1)
    class USoundBase* Temp_object_Variable_6;                                         // 0x4558 (size: 0x8)
    bool Temp_bool_Has_Been_Initd_Variable_1;                                         // 0x4560 (size: 0x1)
    class UJoyEasingInterpolator* Temp_wildcard_Variable;                             // 0x4568 (size: 0x8)
    bool Temp_bool_IsClosed_Variable_1;                                               // 0x4570 (size: 0x1)
    class USoundBase* Temp_object_Variable_7;                                         // 0x4578 (size: 0x8)
    bool Temp_bool_Variable_8;                                                        // 0x4580 (size: 0x1)
    FPostProcessSettings K2Node_MakeStruct_PostProcessSettings;                       // 0x4590 (size: 0x560)
    float Temp_float_Variable;                                                        // 0x4AF0 (size: 0x4)
    class USoundBase* Temp_object_Variable_8;                                         // 0x4AF8 (size: 0x8)
    E_sfx_miaou K2Node_CustomEvent_Sfx;                                               // 0x4B00 (size: 0x1)
    bool CallFunc_IsMeowing_IsMeowing;                                                // 0x4B01 (size: 0x1)
    class USoundBase* Temp_object_Variable_9;                                         // 0x4B08 (size: 0x8)
    bool Temp_bool_Variable_9;                                                        // 0x4B10 (size: 0x1)
    class UJoyEasingInterpolator* Temp_wildcard_Variable_1;                           // 0x4B18 (size: 0x8)
    float Temp_float_Variable_1;                                                      // 0x4B20 (size: 0x4)
    bool Temp_bool_Has_Been_Initd_Variable_2;                                         // 0x4B24 (size: 0x1)
    bool Temp_bool_Variable_10;                                                       // 0x4B25 (size: 0x1)
    float K2Node_CustomEvent_Ratio;                                                   // 0x4B28 (size: 0x4)
    float Temp_float_Variable_2;                                                      // 0x4B2C (size: 0x4)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6; // 0x4B30 (size: 0x10)
    void InterpolatorTickOutputPin(float bpp__Ratio__pf);
    class USoundBase* Temp_object_Variable_10;                                        // 0x4B40 (size: 0x8)
    bool Temp_bool_IsClosed_Variable_2;                                               // 0x4B48 (size: 0x1)
    class USoundBase* Temp_object_Variable_11;                                        // 0x4B50 (size: 0x8)
    E_sfx_miaou Temp_byte_Variable;                                                   // 0x4B58 (size: 0x1)
    FVector K2Node_Event__worldInput;                                                 // 0x4B5C (size: 0xC)
    bool K2Node_CustomEvent_LookAt_On_Off;                                            // 0x4B68 (size: 0x1)
    FVector K2Node_CustomEvent_LookAt_Location;                                       // 0x4B6C (size: 0xC)
    bool Temp_bool_IsClosed_Variable_3;                                               // 0x4B78 (size: 0x1)
    float Temp_float_Variable_3;                                                      // 0x4B7C (size: 0x4)
    bool Temp_bool_Has_Been_Initd_Variable_3;                                         // 0x4B80 (size: 0x1)
    bool K2Node_Event__backpackOn;                                                    // 0x4B81 (size: 0x1)
    bool Temp_bool_Has_Been_Initd_Variable_4;                                         // 0x4B82 (size: 0x1)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7; // 0x4B84 (size: 0x10)
    void InterpolatorCompleteOutputPin();
    class UJoyEasingInterpolator* CallFunc_StartEasingInterpolator__interpolatorObject; // 0x4B98 (size: 0x8)
    class UJoyEasingInterpolator* CallFunc_StartEasingInterpolator_ReturnValue;       // 0x4BA0 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_5;                                              // 0x4BA8 (size: 0x1)
    FLookAtData K2Node_MakeStruct_LookAtData;                                         // 0x4BB0 (size: 0x38)
    FLookAtData K2Node_MakeStruct_LookAtData_1;                                       // 0x4BE8 (size: 0x38)
    TEnumAsByte<EEndPlayReason::Type> K2Node_Event_EndPlayReason;                     // 0x4C20 (size: 0x1)
    FLookAtData K2Node_Select_Default;                                                // 0x4C28 (size: 0x38)
    bool Temp_bool_IsClosed_Variable_4;                                               // 0x4C60 (size: 0x1)
    float K2Node_CustomEvent_Ratio_1;                                                 // 0x4C64 (size: 0x4)
    int32 Temp_int_Array_Index_Variable;                                              // 0x4C68 (size: 0x4)
    FLookAtData K2Node_MakeStruct_LookAtData_2;                                       // 0x4C70 (size: 0x38)
    bool Temp_bool_Has_Been_Initd_Variable_5;                                         // 0x4CA8 (size: 0x1)
    FLookAtData K2Node_MakeStruct_LookAtData_3;                                       // 0x4CB0 (size: 0x38)
    bool Temp_bool_IsClosed_Variable_5;                                               // 0x4CE8 (size: 0x1)
    FTransform Temp_struct_Variable_6;                                                // 0x4CF0 (size: 0x30)
    float K2Node_CustomEvent_delta_time;                                              // 0x4D20 (size: 0x4)
    E_sfx_miaou K2Node_CustomEvent_miaou_type;                                        // 0x4D24 (size: 0x1)
    float K2Node_CustomEvent_maximum_duration;                                        // 0x4D28 (size: 0x4)
    class USoundBase* Temp_object_Variable_12;                                        // 0x4D30 (size: 0x8)
    float K2Node_CustomEvent_closestDanger;                                           // 0x4D38 (size: 0x4)
    bool K2Node_CustomEvent_IsFeedbackOn;                                             // 0x4D3C (size: 0x1)
    class UCatUsableComponent* K2Node_CustomEvent_Grabbable_1;                        // 0x4D40 (size: 0x8)
    class UCatUsableComponent* K2Node_CustomEvent_Grabbable;                          // 0x4D48 (size: 0x8)
    int32 Temp_int_Variable;                                                          // 0x4D50 (size: 0x4)
    class ACatPawn* K2Node_CustomEvent__catPawn_2;                                    // 0x4D58 (size: 0x8)
    class AZurgPawn* K2Node_CustomEvent__zurg_1;                                      // 0x4D60 (size: 0x8)
    class ACatPawn* K2Node_CustomEvent__catPawn_1;                                    // 0x4D68 (size: 0x8)
    class AZurgPawn* K2Node_CustomEvent__zurg;                                        // 0x4D70 (size: 0x8)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8; // 0x4D78 (size: 0x10)
    void InterpolatorTickOutputPin(float bpp__Ratio__pf);
    class USoundBase* Temp_object_Variable_13;                                        // 0x4D88 (size: 0x8)
    class USoundBase* Temp_object_Variable_14;                                        // 0x4D90 (size: 0x8)
    class USoundBase* Temp_object_Variable_15;                                        // 0x4D98 (size: 0x8)
    class AAudioManager* CallFunc_GetAudioManager_AudioManager;                       // 0x4DA0 (size: 0x8)
    bool Temp_bool_Has_Been_Initd_Variable_6;                                         // 0x4DA8 (size: 0x1)
    class USoundBase* Temp_object_Variable_16;                                        // 0x4DB0 (size: 0x8)
    class USoundBase* Temp_object_Variable_17;                                        // 0x4DB8 (size: 0x8)
    bool Temp_bool_IsClosed_Variable_6;                                               // 0x4DC0 (size: 0x1)
    int32 Temp_int_Variable_1;                                                        // 0x4DC4 (size: 0x4)
    class USoundBase* Temp_object_Variable_18;                                        // 0x4DC8 (size: 0x8)
    TArray<class AActor*> CallFunc_GetMovementIgnoredActors_ReturnValue;              // 0x4DD0 (size: 0x10)
    class UJoyAsyncTraceSingleAction* CallFunc_AsyncSphereTraceSingleByChannel_ReturnValue; // 0x4DE0 (size: 0x8)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9; // 0x4DE8 (size: 0x10)
    void InterpolatorCompleteOutputPin();
    bool CallFunc_IsValid_ReturnValue_6;                                              // 0x4DF8 (size: 0x1)
    class UJoyAsyncTraceSingleAction* CallFunc_AsyncLineTraceSingleByChannel_ReturnValue; // 0x4E00 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_7;                                              // 0x4E08 (size: 0x1)
    bool CallFunc_BreakHitResult_bBlockingHit_3;                                      // 0x4E09 (size: 0x1)
    bool CallFunc_BreakHitResult_bInitialOverlap_3;                                   // 0x4E0A (size: 0x1)
    float CallFunc_BreakHitResult_Time_3;                                             // 0x4E0C (size: 0x4)
    float CallFunc_BreakHitResult_Distance_3;                                         // 0x4E10 (size: 0x4)
    FVector CallFunc_BreakHitResult_Location_3;                                       // 0x4E14 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactPoint_3;                                    // 0x4E20 (size: 0xC)
    FVector CallFunc_BreakHitResult_Normal_3;                                         // 0x4E2C (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactNormal_3;                                   // 0x4E38 (size: 0xC)
    class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3;                       // 0x4E48 (size: 0x8)
    class AActor* CallFunc_BreakHitResult_HitActor_3;                                 // 0x4E50 (size: 0x8)
    class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3;                // 0x4E58 (size: 0x8)
    FName CallFunc_BreakHitResult_HitBoneName_3;                                      // 0x4E60 (size: 0x8)
    int32 CallFunc_BreakHitResult_HitItem_3;                                          // 0x4E68 (size: 0x4)
    int32 CallFunc_BreakHitResult_ElementIndex_3;                                     // 0x4E6C (size: 0x4)
    int32 CallFunc_BreakHitResult_FaceIndex_3;                                        // 0x4E70 (size: 0x4)
    FVector CallFunc_BreakHitResult_TraceStart_3;                                     // 0x4E74 (size: 0xC)
    FVector CallFunc_BreakHitResult_TraceEnd_3;                                       // 0x4E80 (size: 0xC)
    float CallFunc_BreakRotator_Roll_1;                                               // 0x4E8C (size: 0x4)
    float CallFunc_BreakRotator_Pitch_1;                                              // 0x4E90 (size: 0x4)
    float CallFunc_BreakRotator_Yaw_1;                                                // 0x4E94 (size: 0x4)
    bool K2Node_CustomEvent_IsGameplayMeow;                                           // 0x4E98 (size: 0x1)
    class USoundBase* Temp_object_Variable_19;                                        // 0x4EA0 (size: 0x8)
    class USoundBase* Temp_object_Variable_20;                                        // 0x4EA8 (size: 0x8)
    TArray<class ACatPawn*> K2Node_CustomEvent_OtherCats;                             // 0x4EB0 (size: 0x10)
    class USoundAttenuation* K2Node_Select_Default_1;                                 // 0x4EC0 (size: 0x8)
    class ACatPawn* CallFunc_Array_Get_Item;                                          // 0x4EC8 (size: 0x8)
    class USoundBase* Temp_object_Variable_21;                                        // 0x4ED0 (size: 0x8)
    class UJoyEasingInterpolator* CallFunc_StartEasingInterpolator__interpolatorObject_1; // 0x4ED8 (size: 0x8)
    class UJoyEasingInterpolator* CallFunc_StartEasingInterpolator_ReturnValue_1;     // 0x4EE0 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_8;                                              // 0x4EE8 (size: 0x1)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController;    // 0x4EF0 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_1;  // 0x4EF8 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_2;  // 0x4F00 (size: 0x8)
    class ULifeComponent* K2Node_ComponentBoundEvent__lifeComponent_1;                // 0x4F08 (size: 0x8)
    class AActor* K2Node_ComponentBoundEvent__killer;                                 // 0x4F10 (size: 0x8)
    class USoundBase* Temp_object_Variable_22;                                        // 0x4F18 (size: 0x8)
    class ULifeComponent* K2Node_ComponentBoundEvent__lifeComponent;                  // 0x4F20 (size: 0x8)
    bool Temp_bool_Has_Been_Initd_Variable_7;                                         // 0x4F28 (size: 0x1)
    class USoundBase* K2Node_Select_Default_2;                                        // 0x4F30 (size: 0x8)
    class USoundBase* K2Node_Select_Default_3;                                        // 0x4F38 (size: 0x8)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10; // 0x4F40 (size: 0x10)
    void CatDelegate(class ACatPawn* bpp___catPawn__pf);
    class ACatPawn* K2Node_CustomEvent__catPawn;                                      // 0x4F50 (size: 0x8)
    bool Temp_bool_IsClosed_Variable_7;                                               // 0x4F58 (size: 0x1)
    FBP_CatPawn_CK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11; // 0x4F5C (size: 0x10)
    void ComponentHitSignature(class UPrimitiveComponent* bpp__HitComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, const FHitResult& bpp__Hit__pf);
    FJumpData CallFunc_GetCurrentJumpData_ReturnValue;                                // 0x4F70 (size: 0x460)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_3;  // 0x53D0 (size: 0x8)
    TArray<class USoundWave*> K2Node_MakeArray_Array;                                 // 0x53D8 (size: 0x10)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_4;  // 0x53E8 (size: 0x8)
    class USoundWave* CallFunc_Array_Random_OutItem;                                  // 0x53F0 (size: 0x8)
    int32 CallFunc_Array_Random_OutIndex;                                             // 0x53F8 (size: 0x4)
    TArray<class AActor*> Temp_object_Variable_23;                                    // 0x5400 (size: 0x10)
    TArray<class AActor*> Temp_object_Variable_24;                                    // 0x5410 (size: 0x10)
    class UJoyAsyncTraceSingleAction* CallFunc_AsyncLineTraceSingleByChannel_ReturnValue_1; // 0x5420 (size: 0x8)
    class UJoyAsyncTraceSingleAction* CallFunc_AsyncBoxTraceSingleByChannel_ReturnValue; // 0x5428 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_11;                                             // 0x5430 (size: 0x1)
    bool CallFunc_IsValid_ReturnValue_12;                                             // 0x5431 (size: 0x1)
    TArray<class AActor*> Temp_object_Variable_25;                                    // 0x5438 (size: 0x10)
    class UJoyAsyncTraceSingleAction* CallFunc_AsyncLineTraceSingleByChannel_ReturnValue_2; // 0x5448 (size: 0x8)
    TArray<class AActor*> Temp_object_Variable_26;                                    // 0x5450 (size: 0x10)
    class UJoyAsyncTraceSingleAction* CallFunc_AsyncLineTraceSingleByChannel_ReturnValue_3; // 0x5460 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_13;                                             // 0x5468 (size: 0x1)
    bool CallFunc_IsValid_ReturnValue_14;                                             // 0x5469 (size: 0x1)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_5;  // 0x5470 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_6;  // 0x5478 (size: 0x8)

    void OnZurkExitGrabbed__DelegateSignature();
    void OnZurkEnterGrabbed__DelegateSignature();
    void OnObjectGrabbed__DelegateSignature(class ABP_CatPawn_C* bpp__Cat__pf, class UCatUsableComponent* bpp__Grabbable__pf);
    void OnObjectDropped__DelegateSignature(class ABP_CatPawn_C* bpp__Cat__pf, class UCatUsableComponent* bpp__Grabbable__pf);
    void ZurgDetached_Event_0(class ACatPawn* bpp___catPawn__pf, class AZurgPawn* bpp___zurg__pf);
    void ZurgAttached_Event_0(class ACatPawn* bpp___catPawn__pf, class AZurgPawn* bpp___zurg__pf);
    void Update On Hit Feedback();
    void Update Crawl();
    void Update Capture for Eyes();
    void Update Available Jumps LookAt();
    void UpdateRandomLookAt();
    void UpdateBackpackUsableLookAt();
    void UnregisterOtherCats();
    void TraceDone_D2459D3C442A98B4AEEE59BA63EF6AA0(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void TraceDone_D04BA825482040E16BB1AFB76F85D1D0(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void TraceDone_B3CB66934238B75CE15E8588E954AED5(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void TraceDone_8EBCEA084657FA49C26CE89432637699(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void TraceDone_4AB22679471F1338D1045F9A6149D216(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void TraceDone_2222196049B2523003211D9D778F740D(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void Tick 4();
    void TickDriftSound();
    void Tick_6246EF4646E19036986D72BAF334FC47(float bpp__Ratio__pf);
    void Tick_6246EF4646E19036986D72BAD35F862B(float bpp__Ratio__pf);
    void Tick1();
    void Simple Pilot();
    void ShouldDoB12CallLookAt(bool& bpp__Value__pf);
    void SetBackpackFur(bool bpp___backpackOn__pf);
    void requestMiaouType(E_sfx_miaou bpp__miaouxtype__pfT, float bpp__maximumxduration__pfT);
    void RequestMeow(E_sfx_miaou bpp__sfx__pf);
    void Release Grabbed Actor();
    void RegisterOtherCats(const TArray<class ACatPawn*>& bpp__OtherCats__pf__const);
    void ReceiveTick(float bpp__DeltaSeconds__pf);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> bpp__EndPlayReason__pf);
    void ReceiveBeginPlay();
    void Pilot(FVector bpp__Input__pf, float bpp__dt__pf, FVector& bpp__CorrectedInputColl__pf);
    void OnStruggled();
    void OnResetInput(FVector bpp___worldInput__pf);
    void OnMeowSoundCompletion();
    void OnMeowed(bool bpp___isGameplayMeow__pf);
    void OnJumpEnded(class ACatPawn* bpp___catPawn__pf);
    void OnExitGrabbed();
    void OnEnterGrabbed();
    void OnBodyComponentHit(class UPrimitiveComponent* bpp__HitComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, const FHitResult& bpp__Hit__pf__const);
    void OnBodyCollision(class UPrimitiveComponent* bpp___otherComponent__pf, FVector bpp___collisionNormal__pf, float bpp___collisionDepth__pf);
    void NotifyObjectGrabbed(class UCatUsableComponent* bpp__Grabbable__pf);
    void NotifyObjectDropped(class UCatUsableComponent* bpp__Grabbable__pf);
    void Miaou Tick(float bpp__deltaxtime__pfT);
    void MeowAudioFinished();
    void JumpBeginEndLocation();
    bool IsRailIgnoredObstacle(const class AActor* bpp___actor__pf__const);
    void IsMeowing(bool& bpp__IsMeowing__pf);
    void IsInCinematic(bool bpp__InCinematic__pf);
    void IsCrawling(bool& bpp__IsCrawling__pf);
    void InternalOnMeowed(bool bpp__IsGameplayMeow__pf);
    void informClosestZurgSwarm(float bpp__closestDanger__pf, bool bpp__IsFeedbackOn__pf);
    FVector GetLookAtOffset();
    void GetGrabbedComponent(class UCatUsableComponent*& bpp__Grabbable__pf);
    void GetGrabbedActor(class AActor*& bpp__GrabbedActor__pf);
    void GetBestJump(TArray<FJumpData>& bpp__JumpxData__pfT, FJumpData& bpp__BestJump__pf, float& bpp__Score__pf);
    void FeedCatMaterialCollection();
    void ExecuteUbergraph_BP_CatPawn_8(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_BP_CatPawn_7(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_BP_CatPawn_6(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_BP_CatPawn_35(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_BP_CatPawn_11(int32 bpp__EntryPoint__pf);
    void Custom LookAt(bool bpp__LookAtxOnxOff__pfTE, FVector bpp__LookAtxLocation__pfT);
    void Complete_6246EF4646E19036986D72BAF334FC47();
    void Complete_6246EF4646E19036986D72BAD35F862B();
    void CinematicVelocity();
    bool CheckJumpValidity(const FJumpData& bpp___jumpTargets__pf__const, FString& bpp___failReason__pf);
    void BndEvt__BP_CatPawn_m_lifeComponent_K2Node_ComponentBoundEvent_2_LifeComponentRevivedDelegate__DelegateSignature(class ULifeComponent* bpp___lifeComponent__pf);
    void BndEvt__BP_CatPawn_m_lifeComponent_K2Node_ComponentBoundEvent_0_LifeComponentKilledDelegate__DelegateSignature(class ULifeComponent* bpp___lifeComponent__pf, class AActor* bpp___killer__pf);
    void JoyAsyncTraceSingleDone__DelegateSignature(bool bpp__HasHit__pf, FHitResult bpp__Hit__pf);
    void InterpolatorTickOutputPin__DelegateSignature(float bpp__Ratio__pf);
    void InterpolatorCompleteOutputPin__DelegateSignature();
    void ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* bpp__HitComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, const FHitResult& bpp__Hit__pf);
    void CatDelegate__DelegateSignature(class ACatPawn* bpp___catPawn__pf);
}; // Size: 0x5480

#endif
