#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Activity.h"
#include "ActivityData.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UActivityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActivity> Activities;
    
    UActivityData();
};

