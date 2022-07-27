#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EGameControllerType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyIconSetData.generated.h"

class UKeyIconData;
class UTexture2D;

UCLASS(Blueprintable)
class HK_PROJECT_API UKeyIconSetData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKeyIconData*> Keys;
    
    UKeyIconSetData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* FindIconForKey(const FKey& _key, EGameControllerType _controller) const;
    
};

