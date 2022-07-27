#pragma once
#include "CoreMinimal.h"
#include "SceneCapture.h"
#include "SceneCapture2D.generated.h"

class USceneCaptureComponent2D;

UCLASS(MinimalAPI)
class ASceneCapture2D : public ASceneCapture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent2D;
    
public:
    ASceneCapture2D();
    UFUNCTION(BlueprintCallable)
    void OnInterpToggle(bool bEnable);
    
};

