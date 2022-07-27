#pragma once
#include "CoreMinimal.h"
#include "ActiveCameraShakeInfo.generated.h"

class UCameraShakeBase;
class UCameraShakeSourceComponent;

USTRUCT(BlueprintType)
struct FActiveCameraShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCameraShakeBase* ShakeInstance;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource;
    
    UPROPERTY()
    bool bIsCustomInitialized;
    
    ENGINE_API FActiveCameraShakeInfo();
};

