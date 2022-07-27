#pragma once
#include "CoreMinimal.h"
#include "EViewModeIndex.h"
#include "DebugCameraControllerSettingsViewModeIndex.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FDebugCameraControllerSettingsViewModeIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EViewModeIndex> ViewModeIndex;
    
    FDebugCameraControllerSettingsViewModeIndex();
};

