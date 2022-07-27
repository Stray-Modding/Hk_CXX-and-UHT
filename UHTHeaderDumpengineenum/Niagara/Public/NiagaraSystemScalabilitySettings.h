#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraSystemScalabilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullMaxInstanceCount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullPerSystemMaxInstanceCount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByMaxTimeWithoutRender: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByGlobalBudget: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInstances;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSystemInstances;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeWithoutRender;
    
    UPROPERTY(EditAnywhere)
    float MaxGlobalBudgetUsage;
    
    NIAGARA_API FNiagaraSystemScalabilitySettings();
};

