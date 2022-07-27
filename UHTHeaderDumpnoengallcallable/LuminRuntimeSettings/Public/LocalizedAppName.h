#pragma once
#include "CoreMinimal.h"
#include "LocalizedAppName.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedAppName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString LanguageCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString AppName;
    
    LUMINRUNTIMESETTINGS_API FLocalizedAppName();
};

