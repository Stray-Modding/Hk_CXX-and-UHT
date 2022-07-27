#ifndef UE4SS_SDK_BP_Base_Destructible_HPP
#define UE4SS_SDK_BP_Base_Destructible_HPP

class ABP_Base_Destructible_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* NoDestructible;                                       // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    TArray<class UStaticMesh*> StaticMesh;                                            // 0x0248 (size: 0x10)
    TArray<class UDestructibleMesh*> DestructibleMesh;                                // 0x0258 (size: 0x10)
    FRandomStream RandomStream;                                                       // 0x0268 (size: 0x8)
    bool Break;                                                                       // 0x0270 (size: 0x1)
    FTransform BreakableBreakLocation;                                                // 0x0280 (size: 0x30)
    FVector ImpactPoint;                                                              // 0x02B0 (size: 0xC)
    int32 MeshIndex;                                                                  // 0x02BC (size: 0x4)
    FVector Velocity;                                                                 // 0x02C0 (size: 0xC)
    bool IsOnScreen;                                                                  // 0x02CC (size: 0x1)
    bool Debug;                                                                       // 0x02CD (size: 0x1)
    float BreakThreshold;                                                             // 0x02D0 (size: 0x4)
    FVector LastVelocityBeforeBreak;                                                  // 0x02D4 (size: 0xC)
    float BreakImpulse Multiplier;                                                    // 0x02E0 (size: 0x4)
    float audio debris threshold;                                                     // 0x02E4 (size: 0x4)

    void UserConstructionScript();
    void BreakIt(FVector ImpactPoint);
    void BndEvt__NoDestructible_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__NoDestructible_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, FName BoneName);
    void BndEvt__NoDestructible_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void UpdateTickEnabled();
    void OnDestructibleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Base_Destructible(int32 EntryPoint);
}; // Size: 0x2E8

#endif
