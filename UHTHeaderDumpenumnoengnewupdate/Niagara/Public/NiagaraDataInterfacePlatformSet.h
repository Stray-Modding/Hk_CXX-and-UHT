#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraDataInterfacePlatformSet.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UNiagaraDataInterfacePlatformSet();
};

