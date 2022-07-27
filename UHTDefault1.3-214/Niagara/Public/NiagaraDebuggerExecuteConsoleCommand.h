#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebuggerExecuteConsoleCommand.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDebuggerExecuteConsoleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Command;
    
    UPROPERTY()
    bool bRequiresWorld;
    
    FNiagaraDebuggerExecuteConsoleCommand();
};

