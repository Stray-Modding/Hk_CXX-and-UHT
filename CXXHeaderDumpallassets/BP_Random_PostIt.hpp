#ifndef UE4SS_SDK_BP_Random_PostIt_HPP
#define UE4SS_SDK_BP_Random_PostIt_HPP

class ABP_Random_PostIt_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<class UStaticMesh*> Meshes;                                                // 0x0238 (size: 0x10)
    FRandomStream RandomStream;                                                       // 0x0248 (size: 0x8)
    bool Seed;                                                                        // 0x0250 (size: 0x1)
    float Rotation Min pitch;                                                         // 0x0254 (size: 0x4)
    float Rotation Max pitch;                                                         // 0x0258 (size: 0x4)
    float Rotation Min roll;                                                          // 0x025C (size: 0x4)
    float Rotation Max roll;                                                          // 0x0260 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x264

#endif
