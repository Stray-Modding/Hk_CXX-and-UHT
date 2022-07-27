#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
#include "InterpTrackFloatBase.generated.h"

UCLASS(Abstract, CollapseCategories)
class ENGINE_API UInterpTrackFloatBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInterpCurveFloat FloatTrack;
    
    UPROPERTY(EditAnywhere)
    float CurveTension;
    
    UInterpTrackFloatBase();
};

