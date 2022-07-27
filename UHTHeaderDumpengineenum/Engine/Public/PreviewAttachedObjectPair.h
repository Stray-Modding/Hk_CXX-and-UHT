#pragma once
#include "CoreMinimal.h"
#include "PreviewAttachedObjectPair.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPreviewAttachedObjectPair {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSoftObjectPtr<UObject> AttachedObject;
    
    UPROPERTY()
    UObject* Object;
    
public:
    UPROPERTY()
    FName AttachedTo;
    
    ENGINE_API FPreviewAttachedObjectPair();
};

