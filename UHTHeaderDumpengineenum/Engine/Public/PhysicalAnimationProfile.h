#pragma once
#include "CoreMinimal.h"
#include "PhysicalAnimationData.h"
#include "PhysicalAnimationProfile.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalAnimationProfile {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ProfileName;
    
    UPROPERTY(EditAnywhere)
    FPhysicalAnimationData PhysicalAnimationData;
    
    ENGINE_API FPhysicalAnimationProfile();
};

