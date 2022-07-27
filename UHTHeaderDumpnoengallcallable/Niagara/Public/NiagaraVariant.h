#pragma once
#include "CoreMinimal.h"
#include "ENiagaraVariantMode.h"
#include "NiagaraVariant.generated.h"

class UNiagaraDataInterface;
class UObject;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVariant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraDataInterface* DataInterface;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Bytes;
    
    UPROPERTY(EditAnywhere)
    ENiagaraVariantMode CurrentMode;
    
public:
    FNiagaraVariant();
};

