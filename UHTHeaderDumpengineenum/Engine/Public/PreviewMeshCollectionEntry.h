#pragma once
#include "CoreMinimal.h"
#include "PreviewMeshCollectionEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPreviewMeshCollectionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    ENGINE_API FPreviewMeshCollectionEntry();
};

