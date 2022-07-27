#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraModifier.h"
#include "ActiveCameraShakeInfo.h"
#include "PooledCameraShakes.h"
#include "CameraModifier_CameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Config=Camera)
class ENGINE_API UCameraModifier_CameraShake : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FActiveCameraShakeInfo> ActiveShakes;
    
    UPROPERTY()
    TMap<TSubclassOf<UCameraShakeBase>, FPooledCameraShakes> ExpiredPooledShakesMap;
    
    UPROPERTY(EditAnywhere)
    float SplitScreenShakeScale;
    
public:
    UCameraModifier_CameraShake();
};

