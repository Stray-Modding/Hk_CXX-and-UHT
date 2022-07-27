#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessPath.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 PathSegmentStartIndex;
    
    UPROPERTY()
    int32 PathSegmentCount;
    
    UPROPERTY()
    uint8 bHasEvents: 1;
    
public:
    PROPERTYACCESS_API FPropertyAccessPath();
};

