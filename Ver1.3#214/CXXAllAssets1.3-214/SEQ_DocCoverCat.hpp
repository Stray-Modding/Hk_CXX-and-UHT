#ifndef UE4SS_SDK_SEQ_DocCoverCat_HPP
#define UE4SS_SDK_SEQ_DocCoverCat_HPP

class ASEQ_DocCoverCat_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* InsideHouse;                                                 // 0x0270 (size: 0x8)
    class ABP_Droid_C* Doc;                                                           // 0x0278 (size: 0x8)
    bool ActivateCover;                                                               // 0x0280 (size: 0x1)
    bool DroidIsReadyToCoverCat;                                                      // 0x0281 (size: 0x1)
    bool CatIsInHome;                                                                 // 0x0282 (size: 0x1)
    bool DroidHasRefillTorchlight;                                                    // 0x0283 (size: 0x1)
    bool ZurgsInGeneratorZoneAreSpawned;                                              // 0x0284 (size: 0x1)
    TEnumAsByte<DocCoverCat_State> SequenceState;                                     // 0x0285 (size: 0x1)
    class ABP_DocDefluxor_C* Defluxor;                                                // 0x0288 (size: 0x8)
    class AActor* ActorToTargetWithDefluxor;                                          // 0x0290 (size: 0x8)
    class ASEQ_DocGoToTheBalcony_C* SEQ_DocGoToTheBalcony;                            // 0x0298 (size: 0x8)
    class ACameraActor* PlanCam_Refill_Generator;                                     // 0x02A0 (size: 0x8)
    class ACameraActor* PlanCam_Refill_DOC;                                           // 0x02A8 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* PlanCamOnSpline_Generator;                   // 0x02B0 (size: 0x8)
    class ACameraActor* PlanCam_SpawnZurgs;                                           // 0x02B8 (size: 0x8)
    class AActor* DOC_RefillDefluxor_POS;                                             // 0x02C0 (size: 0x8)
    class AActor* DOC_Shoot_POS;                                                      // 0x02C8 (size: 0x8)
    class AActor* LED_GeneratorScreen;                                                // 0x02D0 (size: 0x8)
    class UMaterialInstanceDynamic* Color_Material;                                   // 0x02D8 (size: 0x8)
    TArray<class ASEQ_ZurgSpawnManager_C*> ZurgsSpawnerInGeneratorZone;               // 0x02E0 (size: 0x10)
    TArray<class ASEQ_ZurgSpawnManager_C*> ZurgsSpawnerInFlatZone;                    // 0x02F0 (size: 0x10)
    TArray<class ABP_ZurgPawn_Leader_C*> ZurgsToCheckDistanceInGeneratorZone;         // 0x0300 (size: 0x10)
    TArray<class ABP_ZurgPawn_Leader_C*> ZurgsToCheckDistanceInFlatZone;              // 0x0310 (size: 0x10)
    TArray<class ABP_ZurgPawn_Leader_C*> ZurgsToCheckDistance;                        // 0x0320 (size: 0x10)
    FVector targetLocationBlended;                                                    // 0x0330 (size: 0xC)
    FVector TargetLocation;                                                           // 0x033C (size: 0xC)
    class AZurgPawnSlave* ZurgsClosestSlave;                                          // 0x0348 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0350 (size: 0x10)
    class ABP_CameraThirdPersonModifierZone_C* CameraModifier;                        // 0x0360 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> ZurgsToSpawnForCine;                         // 0x0368 (size: 0x10)
    class UCameraShakeBase* CameraShake;                                              // 0x0378 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0380 (size: 0x8)
    class AActor* ZurgLockCatZone;                                                    // 0x0388 (size: 0x8)
    class AActor* TargetOnBridge;                                                     // 0x0390 (size: 0x8)
    float TimerToKillZurg;                                                            // 0x0398 (size: 0x4)
    int32 ZurgCountInGeneratorZone;                                                   // 0x039C (size: 0x4)
    bool DocWillCoverBridge;                                                          // 0x03A0 (size: 0x1)
    bool ZurgCountNotRefill;                                                          // 0x03A1 (size: 0x1)
    class AActor* CatNearTheBridgeZone;                                               // 0x03A8 (size: 0x8)
    bool IsCatNearTheBridge;                                                          // 0x03B0 (size: 0x1)
    class AActor* Cat_CoverStart_POS;                                                 // 0x03B8 (size: 0x8)
    class AActor* Cat_CoverMove_POS;                                                  // 0x03C0 (size: 0x8)
    class AActor* Cat_LookAt;                                                         // 0x03C8 (size: 0x8)
    class AActor* CableCollision;                                                     // 0x03D0 (size: 0x8)
    bool CheckpointRefill;                                                            // 0x03D8 (size: 0x1)
    float DefluxorAngle;                                                              // 0x03DC (size: 0x4)
    TArray<class UAnimSequence*> Animations;                                          // 0x03E0 (size: 0x10)

    void GetClosestZurgFromThisLocFromArray(TArray<class ABP_ZurgPawn_Leader_C*>& Leaders, FVector Location, class AZurgPawnSlave*& ClosestSlave1);
    void ActivateTorchLigh(bool Activate);
    void GetClosestZurgFromThisLoc(class ABP_ZurgPawn_Leader_C* Leaders, FVector Location, class AZurgPawnSlave*& ClosestSlave1);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA73B83A16();
    void Tick_6246EF4646E19036986D72BA73B83A16(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__InsideHouse_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Droid Refill Torchlight();
    void StopCover();
    void Change State();
    void BndEvt__SEQ_DocCoverCat_m_streamingComponent_K2Node_ComponentBoundEvent_5_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__SEQ_DocCoverCat_CatPassBridgeZone_K2Node_ComponentBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_DocCoverCat_CatPassBridgeZone_K2Node_ComponentBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_DocCoverCat_CatNearTheBridgeZone_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SEQ_DocCoverCat_CatNearTheBridgeZone_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnStartFromCheckpoint();
    void Refill_Checkpoint();
    void StartCover();
    void Camera_Rumble(float Scale);
    void DestroyZurgs();
    void ExecuteUbergraph_SEQ_DocCoverCat(int32 EntryPoint);
}; // Size: 0x3F0

#endif
