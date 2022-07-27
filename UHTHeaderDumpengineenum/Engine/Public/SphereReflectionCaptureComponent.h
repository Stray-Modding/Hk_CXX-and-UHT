#pragma once
#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.h"
#include "SphereReflectionCaptureComponent.generated.h"

class UDrawSphereComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InfluenceRadius;
    
    UPROPERTY()
    float CaptureDistanceScale;
    
    UPROPERTY(Export)
    UDrawSphereComponent* PreviewInfluenceRadius;
    
    USphereReflectionCaptureComponent();
};

