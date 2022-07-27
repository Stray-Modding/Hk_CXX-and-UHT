#pragma once
#include "CoreMinimal.h"
#include "SpeedAnimationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "JumpAnimationLibrary.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UJumpAnimationLibrary : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSpeedAnimationData> JumpAnimations;
    
    UJumpAnimationLibrary();
    UFUNCTION(BlueprintCallable)
    bool Check();
    
};

