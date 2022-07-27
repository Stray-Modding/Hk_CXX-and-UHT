#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CurveBase.h"
#include "RichCurve.h"
#include "CurveLinearColor.generated.h"

UCLASS(CollapseCategories)
class ENGINE_API UCurveLinearColor : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve FloatCurves[4];
    
    UPROPERTY(EditAnywhere)
    float AdjustHue;
    
    UPROPERTY(EditAnywhere)
    float AdjustSaturation;
    
    UPROPERTY(EditAnywhere)
    float AdjustBrightness;
    
    UPROPERTY(EditAnywhere)
    float AdjustBrightnessCurve;
    
    UPROPERTY(EditAnywhere)
    float AdjustVibrance;
    
    UPROPERTY(EditAnywhere)
    float AdjustMinAlpha;
    
    UPROPERTY(EditAnywhere)
    float AdjustMaxAlpha;
    
    UCurveLinearColor();
    UFUNCTION(BlueprintPure)
    FLinearColor GetUnadjustedLinearColorValue(float InTime) const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetLinearColorValue(float InTime) const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetClampedLinearColorValue(float InTime) const;
    
};

