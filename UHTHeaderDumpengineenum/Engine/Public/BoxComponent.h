#pragma once
#include "CoreMinimal.h"
#include "ShapeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UBoxComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float LineThickness;
    
public:
    UBoxComponent();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    FVector GetUnscaledBoxExtent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaledBoxExtent() const;
    
};

