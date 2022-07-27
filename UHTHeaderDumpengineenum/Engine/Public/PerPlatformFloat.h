#pragma once
#include "CoreMinimal.h"
#include "PerPlatformFloat.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPerPlatformFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Default;
    
    FPerPlatformFloat();
};

