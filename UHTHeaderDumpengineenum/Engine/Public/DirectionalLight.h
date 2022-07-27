#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "DirectionalLight.generated.h"

UCLASS(MinimalAPI)
class ADirectionalLight : public ALight {
    GENERATED_BODY()
public:
    ADirectionalLight();
};

