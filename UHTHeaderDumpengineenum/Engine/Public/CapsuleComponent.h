#pragma once
#include "CoreMinimal.h"
#include "ShapeComponent.h"
#include "CapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UCapsuleComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float CapsuleRadius;
    
public:
    UCapsuleComponent();
    UFUNCTION(BlueprintCallable)
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const;
    
    UFUNCTION(BlueprintPure)
    void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const;
    
    UFUNCTION(BlueprintPure)
    float GetUnscaledCapsuleRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere() const;
    
    UFUNCTION(BlueprintPure)
    float GetUnscaledCapsuleHalfHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintPure)
    void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const;
    
    UFUNCTION(BlueprintPure)
    void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledCapsuleRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledCapsuleHalfHeight_WithoutHemisphere() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledCapsuleHalfHeight() const;
    
};

