#pragma once
#include "CoreMinimal.h"
#include "RadialDamageParams.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRadialDamageParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageFalloff;
    
    FRadialDamageParams();
};

