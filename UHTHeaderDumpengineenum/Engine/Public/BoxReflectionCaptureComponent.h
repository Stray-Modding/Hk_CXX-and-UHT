#pragma once
#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.h"
#include "BoxReflectionCaptureComponent.generated.h"

class UBoxComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoxTransitionDistance;
    
    UPROPERTY(Export)
    UBoxComponent* PreviewInfluenceBox;
    
    UPROPERTY(Export)
    UBoxComponent* PreviewCaptureBox;
    
    UBoxReflectionCaptureComponent();
};

