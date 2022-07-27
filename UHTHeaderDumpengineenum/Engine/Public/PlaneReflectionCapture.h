#pragma once
#include "CoreMinimal.h"
#include "ReflectionCapture.h"
#include "PlaneReflectionCapture.generated.h"

UCLASS(Abstract, MinimalAPI)
class APlaneReflectionCapture : public AReflectionCapture {
    GENERATED_BODY()
public:
    APlaneReflectionCapture();
};

