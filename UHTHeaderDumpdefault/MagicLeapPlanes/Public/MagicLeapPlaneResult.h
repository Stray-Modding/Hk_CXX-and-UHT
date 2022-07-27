#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EMagicLeapPlaneQueryFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapPlaneResult.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPPLANES_API FMagicLeapPlaneResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlanePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator PlaneOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ContentOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PlaneDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMagicLeapPlaneQueryFlags> PlaneFlags;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid InnerID;
    
    FMagicLeapPlaneResult();
};

