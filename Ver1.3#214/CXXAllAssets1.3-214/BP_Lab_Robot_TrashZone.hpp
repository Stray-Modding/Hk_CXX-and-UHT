#ifndef UE4SS_SDK_BP_Lab_Robot_TrashZone_HPP
#define UE4SS_SDK_BP_Lab_Robot_TrashZone_HPP

class ABP_Lab_Robot_TrashZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper rotate;                             // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper move;                               // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UCOMP_UsableDroneTimer_C* COMP_UsableDroneTimer;                            // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Lab_Robot1;                                           // 0x0260 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class AActor* zone;                                                               // 0x0278 (size: 0x8)
    class AActor* ActorTarget;                                                        // 0x0280 (size: 0x8)
    float Speed;                                                                      // 0x0288 (size: 0x4)
    float BrakeDistance;                                                              // 0x028C (size: 0x4)
    class USplineComponent* SplineComp;                                               // 0x0290 (size: 0x8)
    float Z;                                                                          // 0x0298 (size: 0x4)
    bool CatIsInZone;                                                                 // 0x029C (size: 0x1)
    bool On/Off;                                                                      // 0x029D (size: 0x1)
    FVector NavLastPoint;                                                             // 0x02A0 (size: 0xC)
    bool NavLastPointHasChanged;                                                      // 0x02AC (size: 0x1)
    FVector NavTargetPosition;                                                        // 0x02B0 (size: 0xC)
    FVector TargetPosition;                                                           // 0x02BC (size: 0xC)
    TArray<class ABP_Lab_Robot_TrashZone_C*> OtherRobots;                             // 0x02C8 (size: 0x10)
    float current speed;                                                              // 0x02D8 (size: 0x4)
    float sfx move force;                                                             // 0x02DC (size: 0x4)
    bool sfx is probably rotating;                                                    // 0x02E0 (size: 0x1)
    bool Interact;                                                                    // 0x02E1 (size: 0x1)
    class ABP_BarrelRollable_C* Barrel;                                               // 0x02E8 (size: 0x8)
    bool Debug;                                                                       // 0x02F0 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x02F8 (size: 0x8)
    float DotWithCat;                                                                 // 0x0300 (size: 0x4)
    FRotator LookAtRotator;                                                           // 0x0304 (size: 0xC)
    FVector RobotLocationNormalized;                                                  // 0x0310 (size: 0xC)
    FVector CatLocationNormalized;                                                    // 0x031C (size: 0xC)
    bool NeedToUpdateNavmesh;                                                         // 0x0328 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA0A363567();
    void Tick_6246EF4646E19036986D72BA0A363567(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__BP_Lab_Robot_TrashZone_Zone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_0_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__BP_Lab_Robot_TrashZone_Zone_K2Node_ComponentBoundEvent_4_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__BP_Lab_Robot_TrashZone_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Deactivate();
    void BndEvt__BP_Lab_Robot_TrashZone_COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_2_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void SHOW DEBUG();
    void Check if Cat is Inside Barrel();
    void UpdateSound When Move();
    void Update Pathfind();
    void Update Rotation and Location();
    void BndEvt__BP_Lab_Robot_TrashZone_COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_5_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_Lab_Robot_TrashZone(int32 EntryPoint);
}; // Size: 0x329

#endif
