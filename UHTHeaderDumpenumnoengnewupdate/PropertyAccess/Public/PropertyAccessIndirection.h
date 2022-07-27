#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessIndirectionType.h"
#include "EPropertyAccessObjectType.h"
#include "PropertyAccessIndirection.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FPropertyAccessIndirection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TFieldPath<FArrayProperty> ArrayProperty;
    
    UPROPERTY()
    UFunction* Function;
    
    UPROPERTY()
    int32 ReturnBufferSize;
    
    UPROPERTY()
    int32 ReturnBufferAlignment;
    
    UPROPERTY()
    int32 ArrayIndex;
    
    UPROPERTY()
    uint32 Offset;
    
    UPROPERTY()
    EPropertyAccessObjectType ObjectType;
    
    UPROPERTY()
    EPropertyAccessIndirectionType Type;
    
public:
    PROPERTYACCESS_API FPropertyAccessIndirection();
};

