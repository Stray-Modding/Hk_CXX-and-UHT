#pragma once
#include "CoreMinimal.h"
#include "TTPropertyTrack.h"
#include "TTFloatTrack.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTTFloatTrack : public FTTPropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCurveFloat* CurveFloat;
    
    ENGINE_API FTTFloatTrack();
};

