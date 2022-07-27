#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FInputAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    ENGINE_API FInputAxisKeyMapping();
};

