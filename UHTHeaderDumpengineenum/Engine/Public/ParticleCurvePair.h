#pragma once
#include "CoreMinimal.h"
#include "ParticleCurvePair.generated.h"

class UObject;

USTRUCT()
struct FParticleCurvePair {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CurveName;
    
    UPROPERTY()
    UObject* CurveObject;
    
    ENGINE_API FParticleCurvePair();
};

