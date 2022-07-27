#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
#include "Interface_PreviewMeshProvider.h"
#include "AnimationAsset.generated.h"

class UAnimMetaData;
class USkeleton;
class UAssetUserData;

UCLASS(Abstract, MinimalAPI)
class UAnimationAsset : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    USkeleton* Skeleton;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UAnimMetaData*> MetaData;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UAnimationAsset();
    
    // Fix for true pure virtual functions not being implemented
};

