#pragma once
#include "CoreMinimal.h"
#include "IndexedCurve.h"
#include "StringCurveKey.h"
#include "StringCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FStringCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DefaultValue;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FStringCurveKey> Keys;
    
    FStringCurve();
};

