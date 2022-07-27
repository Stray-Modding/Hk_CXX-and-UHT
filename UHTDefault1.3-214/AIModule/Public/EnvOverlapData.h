#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EEnvOverlapShape.h"
#include "EnvOverlapData.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvOverlapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ExtentX;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtentY;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtentZ;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector ShapeOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvOverlapShape::Type> OverlapShape;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bOnlyBlockingHits: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bOverlapComplex: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bSkipOverlapQuerier: 1;
    
    FEnvOverlapData();
};

