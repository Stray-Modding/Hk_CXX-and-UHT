#pragma once
#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.h"
#include "PlaneReflectionCaptureComponent.generated.h"

class UBoxComponent;
class UDrawSphereComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InfluenceRadiusScale;
    
    UPROPERTY(Export)
    UDrawSphereComponent* PreviewInfluenceRadius;
    
    UPROPERTY(Export)
    UBoxComponent* PreviewCaptureBox;
    
    UPlaneReflectionCaptureComponent();
};

