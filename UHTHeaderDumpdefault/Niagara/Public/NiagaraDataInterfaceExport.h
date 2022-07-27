#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "ENDIExport_GPUAllocationMode.h"
#include "NiagaraDataInterfaceExport.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceExport : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding CallbackHandlerParameter;
    
    UPROPERTY(EditAnywhere)
    ENDIExport_GPUAllocationMode GPUAllocationMode;
    
    UPROPERTY(EditAnywhere)
    int32 GPUAllocationFixedSize;
    
    UPROPERTY(EditAnywhere)
    float GPUAllocationPerParticleSize;
    
    UNiagaraDataInterfaceExport();
};

