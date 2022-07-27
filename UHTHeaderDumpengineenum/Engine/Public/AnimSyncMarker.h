#pragma once
#include "CoreMinimal.h"
#include "AnimSyncMarker.generated.h"

USTRUCT(BlueprintType)
struct FAnimSyncMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName MarkerName;
    
    UPROPERTY(BlueprintReadOnly)
    float Time;
    
    ENGINE_API FAnimSyncMarker();
};

