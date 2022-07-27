#pragma once
#include "CoreMinimal.h"
#include "ARLightEstimate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ARBasicLightEstimate.generated.h"

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARBasicLightEstimate : public UARLightEstimate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float AmbientIntensityLumens;
    
    UPROPERTY()
    float AmbientColorTemperatureKelvin;
    
    UPROPERTY()
    FLinearColor AmbientColor;
    
public:
    UARBasicLightEstimate();
    UFUNCTION(BlueprintPure)
    float GetAmbientIntensityLumens() const;
    
    UFUNCTION(BlueprintPure)
    float GetAmbientColorTemperatureKelvin() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetAmbientColor() const;
    
};

