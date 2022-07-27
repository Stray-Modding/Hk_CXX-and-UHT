#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=ECameraFocusMethod -FallbackName=ECameraFocusMethod
#include "DatasmithCameraFocusSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraFocusSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECameraFocusMethod FocusMethod;
    
    UPROPERTY()
    float ManualFocusDistance;
    
    DATASMITHCONTENT_API FDatasmithCameraFocusSettingsTemplate();
};

