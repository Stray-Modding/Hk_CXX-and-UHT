#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Light.generated.h"

class ULightComponent;
class UMaterialInterface;

UCLASS(Abstract)
class ENGINE_API ALight : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    ULightComponent* LightComponent;
    
public:
    UPROPERTY(ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
    ALight();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleEnabled();
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLightColor(FLinearColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bSetEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadows(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float NewBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectTranslucentLighting(bool bNewValue);
    
    UFUNCTION()
    void OnRep_bEnabled();
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetLightColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetBrightness() const;
    
};

