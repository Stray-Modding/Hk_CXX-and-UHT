#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "HKChapter.h"
#include "HKChapters.generated.h"

UCLASS(BlueprintType)
class HK_PROJECT_API UHKChapters : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHKChapter> Chapters;
    
    UHKChapters();
};

