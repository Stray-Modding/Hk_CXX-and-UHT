#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityState.generated.h"

USTRUCT()
struct FNiagaraScalabilityState {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float Significance;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bCulled: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bPreviousCulled: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bCulledByDistance: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bCulledByInstanceCount: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bCulledByVisibility: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bCulledByGlobalBudget: 1;
    
    NIAGARA_API FNiagaraScalabilityState();
};

