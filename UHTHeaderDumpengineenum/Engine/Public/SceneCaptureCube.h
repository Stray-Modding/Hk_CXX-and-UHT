#pragma once
#include "CoreMinimal.h"
#include "SceneCapture.h"
#include "SceneCaptureCube.generated.h"

class USceneCaptureComponentCube;

UCLASS()
class ENGINE_API ASceneCaptureCube : public ASceneCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponentCube* CaptureComponentCube;
    
public:
    ASceneCaptureCube();
    UFUNCTION(BlueprintCallable)
    void OnInterpToggle(bool bEnable);
    
};

