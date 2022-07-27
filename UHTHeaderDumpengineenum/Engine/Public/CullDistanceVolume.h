#pragma once
#include "CoreMinimal.h"
#include "CullDistanceSizePair.h"
#include "Volume.h"
#include "CullDistanceVolume.generated.h"

UCLASS(MinimalAPI)
class ACullDistanceVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCullDistanceSizePair> CullDistances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnabled: 1;
    
    ACullDistanceVolume();
};

