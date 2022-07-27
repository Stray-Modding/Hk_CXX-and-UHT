#ifndef UE4SS_SDK_BP_Random_Mesh_Colors_HPP
#define UE4SS_SDK_BP_Random_Mesh_Colors_HPP

class ABP_Random_Mesh_Colors_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<class UStaticMesh*> Meshes;                                                // 0x0238 (size: 0x10)
    class UMaterialInstance* Material Instance;                                       // 0x0248 (size: 0x8)
    int32 Material Element Index;                                                     // 0x0250 (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x0254 (size: 0x8)
    bool Seed;                                                                        // 0x025C (size: 0x1)
    TArray<FLinearColor> Color;                                                       // 0x0260 (size: 0x10)
    float Rotation Min pitch;                                                         // 0x0270 (size: 0x4)
    float Rotation Max pitch;                                                         // 0x0274 (size: 0x4)
    float Rotation Min roll;                                                          // 0x0278 (size: 0x4)
    float Rotation Max roll;                                                          // 0x027C (size: 0x4)
    float Rotation Min yaw;                                                           // 0x0280 (size: 0x4)
    float Rotation Max yaw;                                                           // 0x0284 (size: 0x4)
    float Scale Min;                                                                  // 0x0288 (size: 0x4)
    float Scale Max;                                                                  // 0x028C (size: 0x4)
    class UMaterialInstanceDynamic* Dynamic_Mat;                                      // 0x0290 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x298

#endif
