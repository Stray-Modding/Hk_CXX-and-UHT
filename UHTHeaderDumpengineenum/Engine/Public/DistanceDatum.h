#pragma once
#include "CoreMinimal.h"
#include "DistanceDatum.generated.h"

USTRUCT(BlueprintType)
struct FDistanceDatum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeInDistanceStart;
    
    UPROPERTY(EditAnywhere)
    float FadeInDistanceEnd;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDistanceStart;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDistanceEnd;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    ENGINE_API FDistanceDatum();
};

