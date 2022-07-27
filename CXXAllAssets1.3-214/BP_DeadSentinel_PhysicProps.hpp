#ifndef UE4SS_SDK_BP_DeadSentinel_PhysicProps_HPP
#define UE4SS_SDK_BP_DeadSentinel_PhysicProps_HPP

class ABP_DeadSentinel_PhysicProps_C : public AActor
{
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Sentinel_Mesh;                                        // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
