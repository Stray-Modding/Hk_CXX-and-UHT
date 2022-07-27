#pragma once
#include "CoreMinimal.h"
#include "ColorGradePerRangeSettings.h"
#include "ColorGradingSettings.generated.h"

USTRUCT(BlueprintType)
struct FColorGradingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradePerRangeSettings Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradePerRangeSettings Shadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradePerRangeSettings Midtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColorGradePerRangeSettings Highlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ShadowsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float HighlightsMin;
    
    ENGINE_API FColorGradingSettings();
};

