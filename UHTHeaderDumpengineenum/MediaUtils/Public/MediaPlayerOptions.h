#pragma once
#include "CoreMinimal.h"
#include "EMediaPlayerOptionBooleanOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MediaPlayerTrackOptions.h"
#include "MediaPlayerOptions.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMediaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite)
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite)
    EMediaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite)
    EMediaPlayerOptionBooleanOverride loop;
    
    MEDIAUTILS_API FMediaPlayerOptions();
};

