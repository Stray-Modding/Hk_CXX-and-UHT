#pragma once
#include "CoreMinimal.h"
#include "NamedFloat.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNamedFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    FNamedFloat();
};

