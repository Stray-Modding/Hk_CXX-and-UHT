#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RotationTrack.generated.h"

USTRUCT()
struct ENGINE_API FRotationTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FQuat> RotKeys;
    
    UPROPERTY()
    TArray<float> Times;
    
    FRotationTrack();
};

