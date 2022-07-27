#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessSegment.generated.h"

class UStruct;
class UFunction;

USTRUCT(BlueprintType)
struct FPropertyAccessSegment {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    UStruct* Struct;
    
    UPROPERTY()
    TFieldPath<FProperty> Property;
    
    UPROPERTY()
    UFunction* Function;
    
    UPROPERTY()
    int32 ArrayIndex;
    
    UPROPERTY()
    uint16 Flags;
    
public:
    PROPERTYACCESS_API FPropertyAccessSegment();
};

