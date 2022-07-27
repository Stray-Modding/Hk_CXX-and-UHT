#pragma once
#include "CoreMinimal.h"
#include "ConstrainComponentPropName.generated.h"

USTRUCT(BlueprintType)
struct FConstrainComponentPropName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    ENGINE_API FConstrainComponentPropName();
};

