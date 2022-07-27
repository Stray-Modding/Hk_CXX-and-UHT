#pragma once
#include "CoreMinimal.h"
#include "CameraShakeStartParams.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeStartParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsRestarting;
    
    FCameraShakeStartParams();
};

