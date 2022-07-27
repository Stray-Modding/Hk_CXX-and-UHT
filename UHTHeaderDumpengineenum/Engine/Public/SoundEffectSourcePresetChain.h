#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SourceEffectChainEntry.h"
#include "SoundEffectSourcePresetChain.generated.h"

UCLASS()
class ENGINE_API USoundEffectSourcePresetChain : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSourceEffectChainEntry> Chain;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayEffectChainTails: 1;
    
    USoundEffectSourcePresetChain();
};

