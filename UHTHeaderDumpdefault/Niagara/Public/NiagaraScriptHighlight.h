#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraScriptHighlight.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraScriptHighlight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    FNiagaraScriptHighlight();
};

