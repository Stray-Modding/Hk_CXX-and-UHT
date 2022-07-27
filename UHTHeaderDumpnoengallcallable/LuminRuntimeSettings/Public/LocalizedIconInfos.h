#pragma once
#include "CoreMinimal.h"
#include "LocalizedIconInfo.h"
#include "LocalizedIconInfos.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedIconInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FLocalizedIconInfo> IconData;
    
    LUMINRUNTIMESETTINGS_API FLocalizedIconInfos();
};

