#ifndef UE4SS_SDK_BP_Pigeon_HPP
#define UE4SS_SDK_BP_Pigeon_HPP

class ABP_Pigeon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* PigeonColl;                                               // 0x0230 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FVector StartLocation;                                                            // 0x0250 (size: 0xC)
    FRotator StartRotation;                                                           // 0x025C (size: 0xC)
    FVector StartScale;                                                               // 0x0268 (size: 0xC)
    FVector CatLocation;                                                              // 0x0274 (size: 0xC)
    float RandomSpeed;                                                                // 0x0280 (size: 0x4)
    FVector RandomDirection;                                                          // 0x0284 (size: 0xC)
    int32 MaxSearchCollision;                                                         // 0x0290 (size: 0x4)
    float RandomHeight;                                                               // 0x0294 (size: 0x4)
    FVector TargetLocation;                                                           // 0x0298 (size: 0xC)
    FVector ActorLocation+1;                                                          // 0x02A4 (size: 0xC)

    void UserConstructionScript();
    void Complete_C95AF8BA489A044644880BB53B53F1B5();
    void Tick_C95AF8BA489A044644880BB53B53F1B5(float Ratio);
    void ReceiveBeginPlay();
    void GoFly();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Pigeon(int32 EntryPoint);
}; // Size: 0x2B0

#endif
