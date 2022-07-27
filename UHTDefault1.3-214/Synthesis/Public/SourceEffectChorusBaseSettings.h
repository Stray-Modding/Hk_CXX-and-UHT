#pragma once
#include "CoreMinimal.h"
#include "SourceEffectChorusBaseSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectChorusBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Spread;
    
    FSourceEffectChorusBaseSettings();
};

