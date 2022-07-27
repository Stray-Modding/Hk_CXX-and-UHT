#ifndef UE4SS_SDK_GFur_HPP
#define UE4SS_SDK_GFur_HPP

struct FFurLod
{
    float ScreenSize;
    int32 LayerCount;
    int32 Lod;
    bool PhysicsEnabled;
    bool DisableMorphTargets;

};

class UGFurComponent : public UMeshComponent
{
    class USkeletalMesh* SkeletalGrowMesh;
    class UStaticMesh* StaticGrowMesh;
    class UFurSplines* FurSplines;
    TArray<class USkeletalMesh*> SkeletalGuideMeshes;
    TArray<class UStaticMesh*> StaticGuideMeshes;
    int32 LayerCount;
    float MinScreenSize;
    TArray<FFurLod> LODs;
    bool LODFromParent;
    float ShellBias;
    float FurLength;
    float MinFurLength;
    bool RemoveFacesWithoutSplines;
    bool PhysicsEnabled;
    float ForceDistribution;
    float Stiffness;
    float Damping;
    FVector ConstantForce;
    float MaxForce;
    float MaxForceTorqueFactor;
    float ReferenceHairBias;
    float HairLengthForceUniformity;
    float MaxPhysicsOffsetLength;
    float NoiseStrength;
    bool DisableMorphTargets;
    float StreamingDistanceMultiplier;
    TArray<class UMaterialInstanceDynamic*> FurMaterials;

    void RegenerateFur();
};

class UFurSplines : public UObject
{
    TArray<FVector> Vertices;
    TArray<int32> Index;
    TArray<int32> Count;
    int32 ControlPointCount;
    FString ImportFilename;
    int32 Version;
    int32 ImportTransformation;
    float Threshold;

};

#endif
