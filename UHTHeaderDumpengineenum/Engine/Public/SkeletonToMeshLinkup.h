#pragma once
#include "CoreMinimal.h"
#include "SkeletonToMeshLinkup.generated.h"

USTRUCT()
struct FSkeletonToMeshLinkup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SkeletonToMeshTable;
    
    UPROPERTY()
    TArray<int32> MeshToSkeletonTable;
    
    ENGINE_API FSkeletonToMeshLinkup();
};

