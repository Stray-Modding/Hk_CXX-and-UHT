#pragma once
#include "CoreMinimal.h"
#include "PointLightComponent.h"
#include "SpotLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USpotLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InnerConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OuterConeAngle;
    
    USpotLightComponent();
    UFUNCTION(BlueprintCallable)
    void SetOuterConeAngle(float NewOuterConeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerConeAngle(float NewInnerConeAngle);
    
};

