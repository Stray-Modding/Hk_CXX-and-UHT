#pragma once
#include "CoreMinimal.h"
#include "IndexedCurve.h"
#include "IntegralKey.h"
#include "IntegralCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FIntegralCurve : public FIndexedCurve {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FIntegralKey> Keys;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultValue;
    
    UPROPERTY()
    bool bUseDefaultValueBeforeFirstKey;
    
public:
    FIntegralCurve();
};

