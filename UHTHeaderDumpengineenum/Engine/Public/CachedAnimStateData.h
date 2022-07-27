#pragma once
#include "CoreMinimal.h"
#include "CachedAnimStateData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateName;
    
    FCachedAnimStateData();
};

