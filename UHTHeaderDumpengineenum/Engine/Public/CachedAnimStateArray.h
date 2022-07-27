#pragma once
#include "CoreMinimal.h"
#include "CachedAnimStateData.h"
#include "CachedAnimStateArray.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimStateArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCachedAnimStateData> States;
    
    FCachedAnimStateArray();
};

