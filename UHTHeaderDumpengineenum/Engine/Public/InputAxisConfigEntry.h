#pragma once
#include "CoreMinimal.h"
#include "InputAxisProperties.h"
#include "InputAxisConfigEntry.generated.h"

USTRUCT(BlueprintType)
struct FInputAxisConfigEntry {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName AxisKeyName;
    
    UPROPERTY(EditAnywhere)
    FInputAxisProperties AxisProperties;
    
    ENGINE_API FInputAxisConfigEntry();
};

