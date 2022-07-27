#pragma once
#include "CoreMinimal.h"
#include "AnimTickRecord.generated.h"

class UAnimationAsset;

USTRUCT()
struct FAnimTickRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimationAsset* SourceAsset;
    
    ENGINE_API FAnimTickRecord();
};

