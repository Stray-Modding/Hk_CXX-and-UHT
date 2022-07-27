#pragma once
#include "CoreMinimal.h"
#include "TTTrackBase.generated.h"

USTRUCT()
struct FTTTrackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName TrackName;
    
public:
    UPROPERTY()
    bool bIsExternalCurve;
    
    ENGINE_API FTTTrackBase();
};

