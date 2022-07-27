#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HoudiniMeshSplitInstancerComponent.generated.h"

class UStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniMeshSplitInstancerComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleInstanceOnly)
    TArray<UStaticMeshComponent*> Instances;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* InstancedMesh;
    
public:
    UHoudiniMeshSplitInstancerComponent();
};

