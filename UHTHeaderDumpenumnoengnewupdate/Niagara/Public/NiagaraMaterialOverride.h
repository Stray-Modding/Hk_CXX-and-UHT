#pragma once
#include "CoreMinimal.h"
#include "NiagaraMaterialOverride.generated.h"

class UMaterialInterface;
class UNiagaraRendererProperties;

USTRUCT(BlueprintType)
struct FNiagaraMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    uint32 MaterialSubIndex;
    
    UPROPERTY()
    UNiagaraRendererProperties* EmitterRendererProperty;
    
    NIAGARA_API FNiagaraMaterialOverride();
};

