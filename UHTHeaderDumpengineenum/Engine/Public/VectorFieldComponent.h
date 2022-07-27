#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "VectorFieldComponent.generated.h"

class UVectorField;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVectorFieldComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVectorField* VectorField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Tightness;
    
    UPROPERTY(Transient)
    uint8 bPreviewVectorField: 1;
    
    UVectorFieldComponent();
    UFUNCTION(BlueprintCallable)
    void SetIntensity(float NewIntensity);
    
};

