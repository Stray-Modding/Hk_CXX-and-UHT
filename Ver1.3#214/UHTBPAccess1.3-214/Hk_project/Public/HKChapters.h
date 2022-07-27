#pragma once
#include "CoreMinimal.h"
#include "HKChapter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "HKChapters.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKChapters : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHKChapter> Chapters;
    
    UHKChapters();
};

