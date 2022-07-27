#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "SimpleCameraShakePattern.generated.h"

UCLASS(Abstract, EditInlineNew)
class GAMEPLAYCAMERAS_API USimpleCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float blendInTime;
    
    UPROPERTY(EditAnywhere)
    float blendOutTime;
    
    USimpleCameraShakePattern();
};

