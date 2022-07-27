#pragma once
#include "CoreMinimal.h"
#include "NetworkEmulationProfileDescription.generated.h"

USTRUCT(BlueprintType)
struct FNetworkEmulationProfileDescription {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ProfileName;
    
    UPROPERTY()
    FString Tooltip;
    
    ENGINE_API FNetworkEmulationProfileDescription();
};

