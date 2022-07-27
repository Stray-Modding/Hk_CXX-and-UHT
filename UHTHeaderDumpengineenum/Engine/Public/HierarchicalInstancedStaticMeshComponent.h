#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "InstancedStaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "HierarchicalInstancedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SortedInstances;
    
    UPROPERTY()
    int32 NumBuiltInstances;
    
    UPROPERTY()
    FBox BuiltInstanceBounds;
    
    UPROPERTY()
    FBox UnbuiltInstanceBounds;
    
    UPROPERTY()
    TArray<FBox> UnbuiltInstanceBoundsList;
    
    UPROPERTY()
    uint8 bEnableDensityScaling: 1;
    
    UPROPERTY()
    int32 OcclusionLayerNumNodes;
    
    UPROPERTY()
    FBoxSphereBounds CacheMeshExtendedBounds;
    
    UPROPERTY()
    bool bDisableCollision;
    
    UPROPERTY()
    int32 InstanceCountToRender;
    
    UHierarchicalInstancedStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    bool RemoveInstances(const TArray<int32>& InstancesToRemove);
    
};

