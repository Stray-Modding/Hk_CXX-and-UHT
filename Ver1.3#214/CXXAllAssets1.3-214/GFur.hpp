#ifndef UE4SS_SDK_GFur_HPP
#define UE4SS_SDK_GFur_HPP

struct FFurLod
{
    float ScreenSize;                                                                 // 0x0000 (size: 0x4)
    int32 LayerCount;                                                                 // 0x0004 (size: 0x4)
    int32 Lod;                                                                        // 0x0008 (size: 0x4)
    bool PhysicsEnabled;                                                              // 0x000C (size: 0x1)
    bool DisableMorphTargets;                                                         // 0x000D (size: 0x1)

}; // Size: 0x10

class UGFurComponent : public UMeshComponent
{
    class USkeletalMesh* SkeletalGrowMesh;                                            // 0x0478 (size: 0x8)
    class UStaticMesh* StaticGrowMesh;                                                // 0x0480 (size: 0x8)
    class UFurSplines* FurSplines;                                                    // 0x0488 (size: 0x8)
    TArray<class USkeletalMesh*> SkeletalGuideMeshes;                                 // 0x0490 (size: 0x10)
    TArray<class UStaticMesh*> StaticGuideMeshes;                                     // 0x04A0 (size: 0x10)
    int32 LayerCount;                                                                 // 0x04B0 (size: 0x4)
    float MinScreenSize;                                                              // 0x04B4 (size: 0x4)
    TArray<FFurLod> LODs;                                                             // 0x04B8 (size: 0x10)
    bool LODFromParent;                                                               // 0x04C8 (size: 0x1)
    float ShellBias;                                                                  // 0x04CC (size: 0x4)
    float FurLength;                                                                  // 0x04D0 (size: 0x4)
    float MinFurLength;                                                               // 0x04D4 (size: 0x4)
    bool RemoveFacesWithoutSplines;                                                   // 0x04D8 (size: 0x1)
    bool PhysicsEnabled;                                                              // 0x04D9 (size: 0x1)
    float ForceDistribution;                                                          // 0x04DC (size: 0x4)
    float Stiffness;                                                                  // 0x04E0 (size: 0x4)
    float Damping;                                                                    // 0x04E4 (size: 0x4)
    FVector ConstantForce;                                                            // 0x04E8 (size: 0xC)
    float MaxForce;                                                                   // 0x04F4 (size: 0x4)
    float MaxForceTorqueFactor;                                                       // 0x04F8 (size: 0x4)
    float ReferenceHairBias;                                                          // 0x04FC (size: 0x4)
    float HairLengthForceUniformity;                                                  // 0x0500 (size: 0x4)
    float MaxPhysicsOffsetLength;                                                     // 0x0504 (size: 0x4)
    float NoiseStrength;                                                              // 0x0508 (size: 0x4)
    bool DisableMorphTargets;                                                         // 0x050C (size: 0x1)
    float StreamingDistanceMultiplier;                                                // 0x0510 (size: 0x4)
    TArray<class UMaterialInstanceDynamic*> FurMaterials;                             // 0x0590 (size: 0x10)

    void RegenerateFur();
}; // Size: 0x640

class UFurSplines : public UObject
{
    TArray<FVector> Vertices;                                                         // 0x0028 (size: 0x10)
    TArray<int32> Index;                                                              // 0x0038 (size: 0x10)
    TArray<int32> Count;                                                              // 0x0048 (size: 0x10)
    int32 ControlPointCount;                                                          // 0x0058 (size: 0x4)
    FString ImportFilename;                                                           // 0x0060 (size: 0x10)
    int32 Version;                                                                    // 0x0070 (size: 0x4)
    int32 ImportTransformation;                                                       // 0x0074 (size: 0x4)
    float Threshold;                                                                  // 0x0078 (size: 0x4)

}; // Size: 0x80

#endif
