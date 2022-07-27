#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessIndirectionChain.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessIndirectionChain {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TFieldPath<FProperty> Property;
    
    UPROPERTY()
    int32 IndirectionStartIndex;
    
    UPROPERTY()
    int32 IndirectionEndIndex;
    
    UPROPERTY()
    int32 EventId;
    
public:
    PROPERTYACCESS_API FPropertyAccessIndirectionChain();
};

