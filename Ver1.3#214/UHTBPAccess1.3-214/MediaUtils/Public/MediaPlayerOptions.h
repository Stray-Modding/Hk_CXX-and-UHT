#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerTrackOptions.h"
#include "EMediaPlayerOptionBooleanOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MediaPlayerOptions.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaPlayerOptionBooleanOverride loop;
    
    MEDIAUTILS_API FMediaPlayerOptions();
};

