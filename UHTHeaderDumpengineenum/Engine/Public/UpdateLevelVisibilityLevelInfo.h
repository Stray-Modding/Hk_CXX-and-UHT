#pragma once
#include "CoreMinimal.h"
#include "UpdateLevelVisibilityLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FUpdateLevelVisibilityLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PackageName;
    
    UPROPERTY()
    FName Filename;
    
    UPROPERTY()
    uint8 bIsVisible: 1;
    
    FUpdateLevelVisibilityLevelInfo();
};

