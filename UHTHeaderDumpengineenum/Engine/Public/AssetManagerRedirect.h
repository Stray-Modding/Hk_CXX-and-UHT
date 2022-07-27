#pragma once
#include "CoreMinimal.h"
#include "AssetManagerRedirect.generated.h"

USTRUCT(BlueprintType)
struct FAssetManagerRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Old;
    
    UPROPERTY(EditAnywhere)
    FString New;
    
    ENGINE_API FAssetManagerRedirect();
};

