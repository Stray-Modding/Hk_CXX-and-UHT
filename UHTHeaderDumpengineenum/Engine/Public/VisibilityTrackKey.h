#pragma once
#include "CoreMinimal.h"
#include "EVisibilityTrackCondition.h"
#include "EVisibilityTrackAction.h"
#include "VisibilityTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FVisibilityTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVisibilityTrackAction> Action;
    
    UPROPERTY()
    TEnumAsByte<EVisibilityTrackCondition> ActiveCondition;
    
    ENGINE_API FVisibilityTrackKey();
};

