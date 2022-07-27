#pragma once
#include "CoreMinimal.h"
#include "AnimGraphBlendOptions.generated.h"

USTRUCT(BlueprintType)
struct FAnimGraphBlendOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float blendInTime;
    
    UPROPERTY(EditAnywhere)
    float blendOutTime;
    
    ENGINE_API FAnimGraphBlendOptions();
};

