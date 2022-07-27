#ifndef UE4SS_SDK_BP_Random_PostIt_HPP
#define UE4SS_SDK_BP_Random_PostIt_HPP

class ABP_Random_PostIt_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMesh*> Meshes;
    FRandomStream RandomStream;
    bool Seed;
    float Rotation Min pitch;
    float Rotation Max pitch;
    float Rotation Min roll;
    float Rotation Max roll;

    void UserConstructionScript();
};

#endif
