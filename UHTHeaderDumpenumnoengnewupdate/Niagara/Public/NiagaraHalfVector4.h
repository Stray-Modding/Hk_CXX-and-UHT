#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalfVector4.generated.h"

USTRUCT()
struct FNiagaraHalfVector4 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 X;
    
    UPROPERTY(EditAnywhere)
    uint16 Y;
    
    UPROPERTY(EditAnywhere)
    uint16 Z;
    
    UPROPERTY(EditAnywhere)
    uint16 W;
    
    NIAGARA_API FNiagaraHalfVector4();
};

