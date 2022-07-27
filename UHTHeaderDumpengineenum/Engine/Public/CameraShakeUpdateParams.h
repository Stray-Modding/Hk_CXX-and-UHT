#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "CameraShakeUpdateParams.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeUpdateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DynamicScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMinimalViewInfo POV;
    
    FCameraShakeUpdateParams();
};

