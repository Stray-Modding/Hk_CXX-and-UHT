#pragma once
#include "CoreMinimal.h"
#include "PrimaryDataAsset.h"
#include "CollectionReference.h"
#include "PrimaryAssetRules.h"
#include "PrimaryAssetLabel.generated.h"

class UObject;

UCLASS()
class ENGINE_API UPrimaryAssetLabel : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrimaryAssetRules Rules;
    
    UPROPERTY(EditAnywhere)
    uint8 bLabelAssetsInMyDirectory: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsRuntimeLabel: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> ExplicitAssets;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;
    
    UPROPERTY(EditAnywhere)
    FCollectionReference AssetCollection;
    
    UPrimaryAssetLabel();
};

