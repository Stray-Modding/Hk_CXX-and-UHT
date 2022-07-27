#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAspectRatioAxisConstraint -FallbackName=EAspectRatioAxisConstraint
#include "LevelSequenceCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideAspectRatioAxisConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    
    LEVELSEQUENCE_API FLevelSequenceCameraSettings();
};

