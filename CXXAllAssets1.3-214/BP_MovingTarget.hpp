#ifndef UE4SS_SDK_BP_MovingTarget_HPP
#define UE4SS_SDK_BP_MovingTarget_HPP

class ABP_MovingTarget_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0240 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0250 (size: 0x8)
    FVector StartPosition;                                                            // 0x0258 (size: 0xC)
    FVector StartForward;                                                             // 0x0264 (size: 0xC)
    FVector StartUp;                                                                  // 0x0270 (size: 0xC)
    float Radius;                                                                     // 0x027C (size: 0x4)
    float XRotationPeriod;                                                            // 0x0280 (size: 0x4)
    float ZRotationPeriod;                                                            // 0x0284 (size: 0x4)
    FVector XMovement;                                                                // 0x0288 (size: 0xC)
    FVector ZMovement;                                                                // 0x0294 (size: 0xC)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MovingTarget(int32 EntryPoint);
}; // Size: 0x2A0

#endif
