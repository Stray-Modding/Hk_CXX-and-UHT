#pragma once
#include "CoreMinimal.h"
#include "ETrackToggleAction.h"
#include "ToggleTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FToggleTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETrackToggleAction> ToggleAction;
    
    ENGINE_API FToggleTrackKey();
};

