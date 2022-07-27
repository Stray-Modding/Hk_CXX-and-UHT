#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveLinearColor -FallbackName=InterpCurveLinearColor
#include "InterpTrackLinearColorBase.generated.h"

UCLASS(Abstract, CollapseCategories, MinimalAPI)
class UInterpTrackLinearColorBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInterpCurveLinearColor LinearColorTrack;
    
    UPROPERTY(EditAnywhere)
    float CurveTension;
    
    UInterpTrackLinearColorBase();
};

