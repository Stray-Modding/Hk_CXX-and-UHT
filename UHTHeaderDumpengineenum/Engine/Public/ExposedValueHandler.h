#pragma once
#include "CoreMinimal.h"
#include "ExposedValueCopyRecord.h"
#include "ExposedValueHandler.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct ENGINE_API FExposedValueHandler {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BoundFunction;
    
    UPROPERTY()
    TArray<FExposedValueCopyRecord> CopyRecords;
    
    UPROPERTY()
    UFunction* Function;
    
    UPROPERTY()
    TFieldPath<FStructProperty> ValueHandlerNodeProperty;
    
    FExposedValueHandler();
};

