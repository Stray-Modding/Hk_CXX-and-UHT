#pragma once
#include "CoreMinimal.h"
#include "LightToLightableTrace.generated.h"

class UAntiZurgSpotlightComponent;
class UAntiZurgLightableComponent;

USTRUCT(BlueprintType)
struct FLightToLightableTrace {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UAntiZurgSpotlightComponent* Light;
    
    UPROPERTY(Export)
    UAntiZurgLightableComponent* lightable;
    
    HK_PROJECT_API FLightToLightableTrace();
};

