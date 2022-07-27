#ifndef UE4SS_SDK_CustomMeshComponent_HPP
#define UE4SS_SDK_CustomMeshComponent_HPP

struct FCustomMeshTriangle
{
    FVector Vertex0;
    FVector Vertex1;
    FVector Vertex2;

};

class UCustomMeshComponent : public UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
};

#endif
