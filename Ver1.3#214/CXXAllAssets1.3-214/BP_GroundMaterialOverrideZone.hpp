#ifndef UE4SS_SDK_BP_GroundMaterialOverrideZone_HPP
#define UE4SS_SDK_BP_GroundMaterialOverrideZone_HPP

class ABP_GroundMaterialOverrideZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TEnumAsByte<E_ShapeType> ShapeType;                                               // 0x0238 (size: 0x1)
    class UPrimitiveComponent* Collider;                                              // 0x0240 (size: 0x8)
    float CapsuleRadius;                                                              // 0x0248 (size: 0x4)
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0250 (size: 0x8)
    int32 Priority;                                                                   // 0x0258 (size: 0x4)
    bool Visible;                                                                     // 0x025C (size: 0x1)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_GroundMaterialOverrideZone(int32 EntryPoint);
}; // Size: 0x25D

#endif
