#pragma once
#include "CoreMinimal.h"
#include "ScalarParameterAtlasInstanceData.generated.h"

class UCurveLinearColor;
class UCurveLinearColorAtlas;

USTRUCT()
struct FScalarParameterAtlasInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsUsedAsAtlasPosition;
    
    UPROPERTY()
    TSoftObjectPtr<UCurveLinearColor> Curve;
    
    UPROPERTY()
    TSoftObjectPtr<UCurveLinearColorAtlas> Atlas;
    
    ENGINE_API FScalarParameterAtlasInstanceData();
};

