#pragma once
#include "CoreMinimal.h"
#include "LocalizedAppName.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedAppName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString LanguageCode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString AppName;
    
    LUMINRUNTIMESETTINGS_API FLocalizedAppName();
};

