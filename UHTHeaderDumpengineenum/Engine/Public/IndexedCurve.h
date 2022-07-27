#pragma once
#include "CoreMinimal.h"
#include "KeyHandleMap.h"
#include "IndexedCurve.generated.h"

USTRUCT()
struct ENGINE_API FIndexedCurve {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FKeyHandleMap KeyHandlesToIndices;
    
public:
    FIndexedCurve();
};

