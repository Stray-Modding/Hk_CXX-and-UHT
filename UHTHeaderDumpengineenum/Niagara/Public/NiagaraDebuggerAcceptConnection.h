#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraDebuggerAcceptConnection.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDebuggerAcceptConnection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid SessionId;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceId;
    
    FNiagaraDebuggerAcceptConnection();
};

