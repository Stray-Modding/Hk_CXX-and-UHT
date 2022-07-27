#pragma once
#include "CoreMinimal.h"
#include "InputBlendPose.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BoneMaskFilter.generated.h"

UCLASS(MinimalAPI)
class UBoneMaskFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInputBlendPose> BlendPoses;
    
    UBoneMaskFilter();
};

