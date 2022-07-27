#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraUserParameterBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "NiagaraDataInterfaceRenderTargetVolume.generated.h"

class UTextureRenderTargetVolume;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntVector Size;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritUserParameterSettings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFormat: 1;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TMap<uint64, UTextureRenderTargetVolume*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTargetVolume();
};

