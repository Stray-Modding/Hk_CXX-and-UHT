#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FXSystemAsset.generated.h"

UCLASS(Abstract, MinimalAPI)
class UFXSystemAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MaxPoolSize;
    
    UPROPERTY(EditAnywhere)
    uint32 PoolPrimeSize;
    
    UFXSystemAsset();
};

