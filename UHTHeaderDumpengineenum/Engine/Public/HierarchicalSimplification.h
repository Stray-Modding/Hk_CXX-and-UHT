#pragma once
#include "CoreMinimal.h"
#include "MeshProxySettings.h"
#include "MeshMergingSettings.h"
#include "HierarchicalSimplification.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FHierarchicalSimplification {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TransitionScreenSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float OverrideDrawDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseOverrideDrawDistance: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowSpecificExclusion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSimplifyMesh: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bOnlyGenerateClustersForVolumes: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bReusePreviousLevelClusters: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FMeshProxySettings ProxySetting;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FMeshMergingSettings MergeSetting;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DesiredBoundRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DesiredFillingPercentage;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MinNumberOfActorsToBuild;
    
    FHierarchicalSimplification();
};

