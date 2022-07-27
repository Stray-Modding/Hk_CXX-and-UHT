#pragma once
#include "CoreMinimal.h"
#include "MaterialFunctionInterface.h"
#include "MaterialFunction.generated.h"

UCLASS(MinimalAPI)
class UMaterialFunction : public UMaterialFunctionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FString Description;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    uint8 bExposeToLibrary: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPrefixParameterNames: 1;
    
    UMaterialFunction();
};

