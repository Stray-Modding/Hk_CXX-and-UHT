#pragma once
#include "CoreMinimal.h"
#include "LevelNameAndTime.generated.h"

USTRUCT()
struct FLevelNameAndTime {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LevelName;
    
    UPROPERTY()
    uint32 LevelChangeTimeInMS;
    
    ENGINE_API FLevelNameAndTime();
};

