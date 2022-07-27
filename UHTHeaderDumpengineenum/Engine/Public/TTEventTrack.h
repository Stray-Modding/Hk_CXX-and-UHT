#pragma once
#include "CoreMinimal.h"
#include "TTTrackBase.h"
#include "TTEventTrack.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTTEventTrack : public FTTTrackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName FunctionName;
    
public:
    UPROPERTY()
    UCurveFloat* CurveKeys;
    
    ENGINE_API FTTEventTrack();
};

