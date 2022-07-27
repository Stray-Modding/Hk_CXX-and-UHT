#ifndef UE4SS_SDK_BP_Random_HPP
#define UE4SS_SDK_BP_Random_HPP

class ABP_Random_C : public AActor
{
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0228 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0230 (size: 0x8)
    FRandomStream Random_Stream;                                                      // 0x0238 (size: 0x8)
    TArray<class UStaticMesh*> Mesh;                                                  // 0x0240 (size: 0x10)
    float Max rotation X ?;                                                           // 0x0250 (size: 0x4)
    float Max rotation Y ?;                                                           // 0x0254 (size: 0x4)
    float Max rotation Z ?;                                                           // 0x0258 (size: 0x4)
    bool Rotation ?;                                                                  // 0x025C (size: 0x1)
    float Scale random +/-;                                                           // 0x0260 (size: 0x4)
    bool Scale ?;                                                                     // 0x0264 (size: 0x1)
    int32 NoRandom;                                                                   // 0x0268 (size: 0x4)
    bool Override_rand ?;                                                             // 0x026C (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x26D

#endif
