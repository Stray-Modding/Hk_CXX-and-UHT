#pragma once
#include "CoreMinimal.h"
#include "StatColorMapEntry.h"
#include "StatColorMapping.generated.h"

USTRUCT(BlueprintType)
struct FStatColorMapping {
    GENERATED_BODY()
public:
    UPROPERTY(GlobalConfig)
    FString StatName;
    
    UPROPERTY(GlobalConfig)
    TArray<FStatColorMapEntry> ColorMap;
    
    UPROPERTY(GlobalConfig)
    uint8 DisableBlend: 1;
    
    ENGINE_API FStatColorMapping();
};

