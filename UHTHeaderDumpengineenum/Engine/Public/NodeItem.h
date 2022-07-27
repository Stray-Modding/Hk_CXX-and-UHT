#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "NodeItem.generated.h"

USTRUCT(BlueprintType)
struct FNodeItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParentName;
    
    UPROPERTY()
    FTransform Transform;
    
    ENGINE_API FNodeItem();
};

