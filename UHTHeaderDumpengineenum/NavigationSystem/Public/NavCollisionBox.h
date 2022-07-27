#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavCollisionBox.generated.h"

USTRUCT(BlueprintType)
struct FNavCollisionBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
    UPROPERTY(EditAnywhere)
    FVector Extent;
    
    NAVIGATIONSYSTEM_API FNavCollisionBox();
};

