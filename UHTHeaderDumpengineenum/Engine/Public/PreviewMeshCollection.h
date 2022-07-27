#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "PreviewMeshCollectionEntry.h"
#include "PreviewCollectionInterface.h"
#include "PreviewMeshCollection.generated.h"

class USkeleton;

UCLASS(MinimalAPI)
class UPreviewMeshCollection : public UDataAsset, public IPreviewCollectionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    USkeleton* Skeleton;
    
    UPROPERTY(EditAnywhere)
    TArray<FPreviewMeshCollectionEntry> SkeletalMeshes;
    
    UPreviewMeshCollection();
    
    // Fix for true pure virtual functions not being implemented
};

