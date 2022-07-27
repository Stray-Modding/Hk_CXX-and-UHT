#pragma once
#include "CoreMinimal.h"
#include "FNiagaraCompileEventSeverity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraCompileEvent.generated.h"

USTRUCT()
struct FNiagaraCompileEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraCompileEventSeverity Severity;
    
    UPROPERTY()
    FString Message;
    
    UPROPERTY()
    FString ShortDescription;
    
    UPROPERTY()
    bool bDismissable;
    
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY()
    FGuid PinGuid;
    
    UPROPERTY()
    TArray<FGuid> StackGuids;
    
    NIAGARASHADER_API FNiagaraCompileEvent();
};

