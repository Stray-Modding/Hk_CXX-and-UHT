#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessCopyType.h"
#include "PropertyAccessCopy.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessCopy {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 AccessIndex;
    
    UPROPERTY()
    int32 DestAccessStartIndex;
    
    UPROPERTY()
    int32 DestAccessEndIndex;
    
    UPROPERTY()
    EPropertyAccessCopyType Type;
    
public:
    PROPERTYACCESS_API FPropertyAccessCopy();
};

