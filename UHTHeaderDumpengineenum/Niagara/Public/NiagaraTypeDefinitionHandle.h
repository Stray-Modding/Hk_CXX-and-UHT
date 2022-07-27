#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinitionHandle.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTypeDefinitionHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 RegisteredTypeIndex;
    
public:
    NIAGARA_API FNiagaraTypeDefinitionHandle();
};

