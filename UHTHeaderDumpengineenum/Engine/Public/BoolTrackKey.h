#pragma once
#include "CoreMinimal.h"
#include "BoolTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FBoolTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY(EditAnywhere)
    uint8 Value: 1;
    
    ENGINE_API FBoolTrackKey();
};

