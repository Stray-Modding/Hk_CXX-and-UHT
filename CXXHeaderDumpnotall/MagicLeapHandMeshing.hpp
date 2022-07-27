#ifndef UE4SS_SDK_MagicLeapHandMeshing_HPP
#define UE4SS_SDK_MagicLeapHandMeshing_HPP

class UMagicLeapHandMeshingComponent : public UActorComponent
{

    void SetUseWeightedNormals(const bool bInUseWeightedNormals);
    bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    bool DestroyClient();
    bool CreateClient();
    bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

struct FMagicLeapHandMeshBlock
{
    int32 IndexCount;
    int32 VertexCount;
    TArray<FVector> Vertex;
    TArray<int32> Index;

};

struct FMagicLeapHandMesh
{
    int32 Version;
    int32 DataCount;
    TArray<FMagicLeapHandMeshBlock> Data;

};

#endif
