#pragma once
#include "CoreMinimal.h"
#include "LiveLinkInterpolationSettings.generated.h"

USTRUCT()
struct FLiveLinkInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUseInterpolation;
    
    UPROPERTY(EditAnywhere)
    float InterpolationOffset;
    
    LIVELINKINTERFACE_API FLiveLinkInterpolationSettings();
};

