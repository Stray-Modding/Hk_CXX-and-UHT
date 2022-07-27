#pragma once
#include "CoreMinimal.h"
#include "DestructibleDamageParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleDamageParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DamageThreshold;
    
    UPROPERTY(EditAnywhere)
    float DamageSpread;
    
    UPROPERTY(EditAnywhere)
    bool bEnableImpactDamage;
    
    UPROPERTY(EditAnywhere)
    float ImpactDamage;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultImpactDamageDepth;
    
    UPROPERTY(EditAnywhere)
    bool bCustomImpactResistance;
    
    UPROPERTY(EditAnywhere)
    float ImpactResistance;
    
    APEXDESTRUCTION_API FDestructibleDamageParameters();
};

