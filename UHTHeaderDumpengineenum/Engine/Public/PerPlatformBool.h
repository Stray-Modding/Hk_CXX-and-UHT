#pragma once
#include "CoreMinimal.h"
#include "PerPlatformBool.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPerPlatformBool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Default;
    
    FPerPlatformBool();
};

