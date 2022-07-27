#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraDebuggerRequestConnection.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDebuggerRequestConnection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid SessionId;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceId;
    
    FNiagaraDebuggerRequestConnection();
};

