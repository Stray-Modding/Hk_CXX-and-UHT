#ifndef UE4SS_SDK_BP_RotatingPlazaTower_HPP
#define UE4SS_SDK_BP_RotatingPlazaTower_HPP

class ABP_RotatingPlazaTower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UStaticMesh* RotatingMesh;                                                  // 0x0248 (size: 0x8)
    FRotator Rotation Rate;                                                           // 0x0250 (size: 0xC)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RotatingPlazaTower(int32 EntryPoint);
}; // Size: 0x25C

#endif
