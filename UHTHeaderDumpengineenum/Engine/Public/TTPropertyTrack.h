#pragma once
#include "CoreMinimal.h"
#include "TTTrackBase.h"
#include "TTPropertyTrack.generated.h"

USTRUCT()
struct FTTPropertyTrack : public FTTTrackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName PropertyName;
    
public:
    ENGINE_API FTTPropertyTrack();
};

