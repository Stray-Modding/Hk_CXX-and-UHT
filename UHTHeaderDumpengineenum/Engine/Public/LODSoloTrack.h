#pragma once
#include "CoreMinimal.h"
#include "LODSoloTrack.generated.h"

USTRUCT(BlueprintType)
struct FLODSoloTrack {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<uint8> SoloEnableSetting;
    
    ENGINE_API FLODSoloTrack();
};

