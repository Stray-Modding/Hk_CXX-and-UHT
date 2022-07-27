#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraLightRendererProperties.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseInverseSquaredFalloff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsTranslucency: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlphaScalesBrightness: 1;
    
    UPROPERTY(EditAnywhere)
    float RadiusScale;
    
    UPROPERTY(EditAnywhere)
    float DefaultExponent;
    
    UPROPERTY(EditAnywhere)
    FVector ColorAdd;
    
    UPROPERTY(EditAnywhere)
    int32 RendererVisibility;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding LightExponentBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RadiusBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    
    UNiagaraLightRendererProperties();
};

