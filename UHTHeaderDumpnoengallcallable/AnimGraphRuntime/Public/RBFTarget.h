#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "RBFEntry.h"
#include "ERBFFunctionType.h"
#include "ERBFDistanceMethod.h"
#include "RBFTarget.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FRBFTarget : public FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyCustomCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFFunctionType FunctionType;
    
    FRBFTarget();
};

