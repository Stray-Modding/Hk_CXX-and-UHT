#ifndef UE4SS_SDK_BP_ZurgPawnSlave_HPP
#define UE4SS_SDK_BP_ZurgPawnSlave_HPP

class ABP_ZurgPawnSlave_C : public AZurgPawnSlave
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0648 (size: 0x8)
    class UAudioComponent* zurg_stunned_loop_02;                                      // 0x0650 (size: 0x8)
    class UAudioComponent* zurg_hiss_loop_01;                                         // 0x0658 (size: 0x8)
    float LerpToInterestPoint_Alpha_F937213F4D0DEE46EB35FFA7F15AE771;                 // 0x0660 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LerpToInterestPoint__Direction_F937213F4D0DEE46EB35FFA7F15AE771; // 0x0664 (size: 0x1)
    class UTimelineComponent* LerpToInterestPoint;                                    // 0x0668 (size: 0x8)
    float LeaveInterestPointTimeline_Alpha_AB1B7AA143083338634E1997BB274337;          // 0x0670 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LeaveInterestPointTimeline__Direction_AB1B7AA143083338634E1997BB274337; // 0x0674 (size: 0x1)
    class UTimelineComponent* LeaveInterestPointTimeline;                             // 0x0678 (size: 0x8)
    float Timeline_2_Alpha_89D4EB144D58B7067068AF9D6F6E2D5F;                          // 0x0680 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_89D4EB144D58B7067068AF9D6F6E2D5F; // 0x0684 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0688 (size: 0x8)
    float ZOffset;                                                                    // 0x0690 (size: 0x4)
    float MaxZOffset;                                                                 // 0x0694 (size: 0x4)
    float LastZOffset;                                                                // 0x0698 (size: 0x4)
    class UBP_Zurg_InterestPoint_C* CurrentInterestedPoint;                           // 0x06A0 (size: 0x8)
    class UBP_Zurg_InterestPoint_C* LastInterestPoint;                                // 0x06A8 (size: 0x8)
    float MinimalInterestPointDelay;                                                  // 0x06B0 (size: 0x4)
    FVector LastLocationBeforeLaunch;                                                 // 0x06B4 (size: 0xC)
    float MaxAccelerationTargetTemp;                                                  // 0x06C0 (size: 0x4)
    float MaxWalkSpeedTargetTemp;                                                     // 0x06C4 (size: 0x4)
    float InitialMaxAcceleration;                                                     // 0x06C8 (size: 0x4)
    float InitialMaxWalkSpeed;                                                        // 0x06CC (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x06D0 (size: 0x8)
    class AActor* AttackTargetActor;                                                  // 0x06D8 (size: 0x8)
    bool bIsAttached;                                                                 // 0x06E0 (size: 0x1)
    FVector InterestPointMoveToLocation;                                              // 0x06E4 (size: 0xC)
    FTransform BeforeJumpOnInterestPointTransform;                                    // 0x06F0 (size: 0x30)
    FVector BeforeMoveAwayFromLightLocation;                                          // 0x0720 (size: 0xC)
    TArray<class UAntiZurgSpotlightComponent*> CurrentlyEnlightingSpotlight;          // 0x0730 (size: 0x10)
    FVector BestEscapeUnderLightDirection;                                            // 0x0740 (size: 0xC)
    FTimerHandle AttackPointTimerHandle;                                              // 0x0750 (size: 0x8)
    class UZurgAttackPointComponent* CurrentAttackPoint;                              // 0x0758 (size: 0x8)
    float InitialTickInterval;                                                        // 0x0760 (size: 0x4)
    float UnderLight Random Rotation;                                                 // 0x0764 (size: 0x4)
    class ABP_ZurgPawn_Leader_C* leader;                                              // 0x0768 (size: 0x8)
    float UnderSpotLightDT;                                                           // 0x0770 (size: 0x4)
    int32 UnderRepulsingZurgLightCount;                                               // 0x0774 (size: 0x4)
    float InitialSpotlightIntensity;                                                  // 0x0778 (size: 0x4)
    float EyeOpeningSpeedTemp;                                                        // 0x077C (size: 0x4)
    int32 UnderDamagingZurgLightCount;                                                // 0x0780 (size: 0x4)
    float MinimalLightIntensityToAvoid;                                               // 0x0784 (size: 0x4)
    FTransform InitialMeshRelativeTransform;                                          // 0x0790 (size: 0x30)
    class AActor* EscapingActor;                                                      // 0x07C0 (size: 0x8)
    float EscapingDistance;                                                           // 0x07C8 (size: 0x4)
    FVector BeforeDeactivationScale;                                                  // 0x07CC (size: 0xC)
    bool bIsClimbingOn;                                                               // 0x07D8 (size: 0x1)
    FTransform BeforeScaleMeshRelativeTransform;                                      // 0x07E0 (size: 0x30)
    float StunnedTime;                                                                // 0x0810 (size: 0x4)
    float hissNoiseTimer;                                                             // 0x0814 (size: 0x4)
    float lastFallingVelocity;                                                        // 0x0818 (size: 0x4)

    void SetStateFromLeader();
    void DoesLightableTakeDamage(bool& IsTakingDamage);
    bool CanClimb();
    void SaveInitialValues();
    bool IsOnInterestPoint();
    void JumpToLocation(FVector EndPos, float ArcParam, FVector& OutLaunchVelocity);
    void LerpToInterestPoint__FinishedFunc();
    void LerpToInterestPoint__UpdateFunc();
    void LeaveInterestPointTimeline__FinishedFunc();
    void LeaveInterestPointTimeline__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Complete_6246EF4646E19036986D72BA84B8A0D7();
    void Tick_6246EF4646E19036986D72BA84B8A0D7(float Ratio);
    void Complete_6246EF4646E19036986D72BADDA82DD1();
    void Tick_6246EF4646E19036986D72BADDA82DD1(float Ratio);
    void Complete_6246EF4646E19036986D72BA13CB93B2();
    void Tick_6246EF4646E19036986D72BA13CB93B2(float Ratio);
    void Complete_6246EF4646E19036986D72BAD516CA62();
    void Tick_6246EF4646E19036986D72BAD516CA62(float Ratio);
    void Complete_6246EF4646E19036986D72BA8B6AD625();
    void Tick_6246EF4646E19036986D72BA8B6AD625(float Ratio);
    void Behavior_Escaping_Enter();
    void Behavior_Escaping_Tick(float _dt);
    void Behavior_Escaping_Exit();
    void StartEscaping(class AActor* EscapingActor, float Distance);
    void StopEscaping();
    void State_Sleeping_Enter();
    void State_Idle_Enter();
    void State_Alerted_Enter();
    void State_Chasing_Enter();
    void State_Angry_Enter();
    void State_Routine_Enter();
    void State_Routine_Exit();
    void State_Chasing_Exit();
    void State_UnderLight_Enter();
    void State_UnderLight_Exit();
    void OnStateChanged(EZurgState _newState);
    void OnDetachedFromCat(class ACatPawn* _catPawn, class USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    void OnAttachedOnCat(class ACatPawn* _catPawn, class USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    void State_Attacking_Exit();
    void State_Attacking_Enter();
    void ResetAttackWithDelay(float Time);
    void State_Grabbing_Enter();
    void State_Grabbing_Exit();
    void State_Attacking_Tick(float _dt);
    void OnAttack(class AActor* _actorToAttack);
    void State_OnInterestPoint_Enter();
    void State_OnInterestPoint_Exit();
    void State_Interested_Enter();
    void State_Interested_Tick(float _dt);
    void State_Interested_Exit();
    void LeaveInterestPointOnTimer();
    void State_Sleeping_Exit();
    void OnAttachOnAttackPoint(class UZurgAttackPointComponent* _zurgAttackPoint);
    void OnDetachedFromAttackPoint(class UZurgAttackPointComponent* _zurgAttackPoint);
    void DetachFromAttackPoint();
    void OnZurgSettingsChanged(class UZurgNewSettings* _newZurgSettings);
    void State_Grabbing_Tick(float _dt);
    void State_Ejected_Enter();
    void State_Ejected_Exit();
    void State_Angry_Exit();
    void State_Idle_Exit();
    void State_Falling_Tick(float _dt);
    void State_Falling_Exit();
    void State_Falling_Enter();
    void State_Sleeping_Tick(float _dt);
    void Deactivated_Enter();
    void Activated_Enter();
    void State_Stunned_Enter();
    void State_Stunned_Tick(float _dt);
    void State_Stunned_Exit();
    void Stun(float Time);
    void State_UnderLight_Tick(float _dt);
    void GoToInterestPoint(const class UBP_Zurg_InterestPoint_C* Interest Point);
    void LeaveInterestPoint();
    void JumpAndAttachToInterestPoint(class UPrimitiveComponent* AttachToThisComponent, FTransform Transform);
    void ReceiveBeginPlay();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnProximityEnterDetection(class AActor* _detectedActor);
    void OnZurgLostLeader();
    void OnZurgFoundLeader(class AZurgPawnLeader* _leader);
    void SneakyDeath();
    void OnEnterInSpotLight(class ULightableComponent* _lightable, class UAntiZurgSpotlightComponent* _spotlight);
    void OnExitSpotLight(class ULightableComponent* _lightable, class UAntiZurgSpotlightComponent* _spotlight);
    void TrySpawnZurgStateSound();
    void OnCatOverlap(class ABP_CatPawn_C* BP Cat Pawn);
    void SpawnDeathFx();
    void _OnTakeDamage(class ULifeComponent* _lifeComponent, class AActor* _damageApplier, float _damageAmount);
    void _OnKilled(class ULifeComponent* _lifeComponent, class AActor* _killer);
    void _OnLifeRegeneration(class ULifeComponent* _lifeComponent, float _life);
    void stopHissSound();
    void startHissSound();
    void OnAttachOnActorColliderBeginOverlap(class AActor* _otherActor);
    void ExecuteUbergraph_BP_ZurgPawnSlave(int32 EntryPoint);
}; // Size: 0x81C

#endif
