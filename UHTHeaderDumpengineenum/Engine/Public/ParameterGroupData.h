#pragma once
#include "CoreMinimal.h"
#include "ParameterGroupData.generated.h"

USTRUCT()
struct FParameterGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString GroupName;
    
    UPROPERTY(EditAnywhere)
    int32 GroupSortPriority;
    
    ENGINE_API FParameterGroupData();
};

