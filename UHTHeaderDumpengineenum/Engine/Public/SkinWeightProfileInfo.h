#pragma once
#include "CoreMinimal.h"
#include "PerPlatformBool.h"
#include "PerPlatformInt.h"
#include "SkinWeightProfileInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkinWeightProfileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformBool DefaultProfile;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt DefaultProfileFromLODIndex;
    
    ENGINE_API FSkinWeightProfileInfo();
};

