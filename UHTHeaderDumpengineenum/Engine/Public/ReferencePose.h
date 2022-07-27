#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ReferencePose.generated.h"

USTRUCT()
struct FReferencePose {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PoseName;
    
    UPROPERTY()
    TArray<FTransform> ReferencePose;
    
    ENGINE_API FReferencePose();
};

