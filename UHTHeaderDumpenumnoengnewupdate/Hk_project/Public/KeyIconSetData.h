#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EGameControllerType.h"
#include "KeyIconSetData.generated.h"

class UKeyIconData;
class UTexture2D;

UCLASS(BlueprintType)
class HK_PROJECT_API UKeyIconSetData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UKeyIconData*> Keys;
    
    UKeyIconSetData();
    UFUNCTION(BlueprintPure)
    UTexture2D* FindIconForKey(const FKey& _key, EGameControllerType _controller) const;
    
};

