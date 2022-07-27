#pragma once
#include "CoreMinimal.h"
#include "PreviewAttachedObjectPair.h"
#include "PreviewAssetAttachContainer.generated.h"

USTRUCT()
struct FPreviewAssetAttachContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FPreviewAttachedObjectPair> AttachedObjects;
    
public:
    ENGINE_API FPreviewAssetAttachContainer();
};

