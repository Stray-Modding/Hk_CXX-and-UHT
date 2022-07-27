#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "CameraShakeScrubParams.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeScrubParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AbsoluteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShakeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DynamicScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMinimalViewInfo POV;
    
    FCameraShakeScrubParams();
};

