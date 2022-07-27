#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PrefabAsset.generated.h"

UCLASS(BlueprintType)
class PREFABASSET_API UPrefabAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FString, FSoftObjectPath> AssetReferences;
    
    UPROPERTY(VisibleAnywhere)
    FSoftObjectPath GeneratedBlueprintAssetReference;
    
private:
    UPROPERTY(VisibleAnywhere)
    FGuid PrefabId;
    
    UPROPERTY(EditAnywhere)
    FString PrefabContent;
    
    UPROPERTY(VisibleAnywhere)
    FString PrefabHash;
    
    UPROPERTY()
    int32 NumActors;
    
    UPROPERTY()
    FVector PrefabPivot;
    
public:
    UPrefabAsset();
};

