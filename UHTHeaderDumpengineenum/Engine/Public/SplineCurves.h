#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveQuat -FallbackName=InterpCurveQuat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
#include "SplineCurves.generated.h"

class USplineMetadata;

USTRUCT(BlueprintType)
struct ENGINE_API FSplineCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInterpCurveVector Position;
    
    UPROPERTY()
    FInterpCurveQuat Rotation;
    
    UPROPERTY()
    FInterpCurveVector Scale;
    
    UPROPERTY()
    FInterpCurveFloat ReparamTable;
    
    UPROPERTY()
    USplineMetadata* MetaData;
    
    UPROPERTY(Transient)
    uint32 Version;
    
    FSplineCurves();
};

