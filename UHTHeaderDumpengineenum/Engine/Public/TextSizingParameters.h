#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "TextSizingParameters.generated.h"

class UFont;

USTRUCT()
struct FTextSizingParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    float DrawX;
    
    UPROPERTY()
    float DrawY;
    
    UPROPERTY()
    float DrawXL;
    
    UPROPERTY()
    float DrawYL;
    
    UPROPERTY()
    FVector2D Scaling;
    
    UPROPERTY()
    UFont* DrawFont;
    
    UPROPERTY()
    FVector2D SpacingAdjust;
    
    ENGINE_API FTextSizingParameters();
};

