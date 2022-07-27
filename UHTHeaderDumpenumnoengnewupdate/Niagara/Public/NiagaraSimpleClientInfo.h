#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimpleClientInfo.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraSimpleClientInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Systems;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Actors;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Components;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Emitters;
    
    FNiagaraSimpleClientInfo();
};

