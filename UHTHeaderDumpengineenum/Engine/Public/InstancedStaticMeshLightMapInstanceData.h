#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InstancedStaticMeshLightMapInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FInstancedStaticMeshLightMapInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    TArray<FGuid> MapBuildDataIds;
    
    ENGINE_API FInstancedStaticMeshLightMapInstanceData();
};

