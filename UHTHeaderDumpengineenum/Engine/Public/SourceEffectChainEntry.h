#pragma once
#include "CoreMinimal.h"
#include "SourceEffectChainEntry.generated.h"

class USoundEffectSourcePreset;

USTRUCT(BlueprintType)
struct ENGINE_API FSourceEffectChainEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundEffectSourcePreset* Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBypass: 1;
    
    FSourceEffectChainEntry();
};

