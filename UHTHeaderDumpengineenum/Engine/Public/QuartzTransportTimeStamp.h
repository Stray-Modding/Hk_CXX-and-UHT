#pragma once
#include "CoreMinimal.h"
#include "QuartzTransportTimeStamp.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzTransportTimeStamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Bars;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Beat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BeatFraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Seconds;
    
    FQuartzTransportTimeStamp();
};

