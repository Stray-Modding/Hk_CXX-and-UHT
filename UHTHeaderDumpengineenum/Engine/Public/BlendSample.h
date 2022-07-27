#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlendSample.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FBlendSample {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* Animation;
    
    UPROPERTY(EditAnywhere)
    FVector SampleValue;
    
    UPROPERTY(EditAnywhere)
    float RateScale;
    
    ENGINE_API FBlendSample();
};

