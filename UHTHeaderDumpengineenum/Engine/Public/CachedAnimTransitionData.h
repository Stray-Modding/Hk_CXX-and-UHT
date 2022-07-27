#pragma once
#include "CoreMinimal.h"
#include "CachedAnimTransitionData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FromStateName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ToStateName;
    
    FCachedAnimTransitionData();
};

