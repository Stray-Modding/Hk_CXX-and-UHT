#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialCachedParameterEntry.generated.h"

USTRUCT(BlueprintType)
struct FMaterialCachedParameterEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint64> NameHashes;
    
    UPROPERTY()
    TArray<FMaterialParameterInfo> ParameterInfos;
    
    UPROPERTY()
    TArray<FGuid> ExpressionGuids;
    
    ENGINE_API FMaterialCachedParameterEntry();
};

