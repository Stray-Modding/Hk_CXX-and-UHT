#ifndef UE4SS_SDK_BP_props_specific_HPP
#define UE4SS_SDK_BP_props_specific_HPP

class ABP_props_specific_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    bool DoEmitNoise;                                                                 // 0x0248 (size: 0x1)
    float IntervalBetweenNoiseEmissions;                                              // 0x024C (size: 0x4)
    float TimeBeforeFirstNoiseEmission;                                               // 0x0250 (size: 0x4)
    class AActor* CustomNoiseEmitter;                                                 // 0x0258 (size: 0x8)
    float ZurgSoundOwningDuration;                                                    // 0x0260 (size: 0x4)

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_props_specific(int32 EntryPoint);
}; // Size: 0x264

#endif
