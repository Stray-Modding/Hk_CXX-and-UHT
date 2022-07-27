#ifndef UE4SS_SDK_BP_SentinelAI_HPP
#define UE4SS_SDK_BP_SentinelAI_HPP

class ABP_SentinelAI_C : public ASentinel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class USpotLightComponent* LaserPointLight;                                       // 0x0678 (size: 0x8)
    class USceneComponent* LaserStart;                                                // 0x0680 (size: 0x8)
    class UNoisableComponent* noisable;                                               // 0x0688 (size: 0x8)
    class USphereComponent* ProximitySphereDetector;                                  // 0x0690 (size: 0x8)
    class UTalkableComponent* talkable;                                               // 0x0698 (size: 0x8)
    class UGridSnappingComponent* GridSnapping;                                       // 0x06A0 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper patrol;                             // 0x06A8 (size: 0x8)
    class UCOMP_Voice_C* COMP_Voice;                                                  // 0x06B0 (size: 0x8)
    class UAudioComponent* TazerLoadingSound;                                         // 0x06B8 (size: 0x8)
    class UCOMP_CameraTarget_C* COMP_CameraTarget;                                    // 0x06C0 (size: 0x8)
    class UPointLightComponent* SelfIlluminationPointLight;                           // 0x06C8 (size: 0x8)
    class USpotLightComponent* VisionSpotLight;                                       // 0x06D0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x06D8 (size: 0x8)
    class UStaticMeshComponent* SentinelMesh;                                         // 0x06E0 (size: 0x8)
    FLinearColor TargetLightColor;                                                    // 0x06E8 (size: 0x10)
    class UMaterialInstanceDynamic* Dyn_Mat_SentinelLightColor;                       // 0x06F8 (size: 0x8)
    FLinearColor DefaultLightColor;                                                   // 0x0700 (size: 0x10)
    float DefaultLightDistance;                                                       // 0x0710 (size: 0x4)
    float InitialTargetLightDistance;                                                 // 0x0714 (size: 0x4)
    float InitialTargetLightAngle;                                                    // 0x0718 (size: 0x4)
    float DefaultLightAngle;                                                          // 0x071C (size: 0x4)
    bool bHearedSound;                                                                // 0x0720 (size: 0x1)
    float HearedExpireTime;                                                           // 0x0724 (size: 0x4)
    FVector HearedSoundLastLocation;                                                  // 0x0728 (size: 0xC)
    FVector DefaultLightDirection;                                                    // 0x0734 (size: 0xC)
    FVector TargetLightDirection;                                                     // 0x0740 (size: 0xC)
    bool bIsForcingLightDirection;                                                    // 0x074C (size: 0x1)
    TEnumAsByte<ENUM_SentinelAI_State> CurrentState;                                  // 0x074D (size: 0x1)
    FSmootherFloat TargetLightColorFloatSmoother;                                     // 0x0750 (size: 0xC)
    FSmootherFloat TargetLightDistanceSmoother;                                       // 0x075C (size: 0xC)
    FSmootherFloat TargetLightAngleSmoother;                                          // 0x0768 (size: 0xC)
    FSmootherVector TargetLightDirectionSmoother;                                     // 0x0774 (size: 0x1C)
    bool bTazerCanShoot;                                                              // 0x0790 (size: 0x1)
    int32 TazerShootCount;                                                            // 0x0794 (size: 0x4)
    class AActor* TazerTempTargetActor;                                               // 0x0798 (size: 0x8)
    float CurrentTazzerAimInnerRadius;                                                // 0x07A0 (size: 0x4)
    float CurrentTazzerAimOutterRadius;                                               // 0x07A4 (size: 0x4)
    FVector TempTazerTargetLocation;                                                  // 0x07A8 (size: 0xC)
    TArray<class AActor*> ActorsInDetectionZone;                                      // 0x07B8 (size: 0x10)
    FSmootherFloat TazerLoadingSmoother;                                              // 0x07C8 (size: 0xC)
    FSmootherFloat TazerPrecisionSmoother;                                            // 0x07D4 (size: 0xC)
    float TazerCurrentLoadingValue;                                                   // 0x07E0 (size: 0x4)
    class UMaterialInterface* Sentinel_Mat;                                           // 0x07E8 (size: 0x8)
    FRotator BeforeLookAtRelativeSpotlightRotation;                                   // 0x07F0 (size: 0xC)
    FRotator InitialVisionSpotlightRelativeRotation;                                  // 0x07FC (size: 0xC)
    FSmootherFloat VisionSpotlightRotationFloatSmoother;                              // 0x0808 (size: 0xC)
    FSmootherRotation EyeVisionRotationSmoother;                                      // 0x0820 (size: 0x30)
    TEnumAsByte<E_sfx_sentinel_state> sfx_state;                                      // 0x0850 (size: 0x1)
    bool LockedOnCat;                                                                 // 0x0851 (size: 0x1)
    class AActor* LockedOnThisActor;                                                  // 0x0858 (size: 0x8)
    float BeamWidth;                                                                  // 0x0860 (size: 0x4)
    float BeamOpacity;                                                                // 0x0864 (size: 0x4)
    FVector BeamTargetLocation;                                                       // 0x0868 (size: 0xC)
    FVector BeamTraceTargetLocation;                                                  // 0x0874 (size: 0xC)
    bool bLightLinkToTazer;                                                           // 0x0880 (size: 0x1)
    float TazerPrecision;                                                             // 0x0884 (size: 0x4)
    FVector TempTazerTargetVelocity;                                                  // 0x0888 (size: 0xC)
    FVector CurrentTazzerTargetLocation;                                              // 0x0894 (size: 0xC)
    float Inner Radius;                                                               // 0x08A0 (size: 0x4)
    float CurrentTazerPrecision;                                                      // 0x08A4 (size: 0x4)
    bool bTazerTargetIsDead;                                                          // 0x08A8 (size: 0x1)
    float TazerDistanceRatio;                                                         // 0x08AC (size: 0x4)
    FVector laserDirection;                                                           // 0x08B0 (size: 0xC)
    bool TazerHitTarget;                                                              // 0x08BC (size: 0x1)
    float SpeedAccuracy;                                                              // 0x08C0 (size: 0x4)

    void ShootPrediction(FVector& ShootLocation);
    void Draw Debug();
    void ComputeTazerAccuracy(class AActor* Target Actor, float& InnerRadius, float& Accuracy, float& SpeedAccuracy);
    void TazerShoot(TSubclassOf<class AActor> ProjectileClass, FVector To Location, class AActor*& Projectile Actor);
    void HasHearedSound(bool& HasHearedSound);
    void ForceLightLookAtLocation(FVector Location, float Speed);
    void ForceLightDirection(FVector Direction, float Speed);
    void SetLightLookAtLocationInTime(FVector LookAtLocation, float Time);
    void SetLightDirectionUpdate();
    void SetLightDirectionInTime(float Time, FVector NewDirection);
    void SetLightAngleUpdate();
    void SetLightAngleInTime(float TargetLightAngle, float Time);
    void SetLightDistanceUpdate();
    void SetLightDistanceInTime(float TargetLightDistance, float Time);
    void UpdateLight();
    void SetLightColorUpdate();
    void SetLightColorInTime(FLinearColor NewLightColor, float Time);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BADCAEEDED();
    void Tick_6246EF4646E19036986D72BADCAEEDED(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void TazzerBurst(TSubclassOf<class AActor> Projectile Class, FVector TargetLocation, class AActor* TargetActor);
    void Timer_Event_Shoot_Burst();
    void OnDisplayDebug(class UCanvas* _canvas);
    void TickTazer();
    void TickSphereDetector();
    void BndEvt__ProximitySphereDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ProximitySphereDetector_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Tazer_Loading_Enter();
    void Tazer_Loading_Exit();
    void Tazer_Loading_Tick(float _dt);
    void Tazer_UnLoading_Tick(float _dt);
    void Tazer_UnLoading_Enter();
    void Tazer_UnLoading_Exit();
    void Tazer_Idle_Enter();
    void Tazer_ReadyToShoot_Enter();
    void Tazer_ReadyToShoot_Exit();
    void Tazer_Shooting_Enter();
    void Tazer_Shooting_Exit();
    void Tazer_Idle_Exit();
    void Event_GoToIdleAfterShooting();
    void Tazer_Reloading_Enter();
    void Event_Reloading_Finished();
    void Tazer_Reloading_Tick(float _dt);
    void Tazer_Reloading_Exit();
    void BndEvt__Noisable_K2Node_ComponentBoundEvent_3_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void SetVisionLightRelativeRotation(FRotator New Rotation);
    void ResetVisionSpotlight(float _time);
    void VisionLookAtWorldLocation(FVector World Location, float InterpSpeed);
    void _OnVisionLightDisabled();
    void _OnVisionLightEnabled();
    void BndEvt__Talkable_K2Node_ComponentBoundEvent_0_TalkableLineDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void BndEvt__Talkable_K2Node_ComponentBoundEvent_4_TalkableLineDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void BndEvt__COMP_Voice_K2Node_ComponentBoundEvent_5_Phrase Started Play__DelegateSignature();
    void BndEvt__COMP_Voice_K2Node_ComponentBoundEvent_6_Phrase Stoppped Play__DelegateSignature();
    void sfx_switch to state(TEnumAsByte<E_sfx_sentinel_state> State);
    void BndEvt__BP_SentinelAI_m_streamingComponent_K2Node_ComponentBoundEvent_7_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_SentinelAI_m_streamingComponent_K2Node_ComponentBoundEvent_8_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void TickLightLinkToTazer();
    void OnSentinelActivityChanged_Event_0(bool status);
    void ExecuteUbergraph_BP_SentinelAI(int32 EntryPoint);
}; // Size: 0x8C4

#endif
