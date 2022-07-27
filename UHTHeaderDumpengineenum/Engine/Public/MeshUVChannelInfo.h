#pragma once
#include "CoreMinimal.h"
#include "MeshUVChannelInfo.generated.h"

USTRUCT()
struct FMeshUVChannelInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bInitialized;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bOverrideDensities;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float LocalUVDensities[4];
    
    ENGINE_API FMeshUVChannelInfo();
};

