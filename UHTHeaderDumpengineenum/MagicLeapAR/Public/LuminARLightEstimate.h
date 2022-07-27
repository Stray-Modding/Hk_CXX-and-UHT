#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARBasicLightEstimate -FallbackName=ARBasicLightEstimate
#include "LuminARLightEstimate.generated.h"

UCLASS()
class MAGICLEAPAR_API ULuminARLightEstimate : public UARBasicLightEstimate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<float> AmbientIntensityNits;
    
public:
    ULuminARLightEstimate();
    UFUNCTION(BlueprintPure)
    TArray<float> GetAmbientIntensityNits() const;
    
};

