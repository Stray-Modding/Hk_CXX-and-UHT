#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARBasicLightEstimate -FallbackName=ARBasicLightEstimate
#include "LuminARLightEstimate.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPAR_API ULuminARLightEstimate : public UARBasicLightEstimate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AmbientIntensityNits;
    
public:
    ULuminARLightEstimate();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetAmbientIntensityNits() const;
    
};

