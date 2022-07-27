#pragma once
#include "CoreMinimal.h"
#include "MeshSectionInfo.h"
#include "MeshSectionInfoMap.generated.h"

USTRUCT()
struct FMeshSectionInfoMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<uint32, FMeshSectionInfo> Map;
    
    ENGINE_API FMeshSectionInfoMap();
};

