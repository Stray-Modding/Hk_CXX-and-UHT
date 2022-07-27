#pragma once
#include "CoreMinimal.h"
#include "NiagaraPerfBaselineStats.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraPerfBaselineStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float PerInstanceAvg_GT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float PerInstanceAvg_RT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float PerInstanceMax_GT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float PerInstanceMax_RT;
    
    FNiagaraPerfBaselineStats();
};

