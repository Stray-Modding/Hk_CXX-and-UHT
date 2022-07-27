#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "SpeedAnimationData.h"
#include "JumpAnimationLibrary.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UJumpAnimationLibrary : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSpeedAnimationData> JumpAnimations;
    
    UJumpAnimationLibrary();
    UFUNCTION(BlueprintCallable)
    bool Check();
    
};

