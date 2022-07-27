#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraThirdPersonSplinesPreset.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API ACameraThirdPersonSplinesPreset : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* m_cameraSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* m_targetSpline;
    
public:
    ACameraThirdPersonSplinesPreset();
};

