#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraEmitterHandle.generated.h"

class UNiagaraEmitter;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraEmitterHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FGuid ID;
    
    UPROPERTY(VisibleAnywhere)
    FName IdName;
    
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    UNiagaraEmitter* Instance;
    
public:
    FNiagaraEmitterHandle();
};

