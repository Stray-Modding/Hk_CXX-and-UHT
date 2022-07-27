#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerWorldData.h"
#include "NiagaraOutlinerData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<FString, FNiagaraOutlinerWorldData> WorldData;
    
    NIAGARA_API FNiagaraOutlinerData();
};

