#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "AnimNotifyTrack.generated.h"

USTRUCT()
struct FAnimNotifyTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TrackName;
    
    UPROPERTY()
    FLinearColor TrackColor;
    
    ENGINE_API FAnimNotifyTrack();
};

