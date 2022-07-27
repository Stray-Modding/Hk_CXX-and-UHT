#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ESplinePointType.h"
#include "SplinePoint.generated.h"

USTRUCT(BlueprintType)
struct FSplinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESplinePointType::Type> Type;
    
    ENGINE_API FSplinePoint();
};

