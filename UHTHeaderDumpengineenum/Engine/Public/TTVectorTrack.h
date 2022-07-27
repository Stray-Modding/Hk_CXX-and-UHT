#pragma once
#include "CoreMinimal.h"
#include "TTPropertyTrack.h"
#include "TTVectorTrack.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FTTVectorTrack : public FTTPropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveVector* CurveVector;
    
    ENGINE_API FTTVectorTrack();
};

