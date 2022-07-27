#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentChangedPropertyInfo.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintComponentChangedPropertyInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    int32 ArrayIndex;
    
    UPROPERTY()
    UStruct* PropertyScope;
    
    FBlueprintComponentChangedPropertyInfo();
};

