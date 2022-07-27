#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebugHUDVariable.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraDebugHUDVariable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FString Name;
    
    FNiagaraDebugHUDVariable();
};

