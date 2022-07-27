#pragma once
#include "CoreMinimal.h"
#include "AnimSlotGroup.generated.h"

USTRUCT(BlueprintType)
struct FAnimSlotGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName GroupName;
    
    UPROPERTY()
    TArray<FName> SlotNames;
    
    ENGINE_API FAnimSlotGroup();
};

