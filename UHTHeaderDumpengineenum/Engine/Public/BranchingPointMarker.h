#pragma once
#include "CoreMinimal.h"
#include "EAnimNotifyEventType.h"
#include "BranchingPointMarker.generated.h"

USTRUCT(BlueprintType)
struct FBranchingPointMarker {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NotifyIndex;
    
    UPROPERTY()
    float TriggerTime;
    
    UPROPERTY()
    TEnumAsByte<EAnimNotifyEventType::Type> NotifyEventType;
    
    ENGINE_API FBranchingPointMarker();
};

