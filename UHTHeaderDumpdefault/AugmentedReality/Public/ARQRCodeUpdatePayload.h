#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARSessionPayload.h"
#include "ARQRCodeUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARQRCodeUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Extents;
    
    UPROPERTY(BlueprintReadWrite)
    FString QRCode;
    
    AUGMENTEDREALITY_API FARQRCodeUpdatePayload();
};

