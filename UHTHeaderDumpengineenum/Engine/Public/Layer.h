#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LayerActorStats.h"
#include "Layer.generated.h"

UCLASS(MinimalAPI)
class ULayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName LayerName;
    
    UPROPERTY()
    uint8 bIsVisible: 1;
    
    UPROPERTY(Transient)
    TArray<FLayerActorStats> ActorStats;
    
    ULayer();
};

