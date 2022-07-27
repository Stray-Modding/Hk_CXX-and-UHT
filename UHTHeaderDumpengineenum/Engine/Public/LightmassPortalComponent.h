#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "LightmassPortalComponent.generated.h"

class UBoxComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULightmassPortalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UBoxComponent* PreviewBox;
    
    ULightmassPortalComponent();
};

