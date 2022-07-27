#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessCopy.h"
#include "PropertyAccessCopyBatch.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessCopyBatch {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FPropertyAccessCopy> Copies;
    
public:
    PROPERTYACCESS_API FPropertyAccessCopyBatch();
};

