#ifndef UE4SS_SDK_Seq_B12_IsFree_HPP
#define UE4SS_SDK_Seq_B12_IsFree_HPP

class ASeq_B12_IsFree_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool Activate;                                                                    // 0x0278 (size: 0x1)
    class ABP_Droid_C* Clementine;                                                    // 0x0280 (size: 0x8)
    class ABP_B12Cell_C* B12Cell;                                                     // 0x0288 (size: 0x8)
    TArray<class ABP_SentinelAI_C*> SentinelsBeforeB12Free;                           // 0x0290 (size: 0x10)
    TArray<class ABP_SentinelAI_C*> SentinelsAfterB12Free;                            // 0x02A0 (size: 0x10)
    TArray<class ABP_LaserBeam_C*> Lasers;                                            // 0x02B0 (size: 0x10)
    class ASkeletalMeshActor* Drone;                                                  // 0x02C0 (size: 0x8)
    class AActor* Drone_Grabbable;                                                    // 0x02C8 (size: 0x8)
    class ASkeletalMeshActor* Drone_Revive;                                           // 0x02D0 (size: 0x8)
    class AActor* cable;                                                              // 0x02D8 (size: 0x8)
    bool CatDeactivateLaser;                                                          // 0x02E0 (size: 0x1)
    TEnumAsByte<Enum_B12IsFree> Sequence;                                             // 0x02E1 (size: 0x1)
    class AActor* GiveB12Zone;                                                        // 0x02E8 (size: 0x8)
    bool CatIsInGiveB12Zone;                                                          // 0x02F0 (size: 0x1)
    bool B12isInGiveZone;                                                             // 0x02F1 (size: 0x1)
    class ACameraActor* Camera_Plan_FreeB12;                                          // 0x02F8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Plan_InstallB12;                      // 0x0300 (size: 0x8)
    class ACameraActor* Camera_Plan_UngrabbedB12;                                     // 0x0308 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Plan_ReviveB12;                       // 0x0310 (size: 0x8)
    class AActor* CatInstallPos;                                                      // 0x0318 (size: 0x8)
    class AActor* ShowSwitch_TriggerZone;                                             // 0x0320 (size: 0x8)
    bool ClementineShowExit;                                                          // 0x0328 (size: 0x1)
    class AActor* Clementine_WaitOpenDoor_POS;                                        // 0x0330 (size: 0x8)
    class AActor* ShowDir_ExitTarget;                                                 // 0x0338 (size: 0x8)
    class ABP_DoorWindowBase_C* Door;                                                 // 0x0340 (size: 0x8)
    class AActor* Clementine_InTheHall_POS;                                           // 0x0348 (size: 0x8)
    bool CatHasBackpack;                                                              // 0x0350 (size: 0x1)
    class ABP_SplineCameraCine_Simple_C* camera_PlanTVOff;                            // 0x0358 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0360 (size: 0x8)
    class AActor* LookAtDrone;                                                        // 0x0368 (size: 0x8)
    class ABP_sfx_splineLocalizer_C* sfx cable;                                       // 0x0370 (size: 0x8)
    class AActor* Clementine_RescueB12_POS;                                           // 0x0378 (size: 0x8)
    class ABP_DoorJail_CellZone_C* DoorJail_CellZone;                                 // 0x0380 (size: 0x8)
    FVector DroneRevive_InitPos;                                                      // 0x0388 (size: 0xC)
    FVector DroneRevive_InitPos_Offset;                                               // 0x0394 (size: 0xC)
    FVector DroneGrabbed_InitPos;                                                     // 0x03A0 (size: 0xC)
    class ABP_SplineCameraCine_Simple_C* Camera_Plan_MaterialB12;                     // 0x03B0 (size: 0x8)
    class ABP_Dialog_Zone_C* B12DialogZone;                                           // 0x03B8 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifierCorridor;                   // 0x03C0 (size: 0x8)
    class ASeq_ActivateSentinelBySector_C* SentinelsCourtyardManager;                 // 0x03C8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Plan_OnCat;                           // 0x03D0 (size: 0x8)
    class UMaterialInstanceDynamic* ToyoColor_Material;                               // 0x03D8 (size: 0x8)
    class AActor* CollisionClem;                                                      // 0x03E0 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAD4A9691B();
    void Tick_6246EF4646E19036986D72BAD4A9691B(float Ratio);
    void Complete_6246EF4646E19036986D72BA89BF993C();
    void Tick_6246EF4646E19036986D72BA89BF993C(float Ratio);
    void Complete_6246EF4646E19036986D72BA58C341AE();
    void Tick_6246EF4646E19036986D72BA58C341AE(float Ratio);
    void Complete_6246EF4646E19036986D72BA3288E226();
    void Tick_6246EF4646E19036986D72BA3288E226(float Ratio);
    void Complete_6246EF4646E19036986D72BAB7D067ED();
    void Tick_6246EF4646E19036986D72BAB7D067ED(float Ratio);
    void Complete_6246EF4646E19036986D72BA68F846B9();
    void Tick_6246EF4646E19036986D72BA68F846B9(float Ratio);
    void Complete_6246EF4646E19036986D72BADAF9319B();
    void Tick_6246EF4646E19036986D72BADAF9319B(float Ratio);
    void OnStartSequence();
    void LogicTrigger();
    void Change Sequence();
    void BndEvt__GiveB12Zone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__GiveB12Zone_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__ShowSwitch_TriggerZone_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__ShowSwitch_TriggerZone_K2Node_ComponentBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void DroneSwitch();
    void BndEvt__Seq_B12_IsFree_m_saveComponent_K2Node_ComponentBoundEvent_5_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_Seq_B12_IsFree(int32 EntryPoint);
}; // Size: 0x3E8

#endif
