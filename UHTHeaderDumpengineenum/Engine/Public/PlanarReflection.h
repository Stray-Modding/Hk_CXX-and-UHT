#pragma once
#include "CoreMinimal.h"
#include "SceneCapture.h"
#include "PlanarReflection.generated.h"

class UPlanarReflectionComponent;

UCLASS(MinimalAPI)
class APlanarReflection : public ASceneCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPlanarReflectionComponent* PlanarReflectionComponent;
    
public:
    UPROPERTY()
    bool bShowPreviewPlane;
    
    APlanarReflection();
    UFUNCTION(BlueprintCallable)
    void OnInterpToggle(bool bEnable);
    
};

