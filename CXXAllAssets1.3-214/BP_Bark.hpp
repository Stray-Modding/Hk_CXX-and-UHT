#ifndef UE4SS_SDK_BP_Bark_HPP
#define UE4SS_SDK_BP_Bark_HPP

class ABP_Bark_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_wanderer_C* COMP_wanderer;                                            // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UBoxComponent* OnTheBark;                                                   // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Bark_Light_Mesh;                                      // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Bark;                                                 // 0x0260 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0268 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0270 (size: 0x8)
    class UPointLightComponent* Bark_Light;                                           // 0x0278 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0280 (size: 0x8)
    float sfx flow force;                                                             // 0x0288 (size: 0x4)

    bool IsCatOnBark();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Bark(int32 EntryPoint);
}; // Size: 0x28C

#endif
