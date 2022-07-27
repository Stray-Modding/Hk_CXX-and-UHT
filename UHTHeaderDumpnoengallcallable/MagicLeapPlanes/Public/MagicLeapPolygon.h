#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapPolygon.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPPLANES_API FMagicLeapPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    FMagicLeapPolygon();
};

