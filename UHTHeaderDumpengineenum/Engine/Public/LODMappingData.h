#pragma once
#include "CoreMinimal.h"
#include "LODMappingData.generated.h"

USTRUCT(BlueprintType)
struct FLODMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> Mapping;
    
    UPROPERTY(Transient)
    TArray<int32> InverseMapping;
    
    ENGINE_API FLODMappingData();
};

