#pragma once
#include "CoreMinimal.h"
#include "CachedAnimRelevancyData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimRelevancyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateName;
    
    FCachedAnimRelevancyData();
};

