#pragma once
#include "CoreMinimal.h"
#include "VirtualBone.generated.h"

USTRUCT(BlueprintType)
struct FVirtualBone {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SourceBoneName;
    
    UPROPERTY()
    FName TargetBoneName;
    
    UPROPERTY()
    FName VirtualBoneName;
    
    ENGINE_API FVirtualBone();
};

