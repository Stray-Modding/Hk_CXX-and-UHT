#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "PrecomputedVisibilityOverrideVolume.generated.h"

class AActor;

UCLASS(MinimalAPI)
class APrecomputedVisibilityOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> OverrideVisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> OverrideInvisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> OverrideInvisibleLevels;
    
    APrecomputedVisibilityOverrideVolume();
};

