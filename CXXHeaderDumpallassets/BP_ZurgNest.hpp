#ifndef UE4SS_SDK_BP_ZurgNest_HPP
#define UE4SS_SDK_BP_ZurgNest_HPP

class ABP_ZurgNest_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAntiZurgLightableComponent* AntiZurgLightable;                             // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper hatching;                           // 0x0238 (size: 0x8)
    class USphereComponent* SphereActivationCollision;                                // 0x0240 (size: 0x8)
    class UChildActorComponent* ZurgZone;                                             // 0x0248 (size: 0x8)
    class ULightableComponent* lightable;                                             // 0x0250 (size: 0x8)
    class USphereComponent* SphereNearCollision;                                      // 0x0258 (size: 0x8)
    class USphereComponent* LightableCollider;                                        // 0x0260 (size: 0x8)
    class ULifeComponent* Life;                                                       // 0x0268 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0270 (size: 0x8)
    class UChildActorComponent* ZurgLeader;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* Material_DI;                                      // 0x0290 (size: 0x8)
    int32 SpawnCount;                                                                 // 0x0298 (size: 0x4)
    float DetectionDistance;                                                          // 0x029C (size: 0x4)
    FVector locationInit;                                                             // 0x02A0 (size: 0xC)
    float SpawnRadius;                                                                // 0x02AC (size: 0x4)
    FLinearColor Couille_Color;                                                       // 0x02B0 (size: 0x10)
    float catDistance;                                                                // 0x02C0 (size: 0x4)
    TArray<class USoundBase*> sfx_hatching_proximity;                                 // 0x02C8 (size: 0x10)
    float base hatching pitch;                                                        // 0x02D8 (size: 0x4)
    class UZurgNewSettings* SwarmSetting;                                             // 0x02E0 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* leader;                                              // 0x02E8 (size: 0x8)
    float goingtoexplose_smooth;                                                      // 0x02F0 (size: 0x4)
    float TimeForSine;                                                                // 0x02F4 (size: 0x4)
    float LightDamageAmountPerSecond;                                                 // 0x02F8 (size: 0x4)
    float EjectionDistance;                                                           // 0x02FC (size: 0x4)
    float InvulerabilityDurationInSecond;                                             // 0x0300 (size: 0x4)
    int32 activationCounter;                                                          // 0x0304 (size: 0x4)
    bool SpawnAtCustomLocation;                                                       // 0x0308 (size: 0x1)

    void _ResetAnimMaterials();
    void _TickLightDamage(float DeltaTime);
    void _TickAnimateMaterials(float DeltaSeconds);
    void _PopActivationEnabled();
    void _UpdateActivationEnabled();
    void _PushActivationEnabled();
    void _UpdateDistanceWithCat();
    void _Explode();
    void _Spawn(int32 SpawnCount);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAAC9979B1();
    void Tick_6246EF4646E19036986D72BAAC9979B1(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Life_K2Node_ComponentBoundEvent_0_LifeComponentKilledDelegate__DelegateSignature(class ULifeComponent* _lifeComponent, class AActor* _killer);
    void StartExplosion();
    void BndEvt__Sphere_nearcol_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SphereColActivation_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SphereColActivation_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Lightable_K2Node_ComponentBoundEvent_4_LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void BndEvt__Lightable_K2Node_ComponentBoundEvent_5_LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void OnLeaderStreamedIn(class UStreamingComponent* _component);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ZurgNest(int32 EntryPoint);
}; // Size: 0x309

#endif
