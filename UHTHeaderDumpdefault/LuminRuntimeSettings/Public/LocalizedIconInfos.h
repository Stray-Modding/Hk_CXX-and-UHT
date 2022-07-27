#pragma once
#include "CoreMinimal.h"
#include "LocalizedIconInfo.h"
#include "LocalizedIconInfos.generated.h"

USTRUCT(BlueprintType)
struct FLocalizedIconInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FLocalizedIconInfo> IconData;
    
    LUMINRUNTIMESETTINGS_API FLocalizedIconInfos();
};

