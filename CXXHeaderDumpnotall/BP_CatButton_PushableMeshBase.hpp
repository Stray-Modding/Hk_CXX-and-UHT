#ifndef UE4SS_SDK_BP_CatButton_PushableMeshBase_HPP
#define UE4SS_SDK_BP_CatButton_PushableMeshBase_HPP

class ABP_CatButton_PushableMeshBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* GUIPos;
    class UArrowComponent* PushDirection;
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;
    class USceneComponent* CatPos;
    class UArrowComponent* CatArrow;
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;
    class UStreamingComponent* Streaming;
    class USaveComponent* Save;
    class UBoxComponent* FallDetection;
    class USceneComponent* PawImpulsePoint;
    class USceneComponent* DefaultSceneRoot;
    bool IsFalling;
    bool PushForwardCat;
    float Impulse1Strength;
    float Impulse2Strength;
    bool CanApplyImpulse;
    float Impulse3Strength;
    class USoundBase* PushableSound;
    class UAnimSequence* RightPawAnim;
    class UAnimSequence* LeftPawAnim;
    class USoundBase* FirstImpactSound;
    FVector ColliderInitPos;

    void Complete_6246EF4646E19036986D72BAF98BFE9B();
    void Tick_6246EF4646E19036986D72BAF98BFE9B(float Ratio);
    void Complete_6246EF4646E19036986D72BAC22F546B();
    void Tick_6246EF4646E19036986D72BAC22F546B(float Ratio);
    void BndEvt__BP_CatButton_PushableBase_FallDetection_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void On Falling();
    void On Impact(FHitResult Hit);
    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_PushableBase_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_2_AnimationStarted__DelegateSignature();
    void BndEvt__BP_CatButton_PushableBase_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_6_BeforeOnUseStarted__DelegateSignature();
    void BndEvt__BP_CatButton_PushableBase_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_8_BeforeAfterMoveUseStarted__DelegateSignature();
    void BndEvt__BP_CatButton_PushableMeshBase_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, FName BoneName);
    void BndEvt__BP_CatButton_PushableMeshBase_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void BndEvt__BP_CatButton_PushableMeshBase_StaticMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_CatButton_PushableMeshBase(int32 EntryPoint);
};

#endif
