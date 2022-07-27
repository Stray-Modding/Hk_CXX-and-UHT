#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "DestructibleDebrisParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleDebrisParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DebrisLifetimeMin;
    
    UPROPERTY(EditAnywhere)
    float DebrisLifetimeMax;
    
    UPROPERTY(EditAnywhere)
    float DebrisMaxSeparationMin;
    
    UPROPERTY(EditAnywhere)
    float DebrisMaxSeparationMax;
    
    UPROPERTY(EditAnywhere)
    FBox ValidBounds;
    
    APEXDESTRUCTION_API FDestructibleDebrisParameters();
};

