#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "InterpTrackVectorBase.generated.h"

UCLASS(Abstract, CollapseCategories)
class ENGINE_API UInterpTrackVectorBase : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInterpCurveVector VectorTrack;
    
    UPROPERTY(EditAnywhere)
    float CurveTension;
    
    UInterpTrackVectorBase();
};

