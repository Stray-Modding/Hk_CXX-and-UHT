#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "CustomMeshTriangle.h"
#include "CustomMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CUSTOMMESHCOMPONENT_API UCustomMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UCustomMeshComponent();
    UFUNCTION(BlueprintCallable)
    bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomMeshTriangles();
    
    UFUNCTION(BlueprintCallable)
    void AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    
};

