#pragma once
#include "CoreMinimal.h"
#include "ShapeComponent.h"
#include "SphereComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USphereComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float SphereRadius;
    
public:
    USphereComponent();
    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    float GetUnscaledSphereRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledSphereRadius() const;
    
};

