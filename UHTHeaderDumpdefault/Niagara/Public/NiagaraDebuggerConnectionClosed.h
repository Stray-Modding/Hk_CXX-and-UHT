#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraDebuggerConnectionClosed.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDebuggerConnectionClosed {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid SessionId;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceId;
    
    FNiagaraDebuggerConnectionClosed();
};

