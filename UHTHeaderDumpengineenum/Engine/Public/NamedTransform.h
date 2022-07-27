#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "NamedTransform.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNamedTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    FNamedTransform();
};

