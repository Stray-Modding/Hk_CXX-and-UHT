#pragma once
#include "CoreMinimal.h"
#include "RBFEntry.h"
#include "ERBFFunctionType.h"
#include "ERBFDistanceMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "RBFTarget.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FRBFTarget : public FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ScaleFactor;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve CustomCurve;
    
    UPROPERTY(EditAnywhere)
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    ERBFFunctionType FunctionType;
    
    FRBFTarget();
};

