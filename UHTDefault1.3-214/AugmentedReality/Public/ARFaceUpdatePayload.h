#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARFaceUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARFaceUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite)
    FVector LeftEyePosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector RightEyePosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector LookAtTarget;
    
    AUGMENTEDREALITY_API FARFaceUpdatePayload();
};

