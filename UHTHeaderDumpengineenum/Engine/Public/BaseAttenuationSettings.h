#pragma once
#include "CoreMinimal.h"
#include "ENaturalSoundFalloffMode.h"
#include "EAttenuationShape.h"
#include "EAttenuationDistanceModel.h"
#include "RuntimeFloatCurve.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BaseAttenuationSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBaseAttenuationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttenuationDistanceModel DistanceAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAttenuationShape::Type> AttenuationShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float dBAttenuationAtMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENaturalSoundFalloffMode FalloffMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AttenuationShapeExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomAttenuationCurve;
    
    FBaseAttenuationSettings();
};

