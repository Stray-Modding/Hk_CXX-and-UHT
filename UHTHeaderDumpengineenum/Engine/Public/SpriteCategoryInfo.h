#pragma once
#include "CoreMinimal.h"
#include "SpriteCategoryInfo.generated.h"

USTRUCT()
struct FSpriteCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Category;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    FText Description;
    
    ENGINE_API FSpriteCategoryInfo();
};

