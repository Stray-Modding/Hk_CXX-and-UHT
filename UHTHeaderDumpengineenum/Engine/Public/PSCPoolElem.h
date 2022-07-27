#pragma once
#include "CoreMinimal.h"
#include "PSCPoolElem.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FPSCPoolElem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* PSC;
    
    ENGINE_API FPSCPoolElem();
};

