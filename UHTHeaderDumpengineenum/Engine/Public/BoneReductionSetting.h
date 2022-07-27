#pragma once
#include "CoreMinimal.h"
#include "BoneReductionSetting.generated.h"

USTRUCT()
struct FBoneReductionSetting {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> BonesToRemove;
    
    ENGINE_API FBoneReductionSetting();
};

