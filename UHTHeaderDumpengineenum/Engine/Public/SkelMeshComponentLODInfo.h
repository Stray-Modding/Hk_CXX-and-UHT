#pragma once
#include "CoreMinimal.h"
#include "SkelMeshComponentLODInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkelMeshComponentLODInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<bool> HiddenMaterials;
    
    FSkelMeshComponentLODInfo();
};

