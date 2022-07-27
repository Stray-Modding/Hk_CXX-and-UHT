#pragma once
#include "CoreMinimal.h"
#include "SourceEffectBitCrusherBaseSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectBitCrusherBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BitDepth;
    
    FSourceEffectBitCrusherBaseSettings();
};

