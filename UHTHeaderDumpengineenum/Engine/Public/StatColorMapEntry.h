#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "StatColorMapEntry.generated.h"

USTRUCT(BlueprintType)
struct FStatColorMapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(GlobalConfig)
    float In;
    
    UPROPERTY(GlobalConfig)
    FColor Out;
    
    ENGINE_API FStatColorMapEntry();
};

