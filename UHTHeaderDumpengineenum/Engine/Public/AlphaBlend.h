#pragma once
#include "CoreMinimal.h"
#include "EAlphaBlendOption.h"
#include "AlphaBlend.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FAlphaBlend {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCurveFloat* CustomCurve;
    
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption BlendOption;
    
public:
    FAlphaBlend();
};

