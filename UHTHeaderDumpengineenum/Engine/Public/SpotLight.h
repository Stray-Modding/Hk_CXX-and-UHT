#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "SpotLight.generated.h"

class USpotLightComponent;

UCLASS(MinimalAPI)
class ASpotLight : public ALight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USpotLightComponent* SpotLightComponent;
    
    ASpotLight();
    UFUNCTION(BlueprintCallable)
    void SetOuterConeAngle(float NewOuterConeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerConeAngle(float NewInnerConeAngle);
    
};

