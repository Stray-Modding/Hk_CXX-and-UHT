#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformBool -FallbackName=PerPlatformBool
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformFloat -FallbackName=PerPlatformFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "AnimationSharingScalability.generated.h"

USTRUCT(BlueprintType)
struct FAnimationSharingScalability {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformBool UseBlendTransitions;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat BlendSignificanceValue;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt MaximumNumberConcurrentBlends;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat TickSignificanceValue;
    
    ANIMATIONSHARING_API FAnimationSharingScalability();
};

