#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "PointLight.generated.h"

class UPointLightComponent;

UCLASS(MinimalAPI)
class APointLight : public ALight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPointLightComponent* PointLightComponent;
    
    APointLight();
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFalloffExponent(float NewLightFalloffExponent);
    
};

