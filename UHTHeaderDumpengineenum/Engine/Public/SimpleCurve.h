#pragma once
#include "CoreMinimal.h"
#include "RealCurve.h"
#include "ERichCurveInterpMode.h"
#include "SimpleCurveKey.h"
#include "SimpleCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSimpleCurve : public FRealCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSimpleCurveKey> Keys;
    
    FSimpleCurve();
};

