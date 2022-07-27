#pragma once
#include "CoreMinimal.h"
#include "TTTrackId.generated.h"

USTRUCT()
struct ENGINE_API FTTTrackId {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TrackType;
    
    UPROPERTY()
    int32 TrackIndex;
    
    FTTTrackId();
};

