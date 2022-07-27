#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterNameSettingsRef.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterNameSettingsRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SystemName;
    
    UPROPERTY(EditAnywhere)
    FString EmitterName;
    
    NIAGARA_API FNiagaraEmitterNameSettingsRef();
};

