#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraPreviewAxis_InterpParamVector.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector Min;
    
    UPROPERTY(EditAnywhere)
    FVector Max;
    
public:
    UNiagaraPreviewAxis_InterpParamVector();
};

