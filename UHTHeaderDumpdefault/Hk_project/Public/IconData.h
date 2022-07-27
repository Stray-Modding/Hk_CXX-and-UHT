#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "IconData.generated.h"

class UTexture2D;

UCLASS()
class HK_PROJECT_API UIconData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture;
    
    UIconData();
};

