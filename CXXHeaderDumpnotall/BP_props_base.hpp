#ifndef UE4SS_SDK_BP_props_base_HPP
#define UE4SS_SDK_BP_props_base_HPP

class ABP_props_base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* vibration;
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;
    class UStreamingComponent* Streaming;
    class UStaticMeshComponent* StaticMesh;
    bool DoEmitNoise;
    float IntervalBetweenNoiseEmissions;
    float TimeBeforeFirstNoiseEmission;
    class AActor* CustomNoiseEmitter;
    float ZurgSoundOwningDuration;

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void BndEvt__BP_props_base_COMP_PhysicsAudioComponent_K2Node_ComponentBoundEvent_1_SurfaceMovingDelegate__DelegateSignature(class UPhysicsEventsComponent* _physicsEventsComponent);
    void ExecuteUbergraph_BP_props_base(int32 EntryPoint);
};

#endif
