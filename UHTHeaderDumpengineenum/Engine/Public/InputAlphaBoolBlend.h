#pragma once
#include "CoreMinimal.h"
#include "EAlphaBlendOption.h"
#include "AlphaBlend.h"
#include "InputAlphaBoolBlend.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FInputAlphaBoolBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float blendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float blendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CustomCurve;
    
    UPROPERTY(Transient)
    FAlphaBlend AlphaBlend;
    
    FInputAlphaBoolBlend();
};

