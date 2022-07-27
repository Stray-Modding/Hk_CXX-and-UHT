#pragma once
#include "CoreMinimal.h"
#include "CustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    int32 VariantType;
    
    UPROPERTY(VisibleAnywhere)
    TArray<float> Times;
    
    FCustomAttribute();
};

