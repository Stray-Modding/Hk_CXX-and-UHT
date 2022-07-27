#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLightBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "LightingChannels.h"
#include "ParticleModuleLight.generated.h"

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class UParticleModuleLight : public UParticleModuleLightBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseInverseSquaredFalloff;
    
    UPROPERTY(EditAnywhere)
    bool bAffectsTranslucency;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bPreviewLightRadius;
    
    UPROPERTY(EditAnywhere)
    float SpawnFraction;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector ColorScaleOverLife;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat BrightnessOverLife;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat RadiusScale;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat LightExponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere)
    bool bHighQualityLights;
    
    UPROPERTY(EditAnywhere)
    bool bShadowCastingLights;
    
    UParticleModuleLight();
};

