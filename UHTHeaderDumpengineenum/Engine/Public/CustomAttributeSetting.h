#pragma once
#include "CoreMinimal.h"
#include "CustomAttributeSetting.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCustomAttributeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString Meaning;
    
    FCustomAttributeSetting();
};

