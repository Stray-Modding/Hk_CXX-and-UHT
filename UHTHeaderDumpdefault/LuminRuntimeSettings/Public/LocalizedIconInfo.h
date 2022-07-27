#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "LocalizedIconInfo.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString LanguageCode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FDirectoryPath IconModelPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FDirectoryPath IconPortalPath;
    
    LUMINRUNTIMESETTINGS_API FLocalizedIconInfo();
};

