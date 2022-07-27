#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EGameControllerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyIconSetData.generated.h"

class UTexture2D;
class UKeyIconData;

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

