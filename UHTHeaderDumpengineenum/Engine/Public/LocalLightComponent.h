#pragma once
#include "CoreMinimal.h"
#include "LightComponent.h"
#include "ELightUnits.h"
#include "LightmassPointLightSettings.h"
#include "LocalLightComponent.generated.h"

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API ULocalLightComponent : public ULightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ELightUnits IntensityUnits;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float AttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    FLightmassPointLightSettings LightmassSettings;
    
    ULocalLightComponent();
    UFUNCTION(BlueprintCallable)
    void SetIntensityUnits(ELightUnits NewIntensityUnits);
    
    UFUNCTION(BlueprintCallable)
    void SetAttenuationRadius(float NewRadius);
    
    UFUNCTION(BlueprintPure)
    static float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);
    
};

