#pragma once
#include "CoreMinimal.h"
#include "RealCurve.h"
#include "RichCurveKey.h"
#include "RichCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRichCurve : public FRealCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FRichCurveKey> Keys;
    
    FRichCurve();
};

