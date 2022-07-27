#pragma once
#include "CoreMinimal.h"
#include "SoftObjectPath.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FSoftObjectPath {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName AssetPathName;
    
    UPROPERTY()
    FString SubPathString;
    
    COREUOBJECT_API FSoftObjectPath();
};

