#pragma once
#include "CoreMinimal.h"
#include "SmartName.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSmartName {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName DisplayName;
    
    FSmartName();
};

