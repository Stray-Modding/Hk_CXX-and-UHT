#pragma once
#include "CoreMinimal.h"
#include "EFullyLoadPackageType.h"
#include "FullyLoadedPackagesInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFullyLoadedPackagesInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EFullyLoadPackageType> FullyLoadType;
    
    UPROPERTY()
    FString Tag;
    
    UPROPERTY()
    TArray<FName> PackagesToLoad;
    
    UPROPERTY()
    TArray<UObject*> LoadedObjects;
    
    ENGINE_API FFullyLoadedPackagesInfo();
};

