#pragma once
#include "CoreMinimal.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "NiagaraDataInterfaceRenderTargetCube.generated.h"

class UTextureRenderTargetCube;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Size;
    
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
    TMap<uint64, UTextureRenderTargetCube*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTargetCube();
};

