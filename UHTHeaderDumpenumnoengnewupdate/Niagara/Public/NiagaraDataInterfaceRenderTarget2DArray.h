#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraUserParameterBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "NiagaraDataInterfaceRenderTarget2DArray.generated.h"

class UTextureRenderTarget2DArray;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase {
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
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTarget2DArray();
};

