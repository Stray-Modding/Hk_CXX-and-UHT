#pragma once
#include "CoreMinimal.h"
#include "BlendParameter.generated.h"

USTRUCT(BlueprintType)
struct FBlendParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY(EditAnywhere)
    int32 GridNum;
    
    ENGINE_API FBlendParameter();
};

