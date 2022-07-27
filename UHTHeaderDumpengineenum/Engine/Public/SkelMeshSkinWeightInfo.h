#pragma once
#include "CoreMinimal.h"
#include "SkelMeshSkinWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshSkinWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Bones[12];
    
    UPROPERTY()
    uint8 Weights[12];
    
    ENGINE_API FSkelMeshSkinWeightInfo();
};

