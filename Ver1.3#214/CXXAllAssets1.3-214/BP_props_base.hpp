#ifndef UE4SS_SDK_BP_props_base_HPP
#define UE4SS_SDK_BP_props_base_HPP

class ABP_props_base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    bool DoEmitNoise;                                                                 // 0x0250 (size: 0x1)
    float IntervalBetweenNoiseEmissions;                                              // 0x0254 (size: 0x4)
    float TimeBeforeFirstNoiseEmission;                                               // 0x0258 (size: 0x4)
    class AActor* CustomNoiseEmitter;                                                 // 0x0260 (size: 0x8)
    float ZurgSoundOwningDuration;                                                    // 0x0268 (size: 0x4)

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void BndEvt__BP_props_base_COMP_PhysicsAudioComponent_K2Node_ComponentBoundEvent_1_SurfaceMovingDelegate__DelegateSignature(class UPhysicsEventsComponent* _physicsEventsComponent);
    void ExecuteUbergraph_BP_props_base(int32 EntryPoint);
}; // Size: 0x26C

#endif
