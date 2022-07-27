#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BasicParticleData.generated.h"

USTRUCT(BlueprintType)
struct FBasicParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Position;
    
    UPROPERTY(BlueprintReadOnly)
    float Size;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    NIAGARA_API FBasicParticleData();
};

