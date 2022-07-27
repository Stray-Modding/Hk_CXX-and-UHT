#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "RectLight.generated.h"

class URectLightComponent;

UCLASS(MinimalAPI)
class ARectLight : public ALight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URectLightComponent* RectLightComponent;
    
    ARectLight();
};

