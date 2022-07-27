#pragma once
#include "CoreMinimal.h"
#include "LocalLightComponent.h"
#include "PointLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPointLightComponent : public ULocalLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseInverseSquaredFalloff: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, Interp)
    float LightFalloffExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SoftSourceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SourceLength;
    
    UPointLightComponent();
    UFUNCTION(BlueprintCallable)
    void SetSourceRadius(float bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceLength(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSoftSourceRadius(float bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFalloffExponent(float NewLightFalloffExponent);
    
};

