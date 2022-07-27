#ifndef UE4SS_SDK_BP_SplineMesh_cable_Spawn_HPP
#define UE4SS_SDK_BP_SplineMesh_cable_Spawn_HPP

class ABP_SplineMesh_cable_Spawn_C : public AActor
{
    class USplineMeshComponent* SplineMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    bool update?;                                                                     // 0x0238 (size: 0x1)
    FVector2D random_scale;                                                           // 0x023C (size: 0x8)
    float Scale_min;                                                                  // 0x0244 (size: 0x4)
    float Scale_max;                                                                  // 0x0248 (size: 0x4)
    TArray<class UStaticMesh*> Cable_mesh;                                            // 0x0250 (size: 0x10)
    TArray<class UMaterialInstance*> Cable_Material_Instance;                         // 0x0260 (size: 0x10)
    FRandomStream RandomStream;                                                       // 0x0270 (size: 0x8)
    class UMaterialInstanceDynamic* dynamat;                                          // 0x0278 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x280

#endif
