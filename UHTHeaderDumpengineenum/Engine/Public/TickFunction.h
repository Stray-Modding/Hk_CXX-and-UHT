#pragma once
#include "CoreMinimal.h"
#include "ETickingGroup.h"
#include "TickFunction.generated.h"

USTRUCT()
struct ENGINE_API FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<ETickingGroup> TickGroup;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<ETickingGroup> EndTickGroup;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bTickEvenWhenPaused: 1;
    
    UPROPERTY()
    uint8 bCanEverTick: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bStartWithTickEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bAllowTickOnDedicatedServer: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float TickInterval;
    
    FTickFunction();
};

