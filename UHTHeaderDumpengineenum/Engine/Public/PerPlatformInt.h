#pragma once
#include "CoreMinimal.h"
#include "PerPlatformInt.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPerPlatformInt {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Default;
    
    FPerPlatformInt();
};

