#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARObjectClassification.h"
#include "ARMeshUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARMeshUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadOnly)
    EARObjectClassification ObjectClassification;
    
    AUGMENTEDREALITY_API FARMeshUpdatePayload();
};

