#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MagicLeapLightingTrackingComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPLIGHTESTIMATION_API UMagicLeapLightingTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseGlobalAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseColorTemp;
    
    UMagicLeapLightingTrackingComponent();
};

