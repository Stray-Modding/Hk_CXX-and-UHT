#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapARPinType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapARPinQuery.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPARPIN_API FMagicLeapARPinQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<EMagicLeapARPinType> Types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSorted;
    
    FMagicLeapARPinQuery();
};

