#pragma once
#include "CoreMinimal.h"
#include "RawDistribution.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RawDistributionVector.generated.h"

class UDistributionVector;

USTRUCT(BlueprintType)
struct ENGINE_API FRawDistributionVector : public FRawDistribution {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float MinValue;
    
    UPROPERTY()
    float MaxValue;
    
    UPROPERTY()
    FVector MinValueVec;
    
    UPROPERTY()
    FVector MaxValueVec;
    
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    UDistributionVector* Distribution;
    
    FRawDistributionVector();
};

