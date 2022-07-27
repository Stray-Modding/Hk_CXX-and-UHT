#pragma once
#include "CoreMinimal.h"
#include "ImportFactorySettingValues.generated.h"

USTRUCT(BlueprintType)
struct FImportFactorySettingValues {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString SettingName;
    
    UPROPERTY(Config, EditAnywhere)
    FString Value;
    
    ENGINE_API FImportFactorySettingValues();
};

