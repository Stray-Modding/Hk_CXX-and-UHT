#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "ENiagaraMipMapGeneration.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceRenderTarget2D.generated.h"

class UTextureRenderTarget2D;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntPoint Size;
    
    UPROPERTY(EditAnywhere)
    ENiagaraMipMapGeneration MipMapGeneration;
    
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
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTarget2D();
};

