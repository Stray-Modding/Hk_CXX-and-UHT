#pragma once
#include "CoreMinimal.h"
#include "ReflectionCapture.h"
#include "SphereReflectionCapture.generated.h"

class UDrawSphereComponent;

UCLASS(MinimalAPI)
class ASphereReflectionCapture : public AReflectionCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UDrawSphereComponent* DrawCaptureRadius;
    
public:
    ASphereReflectionCapture();
};

