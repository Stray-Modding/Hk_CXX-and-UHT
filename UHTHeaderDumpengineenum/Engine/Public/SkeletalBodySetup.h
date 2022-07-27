#pragma once
#include "CoreMinimal.h"
#include "BodySetup.h"
#include "PhysicalAnimationProfile.h"
#include "SkeletalBodySetup.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class USkeletalBodySetup : public UBodySetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSkipScaleFromAnimation;
    
private:
    UPROPERTY()
    TArray<FPhysicalAnimationProfile> PhysicalAnimationData;
    
public:
    USkeletalBodySetup();
};

