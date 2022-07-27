#ifndef UE4SS_SDK_BP_PaintBucket_NoPhysx_HPP
#define UE4SS_SDK_BP_PaintBucket_NoPhysx_HPP

class ABP_PaintBucket_NoPhysx_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UCOMP_CatButtonGeneric_C* COMP_CatButtonGeneric;                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* PaintBucket;                                          // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* PaintBucket_Top;                                      // 0x0258 (size: 0x8)
    class USceneComponent* top+50;                                                    // 0x0260 (size: 0x8)
    class USceneComponent* Top;                                                       // 0x0268 (size: 0x8)
    class UMaterialInstanceDynamic* DynaMat Paint;                                    // 0x0270 (size: 0x8)
    FLinearColor RandomColor;                                                         // 0x0278 (size: 0x10)
    float ImpulseForce;                                                               // 0x0288 (size: 0x4)
    class UMaterialInstanceDynamic* DynaMat Paint Interior;                           // 0x0290 (size: 0x8)
    class AActor* CollisionActor;                                                     // 0x0298 (size: 0x8)
    class AActor* CollisionTarget;                                                    // 0x02A0 (size: 0x8)
    float Impulse Force Multiplier;                                                   // 0x02A8 (size: 0x4)
    bool Scripted?;                                                                   // 0x02AC (size: 0x1)
    TArray<class ABP_ScriptedPaintSplat_C*> Scripted Decals;                          // 0x02B0 (size: 0x10)
    bool Override Color/Ro;                                                           // 0x02C0 (size: 0x1)
    FLinearColor Overrided Color/Ro;                                                  // 0x02C4 (size: 0x10)
    class AActor* ActorToTrigger;                                                     // 0x02D8 (size: 0x8)
    FTransform Actor Init Transform;                                                  // 0x02E0 (size: 0x30)
    bool Is_Used;                                                                     // 0x0310 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA4C995C7D();
    void Tick_6246EF4646E19036986D72BA4C995C7D(float Ratio);
    void Complete_A1248A2C41CD75501E4DFFA043D70424();
    void Tick_A1248A2C41CD75501E4DFFA043D70424(float Ratio);
    void Complete_307BD94A4DD29699A72137AC1548D0F7();
    void Tick_307BD94A4DD29699A72137AC1548D0F7(float Ratio);
    void Complete_1CFD893C4F973AB1342E56A0D41FD9CF();
    void Tick_1CFD893C4F973AB1342E56A0D41FD9CF(float Ratio);
    void Complete_8ACB7AED4E8E5EC5F3A1F18EE59F294D();
    void Tick_8ACB7AED4E8E5EC5F3A1F18EE59F294D(float Ratio);
    void Complete_DB1297864F8BB3AE5A78F3B98AA24B24();
    void Tick_DB1297864F8BB3AE5A78F3B98AA24B24(float Ratio);
    void LogicTrigger();
    void BndEvt__PaintBucket_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void BndEvt__COMP_CatButtonGeneric_K2Node_ComponentBoundEvent_2_CatInteractionDispatched__DelegateSignature();
    void Impulse();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PaintBucket_NoPhysx(int32 EntryPoint);
}; // Size: 0x311

#endif
