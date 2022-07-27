#pragma once
#include "CoreMinimal.h"
#include "MeshSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FMeshSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MaterialIndex;
    
    UPROPERTY()
    bool bEnableCollision;
    
    UPROPERTY()
    bool bCastShadow;
    
    UPROPERTY()
    bool bVisibleInRayTracing;
    
    UPROPERTY()
    bool bForceOpaque;
    
    ENGINE_API FMeshSectionInfo();
};

