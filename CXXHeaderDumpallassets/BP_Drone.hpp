#ifndef UE4SS_SDK_BP_Drone_HPP
#define UE4SS_SDK_BP_Drone_HPP

class ABP_Drone_C : public ADrone
{
    class UAudioComponent* PS5Vibration;                                              // 0x0408 (size: 0x8)
    class UWidgetComponent* BatteryGaugeGUI;                                          // 0x0410 (size: 0x8)
    class UAudioComponent* antizurgLight_refilling_disabled_loop_01;                  // 0x0418 (size: 0x8)
    class UAudioComponent* antizurgLight_refilling_loop_01;                           // 0x0420 (size: 0x8)
    class UAudioComponent* drone_popped_loop_02;                                      // 0x0428 (size: 0x8)
    class UAntiZurgSpotlightComponent* StrongLight;                                   // 0x0430 (size: 0x8)
    class UPointLightComponent* BounceLight;                                          // 0x0438 (size: 0x8)
    class UStaticMeshComponent* Cone;                                                 // 0x0440 (size: 0x8)
    class USpotLightComponent* BackBurnerLight;                                       // 0x0448 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0450 (size: 0x8)
    float Scale_loot_scale_339E284D4028AEEE8E313AB32454A427;                          // 0x0458 (size: 0x4)
    float Scale_loot_opacity_339E284D4028AEEE8E313AB32454A427;                        // 0x045C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Scale_loot__Direction_339E284D4028AEEE8E313AB32454A427; // 0x0460 (size: 0x1)
    class UTimelineComponent* Scale_loot;                                             // 0x0468 (size: 0x8)
    float Timeline_go_in_move_z_F95EF5E04EBE4F47FF37E6AED889044D;                     // 0x0470 (size: 0x4)
    float Timeline_go_in_scale_F95EF5E04EBE4F47FF37E6AED889044D;                      // 0x0474 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_go_in__Direction_F95EF5E04EBE4F47FF37E6AED889044D; // 0x0478 (size: 0x1)
    class UTimelineComponent* Timeline_go_in;                                         // 0x0480 (size: 0x8)
    float Timeline_go_out_MovementRatio_41A3FD89461A0DE2FC2CA2AFD141FAA5;             // 0x0488 (size: 0x4)
    float Timeline_go_out_scale_41A3FD89461A0DE2FC2CA2AFD141FAA5;                     // 0x048C (size: 0x4)
    float Timeline_go_out_move_z_41A3FD89461A0DE2FC2CA2AFD141FAA5;                    // 0x0490 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_go_out__Direction_41A3FD89461A0DE2FC2CA2AFD141FAA5; // 0x0494 (size: 0x1)
    class UTimelineComponent* Timeline_go_out;                                        // 0x0498 (size: 0x8)
    bool Collision Left;                                                              // 0x04A0 (size: 0x1)
    bool Collision Right;                                                             // 0x04A1 (size: 0x1)
    float LeftRight Location;                                                         // 0x04A4 (size: 0x4)
    FVector UnfoldInitialStartPosition;                                               // 0x04A8 (size: 0xC)
    FRotator UnfoldInitialStartRotation;                                              // 0x04B4 (size: 0xC)
    FVector FoldInitialStartPosition;                                                 // 0x04C0 (size: 0xC)
    FRotator FoldInitialStartRotation;                                                // 0x04CC (size: 0xC)
    class UABP_Drone_C* AnimationBP;                                                  // 0x04D8 (size: 0x8)
    float Delta Seconds;                                                              // 0x04E0 (size: 0x4)
    class UMaterialInstanceDynamic* Loot_Dynamic_Mat;                                 // 0x04E8 (size: 0x8)
    FVectorSpringState CatFollowSpringState;                                          // 0x04F0 (size: 0x18)
    FRotator SmoothYaw;                                                               // 0x0508 (size: 0xC)
    float BankingRoll;                                                                // 0x0514 (size: 0x4)
    float StrongLightIntensity;                                                       // 0x0518 (size: 0x4)
    class UUserWidget* BatteryGaugeWidget;                                            // 0x0520 (size: 0x8)
    float Battery;                                                                    // 0x0528 (size: 0x4)
    float BatteryRechargeSpeed;                                                       // 0x052C (size: 0x4)
    float BatteryDechargeSpeed;                                                       // 0x0530 (size: 0x4)
    float BatteryStartToRamble;                                                       // 0x0534 (size: 0x4)
    class UMaterialInstanceDynamic* Heat Material;                                    // 0x0538 (size: 0x8)
    class UMaterialInstanceDynamic* Drone Material;                                   // 0x0540 (size: 0x8)
    bool BatteryDepleted;                                                             // 0x0548 (size: 0x1)
    class AActor* anti zurg sfx;                                                      // 0x0550 (size: 0x8)
    bool StrongLightActive;                                                           // 0x0558 (size: 0x1)
    class UForceFeedbackComponent* StrongLightForceFeedback;                          // 0x0560 (size: 0x8)
    bool BatteryRambling;                                                             // 0x0568 (size: 0x1)
    bool WeakLightActive;                                                             // 0x0569 (size: 0x1)
    float StrongLight InnerConeBase;                                                  // 0x056C (size: 0x4)
    float StrongLight OuterConeBase;                                                  // 0x0570 (size: 0x4)
    float WeakLightIntensity;                                                         // 0x0574 (size: 0x4)
    FVector lastRotation;                                                             // 0x0578 (size: 0xC)
    float droneReactorSfxPower;                                                       // 0x0584 (size: 0x4)
    class UDroneSettings* DroneSettings;                                              // 0x0588 (size: 0x8)
    float StrongLightReactivationPercentage;                                          // 0x0590 (size: 0x4)
    float StrongLightOutterConeAngle;                                                 // 0x0594 (size: 0x4)
    float StrongLightInnerConeAngle;                                                  // 0x0598 (size: 0x4)
    float RandomLightIntensityMultiplier;                                             // 0x059C (size: 0x4)
    float Strong Light Active Smooth;                                                 // 0x05A0 (size: 0x4)
    bool isTorchlightEnabled;                                                         // 0x05A4 (size: 0x1)
    float WeakLightIntensityRandom;                                                   // 0x05A8 (size: 0x4)
    bool RechargeAllowed;                                                             // 0x05AC (size: 0x1)
    FSmootherVector DriftingVelocitySmoother;                                         // 0x05B0 (size: 0x1C)
    FSmootherRotation DriftingAngularVelocitySmoother;                                // 0x05D0 (size: 0x30)
    class AActor* UnfoldedSocket;                                                     // 0x0600 (size: 0x8)
    float PreviousFoldMoveZ;                                                          // 0x0608 (size: 0x4)
    float CurrentMoveToSpeed;                                                         // 0x060C (size: 0x4)
    class AActor* LightSocket;                                                        // 0x0610 (size: 0x8)
    FVector LightSocketInitialPosition;                                               // 0x0618 (size: 0xC)
    class UMaterialInstanceDynamic* DynaMat DroneEyes;                                // 0x0628 (size: 0x8)
    float JaugeVisibilityTimer;                                                       // 0x0630 (size: 0x4)
    float JaugeVisibilityDuration;                                                    // 0x0634 (size: 0x4)
    float HeatIncreaseSpeed;                                                          // 0x0638 (size: 0x4)
    bool DroneIsOverHeating;                                                          // 0x063C (size: 0x1)
    float OverHeatDicreaseSpeed;                                                      // 0x0640 (size: 0x4)
    float TimeBeforeNormalHeatDicrease;                                               // 0x0644 (size: 0x4)
    int32 BounceLightTraceIndex;                                                      // 0x0648 (size: 0x4)
    TArray<float> BounceLightTraceDistances;                                          // 0x0650 (size: 0x10)
    float BounceLightTraceAverageDistances;                                           // 0x0660 (size: 0x4)
    bool Temp_bool_Has_Been_Initd_Variable;                                           // 0x0664 (size: 0x1)
    float K2Node_CustomEvent_DeltaTime_1;                                             // 0x0668 (size: 0x4)
    class AAudioManager* CallFunc_GetAudioManager_AudioManager;                       // 0x0670 (size: 0x8)
    class AActor* CallFunc_initLoopSequence_Sequence;                                 // 0x0678 (size: 0x8)
    bool Temp_bool_IsClosed_Variable;                                                 // 0x0680 (size: 0x1)
    class USoundBase* K2Node_CustomEvent_NewSound;                                    // 0x0688 (size: 0x8)
    bool Temp_bool_IsClosed_Variable_1;                                               // 0x0690 (size: 0x1)
    float K2Node_Event_DeltaSeconds;                                                  // 0x0694 (size: 0x4)
    FName CallFunc_GetFoldedSocket__socketName;                                       // 0x0698 (size: 0x8)
    FName CallFunc_GetFoldedSocket__socketName_1;                                     // 0x06A0 (size: 0x8)
    class ULootableComponent* K2Node_CustomEvent_LootableComponent;                   // 0x06A8 (size: 0x8)
    class ULootableComponent* K2Node_CustomEvent_Lootable;                            // 0x06B0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> K2Node_MakeArray_Array;                     // 0x06B8 (size: 0x10)
    float K2Node_CustomEvent_DeltaTime;                                               // 0x06C8 (size: 0x4)
    float CallFunc_BreakRotator_Roll;                                                 // 0x06CC (size: 0x4)
    float CallFunc_BreakRotator_Pitch;                                                // 0x06D0 (size: 0x4)
    float CallFunc_BreakRotator_Yaw;                                                  // 0x06D4 (size: 0x4)
    FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult;                        // 0x06D8 (size: 0x88)
    class UABP_Drone_C* K2Node_DynamicCast_AsABP_Drone;                               // 0x0760 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0768 (size: 0x1)
    bool Temp_bool_Has_Been_Initd_Variable_1;                                         // 0x0769 (size: 0x1)
    class UUserWidget* K2Node_DynamicCast_AsCACA_Drone_Jauge;                         // 0x0770 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0778 (size: 0x1)
    bool Temp_bool_IsClosed_Variable_2;                                               // 0x0779 (size: 0x1)
    bool Temp_bool_Has_Been_Initd_Variable_2;                                         // 0x077A (size: 0x1)
    bool Temp_bool_IsClosed_Variable_3;                                               // 0x077B (size: 0x1)
    FHitResult CallFunc_K2_SetActorLocation_SweepHitResult;                           // 0x077C (size: 0x88)
    bool Temp_bool_IsClosed_Variable_4;                                               // 0x0804 (size: 0x1)
    bool Temp_bool_Has_Been_Initd_Variable_3;                                         // 0x0805 (size: 0x1)
    FBP_Drone_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0808 (size: 0x10)
    void DroneActionDelegate(class ADrone* bpp__Drone__pf);
    FBP_Drone_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0818 (size: 0x10)
    void TalkableLineDelegate(class UTalkableComponent* bpp___talkableComponent__pf, const FDialogLine& bpp___line__pf);
    FBP_Drone_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0828 (size: 0x10)
    void TalkableLineDelegate(class UTalkableComponent* bpp___talkableComponent__pf, const FDialogLine& bpp___line__pf);
    float CallFunc_BreakRotator_Roll_1;                                               // 0x0838 (size: 0x4)
    float CallFunc_BreakRotator_Pitch_1;                                              // 0x083C (size: 0x4)
    float CallFunc_BreakRotator_Yaw_1;                                                // 0x0840 (size: 0x4)
    bool Temp_bool_Has_Been_Initd_Variable_4;                                         // 0x0844 (size: 0x1)
    FDroneSpringParams K2Node_MakeStruct_DroneSpringParams;                           // 0x0848 (size: 0xC)
    FHitResult CallFunc_K2_SetActorRelativeRotation_SweepHitResult;                   // 0x0854 (size: 0x88)
    FDroneSpringParams K2Node_MakeStruct_DroneSpringParams_1;                         // 0x08DC (size: 0xC)
    FHitResult CallFunc_K2_SetActorRelativeRotation_SweepHitResult_1;                 // 0x08E8 (size: 0x88)
    FBP_Drone_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x0970 (size: 0x10)
    void DroneActionDelegate(class ADrone* bpp__Drone__pf);
    FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult;                   // 0x0980 (size: 0x88)
    bool Temp_bool_IsClosed_Variable_5;                                               // 0x0A08 (size: 0x1)
    FBP_Drone_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x0A0C (size: 0x10)
    void DroneActionDelegate(class ADrone* bpp__Drone__pf);
    bool Temp_bool_Has_Been_Initd_Variable_5;                                         // 0x0A1C (size: 0x1)
    bool Temp_bool_IsClosed_Variable_6;                                               // 0x0A1D (size: 0x1)
    float K2Node_Event__dt_2;                                                         // 0x0A20 (size: 0x4)
    FTransform K2Node_Event__target_1;                                                // 0x0A30 (size: 0x30)
    FDroneMoveToParams K2Node_Event__params_1;                                        // 0x0A60 (size: 0x8)
    float K2Node_Event__movementRatio_1;                                              // 0x0A68 (size: 0x4)
    FVector CallFunc_BreakTransform_Location;                                         // 0x0A6C (size: 0xC)
    FRotator CallFunc_BreakTransform_Rotation;                                        // 0x0A78 (size: 0xC)
    FVector CallFunc_BreakTransform_Scale;                                            // 0x0A84 (size: 0xC)
    FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1;                         // 0x0A90 (size: 0x88)
    float K2Node_Event__dt_1;                                                         // 0x0B18 (size: 0x4)
    FTransform K2Node_Event__target;                                                  // 0x0B20 (size: 0x30)
    FDroneSpringParams K2Node_Event__params;                                          // 0x0B50 (size: 0xC)
    float K2Node_Event__movementRatio;                                                // 0x0B5C (size: 0x4)
    FVector CallFunc_BreakTransform_Location_1;                                       // 0x0B60 (size: 0xC)
    FRotator CallFunc_BreakTransform_Rotation_1;                                      // 0x0B6C (size: 0xC)
    FVector CallFunc_BreakTransform_Scale_1;                                          // 0x0B78 (size: 0xC)
    FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_2;                         // 0x0B84 (size: 0x88)
    class ADrone* K2Node_CustomEvent_Drone_2;                                         // 0x0C10 (size: 0x8)
    class ADrone* K2Node_CustomEvent_Drone_1;                                         // 0x0C18 (size: 0x8)
    FTransform CallFunc_GetTransform_ReturnValue;                                     // 0x0C20 (size: 0x30)
    FTransform CallFunc_GetTransform_ReturnValue_1;                                   // 0x0C50 (size: 0x30)
    float CallFunc_BreakRotator_Roll_2;                                               // 0x0C80 (size: 0x4)
    float CallFunc_BreakRotator_Pitch_2;                                              // 0x0C84 (size: 0x4)
    float CallFunc_BreakRotator_Yaw_2;                                                // 0x0C88 (size: 0x4)
    float CallFunc_BreakRotator_Roll_3;                                               // 0x0C8C (size: 0x4)
    float CallFunc_BreakRotator_Pitch_3;                                              // 0x0C90 (size: 0x4)
    float CallFunc_BreakRotator_Yaw_3;                                                // 0x0C94 (size: 0x4)
    FTransform CallFunc_GetTransform_ReturnValue_2;                                   // 0x0CA0 (size: 0x30)
    FVector CallFunc_BreakTransform_Location_2;                                       // 0x0CD0 (size: 0xC)
    FRotator CallFunc_BreakTransform_Rotation_2;                                      // 0x0CDC (size: 0xC)
    FVector CallFunc_BreakTransform_Scale_2;                                          // 0x0CE8 (size: 0xC)
    FVector CallFunc_BreakTransform_Location_3;                                       // 0x0CF4 (size: 0xC)
    FRotator CallFunc_BreakTransform_Rotation_3;                                      // 0x0D00 (size: 0xC)
    FVector CallFunc_BreakTransform_Scale_3;                                          // 0x0D0C (size: 0xC)
    float CallFunc_BreakVector_X;                                                     // 0x0D18 (size: 0x4)
    float CallFunc_BreakVector_Y;                                                     // 0x0D1C (size: 0x4)
    float CallFunc_BreakVector_Z;                                                     // 0x0D20 (size: 0x4)
    float CallFunc_BreakVector_X_1;                                                   // 0x0D24 (size: 0x4)
    float CallFunc_BreakVector_Y_1;                                                   // 0x0D28 (size: 0x4)
    float CallFunc_BreakVector_Z_1;                                                   // 0x0D2C (size: 0x4)
    FHitResult CallFunc_K2_AddActorWorldOffset_SweepHitResult;                        // 0x0D30 (size: 0x88)
    float K2Node_CustomEvent_dt;                                                      // 0x0DB8 (size: 0x4)
    FHitResult CallFunc_K2_AddActorWorldOffset_SweepHitResult_1;                      // 0x0DBC (size: 0x88)
    FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult;                      // 0x0E44 (size: 0x88)
    FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1;                      // 0x0ECC (size: 0x88)
    TArray<class AActor*> Temp_object_Variable;                                       // 0x0F58 (size: 0x10)
    FHitResult CallFunc_SphereTraceSingleForObjects_OutHit;                           // 0x0F68 (size: 0x88)
    bool Temp_bool_Has_Been_Initd_Variable_6;                                         // 0x0FF0 (size: 0x1)
    FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult_1;                 // 0x0FF4 (size: 0x88)
    FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult_2;                 // 0x107C (size: 0x88)
    TArray<class AActor*> Temp_object_Variable_1;                                     // 0x1108 (size: 0x10)
    FHitResult CallFunc_SphereTraceSingleForObjects_OutHit_1;                         // 0x1118 (size: 0x88)
    class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue;        // 0x11A0 (size: 0x8)
    class UTalkableComponent* K2Node_CustomEvent__talkableComponent_1;                // 0x11A8 (size: 0x8)
    FDialogLine K2Node_CustomEvent__line_1;                                           // 0x11B0 (size: 0xA0)
    class UTalkableComponent* K2Node_CustomEvent__talkableComponent;                  // 0x1250 (size: 0x8)
    FDialogLine K2Node_CustomEvent__line;                                             // 0x1258 (size: 0xA0)
    FName K2Node_CustomEvent_MemoryId;                                                // 0x12F8 (size: 0x8)
    class ADrone* K2Node_CustomEvent_Drone;                                           // 0x1300 (size: 0x8)
    class UBackpackUserWidget* K2Node_DynamicCast_AsUMG_Drone_Memories_Popup_New;     // 0x1308 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x1310 (size: 0x1)
    FName CallFunc_GetFoldedSocket__socketName_2;                                     // 0x1314 (size: 0x8)
    float K2Node_Event__dt;                                                           // 0x131C (size: 0x4)
    FName CallFunc_GetFoldedSocket__socketName_3;                                     // 0x1320 (size: 0x8)
    FVector CallFunc_BreakTransform_Location_4;                                       // 0x1328 (size: 0xC)
    FRotator CallFunc_BreakTransform_Rotation_4;                                      // 0x1334 (size: 0xC)
    FVector CallFunc_BreakTransform_Scale_4;                                          // 0x1340 (size: 0xC)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController;    // 0x1350 (size: 0x8)
    FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;                // 0x1358 (size: 0x88)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_1;  // 0x13E0 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_2;  // 0x13E8 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_3;  // 0x13F0 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_4;  // 0x13F8 (size: 0x8)
    class AHKPlayerController* CallFunc_FindHKPlayerController_HKPlayerController_5;  // 0x1400 (size: 0x8)

    void UserConstructionScript();
    void Update Drift(float bpp__dt__pf);
    void UpdateWeakLight();
    void UpdateStrongLight();
    void UpdateSettings();
    void UpdatePitchAndRoll(float bpp__DeltaTime__pf);
    void UpdateLightSocket();
    void UpdateFX();
    void UpdateCollisionCheck();
    void Timeline_go_out__UpdateFunc();
    void Timeline_go_out__Start_anim_unfold__EventFunc();
    void Timeline_go_out__FinishedFunc();
    void Timeline_go_in__UpdateFunc();
    void Timeline_go_in__FinishedFunc();
    void Timeline_go_in__Event Fold__EventFunc();
    void TickSpring(float bpp___dt__pf, const FTransform& bpp___target__pf__const, const FDroneSpringParams& bpp___params__pf__const, float bpp___movementRatio__pf);
    void TickSound(float bpp__DeltaTime__pf);
    void TickMoveTo(float bpp___dt__pf, const FTransform& bpp___target__pf__const, const FDroneMoveToParams& bpp___params__pf__const, float bpp___movementRatio__pf);
    void Start Loot Animation(class ULootableComponent* bpp__LootableComponent__pf);
    void sfx_set_popped_loop(class USoundBase* bpp__NewSound__pf);
    void Scale_loot__UpdateFunc();
    void Scale_loot__set mat__EventFunc();
    void Scale_loot__FinishedFunc();
    void Say Phrase(FString bpp__Phrase__pf__const);
    void ResetLootAnimation(class ULootableComponent* bpp__Lootable__pf);
    void ReceiveTick(float bpp__DeltaSeconds__pf);
    void ReceiveBeginPlay();
    void PlayUnlockedMemorySequence(FName bpp__memoryId__pf);
    void OnWeakLightUnrequested();
    void OnWeakLightRequested();
    void OnWeakLightInactive();
    void OnWeakLightActive();
    void OnUnequipped(class ADrone* bpp__Drone__pf);
    void OnTeleported();
    void OnStrongLightUnrequested();
    void OnStrongLightRequested();
    void OnStrongLightRambleStop();
    void OnStrongLightRambleStart();
    void OnStrongLightInactive();
    void OnStrongLightBatteryFull();
    void OnStrongLightBatteryDepleted();
    void OnStrongLightActive();
    void OnStopUnfold();
    void OnStopFold();
    void OnMovementTargetChanged();
    void OnGUIOpened(class ADrone* bpp__Drone__pf);
    void OnForceUnfold();
    void OnFoldedTick(float bpp___dt__pf);
    void OnFoldedExit();
    void OnFoldedEnter();
    void OnEquipped(class ADrone* bpp__Drone__pf);
    void OnDialogLineEnded(class UTalkableComponent* bpp___talkableComponent__pf, const FDialogLine& bpp___line__pf__const);
    void OnDialogLineBegan(class UTalkableComponent* bpp___talkableComponent__pf, const FDialogLine& bpp___line__pf__const);
    void IsWeakLightActive(bool& bpp__Active__pf);
    void IsStrongLightActive(bool& bpp__Active__pf);
    void HideGauge();
    void ExecuteUbergraph_BP_Drone_1(int32 bpp__EntryPoint__pf);
    void DroneOverHeating();
    void Drift();
    void BounceLightLocation();
    void BeginPlaySound();
    void TalkableLineDelegate__DelegateSignature(class UTalkableComponent* bpp___talkableComponent__pf, const FDialogLine& bpp___line__pf);
    void DroneActionDelegate__DelegateSignature(class ADrone* bpp__Drone__pf);
}; // Size: 0x1410

#endif
