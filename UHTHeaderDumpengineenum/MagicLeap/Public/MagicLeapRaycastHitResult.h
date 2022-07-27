#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EMagicLeapRaycastResultState.h"
#include "MagicLeapRaycastHitResult.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapRaycastHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EMagicLeapRaycastResultState HitState;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitPoint;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Normal;
    
    UPROPERTY(BlueprintReadOnly)
    float Confidence;
    
    UPROPERTY(BlueprintReadOnly)
    int32 UserData;
    
    FMagicLeapRaycastHitResult();
};

