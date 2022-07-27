#pragma once
#include "CoreMinimal.h"
#include "MaterialRemapIndex.generated.h"

USTRUCT()
struct FMaterialRemapIndex {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ImportVersionKey;
    
    UPROPERTY()
    TArray<int32> MaterialRemap;
    
    ENGINE_API FMaterialRemapIndex();
};

